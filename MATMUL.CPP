#include<iostream.h>
#include<conio.h>
void main(){
	int A[5][5],B[5][5],C[5][5];
	int m,n,i,j,k,m1,n1,m2,n2;
	clrscr();
	cout<<"Enter Number of Rows of 1st Matrix : ";
	cin>>m1;
	cout<<"Enter Number of Columns of 1st Matrix : ";
	cin>>n1;
	cout<<"Enter Number of Rows of 2nd Matrix : ";
	cin>>m2;
	cout<<"Enter Number of Columns of 2nd Matrix : ";
	cin>>n2;
	if(n1!=m2){
		cout<<"Multiplication is Not Possible for these two Matrix!!";
	}
	else{
		cout<<"\n\tEnter Your 1st Matrix : \n";
		for(i=0;i<m1;i++){
			for(j=0;j<n1;j++){
				cout<<"Enter B["<<i<<"]["<<j<<"] :";
				cin>>A[i][j];
			}
		}
		cout<<"\n\tEnter Your 2nd Matrix : \n";
		for(i=0;i<m2;i++){
			for(j=0;j<n2;j++){
				cout<<"Enter B["<<i<<"]["<<j<<"] : ";
				cin>>B[i][j];
			}
		}
		m=m1;
		n=n2;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				C[i][j]=0;
				for(k=0;k<n1;k++){
					C[i][j] = C[i][j] + A[i][k]*B[k][j];
				}
			}
		}

		cout<<"\n\tYour Matrix Multiplication\n";
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				cout<<C[i][j]<<"\t";
			}
			cout<<endl;
		}

	}
	getch();
}