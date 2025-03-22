#include <stdio.h>
#include <stdlib.h>

int computeHomeValue(int popularity, int size) {
    return (popularity * popularity * popularity + size * size) * 10000;
}

int main() {
    int popularity, size;
    printf("Enter popularity: ");
    scanf("%d", &popularity);
    printf("Enter size: ");
    scanf("%d", &size);
    printf("Home value is: %d\n", computeHomeValue(popularity, size));
    return 0;
}
