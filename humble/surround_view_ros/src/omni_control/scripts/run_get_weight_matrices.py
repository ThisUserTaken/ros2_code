import os
import numpy as np
import cv2
from PIL import Image
from surround_view_for_projection import FisheyeCameraModel, display_image, BirdView
import surround_view_for_projection.param_settings as settings


def main():
    names = settings.camera_names # camera_names = ["front", "back", "left", "right"]
    images = [os.path.join(os.getcwd(), "images", name + ".png") for name in names]
    print(f"images : {images}")
    yamls = [os.path.join(os.getcwd(), "yaml", name + ".yaml") for name in names]
    print(f"yamls : {yamls}")
    camera_models = [FisheyeCameraModel(camera_file, camera_name) for camera_file, camera_name in zip (yamls, names)]
    print(f"camera_models : {camera_models}")
    projected = []
    for image_file, camera in zip(images, camera_models):
        img = cv2.imread(image_file)
        print(f"{img.shape}, {img.dtype}")
        img = camera.undistort(img)
        img = camera.project(img)
        img = camera.flip(img)
        projected.append(img)

    birdview = BirdView()
    Gmat, Mmat = birdview.get_weights_and_masks(projected)
    birdview.update_frames(projected)
    birdview.make_luminance_balance().stitch_all_parts()
    birdview.make_white_balance()
    birdview.copy_car_image()
    ret = display_image("BirdView Result", birdview.image)
    if ret > 0:
        Image.fromarray((Gmat * 255).astype(np.uint8)).save("weights.png")
        Image.fromarray(Mmat.astype(np.uint8)).save("masks.png")


if __name__ == "__main__":
    main()
