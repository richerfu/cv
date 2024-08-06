//
// Created by ranger on 2024/8/6.
//

#ifndef CV_BASE_H
#define CV_BASE_H

#include "../common/result.h"

namespace cv {
    namespace base {
        class BaseValidator {
        private:
        public:
            // every validator should implement this virtual function
            virtual Result parse(void* data) = 0;
        };
    }
}

#endif //CV_BASE_H
