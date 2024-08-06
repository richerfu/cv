//
// Created by ranger on 2024/8/6.
//

#ifndef CV_RESULT_H
#define CV_RESULT_H

#include "string"

// parse result
struct Result {
    bool success;
    std::string message;
    uint8_t code;
};

#endif //CV_RESULT_H
