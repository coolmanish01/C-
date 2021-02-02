#include<iostream.h>
#include<conio.h>
class str{
	char s1[12],s2[12];
	public:
	void len();
	void lwr();
	void upr();
	void comp();
	void rev();
	void gets1(){
		cout<<"\nEnter Your String : ";
		cin>>s1;
	}
	void gets2(){
		cout<<"\nEnter 1nd String : ";
		cin>>s1;
		cout<<"\nEnter 2nd String : ";
		cin>>s2;
	}
};
	void str::len(){
		gets1();
		for(int i=0;s1[i]!=NULL;i++);
			cout<<"\nLength of the String is "<<i;
	}
	void str::lwr(){
		gets1();
		for(int i=0;s1[i]!=NULL;i++){
			if(s1[i]>='A'&&s1[i]<='Z')
				s1[i]=s1[i]+32;
			else{
				cout<<"Please Enter String in Lowercase";
				break;
			}
		}
		cout<<"\nYour String is : "<<s1;
	}
	void str::upr(){
		gets1();
		for(int i=0;s1[i]!=NULL;i++){
			if(s1[i]>='a'&&s1[i]<='z')
				s1[i]=s1[i]-32;
			else{
				cout<<"Please Enter String in Uppercase";
				break;
			}
		}
		cout<<"\nYour String is : "<<s1;
	}
	void str::comp(){
		gets2();
		int i=0,d;
		while(s1[i]!=NULL||s2[i]!=NULL){
			d=s1[i]-s2[i];
			if(d!=0){
				cout<<"Strings are not Equal";
				break;
			}
			i++;
		}
		if(d==0)
			cout<<"Strings are Equal";
	}
	void str::rev(){
		gets1();
		int i=0;
		for(int j=0;s1[j]!=NULL;j++);
		int n=j-1;
		char t;
		while(i<n){
			t=s1[i];
			s1[i]=s1[n];
			s1[n]=t;
			i++;
			n--;
		}
		cout<<"Your String : "<<s1;
	}
void main(){
	str obj;
	int ch;
	clrscr();
	cout<<"\nPress 1 to find the length of a String"
	      "\nPress 2 to convert your String in Lowercase"
	      "\nPress 3 to convert your String in Uppercase"
	      "\nPress 4 to compare two Strings"
	      "\nPress 5 to reverse a String"
	      "\n\nEnter Your Choice : ";
	cin>>ch;
	switch(ch){
		case 1:obj.len();
			break;
		case 2:obj.lwr();
			break;
		case 3:obj.upr();
			break;
		case 4:obj.comp();
			break;
		case 5:obj.rev();
			break;
		default:cout<<"Please enter correct value!";
	}
	getch();
}