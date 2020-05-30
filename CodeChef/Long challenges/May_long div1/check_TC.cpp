#include<iostream>
using namespace std;

int main()
{
    int n=100000;
    int a[n],b[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        cin>>b[i];

        if(a[i]!=b[i])
        {
            cout<<i<<" "<<a[i]<<" "<<b[i];
        }
    }
    cout<<"ok"<<endl;

    return 0;
}