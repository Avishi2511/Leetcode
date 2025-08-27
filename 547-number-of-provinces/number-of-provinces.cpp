class Solution {
private:
    /*
    void dfs(int node, vector<vector<int>> &adjLs, vector<int> &vis){
        vis[node] = 1;
        for(auto it : adjLs[node]){
            if(!vis[it]){
                dfs(it, adjLs, vis);
            }
        }
    }
    */
public:
    void dfs(int node, vector<vector<int>> adjList, vector<int> &vis){
        vis[node] = 1;
        for(auto it : adjList[node]){
            if(vis[it]==0){
                dfs(it,adjList,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<vector<int>> adjList(V);

        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(i!=j && isConnected[i][j]==1){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

        vector<int> visited(V,0);
        int cnt = 0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                cnt++;
                dfs(i,adjList,visited);
            }
        }

        return cnt;




        /*
        int V = isConnected.size();
        vector<vector<int>> adjLs(V);

        //first change matrix to list
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjLs[i].push_back(j);
                    adjLs[j].push_back(i);
                }
            }
        }

        vector<int> vis(V, 0);
        int cnt = 0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt++;
                dfs(i,adjLs,vis);
            }
        }

        return cnt;
        */
    }

};



//TOPOLIGAL SORT (UNRELATED)

    /*
  void dfs(int node, int vis[], stack<int> st, vector<int> adj){
        vis[node] = 1;
        for(auto it : adj[node]){
            if(!vis[it]) dfs(it, vis, st, adj);
        }
        st.push(node);
    }


    vector<int> topoSort(int V, vector<int> adj[]){
        int vis[V] = {0};
        stack<int> st;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                st.push(vis[i]);
                dfs(i, vis, st);
            }
        }

        vector<int> ans;
        while(!st.empty()){
            int s = st.pop();
            ans.push_back(s);
        }

        return ans;
    }
    */