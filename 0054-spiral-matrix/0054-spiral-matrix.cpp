class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size(); //no.of rows
        int c=matrix[0].size();//no. of columns
        int top=0, bottom=r-1;
        int left=0, right=c-1;
        vector<int>ans;

//pehle jao left to right phir dekho top is fixed variable hai col side
        while(left<=right && top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;

//now top to bottom 
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
// now right to left
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--; //i need to go neeche se uper islye --
            }
//now bottom to top
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return ans;
        
    }
};