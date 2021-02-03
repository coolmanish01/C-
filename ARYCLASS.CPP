#include<iostream.h>
#include<conio.h>
class array{
	int ar[10],n,i;
	public:
	void getary();
	void max();
	void min();
	void max2();
	void min2();
	void remove();
	void asort();
	void dsort();
	void lsearch();
	void bsearch();
	void insertion();
	void deletion();
};

void array::getary(){
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<"Enter Your Array : ";
	for(i=0;i<n;i++){
		cin>>ar[i];
	}
}

void array::max(){
	getary();
	for(i=1;i<n;i++){
		//considering ar[0] as max
		if(ar[0]<ar[i])
			ar[0]=ar[i];
	}
	cout<<"Maximum Value is "<<ar[0];
}

void array::min(){
	getary();
	for(i=1;i<n;i++){
		//considering ar[0] as max
		if(ar[0]>ar[i])
			ar[0]=ar[i];
	}
	cout<<"Minimum Value is "<<ar[0];
}

void array::max2(){
	getary();
	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ar[i]>ar[j]){
				int t;
				t=ar[i];
				ar[i]=ar[j];
				ar[j]=t;
			}
		}
	}
	cout<<"2nd Maximum is "<<ar[n-2];
}

void array::min2(){
	getary();
	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ar[i]>ar[j]){
				int t;
				t=ar[i];
				ar[i]=ar[j];
				ar[j]=t;
			}
		}
	}
	cout<<"2nd Minimum is "<<ar[1];
}

void array::remove(){
	getary();
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
}

void array::asort(){
	getary();
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
}

void array::dsort(){
	getary();
	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ar[j]>=ar[i]){
				int t=ar[i];
				ar[i]=ar[j];
				ar[j]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}
}

void array::lsearch(){
	getary();
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
}

void array::bsearch(){
	getary();
	int key;
	cout<<"Enter Element to Search : ";
	cin>>key;

	int min=0,max=n-1;
	int mid,f=0;
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
}

void array::insertion(){
	getary();
	cout<<"\nPress 1 to insert element in Beginning"
	      "\nPress 2 to insert element in the End"
	      "\nPress 3 to insert element at a perticular index"
	      "\nEnter your Choice : ";
	int ch,key;
	int no=n;//assign value of n to no
	cin>>ch;
	cout<<"Enter you Element to Insert : ";
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
		default:
			cout<<"Please Enter a valid No!";
	}
	for(i=0;i<=no;i++){
		cout<<ar[i]<<" ";
	}
}

void array::deletion(){
	getary();
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
}

void main(){
	array obj;
	int ch;
	clrscr();
	cout<<"\nPress 1 to find the largest element of array"
	      "\nPress 2 to find the smallest element of array"
	      "\nPress 3 to find the second largest element of array"
	      "\nPress 4 to find the second smallest element of array"
	      "\nPress 5 to remove all duplicate elements"
	      "\nPress 6 to sort the array in ascending order"
	      "\nPress 7 to sort the array in descendimg order"
	      "\nPress 8 for linear search in array"
	      "\nPress 9 for binary search in array"
	      "\nPress 10 to Insert Element in array"
	      "\nPress 11 to Delete Element in array"
	      "\n\nEnter Your Choice : ";
	cin>>ch;
	switch(ch){
		case 1:obj.max();
			break;
		case 2:obj.min();
			break;
		case 3:obj.max2();
			break;
		case 4:obj.min2();
			break;
		case 5:obj.remove();
			break;
		case 6:obj.asort();
			break;
		case 7:obj.dsort();
			break;
		case 8:obj.lsearch();
			break;
		case 9:obj.bsearch();
			break;
		case 10:obj.insertion();
			break;
		case 11:obj.deletion();
			break;
		default:cout<<"Please enter correct value!";
	}
	getch();
}
