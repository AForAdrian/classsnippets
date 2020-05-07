#include <iostream>
#include <string.h>
using namespace std;
//float avg(int mark[2]) {
	//return (((mark[0] + mark[1]) / 60) * 100);
//}

int main()
{
	//float avg(mark[2]);
	string sub;
	int mark[2];
	for (int scount = 0; scount< 4; scount++) {
		float sum = 0.0;
		cout << "Enter subject"<<endl;
		cin >> sub;
		for (int i = 0; i < 2; i++) {
			cout << "Enter marks" << endl;
			cin >> mark[i];
			sum += mark[i];
		}
		cout << (sum / 60) * 100 << endl;
		cout <<strcat(sub,mark[0],mark[1]) << endl;
	}	

}
