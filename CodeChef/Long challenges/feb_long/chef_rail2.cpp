#include<bits/stdc++.h>
using namespace std;
#define N 1e5
#define ll long long

int main()
{ freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);

  long long t,m,n,i,j;
  cin>>t;

  while(t--)
  { cin>>n>>m;
    vector<ll>a,b;
    vector<ll>x2,y2;
    vector<int>arr1(2*N,0);
    vector<int>arr3(2*N,0);

    //for(i=1;i<1e5;i++)
      // x2[i]=i*i;

   // for(i=1;i<1e5;i++)
     //  y2[i]=i*i;

    ll o,zx=0,zy=0;

    for(i=0;i<n;i++)
     { cin>>o;
        a.push_back(o);
        x2.push_back(o*o);
        arr1[o+N]=1;
        if(o==0)
         zx=1;

     }

     for(i=0;i<m;i++)
     { cin>>o;
        b.push_back(o);
        y2.push_back(o*o);
        arr3[o+N]=1;
        if(o==0)
         zy=1;

     }

     for(i=0;i<n;i++)
      cout<<x2[i]<<" ";
      cout<<endl;

     for(i=0;i<m;i++)
      cout<<y2[i]<<" ";
      cout<<endl; 

       ll x,y,mycount=0;
     for(i=0;i<n;i++)
     { x=a[i];
       if(x==0)
         continue;

        for(j=0;j<m;j++)
        {  

          long double sr = -(y2[i]/x);
          if(y2[j]==0)
            continue;
          cout<<" sr "<<sr<<endl;


          if((sr - floor(sr)) == 0)
           {  if(arr1[(ll)(sr)+N]==1&& a[i]!=b[j])
               { cout<<"a[i] b[j] sr "<<a[i]<<" "<<b[j]<<" "<<sr<<endl;
                mycount++;
                }

              //if(arr3[-(ll)(sr)+N]==1)
              //{ cout<<"a[i] b[j] sr "<<a[i]<<" "<<b[j]<<" "<<sr<<endl;
                //mycount++;
                //}
             // break;

           }

        }



     }

         for(i=0;i<m;i++)
         { y=b[i];
           if(y==0)
             continue;

            for(j=0;j<n;j++)
            { 
              long double sr = -(x2[j]/y);
               if(sr==0)
               continue;

              if((sr - floor(sr)) == 0)
               {  if( arr3[(int)(sr)+N]==1 &&a[i]!=b[j] )
                   { cout<<"b[i] a[j] sr "<<b[i]<<" "<<a[j]<<" "<<sr<<endl;
                    mycount++;
                    }

                  //if(arr1[-(int)(sr)+N]==1)
                  //{ cout<<"a[i] a[j] sr "<<a[i]<<" "<<b[j]<<" "<<sr<<endl;
                  //mycount++;
                 // }
                 // break;

               }

            }

         }
         mycount=mycount/2;

     if(zx==1&&zy==1)
      mycount+=2*(n-1)*(m-1);
     else if(zx==1)
      mycount+=(n-1)*m;
     else if(zy==1)
      mycount+=(m-1)*n;

      cout<<mycount<<endl;

  }
  return 0;

}
