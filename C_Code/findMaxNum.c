#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int intArray[4] = {a,b,c,d};

    int greatest = intArray[0];
    for (int i = 1; i < 4; i++) {
        if (greatest < intArray[i]) {
            greatest = intArray[i];
        }
    }

    return greatest;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
