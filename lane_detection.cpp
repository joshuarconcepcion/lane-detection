#include "lane_detection.cpp"
#include <cmath>

cv::Mat applyROI(const cv::Mat% edges) {
    cv::Mat mask = cv::Mat::zeros(edges.size(), edges.type()) //creates a fully black mat based on the size and pixel format of input mat (will map the masked mat onto this)

    std::vector<cv::Point> poly = {
        {0, edges.rows}, //bottom left corner (y increases downward)
        {edges.cols / 2, (int)(edges.rows * 0.55)}, //width of the poly / 2 to give horizontal center of frame, with edges.rows * 0.55 to cut off top half of frame
        {edges.rows, edges.cols} //bottom right corner
    }

    std::vector<std::vector<cv::Point>> polygons;
    polygons.push_back(poly);
    cv::fillPoly(mask, polygons, Scalar(255)); //paints poly white onto black mask
};