#include<iostream.h>
#include<conio.h>
class A{
	int a;
	public:
		void get(){
			cout<<"Enter a Number : ";
			cin>>a;
		}
		void show(){
			cout<<"value : "<<a;
		}
};
class B : public A{
};
void main(){
	B x;
	clrscr();
	x.get();
	x.show();
	getch();
}
