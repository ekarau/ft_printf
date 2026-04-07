# ft_printf

A custom implementation of the standard C library `printf` function, developed as part of the 42 curriculum.

## Overview
This project is about learning how to use variadic arguments (`stdarg.h`) in C and rebuilding the popular `printf` function from scratch. It handles a specific set of format specifiers and mimics the core behavior of the original function.

## Supported Conversions
* `%c` : Prints a single character.
* `%s` : Prints a string.
* `%p` : The `void *` pointer argument is printed in hexadecimal format.
* `%d` : Prints a decimal (base 10) number.
* `%i` : Prints an integer in base 10.
* `%u` : Prints an unsigned decimal (base 10) number.
* `%x` : Prints a number in hexadecimal (base 16) lowercase format.
* `%X` : Prints a number in hexadecimal (base 16) uppercase format.
* `%%` : Prints a percent sign.

## Getting Started

### Compilation
To compile the library, run the following command in the root directory. It will generate the `ft_printf.a` static library:

```bash
make
```

### Usage
Include the header file in your C code:

```c
#include "ft_printf.h"
```

Compile your code with the generated library:

```bash
cc your_main.c ft_printf.a -o your_program
```

## Author
* **Ege Karaurgan** - [ekaraurg](https://github.com/ekarau) (42 Istanbul)