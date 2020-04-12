 /******************************************
* AUTHOR : MD AKDAS AHMAD *
* MOTTO : IMTB
* YEAR : 2nd *
* INSTITUTION : JMI *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"


const int inf=(int)1e9;

int DigitSquare(int n) 
{ 
    int sq = 0; 
    while (n) { 
        int digit = n % 10; 
        sq += digit * digit; 
        n = n / 10; 
    } 
    return sq; 
} 

bool isHappy(int n) 
{ 
    
    while (1) 
    { 
  
        if (n == 1) 
            return true; 
  
        n = DigitSquare(n); 
        cout<<n<<endl;
  
        if (n == 4) 
            return false; 
    } 
  
    return false; 
} 


int main() 
{  
	ios_base::sync_with_stdio(false);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll n;
	cin>>n;
	cout<<isHappy(n)<<endl;

	return 0;
}