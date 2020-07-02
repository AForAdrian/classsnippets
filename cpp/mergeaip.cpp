#include<iostream>
using namespace std;
 
int aux[10];
void mergeip(int a[], int l, int m, int r){
    int i, j, k;
    for(i = m+1; i>l; i--) aux[i-1] = a[i-1];
    for(j=m; j<r; j++) aux[r+m-j] = a[j+1];
    for(k = l; k<=r; k++){
       a[k] = (aux[i]<aux[j])?aux[i++]:aux[j--];
    }
}

int main(){
    int aux[11] = {8,9,10,11,12,13};
    int a[5] = {1,2,3,4,5};
    mergeip(a, 1, 5, 12);
    
    for(int i = 0; i<11; i++){
        cout<<a[i]<<"\n";
    }
    return 0;
}
