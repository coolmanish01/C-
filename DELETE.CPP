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
	cout<<"\nPress 1 to delete element in Beginning"
	      "\nPress 2 to delete element in the End"
	      "\nPress 3 to delete element at a perticular index"
	      "\nEnter your Choice : ";
	int ch,key;
	int no=n;//assign value of n to no
	cin>>ch;
	switch(ch){
		case 1:{
			for(i=0;i<n;i++)
				ar[i]=ar[i+1];
			break;
		}
		case 2:{
			//automatically delete when loop run from 0 to n-1
			break;
		}
		case 3:{
			cout<<"Enter the index value : ";
			int j;
			cin>>j;
			for(i=j;i<n;i++){
				ar[i]=ar[i+1];
			}
			break;
		}
		default:
			cout<<"Please Enter a valid No!";
	}//End of Switch
	for(i=0;i<no-1;i++){
		cout<<ar[i]<<" ";
	}
	getch();
}