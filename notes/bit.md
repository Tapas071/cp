# Bit Manipulation

## operators
1. OR --> |
2. AND --> &
3. XOR --> ^
4. Right sift operator --> >> (0100>>2 = 01)
5. Left Shift Operator --> << (001<<2 == 00100)
6. Negation --> ~(1) = 0

## important properties 

1. (a  + b) = ( a ^ b) + 2 * (a&b) 
2. (a + b ) =( a & b) + (a | b)

## Some properties
1. count setbit in a number --> __builtin_popcount(num);
2. set ith bit  -->  (num | (1<<i) )
3. toggle ith bit --> ( num ^ (1<<i))
4. unset ith bit --> ( num & ~(1<<i))

### check whather a number is a power of two

```
if( __builtin_popcount(num) )
    cout<<"yes";
else
    cout<<"no";
```

### swapping two number without using third variable

```
int x =10, y = 20;
x = (x^y);
y = x ^y;
x = x ^y;
```

### Binary representation of a number

```
int number = 42;  // Example number
    int n = 8;        // Number of binary digits you want

    // One-liner to get the binary string representation
    cout << bitset<32>(number).to_string().substr(32 - n) <<endl;
```
