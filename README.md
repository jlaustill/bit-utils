# bit-utils
A micro library of bit helpers to make c++ more readable

## Provides the following functions
# getNBits
unsigned getNBits(unsigned value, unsigned offset, unsigned n)

This method takes in a value, and returns the value by bits from the offset for n bits. 

A simple example would be 
0b11 = getNBits(0b100**11**000, 4, 2)

Important things to note are that offset is 0 based, and bits are read from right to left in natural order
