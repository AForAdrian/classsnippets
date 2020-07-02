#include<iostream>
 
int aux[10];
void mergeip(int a[], int l, int m, int r){
    int i, j, k;
    for(i = m+1; i>l; i--) aux[i-1] = a[i-1];
    for(j=m; j<r; j++) aux[r+m-j] = a[j+1];
    for(k = l; k<=r; k++){
        if (less(aux[i],aux[j])){
            a[k] = aux[i++];
        }else{
            a[k] = aux[j--];
        }
    }
}

int main(){
    
    for(int i = 0; i<10; i++){
        cout<<aux[i];
    }
    return 0;
}
