#include<iostream>
using namespace std;

void mergeAB(int c[], int a[], int N, int b[], int M){
    int i, j, k;
    for(i = 0, j = 0, k = 0; k<N+M; k++){
        if( i == N){
            c[k] = b[j++];
            continue;
        }
        if( j == M){
            c[k] = a[i++];
            continue;
        }
        c[k] = (a[i]<b[j])?a[i++]:b[j++];
    }
}

int main(){
    int c[10];
    int a[4] = {1, 2, 3, 4};
    int b[6] = {6, 7, 8, 10, 20, 22};

    mergeAB(c, a, 4, b, 6);
    for(int i = 0; i<10; i++){
        cout<<c[i];
    }
    return 0;
}

