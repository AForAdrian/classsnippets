#include<iostream>
using namespace std;

int q[6];
int head, tail, i, choice, rep = 1;
void Queueinit();
bool isempty();
bool isfull();
void enqueue(int i);
void dequeue();
void output();

int main(){
    Queueinit();
    while(rep==1){
        cout<<"Script Functionality:\n 1.Enqueue\n 2.Dequeue\n 3.Output\n";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter value to enqueue";
                cin>>i;
                enqueue(i);
                break;
                
            case 2:
                dequeue();
                break;

            case 3:
                output();

            default:
                cout<<"Select options 1, 2 or 3";
                break;
        }
        int rep;
        cout<<"Press 1 to continue.";
        cin>>rep;
    }
}

void Queueinit(){
    int q[6];
    head=tail=-1;
}

bool isempty(){
    if (head+tail==-2){
        return true;
    }
    else{
        return false;
    }
}

bool isfull(){
    int size = *(&q +1)- q;
    
    if (tail==(size-1)){
        return true;
    }
    else{
        return false;
    }
}

void enqueue(int i){
    if (isfull()){
        cout<<"Cannot enqueue! The queue is full";
    }
    else if (isempty()){
        head=tail=0;
        q[tail] = i;
    }
    else{
        tail++;
        q[tail]=i;
    }
}

void dequeue(){
    if (isempty()){
        cout<<"Cannot dequeue! Its empty";
    }
    else if(head==tail){
        head = tail = -1;
    }
    else{
        head = head+1;
    }
}

void output(){
    if(isempty()){
        cout<<"The queue is empty!\n";
    }
    else{
        for(int a=0;a<6;a++){
            cout<<q[a]<<"-->";
        }
        cout<<"-----Head: "<<q[head];
        cout<<"-----Tail: "<<q[tail];
    }
}
