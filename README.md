# holbertonschool-printf
# C-Printf

## Description:
This project aims to implement a program that includes a function called "printf" with limited functionality to handle conversion specifiers  %c , %s, and %%. The function will print formatted output to the standard output stream (stdout).

## Compilation/Installation:
To compile the program, simply run the following command in the terminal:

gcc -o main main.c printf.c

To use the _printf function in your code, include the header file printf.h in your source file.

## Requirements:
- C Compiler (e.g., gcc)
- Standard C Library (stdio.h, stdarg.h)

## Examples:
Here are some examples of how to use the _printf function
#include "printf.h"

int main() {
    _printf("Hello, %s! This is a %c example. Percent sign: %%\n", "John", 'c');
    return 0;
}
## Testing:
Testing has been carried out for various scenarios to ensure the correct behavior of the _printf function. Unit tests have been written to verify its output for different data types and edge cases.

## Commits:
The commits have been made in a structured and meaningful way, with clear and concise commit messages explaining the changes made.

## Clean Code:
The code follows clean coding practices, with appropriate comments, variable names, and function names that convey their purpose clearly.

## Learning Objectives:
The primary learning objectives of this project include:
- Understanding data structures (array of structs) and algorithms required to implement the _printf function.
- Using pointers to functions to handle different conversion specifiers.
- Implementing basic functionality for %s conversion specifier to print strings.
- Gaining knowledge of the main program flow and control structures.
- Distributing the workload among team members and collaborating effectively on the project.

## Structure and Algorithm:
The program uses an array of structs to map each conversion specifier to the corresponding function that handles it. This approach provides a modular and organized way to manage different specifiers.

## Array of Struct with Pointers to Function:
The array of structs contains information about each conversion specifier, including its character representation and a pointer to the function responsible for handling that specifier.

## Basic %s Function:
The _printf function includes a basic implementation to handle the %s conversion specifier, allowing it to print strings.


