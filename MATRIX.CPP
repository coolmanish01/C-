#include<iostream>
using namespace std;
class Matrix{
    int ar[3][3];
public:
    void input(){
        int seq;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<"Enter "<<++seq<<" Element : ";
                cin>>ar[i][j];
            }
        }
        seq=0;
    }
    void output(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<ar[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
    friend Matrix operator+(Matrix ,Matrix );
    friend Matrix operator-(Matrix ,Matrix );
};
Matrix operator+(Matrix a,Matrix b){
    Matrix tmp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tmp.ar[i][j] = a.ar[i][j] + b.ar[i][j];
        }
    }
    return tmp;
}
Matrix operator-(Matrix a,Matrix b){
    Matrix tmp;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            tmp.ar[i][j] = a.ar[i][j] - b.ar[i][j];
        }
    }
    return tmp;
}

int main(){
    Matrix m1,m2,m3,m4;
    cout<<"Enter First Matrix \n\n";
    m1.input();
    cout<<"Enter Second Matrix \n\n";
    m2.input();

    m3=m1+m2;//m3 contains the addition
    m4=m1-m2;//m4 contains the Subtraction

    cout<<"\nSum of Matrix is : \n";
    m3.output();
    cout<<"\nSubtraction of Matrix is : \n";
    m4.output();

    return 0;
}
