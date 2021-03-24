#include<iostream.h>
#include<conio.h>
class abc{
	int x,y;
	public:
		abc(int x1,int y1){
			x=x1;
			y=y1;
		}
		abc(const abc &p1){
			x=p1.x;
			y=p1.y;
		}
		int getx(){
			return x;
		}
		int gety(){
			return y;
		}
};
int main(){
	abc p1(10,15);
	abc p2=p1;
	clrscr();
	cout<<"p1.x : "<<p1.getx()<<" ,p1.y : "<<p1.gety();
	cout<<"\np2.x : "<<p2.getx()<<" ,p1.y : "<<p2.gety();
	getch();
	return 0;
}
