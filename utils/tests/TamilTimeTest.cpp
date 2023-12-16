#include "utils/TamilTime.hpp"

#include <gtest/gtest.h>

TEST(TamilTimeUnitTest, checkTamilTimeUnit)
{
    auto convertToSeconds = [](auto timeToConvert) {
        return std::chrono::duration_cast<std::chrono::seconds>(timeToConvert).count();
    };
    EXPECT_EQ(convertToSeconds(Nazhigai{1}), convertToSeconds(std::chrono::minutes(24)));
    EXPECT_EQ(convertToSeconds(Vinazhigai{60}), convertToSeconds(Nazhigai(1)));
}
