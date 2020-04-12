// C++ implementation 
#include <bits/stdc++.h> 
using namespace std; 

const long long MAX = 1000005;
long long factor[MAX]; 
const long long mod = 1000000007;
#define endl "\n"



void generatePrimeFactors() 
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
} 


long long calculateNoOFactors(long long n) 
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
} 

void addEdge(vector<long long> v[], long long x, long long y) 
{ 
	v[x].push_back(y); 
	v[y].push_back(x); 
} 


void productCost(vector<long long> stack,vector<long long>cost) 
{ 
	long long i; 
	long long pro=1;
	for (i = 0; i < (long long)stack.size(); i++)
	{ 
		//cout << stack[i] << " -> "; 
		pro=pro*cost[stack[i]];
		
		
	} 
	//cout << stack[i]; 
	
	//cout<<endl;
	//cout<<"product "<<pro<<endl;
	cout<<calculateNoOFactors(pro)<<endl;
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
	
	generatePrimeFactors();
	

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
