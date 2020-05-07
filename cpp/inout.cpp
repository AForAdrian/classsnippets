#include<iostream>
#include<string>
using namespace std;

int sqrt(int);
int crt(int);

int main(){
    int num;

    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Squre        :"<<num*num<<endl;
    cout<<"Cube         :"<<num*num*num<<endl;
    cout<<"Squre Root   :"<<sqrt(num)<<endl;
    cout<<"Cube Root    :"<<crt(num)<<endl;
    return 0;
}
int sqrt(int n){
    for(int i = 1; i < (n/2)+1; i++){
        if (i*i == n){
            return i;
        }
    }
    return 0;
}

int crt(int n){
    for(int i = 1; i < (n/3)+1; i++){
        if (i*i*i == n){
            return i;
        }
    }
    return 0;
}