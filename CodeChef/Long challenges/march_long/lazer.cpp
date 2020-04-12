 /******************************************
* AUTHOR : MD AKDAS AHMAD *
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

const int inf=(int)1e9;

struct Point 
{ 
	ll x; 
	ll y; 
}; 

// Given three colinear points p, q, r, the function checks if 
// point q lies on line segment 'pr' 
bool onSegment(Point p, Point q, Point r) 
{ 
	if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && 
		q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y)) 
	return true; 

	return false; 
} 

// To find orientation of ordered triplet (p, q, r). 
// The function returns following values 
// 0 --> p, q and r are colinear 
// 1 --> Clockwise 
// 2 --> Counterclockwise 
int orientation(Point p, Point q, Point r) 
{ 
	// See https://www.geeksforgeeks.org/orientation-3-ordered-points/ 
	// for details of below formula. 
	int val = (q.y - p.y) * (r.x - q.x) - 
			(q.x - p.x) * (r.y - q.y); 

	if (val == 0) return 0; // colinear 

	return (val > 0)? 1: 2; // clock or counterclock wise 
} 

// The main function that returns true if line segment 'p1q1' 
// and 'p2q2' intersect. 
bool doIntersect(Point p1, Point q1, Point p2, Point q2) 
{ 
	// Find the four orientations needed for general and 
	// special cases 
	int o1 = orientation(p1, q1, p2); 
	int o2 = orientation(p1, q1, q2); 
	int o3 = orientation(p2, q2, p1); 
	int o4 = orientation(p2, q2, q1); 

	// General case 
	if (o1 != o2 && o3 != o4) 
		return true; 

	// Special Cases 
	// p1, q1 and p2 are colinear and p2 lies on segment p1q1 
	if (o1 == 0 && onSegment(p1, p2, q1)) return true; 

	// p1, q1 and q2 are colinear and q2 lies on segment p1q1 
	if (o2 == 0 && onSegment(p1, q2, q1)) return true; 

	// p2, q2 and p1 are colinear and p1 lies on segment p2q2 
	if (o3 == 0 && onSegment(p2, p1, q2)) return true; 

	// p2, q2 and q1 are colinear and q1 lies on segment p2q2 
	if (o4 == 0 && onSegment(p2, q1, q2)) return true; 

	return false; // Doesn't fall in any of the above cases 
} 


int main() 
{  
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   ll t,n,q,a;
   cin>>t;
   while(t--)
   {
   	cin>>n>>q;
   	vector<pair<ll,ll>>p;

   	rep(i,n)
   	{  cin>>a;
   		p.pb(make_pair(i+1,a));

   	}
   	struct Point p1 = {0, 0}, q1 = {0, 0}; 
	struct Point p2 = {0, 0}, q2 = {0, 0}; 
    
    ll x1,y1,x2,y2;
    while(q--)
    {  
    	cin>>x1>>x2>>y1;
    	y2=y1;
    	ll count=0;
	   	rep(i,n-1)
	   	{  //cout<<i+1<<endl;
	   		struct Point p1 = {p[i].first, p[i].second }, q1 = {p[i+1].first, p[i+1].second}; 
		    struct Point p2 = {x1, y1}, q2 = {x2, y2}; 
              

		    if(doIntersect(p1, q1, p2, q2))
		     count++;

		    if(p[i].first==x2 && p[i].second==y2 || p[i+1].first==x1 && p[i+1].second==y1 ) 
		    	count--;
	   	}
	   	cout<<count<<endl;

	}   	


   }

 return 0;
}