#include<iostream.h>
#include<conio.h>
class employee{
	int eno;
	char ename[12];
	long bsal;
	long da,it,netsal;
	public:
	void getdata(){
		cout<<"\nEnter your Name : ";
		cin>>ename;
		cout<<"\nEnter Your Employee Number : ";
		cin>>eno;
		cout<<"\nEnter your Basic Salary : ";
		cin>>bsal;
	}
	void salary(){
		da=0.52*bsal;
		netsal=bsal+da;
		it=0.3*netsal;
		netsal=netsal-it;
	}
	void showdata(){
		cout<<"Hello Mr. "<<ename<<" Employee Number : "<<eno;
		cout<<"\nYour basic salary is : "<<bsal;
		salary();
		cout<<"\nYour DA is "<<da<<" and IT(Income Tax) is "<<it;
		cout<<"\nYour Gross Salary is : "<<netsal;
	}
};
void main(){
	clrscr();
	cout<<"\tCalculate Your Gross Salary";
	employee n1;
	n1.getdata();
	n1.showdata();
	getch();
}