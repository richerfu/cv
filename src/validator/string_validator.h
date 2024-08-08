//
// Created by ranger on 2024/8/6.
//

#ifndef CV_STRING_VALIDATOR_H
#define CV_STRING_VALIDATOR_H

#include "../common/result.h"
#include "../base/base.h"
#include "../utils/util.h"
#include "../common/error.h"

using namespace cv::utils;
using namespace cv::common;

namespace cv {
    namespace validator {
        using namespace cv::base;

        class StringValidator : public BaseValidator {
        public:
            Result parse(nlohmann::json data) override {
                auto r = Utils::parseType(&data);
                if (r == ValueType::String) {
                    return Result{true, "success", ValidatorCode::Success};
                }
                return Result{false, "except string but get" + Utils::getValueTypeString(r),
                              ValidatorCode::ParamsInvalid};
            }
        };
    }
}

#endif //CV_STRING_VALIDATOR_H
