#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class queue{
	int ar[10],f,r,key,size;
	public:
	void print();
	void insert();
	void del();
queue(){
	f=r=-1;
	size=5;
}

};
void main(){
	queue ob1;
	clrscr();
	do{
		cout<<"\n\nPress 1 for Push Operation"
		      "\nPress 2 for Pop Operation"
		      "\nPress 3 to Display Queue"
		      "\nPress 4 to Exit"
		      "\nEnter Your Choice : ";
		int ch;
		cin>>ch;
		switch(ch){
			case 1:ob1.insert();
				break;
			case 2:ob1.del();
				break;
			case 3:ob1.print();
				break;
			case 4:exit(0);

			default:cout<<"Please Enter a valid Input!";
		}
	}while(1);
}
void queue::insert(){
	if(r<size-1){
		cout<<"\nEnter the Element to Insert : ";
		cin>>key;
		if(f==-1){
			f=r=0;
		}
		else
			r=r+1;
		ar[r]=key;
		print();
	}
	else
		cout<<"\nQueue Overflow";
}
void queue::del(){
	if(f==-1)
		cout<<"\nQueue is Empty";
	else if(f==r){
		f=r=-1;
		print();
	}
	else{
		f++;
		print();
	}
}
void queue::print(){
	if(f==-1)
		cout<<"\nQueue is Empty \n";
	else{
		for(int i=f;i<=r;i++){
			cout<<ar[i]<<" ";
		}
	}
}
