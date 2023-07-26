#include "main.h"
#include <stdio.h>
#include <string.h>

int main() {
    _printf("% %s%c%% \n", "string", 'c');
    printf("% %s%c%%", "string", 'c');
    return 0;
}
