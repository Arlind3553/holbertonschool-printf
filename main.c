#include "main.h"
#include <stdio.h>
#include <string.h>

int main() {
    int a = _printf("%i  \n", 7);
    int b = printf("%i \n", 7);
    printf("%i %i",a, b);
    return 0;
}
