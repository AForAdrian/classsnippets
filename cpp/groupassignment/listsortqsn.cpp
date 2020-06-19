#include<iostream>
#include<fstream>
#include<string>
#include<list>
using namespace std;
int main()
{
    list <int> groupA;
    list <int> groupB;
    list <int> BTC;
    list <int> classlist;
    list <int> classparticipants;
    list <int> absent;

    string line;
        ifstream A ("A.txt");
            if (A.is_open()){
            while(getline(A,line)){
                groupA.push_back(stoi(line));
            }
                A.close();
            }
        ifstream B ("B.txt");
            if (B.is_open()){
            while(getline(B,line)){
                groupB.push_back(stoi(line));
            }
                B.close();
            }
        ifstream C ("C.txt");
            if (C.is_open()){
            while(getline(C,line)){
                BTC.push_back(stoi(line));
            }
                C.close();
            }
        ifstream P ("participants.txt");
            if (P.is_open()){
            while(getline(P,line)){
                classparticipants.push_back(stoi(line));
            }
                P.close();
            }
        
        groupA.merge(groupB);
        groupA.merge(BTC);

        classlist.assign(groupA.begin(), groupA.end());

        cout<<"Classlist!\n";
        for(auto i = classlist.begin(); i != classlist.end(); i++)
            cout<<*i<<"";
        // cout<<classlist.end();

        cout<<"Present!\n";
        for(auto i = classparticipants.begin(); i != classparticipants.end(); i++)
            cout<<*i<<"";

        list<int> diff;
        set_difference(classlist.begin(), classlist.end(), classparticipants.begin(), classparticipants.end(),
            std::inserter(diff, diff.begin()));

    return 0;
}
