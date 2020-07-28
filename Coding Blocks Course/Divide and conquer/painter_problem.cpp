#include <iostream>
using namespace std;
#define ll long long

ll maximum(ll ar[1000000],ll N)
{
    ll max=ar[0];
    for(int i=0;i<N;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
        }
    }
    return max;
}

ll Valid(ll L[],ll N,ll Mid)
{
    ll sum=0,point=1;
    for(int i=0;i<N;i++)
    {
        sum=sum+L[i];

        if(sum>Mid)
        {   
            point++;
            sum=L[i];
        }
			//if(point == N)
			 // return true;
			//else
			// sum+=L[point];       
    }
    return point;  
}
ll PP(ll length[],ll n,ll k,ll length_sum,ll t)
{
    ll s=maximum(length,n);
    ll e=length_sum;
    ll ans;
    while(s<=e)
    { 
        ll mid=(s+e)/2;
        ll painters=Valid(length,n,mid);
        if(painters<=k)
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return (ans*t)%10000003;   
}
int main()
{
    ll n,k,length_sum=0,t;
    cin>>n>>k>>t;
	//if((n<1||n>100000)||(k<1||k>100000)||(t<1||t>1000000))
	  // return 0;   
    ll length[n];
    for(int i=0;i<n;i++)
    {
        cin>>length[i];
        length_sum=length_sum+length[i];
    }
    cout<<PP(length,n,k,length_sum,t);
    return 0;
}