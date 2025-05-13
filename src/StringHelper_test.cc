#include <gtest/gtest.h>              // Google Test 기본 헤더
#include "StringHelper.h"            // 우리가 만든 클래스 포함

using namespace Utils::String;       // 네임스페이스 간편하게 사용

// 테스트 케이스 1: 빈 문자열
TEST(StringHelperTest, EmptyString) {
    EXPECT_EQ(StringHelper::toUpperCase(""), "");
    EXPECT_EQ(StringHelper::toLowerCase(""), "");
    EXPECT_FALSE(StringHelper::contains("", "test"));
}

// 테스트 케이스 2: 일반 문자열
TEST(StringHelperTest, BasicString) {
    EXPECT_EQ(StringHelper::toUpperCase("abc"), "ABC");
    EXPECT_EQ(StringHelper::toLowerCase("ABC"), "abc");
    EXPECT_TRUE(StringHelper::contains("hello world", "world"));
}

// 테스트 케이스 3: 특수문자 포함 문자열
TEST(StringHelperTest, SpecialCharacters) {
    EXPECT_EQ(StringHelper::toUpperCase("hi@123"), "HI@123");
    EXPECT_EQ(StringHelper::toLowerCase("HI@123"), "hi@123");
    EXPECT_TRUE(StringHelper::contains("email@domain.com", "@"));
}

// 테스트 케이스 4: 긴 문자열
TEST(StringHelperTest, LongString) {
    std::string longStr(1000, 'a');
    EXPECT_EQ(StringHelper::toUpperCase(longStr), std::string(1000, 'A'));
    EXPECT_EQ(StringHelper::toLowerCase(std::string(1000, 'Z')), std::string(1000, 'z'));
}

// 테스트 케이스 5: 포함 여부 테스트 - 실패 경우
TEST(StringHelperTest, ContainsNegative) {
    EXPECT_FALSE(StringHelper::contains("abcdef", "xyz"));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

