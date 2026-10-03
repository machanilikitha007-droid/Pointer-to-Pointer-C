#include <stdio.h>

int main()
{
    int number = 100;
    int *ptr = &number;
    int **double_ptr = &ptr;

    printf("Value = %d\n", number);
    printf("Using pointer = %d\n", *ptr);
    printf("Using double pointer = %d\n", **double_ptr);

    return 0;
}
