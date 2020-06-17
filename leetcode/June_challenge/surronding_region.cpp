class Solution {
    int N,M;
public:
    void floodFill(vector<vector<char>>&board,int x,int y, char preV,char newV)
    {
        if(x<0 || x>=M || y<0 || y>=N)
            return;
        if(board[x][y]!=preV)
        	return;

        board[x][y]=newV;

        floodFill(board,x+1,y,preV,newV);
        floodFill(board,x-1,y,preV,newV);
        floodFill(board,x,y+1,preV,newV);
        floodFill(board,x,y-1,preV,newV);
        
    }
    
    void solve(vector<vector<char>>& board) {
    	M = board.size();
    	N = board[0].size();

    	for(int i=0;i<M;i++)
    		for(int j=0;j<N;j++)
    		{
    			if(board[i][j]=='O')
    				board[i][j]='-';
    		}

    	for(int i=0;i<M;i++) //leftside
    		if(board[i][0])
    		floodFill(board,i,0,'-','O');	

    	for(int i=0;i<M;i++) //rightside
    		if(board[i][N-1])
    		floodFill(board,i,N-1,'-','O');	

    	for(int i=0;i<N;i++) //top
    		if(board[0][i])
    		floodFill(board,0,i,'-','O');

    	for(int i=0;i<N;i++) //bootom
    		if(board[M-1][i])
    		floodFill(board,M-1,i,'-','O');		

    	for(int i=0;i<M;i++)
    		for(int j=0;j<N;j++)
    		{
    			if(board[i][j]=='-')
    				board[i][j]='X';
    		}
        
        
    }
};