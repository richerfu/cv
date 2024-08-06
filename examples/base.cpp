//
// Created by ranger on 2024/8/6.
//

#include <string>
#include "iostream"
#include "cv.h"
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
    std::string hello = "hello";
    auto ret = cv::Validator::string();

    std::cout << std::setw(4) << json::meta() << std::endl;
}