#include<iostream>
using namespace std;

int N, item;
int q[5];
char cont;

void stackinit(int);
void push(int);
int pop();
int _pop();

int main(){
    
    do{
        stackinit(5);
        start:
            int choice;
            cout<<"here we go again:\n 1.New Stack(default is 5 cells long)\n 2.Push\n 3.Pop\n 4.Print top\n\n";
            cin>>choice;

            switch(choice){
                case 1:
                    cout<<"Declare stack size:\n";
                    cin>>N;
                    stackinit(N);
                    cout<<"Stack initialized!\n";
                    break;

                case 2:
                    cout<<"Enter value to push\n";
                    cin>>item;
                    push(item);
                    cout<<"Item pushed!\n";
                    break;

                case 3:
                    cout<<"Popping\n";
                    pop();
                    break;

                case 4:
                    cout<<"The value at the top position rn is: "<<_pop()<<"\n";
                    break;

                default:
                    cout<<"Pick a valid option\n";
                    break;
            }

        cout<<"Do you wish to continue? Y/N";
        cin>>cont;
        if(cont=='N' or cont=='n'){
            break;
        }
    }while(true);

    return 0;
}

void stackinit(int N){
    int q[N];
}

void push(int item){
    for(int i=0; i<=N; i++){
        if(q[i] ==  0){
            q[i] = item;
            break;
        }
        
    }    
}

int pop(){
    for(int i=0; i<=N; i++){
        if(q[i] == 0){
            cout<<"idx.\n";
            int popped = q[i--];
            q[i--]= 0;
            return popped;
        }
    }
    return 0;
}

int _pop(){
    for(int i=0; i<=N; i++){
        cout<<"idx.\n";
        if(q[i] == 0){            
            return q[i--];
        }
    }
    return 0;
}


