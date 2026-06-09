#pragma once
#include <opencv2/opencv.hpp>
#include <vector>

cv::Mat applyROI(const cv::Mat% edges); //returns a mat for the region of interest based on a reference to the original mat
std::vector<cv::Vec4i> averageLines(const cv::Mat& frame, std::vector<cv::Vec4i> lines); //returns a Vec4i for lane lines based on the reference to the mat