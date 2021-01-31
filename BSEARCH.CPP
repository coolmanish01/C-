#include<iostream.h>
#include<conio.h>
void main(){
	int n,key,min,max,mid,ar[20],f=0;
	clrscr();
	cout<<"Enter the size of Array : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter "<<i+1<<" Element : ";
		cin>>ar[i];
	}//Input Array
	cout<<"Enter Element to Search : ";
	cin>>key;

	min=0,max=n-1;
	while(min<=max){
		mid=(min+max)/2;
		if(ar[mid]<key){
			min=mid+1;
		}
		else if(ar[mid]>key){
			max=mid-1;
		}
		else{
			cout<<"Element is Found";
			f=1;
			break;
		}
	}
	if(f==0)
		cout<<"Element is Not Found ";
	getch();
}