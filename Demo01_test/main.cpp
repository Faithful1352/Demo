#include<opencv2/opencv.hpp>

using namespace cv;

int main() {


	/*ÏÔÊ¾Í¼Ïñ
	Mat img = imread("1.jpg");
	imshow("picture", img);
	waitKey(6000);*/

	/*Í¼Ïñ¸¯Ê´
	Mat srcImg = imread("2.jpg");
	imshow("srcImg", srcImg);
	Mat element = getStructuringElement(MORPH_RECT, Size(15, 15));
	Mat dstImg;
	erode(srcImg, dstImg, element);
	imshow("dstImg", dstImg);
	waitKey(0);*/

	/*Í¼ÏñÄ£ºý
	Mat srcImg = imread("3.jpg");
	imshow("srcImg", srcImg);
	Mat dstImage;
	blur(srcImg, dstImage, Size(7, 7));
	imshow("¾ùÖµÂË²¨", dstImage);
	waitKey(0);*/

	/*canny±ßÔµ¼ì²â
	Mat srcImg = imread("4.jpg");
	imshow("srcImg", srcImg);
	Mat dstImg, edge, grayImg;
	dstImg.create(srcImg.size(), srcImg.type());
	cvtColor(srcImg, grayImg, COLOR_BGR2GRAY);
	blur(grayImg, edge, Size(3, 3));
	Canny(edge, edge, 3, 9, 3);
	imshow("Canny", edge);
	waitKey(0);*/

	VideoCapture capture("1.avi");
	while (1) {
		Mat frame;
		capture >> frame;
		imshow("video", frame);
		waitKey(30);
	}

	return 0;
}