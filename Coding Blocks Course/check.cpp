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

 for(int i=0;i<n;i++)
   { for(int j=i;j<n;j++)
         { for(int k=i;k<=j;k++)
               cout<<a[k]<<",";

               cout<<endl;

         }
         cout<<endl;

   }
   return 0;

}
