#include<iostream>
using namespace std;

struct Node{
	int number;
	int data;
	Node* ptr;
};
class SingleList
{
public:
	Node *head,*tail;
	SingleList();
	void createnode(Node *value);
	void output();
};

int main()
{
	SingleList s1;
	int num, dat,numb;

	while(true)
	{
		Node* n1 = new Node;

		cout<<"Enter the number :";
		cin>>num;
		cout<<"Enter the value :";
		cin>>dat;

		n1->number = num;
		n1->data = dat;

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
	head = nullptr;
	tail = nullptr;
}
void SingleList::createnode(Node *value)
{
	if(head)
	{
		Node *pt = head;
		while(pt->ptr)
		{
			pt = pt->ptr;
		}
		pt->ptr = value;
	}
	else
	{
		head = value;
	}
}
void SingleList::output()
{
	if(head)
	{
		cout<<"The single list values are :"<<endl;
		Node *hold = head;
		while (hold!= NULL)
        {
            cout<<"[" <<hold->number<<","<<hold->data <<"]"<<"->";
            hold = hold->ptr;
        }
	}
	else
	{
		cout<<"No nodes present in the Single Linked List";
	}
}

