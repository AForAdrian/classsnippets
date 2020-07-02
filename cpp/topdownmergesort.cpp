#include<iostream>
using namespace std;

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

//top down merge sort
void mergesortud(int a[], int l, int r){
    int m = (r+1)/2;
    if(r <= 1) return;
    mergesortud(a, l, m);
    mergesortud(a, m+1, r-1);
    mergeip(a, l, m, r);     
}



int main(){   
    int a[5] = {1,8,3,4,2};
    mergesortud(a, 1, 5);

    for(int i = 0; i<5; i++){
        cout<<a[i]<<"\n";
    }
    return 0;
}
