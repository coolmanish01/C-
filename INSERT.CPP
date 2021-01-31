#include<iostream.h>
#include<conio.h>
void main(){
	int ar[20],n;
	clrscr();
	cout<<"Enter the size of Array : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter "<<i+1<<" Element : ";
		cin>>ar[i];
	}//Input Array
	cout<<"\nPress 1 to insert element in Beginning"
	      "\nPress 2 to insert element in the End"
	      "\nPress 3 to insert element at a perticular index"
	      "\nEnter your Choice : ";
	int ch,key;
	int no=n;//assign value of n to no
	cin>>ch;
	cout<<"Enter your Element to Insert : ";
	cin>>key;
	switch(ch){
		case 1:{
			while(n>=0){
				ar[n]=ar[n-1];
				n--;
			}
			ar[0]=key;
			break;
		}
		case 2:{
			n=no;
			ar[n]=key;
			break;
		}
		case 3:{
			cout<<"Enter the index value : ";
			int j;
			cin>>j;
			while(n>=j){
				ar[n]=ar[n-1];
				n--;
			}
			ar[j]=key;
			break;
		}
		default
			cout<<"Please Enter a valid No!";
	}
	for(i=0;i<=no;i++){
		cout<<ar[i]<<" ";
	}

	getch();

}
