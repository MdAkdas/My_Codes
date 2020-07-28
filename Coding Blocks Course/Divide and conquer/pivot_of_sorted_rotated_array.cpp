#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
#define ll long long

ll findIndx(ll a[],ll n)
{ 
    ll ans=-1, s=0, e=n;
    if(a[s]<=a[e])
    	return 0;
    while(s<=e)
    {
    	ll mid=(s+e)/2;
       	if(a[mid]>a[mid+1])
        	return mid +1;
       	else if(a[mid]>=a[s])//pivot lie in second part
       	{
            s=mid+1;
       	}
       	else//pivot lie in first part
       	{
       		e=mid-1;
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
    
    cout<<findIndx(a,n)<<endl;
    return 0;
}