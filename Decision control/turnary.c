#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    // Use const char* for string literals
    const char *c = (a >= b) ? "Avinash" : "Sharma";
    printf("%s", c);  // Use %s to print a string

    return 0;
}
