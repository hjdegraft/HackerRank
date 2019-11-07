#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int tmpAmp = 0, maxAmp = 0, tmpOr = 0, maxOr = 0, tmpXor = 0, maxXor = 0;

    for (int a = 1; a < n+1; a++) {
      for (int b = 2; b < n+1; b++) {
          if (a != b) {
            tmpAmp = (a&b);
            if (tmpAmp < k)
                if (maxAmp < tmpAmp)
                    maxAmp = tmpAmp;

            tmpOr = (a|b);
            if (tmpOr < k)
                if (maxOr < tmpOr)
                    maxOr = tmpOr;

            tmpXor = (a^b);
            if (tmpXor < k)
                if (maxXor < tmpXor)
                    maxXor = tmpXor;
          } // distinct a,b
        }
    }

    printf ("%d\n", maxAmp);
    printf ("%d\n", maxOr);
    printf ("%d\n", maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
