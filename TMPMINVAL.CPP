#include<iostream>
using namespace std;
template < class tmp >
void minimum(tmp e[10], int n)
{
    int i, j;
    tmp small = e[0];

    for(i=0;i<n;i++)
    {
        if(small>e[i])
        {
            small = e[i];
        }
    }
    cout<<"\nSmallest Element:"<<small;
}
int main()
{
    int n=5;
    int a[5] = {3,2,4,1,5};
    float b[5] = {1.2,1.9,2.3,1.4,1.5};
    char c[5] = {'k','b','z','d','e'};
    minimum(a,n);
    minimum(b,n);
    minimum(c,n);
    return 0;
}
