#include <opencv2/opencv.hpp>
#include <iostream>

int main() {


	cv::VideoCapture videoCapture(0);

	if (!videoCapture.isOpened()) {
		std::cout << "Error while opening camera";
		return 1;
	}

	while (videoCapture.isOpened()) {

		cv::Mat frame;
		videoCapture.read(frame);
		cv::imshow("Camera", frame);

		if (cv::waitKey(30) == 'e') {
			std::cout << "Closing camera..";
			break;
		}

	}
	videoCapture.release();
	cv::destroyAllWindows();

	return 0;
}