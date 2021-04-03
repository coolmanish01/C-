#include<iostream.h>
#include<stdio.h>
#include<fstream.h>
#include<process.h>
int main(int a, char* argv[]){
	if(a!=3){
		cout<<"Can't open the file "<<endl;
		cout<<"No. of arguments : "<<a;
		return 1;
	}
	char ch;
	ifstream fin(argv[1]);
	if(fin==0){
		cout<<"\n File doesn't exist";
		exit(0);
	}
	ofstream fout(argv[2]);
	while(fin.eof()==0){
		fin.get(ch);
		fout.put(ch);
	}
	cout<<"\n 1 File Copied ";
	fin.close();
	fout.close();
	return 0;
}
