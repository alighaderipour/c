#include <stdio.h>

const char* int_to_str(int n) {
    static char buffer[12];
    sprintf(buffer, "%d", n);
    return buffer;
}

int main(void) {
    int n;

    printf("Please enter a number:\n");

    while (scanf("%d", &n) != 1) {
        printf("Invalid input! Try again:\n");
        while (getchar() != '\n');
    }

    printf("%s\n", int_to_str(n));
    return 0;
}
