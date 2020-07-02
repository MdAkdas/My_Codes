#include<bits/stdc++.h>
 using namespace std;


int main()
{  
  int n,i,m,q,l,r;
  cin>>n>>q;
long long a[n],b[n]={0};
 
 for(i=0;i<n;i++)
     cin>>a[i];

     //for(i=0;i<n;i++)
     //cout<<b[i]<<" " ;
   
   int sum;
    while(q--)
    { cin>>l>>r;

      for(i=0;i<n;i++)
        b[i]=0;

        m=0;


      for(i=l-1;i<r-1;i++)
      { 
        if(a[i+1]>a[i])
          { if(m==1)
            { 
              b[i]=0;
            }
            
            else
              { 
                b[i]=1;
                m=1;
              }
      
          }

        else
        { if(m==-1)
          {
            b[i]=0;
          }

          else
          { 
            m=-1;
            b[i]=-1;
           } 
           
        }
   
    }
     for(i=r-1;i>=0;i--)
     { if(b[i]==1)
      {
          b[r-1]=-1;
          break;
        }

       else if(b[i]==-1)
       {   
             b[r-1]=1;
         break;
       }
     }
       //for(i=0;i<n;i++)
       //  cout<<b[i]<<" " ;
   



        sum=0;
        for(i=l-1;i<=r-1;i++)
           sum+=b[i];

        if(sum==1 || sum==-1)
          cout<<"YES"<<endl;

        else
          cout<<"NO"<<endl;   

    }

    return 0;

    
}