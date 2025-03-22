#include <stdio.h>
#include <stdlib.h>

void computeHomeValue(void) {
    int popularity, size;
    printf("Enter popularity: ");
    scanf("%d", &popularity);
    printf("Enter size: ");
    scanf("%d", &size);
    printf("Home value is: %d\n", (popularity * popularity * popularity + size * size) * 10000);
}

int main() {
    computeHomeValue();
    system("pause");
    return 0;
}
