//
// Created by ranger on 2024/8/6.
//

#ifndef CV_UTIL_H
#define CV_UTIL_H

#include <string>
#include <nlohmann/json.hpp>
#include "../common/type.h"

using namespace cv::common;

namespace cv {
    namespace utils {
        class Utils{
        public:
            static ValueType parseType(nlohmann::json *data);
            static std::string getValueTypeString(ValueType valueType);
        };
    }
}

#endif //CV_UTIL_H
