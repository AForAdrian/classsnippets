#include<iostream>
using namespace std;
#define min(A, B) (A<B)?A:B

int aux[11];
void mergeip(int a[], int l, int m, int r){
    int i, j, k;

    //moves 1st array leaving i pointing to l
    for(i = m+1; i>l; i--) {aux[i-1] = a[i-1];}
    // moves array leaves j pointing to r
    for(j=m; j<r; j++) {aux[r+m-j] = a[j+1]; }
    // the merge
    for(k = l; k<=r; k++){
        a[k] = (aux[i]<aux[j])?aux[i++]:aux[j--];
    }
}

void mergesortbu(int a[], int l, int r){
    int i, m;
    for (m = 1; m<r-1; m = m+m)
        for(i = 1; i <= r-m; i+= m+m)
            mergeip(a, i, i+m-1, min(i+m+m-1, r));
}

int main(){
    int a[6] = {1,26,7,73,2,23};
    mergesortbu(a, 1, 6);
    for(int i=0; i<7; i++){
        cout<<a[i]<<"\n";
    }
}
