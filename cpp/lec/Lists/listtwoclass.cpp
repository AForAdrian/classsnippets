#include<iostream>
using namespace std;
struct Node{
    int number; //Unique identifier of a node
    int data; //Data field
    Node *ptr; //Pointer field to the next Node.(Initialized to be null)
};
class SingleList
{
public:
    Node *head,*tail; //Pointer variables to head and tail of the linked list
    SingleList();//Default constructor
    void createnode(Node *value);//Creates a new node at the beginning of the linked list.
    void output();
};

int main()
{
    SingleList s1;
	int num, dat,numb;

	while(true)
	{
		Node *n1 = new Node; //Create a heap memory

		cout<<"Enter the number :";
		cin>>num;
		cout<<"Enter the value :";
		cin>>dat;

		n1->number = num;
		n1->data = dat;
		n1->ptr = nullptr;

		s1.createnode(n1);

		s1.output();

		cout<<endl;
		cout<<"Do you want to insert another node ? If yes, enter any number. To exit press 0 :";
		cin>>numb;

		if (numb == 0)
		{
			break;
		}
	}

    return 0;
}
SingleList::SingleList()
{
    head = nullptr; //Initialize the head to a null pointer.
    tail = nullptr; //Initialize the tail to a null pointer.
}

void SingleList::createnode(Node *value)
{
    if(head)
    {
        Node *pt = head;
        while(pt->ptr)
        {
            pt = pt->ptr; //Linking the previous node to the next node
        }
        pt->ptr = value; //Make the pointer field to the new node.
    }
    else
    {
        head = value; //The single linked list
    }
}

void SingleList::output()
{
    if(head)
    {
        cout<<"The SinglyLinked List values are :"<<endl;
        //Node *hold = head; //Hold stores the memory address of the head variable
        Node *pt = head;
        while(pt)
        {
            // cout<<"["<<hold<<","<<hold->data<<"]"<<"->";
            // hold =  hold->ptr;
            cout<<endl<<"Node ID:"<<pt->number<<"|";
            cout<<"Node Pointer"<<pt<<"|";
            cout<<"Next Node Pointer Value:"<<pt->ptr<<"|";

            pt = pt->ptr;
        }
    }
    else
    {
       cout<<"No nodes present in the SinglyLinked List. Please add a new node :";
    }
}

