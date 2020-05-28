#include <iostream>

using namespace std;

int water(int a[],int n)
{ int left[n],right[n];

	left[0]=a[0];
	for(int i=1;i<n;i++)
        left[i]=max(a[i],left[i-1]);

      right[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    	right[i]=max(a[i],right[i+1]);
     
     int sum=0;
     for(int i=0;i<n;i++)
       sum+=min(left[i],right[i])-a[i];


  return sum;
}

int main()
{ int n;
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	cout<<water(a,n)<<endl;

	return 0;
}