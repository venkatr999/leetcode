class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
         int dir=0;
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
                temp.push_back(0);
            }
            v.push_back(temp);
        }
        int top=0,left=0,btm=n-1,right=n-1,t=1;
        while(top<=btm && left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    v[top][i]=t;
                    t++;
                }
                top++;
            }
            else if(dir==1)
            {
              for(int i=top;i<=btm;i++)
                {
                    v[i][right]=t;
                    t++;
                }
                right--;
              
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    v[btm][i]=t;
                    t++;
                }
                
                btm--;
            
            }
            else if(dir==3)
            {
                for(int i=btm;i>=top;i--)
                {
                    v[i][left]=t;
                    t++;
                }
                left++;
                
            }
            dir++;
            dir=dir%4;
            
        }
        return v;
    }
};