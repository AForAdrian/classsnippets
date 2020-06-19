#include<iostream>
#include<string>
using namespace std;

struct Product{
	int number;
	string name;
	Product* next_product;
};
class ProductList
{
public:
	Product *first,*last;
	ProductList();
	void addproduct(Product *product);
	void printProduct();
};
int main()
{
	ProductList firstproduct;
	int num,numb; 
	string dat;

	while(true)
	{
		Product* one = new Product;

		cout<<"Enter the name of the product :";
		cin>>dat;
		
		cout<<"Enter the ID of the product :";
		cin>>num;


		

		one->number = num;
		one->name = dat;

		firstproduct.addproduct(one);

		firstproduct.printProduct();

		cout<<endl;
		cout<<"Do you want to insert another product ? If yes, enter any number. To exit press 0 :";
		cin>>numb;

		if (numb == 0)
		{
			break;
		}
	}
	return 0;
}
ProductList::ProductList()
{
	first = nullptr;
	last = nullptr;
}
void ProductList::addproduct(Product *value)
{
	if(first)
	{
		Product *pt = first;
		while(pt->next_product)
		{
			pt = pt->next_product;
		}
		pt->next_product = value;
	}
	else
	{
		first = value;
	}
}
void ProductList::printProduct()
{
	if(first)
	{
		cout<<"The products listed are :"<<endl;
		Product *hold = first;
		while (hold!= NULL)
        {
            cout<<"[" <<hold->number<<","<<hold->name <<"]"<<"->";
            hold = hold->next_product;
        }
	}
	else
	{
		cout<<"No products present listed ";
	}
}

