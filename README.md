# CPP-CALC

A simple command-line calculator written in C++.

## What it does

Takes two numbers and an operator from the user, then performs the calculation:

- `+` Addition
- `-` Subtraction
- `*` Multiplication
- `/` Division (with divide-by-zero protection)

## Example

Enter your first number: 6
Enter an operator (+, -, *, /): *
Enter your second number: 9
Result: 54

## How to run it

You'll need a C++ compiler (like g++/MinGW) installed.

1. Compile:

    g++ calculator.cpp -o calculator.exe

2. Run:

    .\calculator.exe

## Status

Basic version working. Planned improvements:
- Loop so it doesn't exit after one calculation
- Better input validation
