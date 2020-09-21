#include <opencv2/highgui.hpp>

using namespace cv;

int main () {
    // Create image variable
    Mat image;

    // Read image
    image = imread("./test.jpg", IMREAD_COLOR);

    // Show image
    imshow("TEST IMAGE", image);

    // Wait to press a key
    waitKey(0);
    
    return 0;
}