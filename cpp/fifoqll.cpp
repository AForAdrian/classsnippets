//Mang'are Adrian ICS B 118477

#include<iostream>
using namespace std;

struct Node{
    int value;
    Node* link;
};

class fifoq{
    public:
        Node *head, *tail;
        fifoq();
        void enqueue(Node *value);
        void dequeue();
        void output();
};

int main(){
    fifoq q;
    int choice, value, rep = 1;

    start:
        while(rep==1){
            cout<<"Script Options :\n 1. Enqueue\n 2. Dequeue\n 3. Output\n";
            cin>>choice;
            
            Node* n = new Node();

            switch(choice){
                case 1:
                    cout<<"Enter the value\n";
                    cin>>value;
                    n->value = value;
                    n->link = NULL;
                    q.enqueue(n);
                    break;
                    
                case 2:
                    cout<<"Dequeing ...\n";
                    q.dequeue();
                    break;
                
                case 3:
                    q.output();
                    break;
                
                default:
                    cout<<"Invalid choice! Kindly pick between 1 and 3 \n";
                    goto start;

            }

            cout<<"Do you wish to continue? Enter 1 to continue \n";
            cin>>rep;
        }

    return 0;
}

fifoq::fifoq(){
    head = nullptr;
    tail = nullptr;
}

void fifoq::enqueue(Node *value){

    if(head){
        Node *pt = head;
        while(pt->link){
            pt = pt->link;
        }
        pt->link = value;
    }
    else{
        head = value;
    }
}

void fifoq::dequeue(){
    if(head->link){
        head = head->link;
    }
    else if(head){
        head = nullptr;
    }
    else{
        cout<<"Empty queue!";
    }
}

void fifoq::output(){
    if(head){
        cout<<"The values in the queue are:\n";
        Node *pt = head;

        while(pt != NULL){
            cout<<pt->value<<"--|";
            pt = pt->link;
        }
    }
    else{
        cout<<"Queue is empty!";
    }
}

