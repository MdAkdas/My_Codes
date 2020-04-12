#include<bits/stdc++.h>
 using namespace std;


int main()
{  
  int n,i,m=0,q,l,r,ex;
  cin>>n>>q;
  long long a[n],b[n]={0},d[n],ans;
 
 for(i=0;i<n;i++)
     cin>>a[i];

 for(i=0;i<n-1;i++)
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
            b[i]=1;
           } 
           
        }
   
    }
      b[n-1]=1;

           d[0]=b[0];
     for(i=1;i<n;i++)
     	 d[i]=b[i]+d[i-1];
       
     // for(i=0;i<n;i++)
      //cout<<d[i]<<" " ;
   
     
    while(q--)
    { cin>>l>>r;
    	if(d[l-1]!=d[r-1])
    	{  
    		if(b[r-1]==0)
    			ex=1;
    		else
    			ex=0;
            
           ans=(d[r-1]+ex)-(d[l-1]);

    		if(ans%2==0)
    		 cout<<"YES"<<endl;

            else
             cout<<"NO"<<endl;





    	}
    	else
             cout<<"NO"<<endl;



    }


   return 0;
  } 