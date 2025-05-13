#include "StringHelper.h"  // 우리가 만든 유틸리티 클래스 헤더 포함
#include <iostream>        // 표준 입출력 스트림

int main() {
    // Utils::String 네임스페이스를 사용해서 클래스 접근
    std::string testStr = "Hello, World!";

    std::cout << "원본 문자열: " << testStr << std::endl;

    std::string upper = Utils::String::StringHelper::toUpperCase(testStr);
    std::cout << "대문자 변환: " << upper << std::endl;

    std::string lower = Utils::String::StringHelper::toLowerCase(testStr);
    std::cout << "소문자 변환: " << lower << std::endl;

    bool found = Utils::String::StringHelper::contains(testStr, "World");
    std::cout << "'World' 포함 여부: " << (found ? "Yes" : "No") << std::endl;

    return 0;
}

