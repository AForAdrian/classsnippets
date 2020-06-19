#include<iostream>

using namespace std;
int factorial_loop(int n);
int factorial_recur(int n);
int main()
{
    int number;

    cout<<"Enter the value you would like to compute the factorial :";
    cin>> number;

    cout<<"Computing the value using the factorial loop :"<<factorial_loop(number)<<endl;

    cout<<"Computing the value using the recursive algorithm :"<<factorial_recur(number)<<endl;

    return 0;
}
int factorial_loop(int n)
{
    int value = 1;
    for(int i = 1; i <= n;i++)
    {
        value = value * i;
    }
    return value;
}
int factorial_recur(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial_recur(n-1));
    }
}


