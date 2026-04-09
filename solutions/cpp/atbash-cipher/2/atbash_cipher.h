//
// Created by garyr on 09/04/2026.
//
#pragma once

#include <string>

namespace atbash_cipher {

    std::string encode(const std::string& text);
    std::string decode(const std::string& cipher);

}  // namespace atbash_cipher