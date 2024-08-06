//
// Created by ranger on 2024/8/6.
//

#ifndef CV_CV_H
#define CV_CV_H

#include "validator/string_validator.h"
#include "utils/util.h"

using namespace cv::utils;
using namespace cv::validator;

namespace cv {

    class Validator {
    public:
        static StringValidator string();

    private:
    };
    
}
#endif //CV_CV_H
