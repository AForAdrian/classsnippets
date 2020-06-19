#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* ptr;
};

class SingleList
{
public:
	Node *head,*tail;
	SingleList();
	void createnode(Node *value);
	void deletenode(int pos);
	void output();
};

int main()
{
	SingleList s1;
	int num,dat,numb,choice;

	do
	{
		Node* n1 = new Node;

		start:
			cout<<"Please choose an option :\n 1 To add a new node \n 2 Delete a node \n";
			cin>>choice;

			switch(choice)
			{
				case 1:
					cout<<"Enter the value :";
					cin>>dat;
					n1->data = dat;
					s1.createnode(n1);
					s1.output();
					break;
				case 2:
					// int position;
					// cout<<"Enter the position you would like to delete :";
					// cin>>position;
					// // s1.deletenode(position);
					// s1.output();
					// break;

				default:
					cout<<"You have not selected any option :"<<endl;
					goto start;
			}

		cout<<endl;
		cout<<"Do you want to insert / update / delete another node ? If yes, enter any number. To exit press 0 :";
		cin>>numb;
		if (numb == 0)
		{
			break;
		}
	}while(true);

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
            cout<<"["<<hold->data <<"]"<<"->";
            hold = hold->ptr;
        }
	}
	else
	{
		cout<<"No nodes present in the Single Linked List";
	}
}
// void SingleList::updatenode(int value, int pos)
// {
// 	Node *pt = head;

// 	if(head == NULL)
// 	{
// 		cout<<"This is an empty list. You cannot update it.";
// 	}
// 	else if(head->number==pos)
// 	{
// 		head->data = value;
// 	}
// 	else
// 	{
// 		while(pt->ptr !=NULL)
// 		{
// 			if(pt->number == pos)
// 			{
// 				pt->data = value;
// 				break;
// 			}
// 			pt = pt->ptr;
// 		}
// 	}
// }
// void SingleList::deletenode(int pos)
// {
// 	Node *pt = head;

// 	if(head == NULL){
// 		cout<<"This is an empty list";
// 	}
// 	else if (head->number == pos)
// 	{
// 		Node *nodeX = head;
// 		head = head->ptr;
// 		delete nodeX;
// 	}
// 	else
// 	{
// 		while(pt->ptr != NULL)
// 		{
// 			// if true make the node in (pos-1) have (pos+1) as its next node.
// 			if(pt->ptr->number == pos){
// 				Node *nodeX = pt->ptr;
// 				pt->ptr = pt->ptr->ptr;
// 				delete nodeX;
// 				break;
// 			}
// 			pt = pt->ptr;
// 		}
// 	}

// }

