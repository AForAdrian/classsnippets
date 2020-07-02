#include<iostream>
using namespace std;

class merg{
    public:
        void mergeip(int[], int, int, int);
        void mergesortud(int[], int, int);
};
 
 
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
    if(r<=1) return;
    mergesort(a, l, m);
    cout<<"Hello world";
    mergesort(a, m+1, r);
    mergeip(a, l, m, r);
}



int main(){
    // int aux[11] = {8,9,10,11,12,13};
    // int a[5] = {1,2,3,4,5};
    // mergeip(a, 1, 5, 12);
   
    int a[5] = {1,8,3,4,2};
    mergesort(a, 1, 5);

    // for(int i = 0; i<12; i++){
    //     cout<<a[i]<<"\n";
    // }
    return 0;
}
