#include<iostream>
using namespace std;
class Employee
{
	private:
		string empName;
		int empId;
		float empSal;
		string empEmail;
		string empSkills[3];
	public:
		void setdata();
		float getSal();
		string getEmail();
		string getName();
		int getId();
		void display();
};
void Employee::setdata()
{
	cout<<"\n Enter the Employee Name=";
	cin.ignore();
	getline(cin,empName);
	cout<<"\n Enter the Employee ID=";
	cin>>empId;
	cout<<"\n Enter the Employee Salary=";
	cin>>empSal;
	cout<<"\n Enter the Employee Email=";
	cin>>empEmail;
	cout<<"\n Enter the Employee 3 Skills=";
	for(int i=0;i<3;i++)
	{
		cout<<"\n Skills["<<i+1<<"]=";
		cin>>empSkills[i];
	}
}
float Employee::getSal()
{
	return empSal;
}
string Employee::getName()
{
	return empName;
}
int Employee::getId()
{
	return empId;
}
void Employee::display()
{
	cout<<"\n---------------------\n";
	cout<<"\n Employee ID="<<empId;
	cout<<"\n Employee Name="<<empName;
	cout<<"\n Employee Salary="<<empSal;
	cout<<"\n Employee Email="<<empEmail;
	cout<<"\n Skills=";
	for(int i=0;i<3;i++)
	cout<<i+1<<":"<<empSkills[i]<<endl;
	
}
