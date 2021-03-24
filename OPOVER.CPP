#include<iostream>
#include<conio.h>
using namespace std;
class complex{
	int r,i;
	public:
	void getno(){
		cout<<"Enter real and imaginary values";
		cin>>r>>i;
	}
	void showno(){
		cout<<"\n"<<r<<" +i"<<i;
	}
        complex operator+(complex obj){
		complex t;
		t.r=r+obj.r;
		t.i=i+obj.i;
		return t;
	}
};
int main(){
	complex c1,c2,c3;
	c1.getno();
	c2.getno();
	c3=c1+c2;
	c1.showno();
	c2.showno();
	c3.showno();
	return 0;
}
