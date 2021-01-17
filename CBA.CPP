#include<iostream.h>
#include<conio.h>
void swap(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
	cout<<"\n\nValues in swap function A : "<<*a<<" B : "<<*b;
}
void main(){
	int m,n;
	clrscr();
	cout<<"Enter 1st Value : ";
	cin>>m;
	cout<<"Enter 2nd Value : ";
	cin>>n;
	cout<<"\n\nValues of A : "<<m<<" B : "<<n<< " Before Swapping";
	swap(&m,&n);
	cout<<"\n\nValues of A : "<<m<<" B : "<<n<< " After Swapping";
getch();
}