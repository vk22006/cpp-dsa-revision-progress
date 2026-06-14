# Swapping Values

There are three methods to swap values in C++.

1. Using std::swap()
2. Using temporary variable
3. Using Arithmetic operators
4. Using Bitwise operators

## Using std::swap()

Currently available in `<utility>`
**Syntax:**
```cpp
std::swap(a,b);
```

## Using temporary variable

Most common way to swap values between two variables
```cpp
int temp;
temp = a;
a = b;
b = temp;
```

## Using arithmetic operators

Only works in integer numbers.
```cpp
a = a + b;
b = a - b;
a = a - b;
```

## Using Bitwise operators

We will use XOR operator

```cpp
a = a ^ b;
b = a ^ b;
a = a ^ b;
```