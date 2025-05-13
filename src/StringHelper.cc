#include "StringHelper.h"
#include <algorithm> // transform
#include <cctype>    // toupper, tolower

namespace Utils {
namespace String {

// 문자열을 대문자로 변환하는 함수 구현
std::string StringHelper::toUpperCase(const std::string& str) {
    std::string result = str; // 원본 문자열을 복사
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

// 문자열을 소문자로 변환하는 함수 구현
std::string StringHelper::toLowerCase(const std::string& str) {
    std::string result = str;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

// 문자열에 패턴이 포함되어 있는지 확인하는 함수 구현
bool StringHelper::contains(const std::string& text, const std::string& pattern) {
    return text.find(pattern) != std::string::npos;
}

} // namespace String
} // namespace Utils

