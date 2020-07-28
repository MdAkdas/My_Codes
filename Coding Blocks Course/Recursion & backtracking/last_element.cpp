#include<iostream>
using namespace std;
int ans=-1;
void find(int a[],int n,int k,int i)
{ 
    if(n==0)
    return;

    if(i==n)
    return;

    if(a[i]==k)
    ans=i;

    find(a,n,k,i+1);
}

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int key;
    cin>>key;

    find(a,n,key,0);

    cout<<ans;
    
    return 0;
}