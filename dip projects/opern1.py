import cv2
import numpy as np

# path to input images are specified and
# images are loaded with imread command
imgpath1 = "/home/abhi/4.2.01.tiff"
imgpath2 = "/home/abhi/4.2.04.tiff"
image1 = cv2.imread(imgpath1, 1)
image2 = cv2.imread(imgpath2, 1)

# cv2.subtract is applied over the
# image inputs with applied parameters
sub = cv2.subtract(image1, image2)
add= cv2.add(image1, image2)
multiply= cv2.multiply(image1, image2)
divide=cv2.divide(image1, image2)
# the window showing output image
# with the subtracted image
cv2.imshow('Subtracted Image', sub)
cv2.imshow('added Image', add)
cv2.imshow('multiply Image', multiply)
cv2.imshow('divide Image', divide)

# De-allocate any associated memory usage
if cv2.waitKey(0) & 0xff == 27:
    cv2.destroyAllWindows()