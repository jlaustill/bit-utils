# bit-utils
A micro library of bit helpers to make c++ more readable and easier to reason about(hopefully)

## Provides the following functions
### getNOnes
unsigned getNOnes(unsigned n)

This method will return a value with n 1's set
ex.
```unsigned result = getNBits(3); // 0b111```

### getNOnesAt
unsigned getNOnesAt(unsigned n, unsigned offset)

This method returns n 1 at the offset provided
ex.
```unsigned result = getNBitsAt(3, 2); // 0b111000```

### getMaxN
unsigned getMaxN()

This method returns the max size of unsigned, which can be handy for different cpu's etc

### getNBits
unsigned getNBits(unsigned value, unsigned offset, unsigned n)

This method takes in a value, and returns the value by bits from the offset for n bits. 

A simple example would be 
```unsigned result = getNBits(0b100**11**000, 4, 2); // 0b11```

### setNBitsAt
unsigned setNBitsAt(unsigned value, unsigned bits, unsigned offset, unsigned n)

This method sets n bits at the offset based on the bits you pass in. It handles over bounds and bits to big for n length etc for safety
ex.
```unsigned result = setNBitsAt(0b10000000, 0b11, 2, 2); // 0b10001100```

Important things to note are that offset is 0 based, and bits are read from right to left in natural order
