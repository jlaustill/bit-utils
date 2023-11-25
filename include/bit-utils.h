//
// Created by jlaustill on 11/23/23.
// Copyright 2023 Joshua Austill

#ifndef BIT_UTILS_H_
#define BIT_UTILS_H_

unsigned getNOnes(unsigned n);

unsigned getNOnesAt(unsigned n, unsigned offset);

unsigned getMaxN();

unsigned getNBits(unsigned value, unsigned offset, unsigned n);

unsigned setNBitsAt(unsigned value, unsigned bits, unsigned offset, unsigned n);

#endif  // BIT_UTILS_H_
