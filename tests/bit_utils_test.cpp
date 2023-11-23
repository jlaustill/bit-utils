#include <gtest/gtest.h>
#include "../bit-utils.h"

// Demonstrate some basic assertions.
TEST(BitUtilsTest, BasicBehaviorWorks) {
    uint8_t result = getNBits(0b11100000, 5, 3);
    // Expect equality.
    EXPECT_EQ(result, 0b111);

    result = getNBits(0b10101101, 2, 4);
    EXPECT_EQ(result, 0b1011);
}

TEST(BitUtilsTest, HandlesOutOfBounds) {
    uint8_t result = getNBits(0b1111, 999, 1);
    EXPECT_EQ(result, 0);

    result = getNBits(0b1111, 0, 50000000);
    EXPECT_EQ(result, 0b1111);

}