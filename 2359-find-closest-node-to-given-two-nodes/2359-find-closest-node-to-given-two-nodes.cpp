class Solution {
public:
    int closestMeetingNode(vector<int>&edges,int n1,int n2) {
        int n=edges.size();
        vector<bool>visited(n,false);
        vector<int>path1(n,-1),path2(n,-1);
        int ans=-1,cnt=0,dis=INT_MAX;
        while(n1!=-1){
            if(visited[n1])break;
            path1[n1]=cnt;
            cnt++;
            visited[n1]=true;
            n1=edges[n1];
        }
         for(int i=0;i<n;i++)visited[i]=false;
        cnt=0;
        while(n2!=-1){
            if(visited[n2])break;
            path2[n2]=cnt;
            cnt++;
            visited[n2]=true;
            n2=edges[n2];
        }
        for(int i=0;i<n;i++){
            if(path1[i]==-1 || path2[i]==-1)continue;
            if(dis>max(path1[i],path2[i])){
                ans=i;
                dis=max(path1[i],path2[i]);
            }
        }
        return ans;
    }
};