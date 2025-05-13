#ifndef STRING_HELPER_H
#define STRING_HELPER_H

#include <string>

namespace Utils {
namespace String {

// 문자열 관련 기능을 모아둔 유틸리티 클래스 선언
class StringHelper {
public:
    // 문자열을 대문자로 변환하는 함수
    static std::string toUpperCase(const std::string& str);

    // 문자열을 소문자로 변환하는 함수
    static std::string toLowerCase(const std::string& str);

    // 특정 문자열이 포함되어 있는지 확인하는 함수
    static bool contains(const std::string& text, const std::string& pattern);
};

} // namespace String
} // namespace Utils

#endif // STRING_HELPER_H

