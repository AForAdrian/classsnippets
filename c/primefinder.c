#include<stdio.h>
 
int prime_finder(int);
int sum(int arr[25]);

void main(){
   int n=2;
   int result;
   int arr[25];
   int i=0;	
   for(n;n<100;n++){
	result = prime_finder(n);
	if (result==1){
		arr[i]=n;
		i++;
		printf("%d\n",n);
	}
}
printf("The sum is : %d",sum(arr));
}

int prime_finder(int a){
   int c;
   for ( c = 2 ; c <= a - 1 ; c++ ){ 
     if ( a%c == 0 )
	return 0;
   }
   return 1;
}

int sum(int arr[25]){
	int i, sum=0;
	for(i=0;i<25;i++){
		sum += arr[i];
}
	return sum;
}