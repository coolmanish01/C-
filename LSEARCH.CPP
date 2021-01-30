#include<iostream.h>
#include<conio.h>
void main(){
	int ar[10],n;
	clrscr();
	cout<<"Enter size of Array : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter "<<i+1<<" Element : ";
		cin>>ar[i];
	}//Input Array
	int key,f=0;
	cout<<"Enter a Number to Search in Array : ";
	cin>>key;
	for(i=0;i<n;i++){
		if(ar[i]==key){
			cout<<"Key is found at "<<i<<" position\n";
			f=1;
		}
	}
	if(f==0)
		cout<<"Key is not Found";
	getch();
}