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