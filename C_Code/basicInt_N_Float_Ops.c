#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1, num2;
    int intSum, intDifference = 0;

    float float1, float2;
    float floatSum, floatDifference = 0;

    scanf("%d %d",&num1,&num2);
    intSum = num1+num2;
    intDifference = num1 - num2;
     
    scanf("%f %f",&float1, &float2);
    floatSum = float1 + float2;
    floatDifference = float1 - float2;

    printf("%d %d", intSum, intDifference);
    printf("\n%0.1f %0.1f", floatSum, floatDifference);
    return 0;
}
