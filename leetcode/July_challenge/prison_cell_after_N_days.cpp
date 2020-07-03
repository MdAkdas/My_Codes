class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, long long N) {
         long long NoOfD = (N-1)%14 + 1;
        vector<int>temp(8,0);
        while(NoOfD>0)
        {
            for(int i=0;i<8;i++)
            {
                if(i==0 or i == cells.size()-1)
                {
                    temp[i]=0;
                    continue;
                }
                
                if(cells[i-1]==cells[i+1])
                    temp[i]=1;
                else
                    temp[i]=0;
            }
            cells = temp;            
            NoOfD--;
        }       
        return cells;       
    }
};