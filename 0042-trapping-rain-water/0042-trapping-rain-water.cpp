class Solution {
public:
           
    vector<int> getLeftMaxArray(vector<int>&height,int& n){
        vector<int>leftMax(n);   //n number ki left array

        leftMax[0]=height[0];  //sbse left element
        for(int i=1; i<n; i++){
            leftMax[i]=max(leftMax[i-1],height[i]);
          //jo ab tk dekha ya toh voh ya meri height jaha mai khdi hu
        }
        return leftMax;
    }

    vector<int>getRightMaxArray(vector<int>&height,int& n){
        vector<int>rightMax(n);
        rightMax[n-1]=height[n-1];  //sbse right element
        for(int i=n-2; i>=0; i--){
            rightMax[i]=max(rightMax[i+1],height[i]);
        }
        return rightMax;
    
    }

    int trap(vector<int>& height) {
        int n =height.size(); //number of elements


        vector<int> leftMax=getLeftMaxArray(height,n); //function jo call krenge array
        vector<int> rightMax=getRightMaxArray(height,n);//ko upper

        int sum=0;

        for(int i=0;i<n;i++){ //(4,5)=4-2=2
            int h=min(leftMax[i],rightMax[i])-height[i];

            sum+=h;  //water storage total
        }
        return sum;
    }
    
};