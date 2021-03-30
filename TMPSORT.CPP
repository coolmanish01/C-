#include<iostream>
using namespace std;
template <class tmp>
tmp *sorting(tmp *ar,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
                tmp t;
                t=ar[i];
                ar[i]=ar[j];
                ar[j]=t;
            }
        }
    }
    return ar;
}

int main(){
    int intarray[]={7,3,9,4,2,1};
    char chararray[]={'M','A','N','I','S','H'};
    float floatarray[]={7.2,1.2,4.2,6.4,3.1,1.1};

    int *ar=sorting(intarray,6);
    for(int i=0;i<6;i++)
        cout<<ar[i]<<"\t";
    cout<<endl;

    char *br=sorting(chararray,6);
    for(int i=0;i<6;i++)
        cout<<br[i]<<"\t";
    cout<<endl;

    float *cr=sorting(floatarray,6);
    for(int i=0;i<6;i++)
        cout<<cr[i]<<"\t";
    cout<<endl;

    return 0;
}
