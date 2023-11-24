//
// Created by jlaustill on 11/23/23.
//

#ifndef BIT_UTILS_BIT_UTILS_H
#define BIT_UTILS_BIT_UTILS_H

#include <climits>
#include <math.h>

unsigned getNOnes(unsigned n) {
    return (1u << n) - 1;
}

unsigned getNOnesAt(unsigned n, unsigned offset) {
    return getNOnes(n) << offset;
}

unsigned getMaxN() {
    return CHAR_BIT * sizeof(unsigned);
}

unsigned getNBits(unsigned value, unsigned offset, unsigned n)
{
    const unsigned max_n = getMaxN();
    if (offset >= max_n)
        return 0; /* value is padded with infinite zeros on the left */
    value >>= offset; /* drop offset bits */
    if (n >= max_n)
        return value; /* all  bits requested */
    const unsigned mask = getNOnes(n); /* n '1's */
    return value & mask;
}

unsigned setNBitsAt(unsigned value, unsigned bits, unsigned offset, unsigned n) {
    const unsigned max_n = getMaxN();
    // first we check for in bounds offset
    if (offset >= max_n || offset + n >= max_n) {
        return value; // offset is out of bounds
    }
    bits = getNBits(bits, 0, n); // Make sure not to set too many bits
    // first we need to zero out the bits we are going to set
    value &= ~getNOnesAt(n, offset);
    value |= bits << n;

    return value;
}

#endif //BIT_UTILS_BIT_UTILS_H
