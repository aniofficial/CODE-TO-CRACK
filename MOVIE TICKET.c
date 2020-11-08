#include <stdio.h>
int main() {
    int n, s = 0, r,t;
    scanf("%d", &n);
    t = n;
    while (n != 0) {
        r = n % 10;
        s = s * 10 + r;
        n /= 10;
    }
    if (t==s)
        printf("Yes");
    else
        printf("No");

    return 0;
}

