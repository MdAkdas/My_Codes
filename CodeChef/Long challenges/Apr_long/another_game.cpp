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
#define INT_BITS 32 
#ifdef BUILD_64
# define BITS_PER_LONG 64
#else
# define BITS_PER_LONG 32
#endif


const int inf=(int)1e9;

char *binstr (unsigned long n, size_t sz)
{
	
    static char s[BITS_PER_LONG + 1] = {0};
    char *p = s + BITS_PER_LONG;
    register size_t i;

    if (!n) {
        *s = '0';
        return s;
    }

    for (i = 0; i < sz; i++)
        *(--p) = (n>>i & 1) ? '1' : '0';

    return p;
	
}


int leftRotate(int n, unsigned int d) 
{ 
      
    /* In n<<d, last d bits are 0. To 
     put first 3 bits of n at  
    last, do bitwise or of n<<d  
    with n >>(INT_BITS - d) */
    return (n << d)|(n >> (INT_BITS - d)); 
} 

void decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 


int main() 
{  
	// ios_base::sync_with_stdio(false);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;
		int f=6;

		while(f>0)
		{
			int x = a xor b;
			cout<<a<<"        "<<b<<"        "<<x<<endl;
			cout<<bitset<8>(a)<<" "<<bitset<8>(b)<<" "<<bitset<8>(x); 

			//ll b1=bitset<8>(b);
			//cout<<b1<<endl;
			// printf ("%s ", binstr (a, 8));
			// printf ("%s ", binstr (b, 8));
			// printf ("%s", binstr (x, 8));
			cout<<" "<<endl<<endl;

			leftRotate(a,b);

			f--;

		}


   

  

	}
	return 0;
}