#include<iostream>
#include<algorithm>

 using namespace std;

int main()
{ int n,t;
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		 cin>>a[i];

	cin>>t;	

     sort(a,a+n);


    int t2,lp,rp;
	for(int i=0;i<n-2;i++)
	 { 
	 	//cout<<"a[i] "<<a[i]<<endl;
	 	lp=i+1;
	 	rp=n-1;
	 	//cout<<"lp "<<lp<<"rp "<<rp<<endl;

	 	while(lp<rp)
	 	{ if(a[lp]+a[rp]+a[i]==t)
	 		{cout<<a[i]<<" ,"<<a[lp]<<" and "<<a[rp]<<endl;
	 		 lp++,rp--;
	 		}

	 	  else if(a[lp]+a[rp]+a[i]>t)
          	  rp--;

          else if(a[lp]+a[rp]+a[i]<t)
            lp++;




	 	}
	 }	

return 0;


} 