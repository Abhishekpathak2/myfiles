import cv2
import numpy as np
imgpath1 = "/home/abhi/4.2.01.tiff"
imgpath2 = "/home/abhi/4.2.04.tiff"
img1 = cv2.imread(imgpath1, 1)
img2 = cv2.imread(imgpath2, 1)
output = cv2.resize(img1, None, fx=0.5, fy=1.5, interpolation=cv2.INTER_AREA)
res = cv2.resize(img2,None,fx=2, fy=2, interpolation = cv2.INTER_CUBIC)
img3 = cv2.imread(imgpath1, 0)
rows,cols = img3.shape
M = np.float32([[1,0,100],[0,1,50]])
dst = cv2.warpAffine(img3,M,(cols,rows))
cv2.imshow('img',dst)
C = cv2.getRotationMatrix2D(((cols-1)/2.0,(rows-1)/2.0),90,1)
dst1 = cv2.warpAffine(img3,C,(cols,rows))
cv2.imshow('img2',dst1)

angle = 0;
shear = 1;
translation = 5;

rows,cols = img3.shape
#Application of the affine transform.
M_rot = cv2.getRotationMatrix2D((cols/2,rows/2),angle,1);
translat_center_x = -(shear*cols)/2;
translat_center_y = -(shear*rows)/2;

M2= M_rot + np.float64([[0,shear,translation + translat_center_x], [shear,0,translation + translat_center_y]]);
final_image  = cv2.warpAffine(img3 , M2, (cols,rows));
cv2.imshow('final', final_image)
cv2.imshow('Output', output)
cv2.imshow('res', res)
cv2.waitKey(0)
cv2.destroyAllWindows()
