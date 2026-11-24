# Hello World

A simple C program that prints `Hello, world` to the terminal.

## Source Code

The program uses `printf()` from the standard input/output library (`stdio.h`).

```c
#include <stdio.h>

int main()
{
    printf("Hello, world\n");
    return 0;
}
```

## Requirements

- GCC
- Linux or another Unix-like operating system

## Compilation

```bash
gcc hello.c -o hello
```

## Run

```bash
./hello
```

## Output

```text
Hello, world
```

## Concepts Practiced

- `#include`
- The `main()` function
- `printf()`
- `return 0`
