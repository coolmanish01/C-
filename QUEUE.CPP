#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class queue{
	int ar[10],f,r,key,size;
	public:
	void display();
	void push();
	void pop();
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
			case 1:ob1.push();
				break;
			case 2:ob1.pop();
				break;
			case 3:ob1.display();
				break;
			case 4:exit(0);

			default:cout<<"Please Enter a valid Input!";
		}
	}while(1);
}
void queue::push(){
	if(r<size-1){
		cout<<"\nEnter the Element to Insert : ";
		cin>>key;
		if(f==-1){
			f=r=0;
		}
		else
			r=r+1;
		ar[r]=key;
		display();
	}
	else
		cout<<"\nQueue Overflow";
}
void queue::pop(){
	if(f==-1)
		cout<<"\nQueue is Empty";
	else if(f==r){
		f=r=-1;
		display();
	}
	else{
		f++;
		display();
	}
}
void queue::display(){
	if(f==-1)
		cout<<"\nQueue is Empty \n";
	else{
		for(int i=f;i<=r;i++){
			cout<<ar[i]<<" ";
		}
	}
}
