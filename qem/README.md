# Quadratic Equation Solver

A simple C program that solves quadratic equations of the form:

\[
ax^2 + bx + c = 0
\]

The program calculates the discriminant and finds the real roots of the equation.

## Features

- Reads three coefficients (`a`, `b`, `c`) from standard input.
- Calculates the discriminant using a separate function.
- Checks whether the equation is quadratic.
- Detects when there are no real roots.
- Calculates and displays both real roots.
- Displays results with 5 decimal places.

## Concepts Practiced

- Functions and function calls.
- `double` data type.
- `scanf()` and `printf()`.
- Conditional statements (`if`).
- Mathematical operations.
- The `sqrt()` function from `math.h`.
- Linking external libraries (`-lm`).

## Requirements

- GCC
- Linux or another Unix-like operating system
- Math library (`libm`)

## Compilation

```bash
gcc -Wall -g qe.c -o qe -lm
```

## Run

```bash
./qe
```

Enter three coefficients separated by spaces:

```text
1 -5 6
```

## Example Output

```text
2.00000 3.00000
```

## Error Handling

- Invalid input: displays an error message.
- `a = 0`: reports that the equation is not quadratic.
- Negative discriminant: reports that there are no real roots.

## Mathematical Formula

The discriminant is calculated using:

\[
D = b^2 - 4ac
\]

- \(D > 0\): two distinct real roots.
- \(D = 0\): one repeated real root.
- \(D < 0\): no real roots.
