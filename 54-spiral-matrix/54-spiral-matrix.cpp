class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int dir=0;
        int top=0,left=0,btm=matrix.size()-1,right=matrix[0].size()-1;
        vector<int>v;
        while(top<=btm && left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    v.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dir==1)
            {
              for(int i=top;i<=btm;i++)
                {
                    v.push_back(matrix[i][right]);
                }
                right--;
              
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    v.push_back(matrix[btm][i]);
                }
                
                btm--;
            
            }
            else if(dir==3)
            {
                for(int i=btm;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                }
                left++;
                
            }
            dir++;
            dir=dir%4;
            
        }
        return v;
        
    }
};