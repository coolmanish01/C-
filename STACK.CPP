#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
class stack{
	int ar[10],top,key,size;
	public:
	void push();
	void pop();
	void display();
stack(){
	top=-1;
	size=5;
	/* Here our stack will be of size 5 */
}
};
void stack::push(){
	if(top==size-1)
		cout<<"\nStack Overflow Can't Insert the Element";
	else{
		top=top+1;
		cout<<"Enter the Element to insert : ";
		cin>>key;
		ar[top]=key;
		display();
	}
}
void stack::pop(){
	if(top==-1)
		cout<<"\nStack Underflow!!";
	else{
		top=top-1;
		display();
	}
}
void stack::display(){
	if(top==-1)
		cout<<"Stack is Empty ";
	cout<<"\n";
	for(int i=top;i>=0;i--){
		cout<<ar[i]<<" ";
	}
}

void main(){
	stack ob1;
	clrscr();
	do{
		cout<<"\n\nPress 1 for Push Operation"
		      "\nPress 2 for Pop Operation"
		      "\nPress 3 to Display Stack"
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