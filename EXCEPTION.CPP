#include<iostream>
using namespace std;
int main(){
	int i,j;
	cout<<"Enter 2 No : ";
	cin>>i>>j;
	try{
		if(j==0){
			throw(j);
		}
		else
			cout<<i/j;
	}
	catch(int k){
		cout<<"You can't divide by Zero ";
	}
	return 0;
}
