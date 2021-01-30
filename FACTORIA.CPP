#include<iostream.h>
#include<conio.h>
void main(){
	long int i,n,f=1;
	clrscr();
	cout<<"Enter Any Number for Factorial : ";
	cin>>n;
	for(i=1;i<=n;i++){
		f=f*i;
	}
	cout<<"\n Factorial is "<<f;
	getch();
}