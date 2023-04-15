#include<iostream>
#include"header/Employee.h"
using namespace std;
int main()
{
	int ch,n,ele,f;
	cout<<"\n Enter n elements=";
	cin>>n;
	Employee e[n];
	cout<<"\n inserting elements....\n";
	for(int i=0;i<n;i++)
	e[i].setdata();
	do
	{
		cout<<"\n 1.Display selected Emp \n 2.Display All";
		cout<<"\n 3.---4.Exit";
		cout<<"\n Enter choice=";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"\n Enter Employee ID to search";
			cin>>ele;
			f=1;
			for(int i=0;i<n;i++)
			{
				if(e[i].getId()==ele)
				{
					f=0;
					e[i].display();
				}
			}
			if(f==1)
			cout<<"\n Employee does not exit";
			break;
			case 2:cout<<"\n All records \n";
			for(int i=0;i<n;i++)
			e[i].display();
			break;
			case 4:break;
			default:cout<<"\n invalid \n";
		}
	}while(ch!=4);
}
