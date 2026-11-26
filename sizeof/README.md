# Sizeof Demo

A simple C program demonstrating the `sizeof` operator and the memory sizes of different data types.

## Features

- Displays the size of `char`.
- Displays the size of `int`.
- Displays the size of `float`.
- Displays the size of `double`.
- Displays the size of `long`.
- Demonstrates using `sizeof` with a variable.

## Concepts Practiced

- The `sizeof` operator.
- C data types.
- Variables and initialization.
- The `size_t` data type.
- Formatted output using `printf()`.
- The `%zu` format specifier.

## Requirements

- GCC
- Linux or another Unix-like operating system

## Compilation

```bash
gcc sizeof_demo.c -o sizeof_demo
```

## Run

```bash
./sizeof_demo
```

## Example Output

```text
Size of different C data types:

char:   1 bytes
int:    4 bytes
float:  4 bytes
double: 8 bytes
long:   8 bytes

Size of an integer variable:
number = 42
sizeof(number) = 4 bytes
```

*Note: Actual sizes may vary depending on the system, architecture, and compiler.*
