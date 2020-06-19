#include<iostream>
#include<chrono>
using namespace std;
int factorial_loop(int n);
int factorial_recur(int n);
int main()
{
    int number;

    cout<<"Enter the value you would like to compute the factorial :";
    cin>> number;

    auto start = chrono::steady_clock::now(); // Variable to store the time we start counting execution for the for loop implementation
    cout<<"Computing the value using the factorial loop :"<<factorial_loop(number)<<endl;
    auto stop = chrono::steady_clock::now(); // Variable to store the time we stop counting execution for the for loop implementation

    auto beginn = chrono::steady_clock::now(); // Variable to store the time we start counting execution for the recursive algorithm
    cout<<"Computing the value using the recursive algorithm :"<<factorial_recur(number)<<endl;
    auto finish = chrono::steady_clock::now(); //Variable to store the time we stop counting execution for the recursive algorithm

    auto diff = stop - start;
    auto difference = finish - beginn;

    cout<<"The time taken using the factorial loop :"<<chrono::duration <double, milli> (diff).count()<<endl;
    cout<<"The time taken using the recursive algorithm :"<<chrono::duration <double, milli> (difference).count()<<endl;

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


