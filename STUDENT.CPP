#include<iostream.h>
#include<conio.h>
class student{
       int rno,sub[3];
       char name[12];
       public:
       void getdata();
       void showdata();
};

void student::getdata(){
	cout<<"Enter Your Roll No : ";
	cin>>rno;
	cout<<"Enter Your name : ";
	cin>>name;
	for(int i=0;i<3;i++){
		cout<<"Enter marks in "<<i+1<<" Subject ; ";
		cin>>sub[i];
	}
}

void student::showdata(){
	cout<<"\nRoll no : "<<rno;
	cout<<"\nName : "<<name;
	int sum=0;
	for(int i=0;i<3;i++){
		sum=sum+sub[i];
		cout<<"\nMarks in "<<i+1<<" subject : "<<sub[i];
	}
	cout<<"\nTotal Marks : "<<sum;
}

void main(){
	    student obj[10];
	    clrscr();
	    for(int i=0;i<10;i++)
		obj[i].getdata();

	    for(i=0;i<10;i++)
		obj[i].showdata();

	    getch();
}