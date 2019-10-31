#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>

void printOutput (int a, int b) {
    for (int j = a; j <= b; j++) {
        if (j <= 9) { // less or same as 9 
            if (j == 1) {
                printf("one\n");
            } else if (j == 2) {
                printf ("two\n");
            } else if (j == 3) {
                printf ("three\n");
            } else if (j == 4) {
                printf ("four\n");
            } else if (j == 5) {
                printf ("five\n");
            } else if (j == 6) {
                printf ("six\n");
            } else if (j == 7) {
                printf ("seven\n");
            } else if (j == 8) {
                printf("eight\n");
            } else if (j == 9) {
                printf("nine\n");
            }
        }  else  { // greater than 9
            if ((j % 2) == 0) { // cannot just test the mod (e.g. if (j%2)), but test if this value == 0.
                printf("even\n");
            } else {
                printf("odd\n");
            }
        } // if number > 9, check whether odd/even
    } // end looping through interval of two numnbers
} // end of printOutput()

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	
    printOutput (a, b);

    return 0;
}
