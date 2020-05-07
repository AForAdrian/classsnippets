#include<stdio.h>
int main(){
    int a,b,c, max, min;
	
	printf("Enter a\n");
	scanf("%d",&a);
	printf("Enter b\n");
	scanf("%d",&b);
	printf("Enter c\n");
	scanf("%d",&c);

    max = (a>b)?(a>c?a:c):(b>c?b:c);
    min = (a<b)?(b<c?a:c):(b<c?b:c);

    printf("The max is: %d\n",max);
    printf("The min is: %d\n",min);

    return 0;ij 83o-
}