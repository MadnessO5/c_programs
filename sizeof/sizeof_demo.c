#include <stdio.h>

int main()
{
    printf("Size of different C data types:\n\n");

    printf("char:   %zu bytes\n", sizeof(char));
    printf("int:    %zu bytes\n", sizeof(int));
    printf("float:  %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("long:   %zu bytes\n", sizeof(long));

    printf("\nSize of an integer variable:\n");

    int number = 42;

    printf("number = %d\n", number);
    printf("sizeof(number) = %zu bytes\n", sizeof(number));

    return 0;
}

