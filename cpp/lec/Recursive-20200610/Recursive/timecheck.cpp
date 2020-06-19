#include<chrono>
#include<time.h>
#include<iostream>
using namespace std;
int main()
{

    int i;
    cout<<"Enter the number ";
    cin>>i;
    auto start = chrono::steady_clock::now();
    for(int j = 0; j < i; j++)
    {
        cout<<"Hey ";
    }
    auto stop = chrono::steady_clock::now();

    auto diff = stop - start;
    cout<<endl;
    cout<<"The execution time for the for loop in ms is: "<<chrono::duration<double,milli> (diff).count();

    return 0;
}
