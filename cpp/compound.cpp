#include<iostream>
#include<string>
using namespace std;

float cmp(float, float);

int main(){
    float damt, rate, interest;
    int nyrs;

    cout<<"Enter Deposit amount: ";
    cin>>damt;
    cout<<"Enter Interest rate: ";
    cin>>rate;
    cout<<"Enter Number of Years: ";
    cin>>nyrs;

    float balance = damt;

    cout<<"Year     Interest    Balance"<<endl;
    for (int i = 1; i<=nyrs; i++){
        interest = cmp(balance,rate);
        balance = balance+interest;

        cout<<i<<"      "<<interest<<"      "<<balance<<endl;
    }
}

float cmp(float damt, float rate){
    return damt*rate/100;
}