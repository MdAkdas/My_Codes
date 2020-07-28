#include <iostream>
using namespace std;

bool isSafe(int board[][10],int n,int i,int j)
{
	//check for queen in col
	for(int row=0;row<n;row++)
	{
		if(board[row][j]==1)
			return false;
	}

	//check for queen in left diagonal
	int x=i;
	int y=j;

	while(x>=0 && y>=0)
	{
		if(board[x][y]==1)
			return false;
		x--,y--;
	}

	//check for queen in right diagonal
	x=i,y=j;
	while(x>=0 && j<n)
	{
		if(board[x][y]==1)
			return false;
		x--,y++;

	}
	// position i j is safe now
	return true;
}

bool Nqueen(int board[][10],int n,int i)
{
	if(i==n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<board[i][j]<<" ";
			}cout<<endl;
		}cout<<endl;
		return true;
	}

	for(int j=0;j<n;j++)
	{

		if(isSafe(board,n,i,j))//safe for current pos of past queen. but may not be suitable for future queen.
		{
			//assuming i,j is right pos wrt future queen
			board[i][j]=1;			
			if(Nqueen(board,n,i+1))
				return true;

			//means i,j is not right pos,assumption is wrong
			//backtracking
			board[i][j]=0;
		}
	}
	return false;

}

int main()
{	
	int n;
	cin>>n;
	int board[10][10]={0};

	if(!Nqueen(board,n,0))
		cout<<"No such position."<<endl;
	return 0;
}