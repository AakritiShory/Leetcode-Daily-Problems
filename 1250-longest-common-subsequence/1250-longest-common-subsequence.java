class Solution {
    public int longestCommonSubsequence(String s1, String s2) {
        int m=s1.length(),n=s2.length();
      //dp table taki length store ho lcs ki
      int[][]dp=new int[m+1][n+1];
      //filling dp table
      for(int i=1;i<=m;i++){
          for(int j=1;j<=n;j++){
              if(s1.charAt(i-1)==s2.charAt(j-1)){
                  dp[i][j]=dp[i-1][j-1]+1;//character match plus baki ki return
              }else{
                  dp[i][j]=Math.max(dp[i-1][j],dp[i][j-1]);
                  //excluding 1 character
              }
          }
      }
      return dp[m][n];
        
    }
}