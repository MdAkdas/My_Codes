#include <iostream>
using namespace std;

bool rateInMaze(char maze[10][10],int sol[10][10],int i,int j,int m,int n)
{
	//base case
	if(i==m && n==j)
	{
		sol[i][j]=1;
		//print the path

		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=m;j++)
				cout<<sol[i][j]<<" ";
			cout<<endl;
		}cout<<endl;
		return true;
	}
	//corner case
	if(i>m || j>n)
		return false;

	if(maze[i][j]=='X')
		return false;

	sol[i][j]=1; //assuming that rat can go from current cell

	//backtracking
	bool rightSeJaSakteHai = rateInMaze(maze,sol,i+1,j,m,n);
	bool leftSeJaSakteHai = rateInMaze(maze,sol,i,j+1,m,n);

	//backtracking (visited hai ya nhi. tab bhi unvisited count krenge)
	sol[i][j]=0;

	if(rightSeJaSakteHai || leftSeJaSakteHai)
	{
		return true;
	}
	return false;
}

int main()
{
	char maze[10][10]={
						"0000",
						"00X0",
						"000X",
						"0000",
	};

	int sol[10][10]={0};
	int m=4,n=4;

	bool ans = rateInMaze(maze,sol,0,0,m-1,n-1);

	if(!ans)
	{
		cout<<"Path doesn't exist."<<endl;
	}
	return 0;
}