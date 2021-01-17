#include<iostream.h>
#include<conio.h>
#include<string.h>
void add(int a,int b){
	cout<<"Sum : "<<a+b;
}
void add(char *a,char *b){
	cout<<strcat(a,strcat(" ",b));
}
void main(){
	clrscr();
	cout<<  "\nPress 1 for Addition"
		"\nPress 2 for Concatination"
		"\nEnter Your choice : ";
	int ch,a,b;
	char s1[10],s2[10];
	cin>>ch;
	if(ch==1){
		cout<<"\nEnter Your First Number : ";
		cin>>a;
		cout<<"\nEnter Your Second Number : ";
		cin>>b;
		add(a,b);
	}
	else if(ch==2){
		cout<<"Enter First String : ";
		cin>>s1;
		cout<<"Enter Second String : ";
		cin>>s2;
		add(s1,s2);
	}
	else
		cout<<"Please choose a valid Number!";

getch();
}