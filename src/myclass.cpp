#include "myclass.h"

#include <opencv2/opencv.hpp>

Myclass::Myclass() : variable(1) {}
Myclass::Myclass(int var) : variable(var) {}
int Myclass::get_variable(){

    float data[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cv::Mat your_matrix = cv::Mat(1, 10, CV_32F, data);

    return (int) your_matrix.at<float>(0,5);
}
/*float Myclass::mean(uint64_t w, uint64_t h, float *arr){

    //std::vector<float> myarr;
    uint64_t nelems = w * h;

    //myarr.reserve(nelems);

    float total = 0;
    float ctr = 0;

    for (float* curr = arr; curr != &arr[nelems]; ++curr ) {
        ctr++;
        total+=*curr;
    }

    return total / ctr;

}*/
