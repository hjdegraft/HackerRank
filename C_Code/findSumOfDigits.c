#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void printSum(int n);

void printSum(int n) {
    int sum = 0, temp; 
    while (n > 0) {
        temp = n%10;
        sum = sum + temp;

        n = n/10;
    }

    printf ("%d",sum);
}
int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    printSum(n);
    return 0;
}

