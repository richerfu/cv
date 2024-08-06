//
// Created by ranger on 2024/8/6.
//

#ifndef CV_CONTEXT_H
#define CV_CONTEXT_H

#include "string"
#include "variant"

struct ValidatorContext {
    struct ValidatorContext *parent;
    // accept string and int for string and array.index
    std::variant<std::string, size_t> path;
    void* data;
};

#endif //CV_CONTEXT_H
