
#include<iostream>
using namespace std;

 int  main()
 { int n,t;
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
 cin>>t;
 while(t--)
  {cin>>n;
    
   int a[n];
   for(int i=0;i<n;i++)
    cin>>a[i];

    int cs=0,ms=0,f;

   for(int i=0;i<2*n;i++)
     {  
      if(f==i%n)
         break;

        cs=cs+a[i%n];
       if(cs<0)
       {
         cs=0;
         f=i;
        } 
        //cout<<"cs "<<cs<<endl;
       ms=max(cs,ms);
        //cout<<"ms "<<ms<<endl;

     }
  
     cout<<ms<<endl;
  } 
     return 0;

 }

          
