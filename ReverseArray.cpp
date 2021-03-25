#include <iostream.h>
#include <conio.h>
int main(){
    int ar[20],n,i;
    cout<<"Enter size of Array ";
    cin>>n;
    clrscr();
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    int l=n;//preseving the size
    for(i=0;i<n;i++){
        int t;
        t=ar[i];
        ar[i]=ar[n-1];
        ar[n-1]=t;
        n--;
    }
    for(i=0;i<l;i++){
        cout<<ar[i]<<"\t";
    }
    getch();
    return 0;
}
