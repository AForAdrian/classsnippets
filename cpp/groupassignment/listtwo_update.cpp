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
	void updatenode(int value, int pos);
	void deletetail();
	void swapp(int posit); 
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
			cout<<"Please choose an option :\n 1 To add a new node \n 2 To update a node \n 3 Delete a node \n 4 Swapp nodes \n";
			cin>>choice;

			switch(choice)
			{
				case 1:
					cout<<"Enter the number :";
					cin>>num;
					cout<<"Enter the value :";
					cin>>dat;

					n1->number = num;
					n1->data = dat;
					n1->ptr = nullptr;
					s1.createnode(n1);
					s1.output();
					break;
				case 2:
					int pos,val;
					cout<<"Enter the position you would like to update :";
					cin>>pos;
					cout<<"Enter the value you would like to replace  :";
					cin>>val;
					s1.updatenode(val,pos);
					s1.output();
					break;
				case 3:
					s1.deletetail();
					s1.output();
					break;
				case 4:
					int posit;
					cout<<"Enter the position to swap :";
					cin>>posit;
					s1.swapp(posit);
					break;

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
            cout<<"[" <<hold->number<<","<<hold->data <<"]"<<"->";
            hold = hold->ptr;
        }
	}
	else
	{
		cout<<"No nodes present in the Single Linked List";
	}
}
void SingleList::updatenode(int value, int pos)
{
	if(head)
	{
		Node *hold = head;

		while(hold!=NULL)
		{
			if(hold->number == pos)
				hold->data = value;
			hold = hold->ptr;
		}
	}
	else
	{
		cout<<"No nodes present in the Single Linked List. Please add a new node first"<<endl;
	}
}

void SingleList::deletetail(){
	Node *pt = head;
	
	if(head==tail){
		head = 0;
	}
	else{
		while(pt->ptr->ptr != NULL){
			pt = pt->ptr;
		}
		pt->ptr = nullptr;
	}

}

void SingleList::swapp(int posit){
	Node *pt = head;
	Node *abc = NULL;
	if(pt->number==posit){
		cout<<"Swapping doesn't work here!\n";
	}
	else{
		// cout<<"Hello World!\n";
		while(pt != NULL){
			if(pt->number==posit){
				abc = pt;
				pt = pt->ptr;
				pt->ptr = abc;
				break;
			}
			pt = pt->ptr;
		}
		
	}
}