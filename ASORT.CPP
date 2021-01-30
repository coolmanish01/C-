#include<iostream.h>
#include<conio.h>
void main(){
	int ar[20],n;
	clrscr();
	cout<<"Enter the size of Array : ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Enter "<<i+1<<" Element of array : ";
		cin>>ar[i];
	}//Input Array
	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ar[j]<=ar[i]){
				int t=ar[i];
				ar[i]=ar[j];
				ar[j]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
	getch();
}