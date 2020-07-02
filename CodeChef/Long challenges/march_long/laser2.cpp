#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define li long int

struct Point 
{   li x; 
    li y; 
}; 

bool onSegment(Point p, Point q, Point r) 
{ 
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && 
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y)) 
      return true; 
  
    return false; 
} 
li orientation(Point p, Point q, Point r) 
{ 
     li val = (q.y - p.y) * (r.x - q.x) -  (q.x - p.x) * (r.y - q.y); 
  
    if (val == 0) return 0; 
  
    return (val > 0)? 1: 2;
} 
bool doIntersect(Point p1, Point q1, Point p2, Point q2) 
{ 
    li o1 = orientation(p1, q1, p2); 
    li o2 = orientation(p1, q1, q2); 
    li o3 = orientation(p2, q2, p1); 
    li o4 = orientation(p2, q2, q1); 
  
   
    if (o1 != o2 && o3 != o4) 
        return true; 
  
    if (o1 == 0 && onSegment(p1, p2, q1)) return true; 
  
    
    if (o2 == 0 && onSegment(p1, q2, q1)) return true; 
  
   
    if (o3 == 0 && onSegment(p2, p1, q2)) return true; 
  
    
    if (o4 == 0 && onSegment(p2, q1, q2)) return true; 
  
    return false;
} 


int main() 
{
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
int t;
cin>>t;
while(t--)
{  int n,q;
  cin>>n>>q;
 li A[n]={0};
  for(int i=0;i<n;i++)
      cin>>A[i];
     while(q--)
       {  
        int count=0;
           int x1,x2,y;
           cin>>x1>>x2>>y;
            struct Point p1={x1,y},p2={x2,y};
             
            for(int i=0;i<n-1;i++)
              {
                  li ax,bx,cy,dy;
                  ax=i+1;
                  cy=A[i];
                  bx=ax+1;
                  dy=A[i+1];
                                 
                  bool compdy=dy>cy;
                  bool compcy=cy>dy;
                  struct Point p3={ax,cy},p4={bx,dy};
                 if(compdy  && y>dy && y<cy)
                  continue;
                 if(compcy  && y<dy && y>cy)
                  continue;  
                 if((x2==ax && y==cy) || (x1==bx && dy==y))
                  continue;
                  if(x2<ax && x2>bx)
                  continue;
                
                 if(doIntersect(p1,p2,p3,p4))
                   count++;
              }
           cout<<count<<endl;
            
       }
 
}
	return 0;
}