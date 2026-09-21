#include <stdio.h>

int get_kopecks(int a, int b, int n) {
    int price = a * 100 + b;
    int total = price * n;

    return total % 100;
}

int main() {
    printf("%d\n", get_kopecks(10, 50, 3));
    printf("%d\n", get_kopecks(10, 50, 2));
    printf("%d\n", get_kopecks(7, 99, 2));

    return 0;
}
#include <stdio.h>

int check_div(int k, int n) {
    return k % n;
}

int main() {
    printf("%d\n", check_div(10, 3));
    printf("%d\n", check_div(10, 5));
    printf("%d\n", check_div(11, 4));
    return 0;
}
