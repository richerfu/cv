//
// Created by ranger on 2024/8/7.
//

#ifndef CV_TYPE_H
#define CV_TYPE_H

namespace cv {
    namespace common {
        enum class ValueType {
            String,
            Boolean,
            Number,
            Array,
            Object,
            Null,
            Unknown,
            Undefined
        };


    }
}

#endif //CV_TYPE_H
