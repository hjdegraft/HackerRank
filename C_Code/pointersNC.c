#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function  
    int tempA, tempB = 0;

    tempA = (*a) + (*b);  // if do not use temp values, then change the value of where pointers point and therefore next
    tempB = (*a)-(*b);    // calculation will use this new value.  If your answer relied on the original value, then store
    if (tempB < 0) {      // in temps and when done, set the value to where the pointers point to this temp value.
        (tempB = (-1)*tempB);
    }

    (*a) = tempA;
    (*b) = tempB;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
