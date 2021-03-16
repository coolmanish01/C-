#include<iostream.h>
#include<conio.h>
void main(){
	int A[3][3],B[3][3],i,j;
	clrscr();
	cout<<"\n\t\tSum of Two Matrix\n";

	cout<<"\n\tEnter 1st Matrix ( 3 x 3 ) \n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"Enter A["<<i<<"]["<<j<<"] : ";
			cin>>A[i][j];
		}
	}
	cout<<"\n\tEnter 2nd Matrix ( 3 x 3 ) \n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<"Enter B["<<i<<"]["<<j<<"] : ";
			cin>>B[i][j];
		}
	}

	cout<<"\n\tSum of Matrix \n";
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			int sum;
			sum = A[i][j] + B[i][j];
			cout<<sum<<"\t";
		}
		cout<<endl;
	}
	getch();
}