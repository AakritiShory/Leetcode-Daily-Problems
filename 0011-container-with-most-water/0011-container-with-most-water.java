class Solution {
    public int maxArea(int[] height) {
        int n=height.length; //array ka size number of rods

        int i=0, j=n-1;
        int maxWater=0; //jaaha water store ho raha hoga

        while(i<j){
            int w=j-i;  //paani store hoga min height pr
            int h=Math.min(height[i],height[j]);
            int area=w*h;

            maxWater=Math.max(maxWater,area);

            if(height[i]>height[j]){
                --j;
            }else{
                i++;
            }

        }
        return maxWater;
        
    }
}