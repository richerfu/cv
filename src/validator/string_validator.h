//
// Created by ranger on 2024/8/6.
//

#ifndef CV_STRING_VALIDATOR_H
#define CV_STRING_VALIDATOR_H

#include "../common/result.h"
#include "../base/base.h"

namespace cv {
    namespace validator {
        using namespace cv::base;

        class StringValidator:public BaseValidator {
        public:
            Result parse(void* data) override {

            }

        private:
        };
    }
}

#endif //CV_STRING_VALIDATOR_H
