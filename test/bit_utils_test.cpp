// Copyright 2023 Joshua Austill

#include <bit-utils.h>
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(BitUtilsTest, getNBitsWorks) {
  uint8_t result = getNBits(0b11100000, 5, 3);
  // Expect equality.
  EXPECT_EQ(result, 0b111);

  result = getNBits(0b10101101, 2, 4);
  EXPECT_EQ(result, 0b1011);
}

TEST(BitUtilsTest, getNBitsHandlesOutOfBounds) {
  uint8_t result = getNBits(0b1111, 999, 1);
  EXPECT_EQ(result, 0);

  result = getNBits(0b1111, 0, 50000000);
  EXPECT_EQ(result, 0b1111);
}

TEST(BitUtilsTest, getNOnes) {
  uint32_t result = getNOnes(4);

  EXPECT_EQ(result, 0b1111);
}

TEST(BitUtilsTest, getNOnesAt) {
  uint32_t result = getNOnesAt(4, 4);

  EXPECT_EQ(result, 0b11110000);
}

TEST(BitUtilsTest, setNBits) {
  uint32_t result = setNBitsAt(0b0001, 0b11, 2, 2);

  EXPECT_EQ(result, 0b1101);
}

TEST(BitUtilsTest, setNBitsAtOutOfBounds) {
  uint32_t result = setNBitsAt(0b01, 0b11111111, 999, 2);

  EXPECT_EQ(result, 0b01);
}

TEST(BitUtilsTest, setNBitsAtConstrainBits) {
  uint32_t result = setNBitsAt(0b01, 0b111111, 1, 1);

  EXPECT_EQ(result, 0b11);
}
