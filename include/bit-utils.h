//
// Created by jlaustill on 11/23/23.
//

#ifndef BIT_UTILS_BIT_UTILS_H
#define BIT_UTILS_BIT_UTILS_H

unsigned getNOnes(unsigned n);

unsigned getNOnesAt(unsigned n, unsigned offset);

unsigned getMaxN();

unsigned getNBits(unsigned value, unsigned offset, unsigned n);

unsigned setNBitsAt(unsigned value, unsigned bits, unsigned offset, unsigned n);

#endif //BIT_UTILS_BIT_UTILS_H
