#include<iostream.h>
#include<conio.h>
class abc{
	int a,b;
	public:
		void get(){
			cout<<"Enter 2 No's ";
			cin>>a>>b;
		}
		void show(){
			cout<<a<<" "<<b<<endl;
		}
		friend void disp(abc);
};
void disp(abc obj){
	cout<<obj.a<<" "<<obj.b<<endl;
}
void main(){
	abc ob;
	ob.get();
	ob.show();
	disp(ob);
	getch();
}