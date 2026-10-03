#include <stdio.h>

int main() {
    int x = 5;
    int y = 0;
    int result = x / y;  // runtime error: division by zero
    printf("Result: %d\n", result);
    return 0;
}
