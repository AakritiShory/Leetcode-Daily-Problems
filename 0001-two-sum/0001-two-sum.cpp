class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //int n=nums.size();
        // map<int,int>m;

        // for(int i=0;i<n;i++){
        //     int r=target-nums[i];

        //     if(m.find(r) != m.end()){
        //         return {m[r],i};
        //     }
        //     m[nums[i]]=i;
        // }
        // return {};  //index dega


        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    return{i,j};
                }
            }
           
        }
        return{-1,-1};
    }   
};