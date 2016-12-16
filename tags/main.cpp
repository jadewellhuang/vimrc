#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <opencv2\opencv.hpp>
#include <opencv2\core\core.hpp>
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
#include "opencv2/stitching/detail/blenders.hpp"
#include "opencv2/stitching/detail/motion_estimators.hpp"
#include <Eigen/Eigen>
#include <Eigen/Sparse>
using namespace Eigen;
using namespace std;
using namespace cv;
int main(){
  Matrix3d Rotation;
  
    typedef Eigen::Triplet<MYPRECISION> T;
    vector<T> TList;
    TList.reserve(5 * VarNum);
    vector<int> a;
    std::vector<int> vi;
    
    IplImage *image = cvCreateImage(cvSize(640, 480), IPL_DEPTH_8U, 3);

}
