#include <stdio.h>
// 2 задача
int get_kopecks(int a, int b, int n) {
    int price = a * 100 + b;
    int total = price * n;

    return total % 100;
}

int main() {
    printf("%d\n", get_kopecks(10, 50, 3));
    printf("%d\n", get_kopecks(5, 25, 4));
    printf("%d\n", get_kopecks(7, 99, 2));

    return 0;
}
