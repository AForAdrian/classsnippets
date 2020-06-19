#include<iostream>
#include<list>
using namespace std;

void printlist(list <int> numbre)
{
	list <int>::iterator ik;

	for(ik=numbre.begin();ik!=numbre.end();ik++)
	{
		cout<<*ik<<endl;
	}

}
int main()
{

	list<int> Marks = {10,20,30};

	cout<<"The first element is:"<<Marks.front()<<endl;
	cout<<"The last element is:"<<Marks.back()<<endl;

	cout<<"Before adding the element at the beginning of the list:"<<endl;
	printlist(Marks);

	Marks.push_front(3);//Add an element at the beginning of the list
	cout<<"After adding the element at the beginning of the list :"<<endl;
	printlist(Marks);

	cout<<"Before adding the element at the end of the list:"<<endl;
	printlist(Marks);

	Marks.push_back(7);//Add an element at the end of the list
	cout<<"After adding the element at the end of the list :"<<endl;
	printlist(Marks);

	cout<<"Before deleting the first element at the beginning of the list:"<<endl;
	printlist(Marks);

	Marks.pop_front();//Remove an element at the beginning of the list
	cout<<"After removing the element at the beginning of the list :"<<endl;
	printlist(Marks);

	cout<<"Before removing the element at the end of the list:"<<endl;
	printlist(Marks);

	Marks.pop_back();//Add an element at the end of the list
	cout<<"After removing the element at the end of the list :"<<endl;
	printlist(Marks);

	cout<<"Before adding an element at position two of the list :"<<endl;
	printlist(Marks);

	list<int>::iterator j = Marks.begin();
	advance(j,2);

	Marks.insert(j,20);//Add an element at the beginning of the list
	cout<<"After adding an element at position two of the list :"<<endl;
	printlist(Marks);

	return 0;
}