#include <stdio.h>

int maxmin(int x, int y);

int main () {
    int a, b, c;

    scanf("%d%d", &a, &b);

    c = maxmin(a, b);

    if (maxmin == 1) {
        printf("%d is maximum,%d is minimum", a, b);
    }
    else
        printf("%d is maximum,%d is minimum", b, a);

    return 0;    
}

int maxmin(int x, int y) {
    int XisMax = 0;
    if (x > y) {
        XisMax=1;
    }
    else {
        XisMax=0;
    }
    return XisMax;
}