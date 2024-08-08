//
// Created by ranger on 2024/8/6.
//

#ifndef CV_RESULT_H
#define CV_RESULT_H

#include "string"
#include "error.h"

// parse result
namespace cv {
    namespace common {
        struct Result {
            bool success;
            std::string message;
            ValidatorCode code;
        };
    }
}

#endif //CV_RESULT_H
