

#include <iostream>
using namespace std;
int main()
{ int n;
cin>>n;
 int a[n];
int crsum[n]={0};
  cin>>a[0];
  crsum[0]=a[0];
 for(int x=1;x<n;x++)
     {cin>>a[x];
      crsum[x]=crsum[x-1]+a[x];
      }


    int csum=0,maxsum=0;
    int left=-1,right=-1;

 for(int i=0;i<n;i++)
   { for(int j=i;j<n;j++)
         {  csum=0;
            csum=crsum[j]-crsum[i-1];
            if(csum>maxsum)
                 {
                    maxsum=csum;
                  left=i;
                  right=j;
                  }

               cout<<endl;

         }
         cout<<endl;

   }
   cout<<"Max Sum : "<<maxsum<<endl;
   for(int k=left;k<=right;k++)
     cout<<a[k]<<" ";
   return 0;

}
