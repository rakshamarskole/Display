#include<iostream>
using namespace std;
int main()
{
	int*p;
	int a[5],i,c;
	cout<<"Enter elements: ";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		
	}
	p=a;
	cout<<"You entered: ";
    for(i=0;i<5;i++)
	{
		cout<<*p<<endl;
		p++;
	}
	return 0;
}
