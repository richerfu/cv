//
// Created by ranger on 2024/8/6.
//

#ifndef CV_ERROR_H
#define CV_ERROR_H

namespace cv {
    namespace common {
        enum class ValidatorCode {
            Success,
            ParamsInvalid,
            ResolveDataError
        };
    }
}

#endif //CV_ERROR_H
