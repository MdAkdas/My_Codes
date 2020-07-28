#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
#define ll long long

ll findIndx(ll a[],ll n,ll key)
{ 
    ll ans=-1, s=0, e=n;
    while(s<=e)
    {
        ll mid=(s+e)/2;
        if(a[mid]==key)
            return mid;

        else if(a[mid]>=a[s]) // key lies in left part
        {
            if(key>=a[s] && key <= a[mid])
                e=mid-1;
            else
                s=mid+1;

        }
        else//key lies in right part
        {
            if(key>=a[mid] && key<=a[e])
                s = mid+1;
            else
                e=mid - 1;
        }
    }
    return ans;
}

int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll key;
    cin>>key;
    cout<<findIndx(a,n,key)<<endl;
    return 0;
}