#include<iostream.h>
#include<conio.h>
void main(){
	int ar[10],n,m2;
	clrscr();
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<"Enter Your Array : ";
	for(int i=0;i<n;i++){
		cin>>ar[i];
	}//for inpiut Array
	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ar[i]==ar[j]){
				ar[j]=0;
			}
		}
	}
	for(i=0;i<n;i++){
		if(ar[i]!=0)
			cout<<ar[i];
	}
	getch();
}