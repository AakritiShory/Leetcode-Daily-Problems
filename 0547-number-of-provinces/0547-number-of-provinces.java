class Solution {
    public int findCircleNum(int[][] adj) {
        int n=adj.length;
        int count=0;
        boolean[] vis=new boolean[n];
        for(int i=0;i<n;i++){
            if(!vis[i]){
                bfs(i,vis,adj); //traverse kro bfs se
                count++;
            }
        }
        return count;
        
    }
    private void bfs(int i,boolean[] vis,int[][] adj){
        int n=adj.length;
        vis[i]=true;
        Queue<Integer> q=new LinkedList<>();
        q.add(i);
        while(q.size()>0){
            int front=q.remove();
            for(int j=0;j<n;j++){
                if(adj[front][j]==1&&vis[j]==false){
                    q.add(j);
                    vis[j]=true;
                }
            }
        }
    }
}