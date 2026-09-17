#include <stdio.h>

int main() {
    int a,b,n;
    scanf("%d %d %d",&a,&b,&n);

    int price = a*100+b;
    int total = price *n;

    printf("%d\n",total%100);
    return 0;
}
