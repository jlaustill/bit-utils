//
// Created by jlaustill on 11/23/23.
//

#ifndef BIT_UTILS_BIN_UTILS_H
#define BIT_UTILS_BIN_UTILS_H

#include <climits>

unsigned getNBits(unsigned value, unsigned offset, unsigned n)
{
    const unsigned max_n = CHAR_BIT * sizeof(unsigned);
    if (offset >= max_n)
        return 0; /* value is padded with infinite zeros on the left */
    value >>= offset; /* drop offset bits */
    if (n >= max_n)
        return value; /* all  bits requested */
    const unsigned mask = (1u << n) - 1; /* n '1's */
    return value & mask;
}

#endif //BIT_UTILS_BIN_UTILS_H
