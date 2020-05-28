#include <iostream>
 using namespace std;

 int sumOfAllSubM(int **arr,int n, int m)
 { int sum=0;

 	for(int i=0;i<n;i++)
 		for(int j=0;j<m;j++)
 		{  int tl=(i+1)*(j+1);
 			int br=(n-i)*(m-j);

 			sum+=tl*br*arr[i][j];
          cout<<sum<<endl;

 		}
 		return sum;


 }

 int main(int argc, char const *argv[])
 {int n,m;
 	cin>>n>>m;

 	int **arr=new int*[n];

 	for(int i=0;i<n;i++)
 		 arr[i]=new int[m];

 	for(int i=0;i<n;i++)
 	  for(int j=0;j<m;j++)
 	      cin>>arr[i][j];

 	  cout<<"Sum of all sub Matrix is \n"<<sumOfAllSubM(arr,n,m);


 	return 0;
 }