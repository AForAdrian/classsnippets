#include<stdlib.h>
#include<stdio.h>
#include<math.h>
typedef int numType();
numType randNum()
    {   return rand();   }

int main (int argc)
    {   int i, N=0;
        printf("Declare N");
        scanf("%d", N);
        float m0 = 0.0, m1= 0.0;
        numType x;

        for( i = 0; i < N; i++)
            {   x = randNum();
                m0 += ((float) x)/N;
                m1 += ((float) x * (float)x)/N;
            }  
        printf("      Average: %f\n", m0);
        printf("Std Deviation: %f\n", sqrt(m1-m0*m0));
        return 0;
    }