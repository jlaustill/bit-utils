#include <gtest/gtest.h>
#include "../bin-utils.h"

// Demonstrate some basic assertions.
TEST(BitUtilsTest, BasicAssertions) {
    uint8_t result = getNBits(0b11100000, 5, 3);
    // Expect equality.
    EXPECT_EQ(result, 0b111);
}