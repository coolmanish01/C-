#include<iostream.h>
#include<conio.h>
void main(){
	int i,n,t1=0,t2=1,nextterm;
	clrscr();
	cout<<"Enter the Number of Terms : ";
	cin>>n;
	cout<<"Fibonacci Series : ";
	for(i=0;i<=n;i++){
		cout<<" "<<t1;
		nextterm = t1+t2;
		t1=t2;
		t2=nextterm;
	}
	getch();
}