// C++ implementation 
#include <bits/stdc++.h> 
using namespace std; 

const long long MAX = 1000005;
long long factor[MAX]; 
const long long mod = 1000000007;
#define endl "\n"
#define ll long long



/*void generatePrimeFactors() 
{ 
    factor[1] = 1; 

    for (long long i = 2; i < MAX; i++) 
        factor[i] = i; 

    
    for (long long i = 4; i < MAX; i += 2) 
        factor[i] = 2; 

    
    for (long long i = 3; i * i < MAX; i++) { 
        
        if (factor[i] == i) { 
            
            for (long long j = i * i; j < MAX; j += i) { 
                if (factor[j] == j) 
                    factor[j] = i; 
            } 
        } 
    }

        // for(int i=0;i<10000005;i++)
        //     {
        //         cout<<i<<" "<<factor[i]<<" ";
        //         if(factor[i]==0)
        //             cout<<"eee"<<endl;
        //     }
} */


/*long long calculateNoOFactors(long long n) 
{ 
    if (n == 1) 
        return 1; 

    long long ans = 1; 
    long long dup = factor[n];  
    long long c = 1; 
    long long j = n / factor[n]; 

    while (j != 1)
     { 
        
        if (factor[j] == dup) 
            c += 1; 

        else { 
            dup = factor[j]; 
            ans = ans * (c + 1); 
            ans =ans%mod; 
            c = 1; 
        } 
        j = j / factor[j]; 
    } 

    
    ans = ans * (c + 1);
    ans =ans%mod; 

    return ans; 
} */

void addEdge(vector<long long> v[], long long x, long long y) 
{ 
    v[x].push_back(y); 
    v[y].push_back(x); 
} 


void productCost(vector<long long> stack,vector<long long>cost) 
{ 
    long long i; 
    long long pro=1;
    map<ll,ll>mp;

    for (i = 0; i < (long long)stack.size(); i++)
    { 
        //cout << cost[stack[i]] << " -> "; 
        ll n=cost[stack[i]];
        while (n % 2 == 0) 
        { 
            //cout << 2 << " ";
            mp[2]++; 
            n = n/2; 
        } 

    // n must be odd at this point. So we can skip 
    // one element (Note i = i +2) 
        for (int i = 3; i <= sqrt(n); i = i + 2) 
        { 
            // While i divides n, print i and divide n 
            while (n % i == 0) 
            { 
                //cout << i << " ";
                mp[i]++; 
                n = n/i; 
            } 
        } 

    // This condition is to handle the case when n 
    // is a prime number greater than 2 
        if (n > 2)
        { 
            //cout << n << " ";
            mp[n]++;
        } 

        //cout<<endl;
            
            
    }
   
    for(auto m : mp)
    {
        //cout<<m.first<<" "<<m.second<<endl;
        pro*=(m.second+1);
        pro=pro%mod;

    } 
    //cout << stack[i]; 
    
    cout<<pro<<endl;
    mp.clear();
    //cout<<"product "<<pro<<endl;
    //cout<<calculateNoOFactors(pro)<<endl;
} 

void DFS(vector<long long> v[], bool vis[], long long x, long long y, vector<long long> stack,vector<long long>cost) 
{ 
    stack.push_back(x); 
    if (x == y) 
    { 
        productCost(stack,cost); 
        return; 
    } 
    vis[x] = true; 

    
    long long flag = 0; 
    if (!v[x].empty()) 
    { 
        for (long long j = 0; j < v[x].size(); j++) 
        { 
            
            if (vis[v[x][j]] == false) 
            {   
                DFS(v, vis, v[x][j], y, stack,cost); 
                flag = 1; 
            } 
        } 
    } 
    if (flag == 0) 
    { 
        stack.pop_back(); 
    } 
} 
void DFSCall(long long x, long long y, vector<long long> v[], long long n, vector<long long> stack,vector<long long>cost) 
{ 
    // visited array 
    bool vis[n + 1]; 

    memset(vis, false, sizeof(vis)); 
    DFS(v, vis, x, y, stack,cost); 
} 

int main() 
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    // generatePrimeFactors();
    

    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n++;
        vector<long long> v[n], stack;

        vector<long long>cost;
        long long p1, p2;

        for(long long i=1;i<=n-2;i++)
        {
            cin>>p1>>p2;
            addEdge(v,p1,p2);
        }
        long long c;
        cost.push_back(0);
        for (long long i = 1; i < n; i++)
        {
            cin >> c;
            cost.push_back(c);
        }

        long long q;
        cin >> q;
        while (q--)
        {
            cin>>p1>>p2;
            DFSCall(p1, p2, v, n, stack,cost); 
            stack.clear();
        }
    }

    return 0; 
} 

/*1
20
1 2
1 3
2 4
2 5
3 6
3 7
4 8
4 9
5 10
5 11
6 12
6 13
7 14
7 15
8 16
8 17
9 18
9 19
10 20
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
8
1 5
5 10
10 15
15 20
1 10
1 20
10 20
5 15


// Output
// 4
// 6
// 72
// 150
// 9
// 20
// 12
// 36*/

