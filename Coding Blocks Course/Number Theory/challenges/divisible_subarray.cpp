#include <iostream>
#include<vector>
#include<cstring>
using namespace std;
#define ll long long

/*int subCount(ll arr[], int n, int k) 
{ 

    int mod[k]; 
    memset(mod, 0, sizeof(mod)); 
    
    int cumSum = 0; 
    for (int i = 0; i < n; i++) 
    { 
        cumSum += arr[i]; 
        
        mod[((cumSum % k) + k) % k]++; 
    } 
    
    int result = 0; 
    
    for (int i = 0; i < k; i++) 
    {
        if (mod[i] > 1) 
            result += (mod[i] * (mod[i] - 1)) / 2; 
    }

    result += mod[0]; 

    return result; 
} 
*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll A[n];

        for(int i=0;i<n;i++)
            cin>>A[i];

        int K =n;
        vector<int>ans(K);
        ans[0]=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=A[i];
            sum%=K;
            sum=(sum+K)%K;
            ans[sum]++;
            
        }
        int res=0;
        for(int i=0;i<K;i++)
        {
            int m=ans[i];
            res+=(m*(m-1))/2;
        }
        return res;


    }

    return 0;
}