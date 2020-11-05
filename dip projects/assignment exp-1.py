# Write MATLAB/SCILAB/OCTAVE/OpenCV programs to (i) read, display, and  write a digital image (ii) resize a digital.
# image (iii) convert color image into gray  scale (iv) write the image data (2 D) in an image file.
import cv2 as c
def main():
    img=c.imread("/home/abhi/abhi.jpg")
    c.imshow('my', img)
    resizeimg = c.resize(img,(200,400))
    img1 = c.cvtColor(img, c.COLOR_BGR2GRAY)
    resizeimg1 = c.resize(img1, (200, 400))
    c.imshow('my', resizeimg)
    c.imshow('my', resizeimg1)
    c.imwrite('a.jpg',img1)
    c.waitKey(0)
    c.destroyAllWindows()
if __name__=="__main__":
    main()