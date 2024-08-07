//
// Created by ranger on 2024/8/7.
//

#include "util.h"

namespace cv {
    namespace utils {
        ValueType Utils::parse_type(nlohmann::json *data) {
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
    }
}