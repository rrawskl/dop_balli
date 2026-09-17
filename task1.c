int get_kopecks(int a, int b, int n) {
    int price = a * 100 + b;
    int total = price * n;

    return total % 100;
}