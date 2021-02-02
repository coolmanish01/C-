#include<iostream.h>
#include<conio.h>
class ABC{
	int a,b,c;
	public:

	void get(){
	cout<<"Enter No of Hours : ";
	cin>>a;
	cout<<"Enter No of Minutes : ";
	cin>>b;
	cout<<"Enter No of Seconds : ";
	cin>>c;
	}
	void show(){

	cout<<a<<":"<<b<<":"<<c<<"\n";
	}

	ABC time(ABC obj){
		ABC t;
		t.a=a+obj.a;
		t.b=b+obj.b;
		t.c=c+obj.c;
		if(t.c>60){
			t.c=t.c-60;
			t.b=t.b+1;
		}
		if(t.b>60){
			t.b=t.b-60;
			t.a=t.a+1;
		}
		return t;
	}
};
void main(){
	clrscr();
	ABC ob1,ob2,ob3;
	ob1.get();
	ob2.get();
	ob3=ob1.time(ob2);
	ob1.show();
	ob2.show();
	ob3.show();
	getch();
}