#include<iostream>
#include<chrono>
using namespace std;
int fibonacci_loop(int n);
int fibonacci_recur(int n);
int main()
{
    int number;

    cout<<"Enter the position you would like to retrieve the fibonacci sequence value :";
    cin>> number;

    auto start = chrono::steady_clock::now(); // Variable to store the time we start counting execution for the for loop implementation
    cout<<"Computing the value using the fibonacci loop :"<<fibonacci_loop(number)<<endl;
    auto stop = chrono::steady_clock::now(); // Variable to store the time we stop counting execution for the for loop implementation

    auto beginn = chrono::steady_clock::now(); // Variable to store the time we start counting execution for the recursive algorithm
    cout<<"Computing the value using the recursive algorithm :"<<fibonacci_recur(number)<<endl;
    auto finish = chrono::steady_clock::now(); //Variable to store the time we stop counting execution for the recursive algorithm

    auto diff = stop - start;
    auto difference = finish - beginn;

    cout<<"The time taken using the fibonacci loop :"<<chrono::duration <double, milli> (diff).count()<<endl;
    cout<<"The time taken using the recursive algorithm :"<<chrono::duration <double, milli> (difference).count()<<endl;

    return 0;
}
int fibonacci_loop(int n)
{
    //The function should make use of a for loop and return the value of the fibonacci sequence at position n.
}
int fibonacci_recur(int n)
{
   //The function should make use of a recursive function and return the value of the fibonacci sequence at position n.
}


