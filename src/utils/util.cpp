//
// Created by ranger on 2024/8/7.
//

#include "util.h"

namespace cv {
    namespace utils {
        ValueType Utils::parseType(nlohmann::json *data) {
            auto t = data->type();
            switch (t) {
                case nlohmann::json::value_t::string: {
                    return ValueType::String;
                }
                case nlohmann::json::value_t::null: {
                    return ValueType::Null;
                }
                case nlohmann::json::value_t::boolean: {
                    return ValueType::Boolean;
                }
                case nlohmann::json::value_t::number_float:
                case nlohmann::json::value_t::number_integer:
                case nlohmann::json::value_t::number_unsigned: {
                    return ValueType::Number;
                }
                case nlohmann::json::value_t::object: {
                    return ValueType::Object;
                }
                case nlohmann::json::value_t::array: {
                    return ValueType::Array;
                }
                default: {
                    return ValueType::Unknown;
                }
            }
        }
        std::string Utils::getValueTypeString(cv::common::ValueType valueType) {
            switch (valueType) {
                case ValueType::String:
                    return "string";
                case ValueType::Unknown:
                    return "unknown";
                case ValueType::Number:
                    return "number";
                case ValueType::Null:
                    return "null";
                case ValueType::Boolean:
                    return "boolean";
                case ValueType::Object:
                    return "object";
                case ValueType::Array:
                    return "array";
                case ValueType::Undefined:
                    return "undefined";
            }
        }
    }
}