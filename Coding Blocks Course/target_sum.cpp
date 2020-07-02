#include<iostream>
#include<algorithm>

 using namespace std;

 int main()
 { int n,sum;
 cin>>n;
 int a[n];

 for(int i=0;i<n;i++)
     cin>>a[i];

  sort(a,a+n);

 cin>>sum;


  int l=0,r=n-1;
  while(l<r)
     {  //  cout<<a[l]<<" "<<a[r]<<"<-";
        if(a[l]+a[r]==sum)
        { cout<<a[l]<<" and "<<a[r]<<endl;
          l++,r--;

         }

        if(a[r]+a[l]>sum)
            r--;

        if(a[r]+a[l]<sum)
            l++;



     }
    return 0;



 }

