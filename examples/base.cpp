//
// Created by ranger on 2024/8/6.
//

#include <string>
#include "iostream"
#include "cv.h"
#include <nlohmann/json.hpp>

using json = nlohmann::json;

using namespace cv;

int main() {
    std::string hello = "hello";

    json value = hello;

    auto v = Validator::string();

    auto ret = v.parse(value);

    std::cout << ret.message << std::endl;
}