#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of times to print 'Hello, World!': ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Hello, World!\n");
    }
    return 0;
}