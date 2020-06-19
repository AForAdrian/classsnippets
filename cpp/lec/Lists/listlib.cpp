#include<iostream>
#include<list>
#include<string>
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
	list <int> numbers {1,2,3};
	list <int> values {5,6,7};
	list <string> names {"James","John","Kelly"};

	list <int>::iterator k;
	list <string>::iterator c;


	printlist(numbers);

	for(k=numbers.begin();k!=numbers.end();++k)
	{
		cout<<*k<<endl;
	}


	for(c=names.begin();c!=names.end();++c)
	{
		cout<<*c<<endl;
	}
	return 0;
}