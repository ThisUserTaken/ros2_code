import os
import cv2


camera_names = ["front", "back", "left", "right"]

# --------------------------------------------------------------------
# (shift_width, shift_height): how far away the birdview looks outside
# of the calibration pattern in horizontal and vertical directions
shift_w = 200
shift_h = 200

# size of the gap between the calibration pattern and the car
# in horizontal and vertical directions
inn_shift_w = 200
inn_shift_h = 200

# total width/height of the stitched image
total_w = 600 + 2 * shift_w #1000
total_h = 600 + 2 * shift_h #1000

# four corners of the rectangular region occupied by the car
# top-left (x_left, y_top), bottom-right (x_right, y_bottom)
xl = shift_w + inn_shift_w #340
xr = total_w - xl # 660
yt = shift_h + inn_shift_h # 340
yb = total_h - yt # 660
# --------------------------------------------------------------------

project_shapes = {
    "front": (total_w, yt), #1000, 340
    "back":  (total_w, yt), #1000, 340
    "left":  (total_h, xl), #1000, 340
    "right": (total_h, xl)  #1000, 340
}

# pixel locations of the four points to be chosen.
# you must click these pixels in the same order when running
# the get_projection_map.py script
a = 120
b = 480
c = 160
project_keypoints = {
    "front": [(shift_w + a, shift_h),
              (shift_w + b, shift_h),
              (shift_w + a, shift_h + c),
              (shift_w + b, shift_h + c)],

    "back":  [(shift_w + a, shift_h),
              (shift_w + b, shift_h),
              (shift_w + a, shift_h + c),
              (shift_w + b, shift_h + c)],

    "left":  [(shift_w + a, shift_h),
              (shift_w + b, shift_h),
              (shift_w + a, shift_h + c),
              (shift_w + b, shift_h + c)],

    "right": [(shift_w + a, shift_h),
              (shift_w + b, shift_h),
              (shift_w + a, shift_h + c),
              (shift_w + b, shift_h + c)]
}

car_image = cv2.imread(os.path.join(os.getcwd(), "images", "car.png"))
car_image = cv2.resize(car_image, (xr - xl, yb - yt))
