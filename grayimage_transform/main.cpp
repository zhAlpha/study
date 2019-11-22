#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
int main(int argc , char ** argv , char ** name) {
    cv::Mat image;
    image = cv::imread (argv[1]);
    cv::namedWindow("window1",CV_WINDOW_AUTOSIZE);
    imshow("window1",image);   //显示原图

    cv::Mat grayImg;
    cv::cvtColor(image,grayImg,CV_BGR2GRAY);
    cv::namedWindow("window2", CV_WINDOW_AUTOSIZE);
    cv::imshow("window2",grayImg);//显示灰度图
    cv::waitKey(0);

    int grayValue;
    ofstream output(argv[2]);
    //output << "此灰度图片一共" << grayImg.rows << "行，" <<grayImg.cols<<"列" << endl;
    for (int r = 0; r < grayImg.rows; r++) {
        //output << "第" << r + 1 << "行的灰度值为：" << endl;
        for (int c = 0; c < grayImg.cols; c++) {
            grayValue = (int) grayImg.at<uchar>(r, c);
            output << grayValue << "\t";
        }
        output << endl;
    }

    cout<< "Gray value of the image exported successfully " <<endl;
    return 0;
}