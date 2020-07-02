//#include<bits/stdc++.h>
//sing namespace std;
//#include <stdio.h>

#include <iostream>
using namespace std;
int main()
{ int n;
cin>>n;
 int a[n];
 for(int x=0;x<n;x++)
    cin>>a[x];

    int csum=0,maxsum=0;

 for(int i=0;i<n;i++)
   { for(int j=i;j<n;j++)
         {  csum=0;
          for(int k=i;k<=j;k++)
               { csum=csum+a[k];
                 if(csum>maxsum)
                    maxsum=csum;
               }

               cout<<endl;

         }
         cout<<endl;

   }
   cout<<"Max Sum : "<<maxsum;
   return 0;

}
