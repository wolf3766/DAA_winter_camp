class Solution {
public:
    //two pointer approach
    vector<vector<int>>mergeArrays(vector<vector<int>>&nums1,vector<vector<int>>&nums2){
       int i=0,j=0,n1=nums1.size(),n2=nums2.size();
        vector<vector<int>>ans;
        while(i<n1 && j<n2){
            if(nums1[i][0]==nums2[j][0]){
                ans.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]});
                i++;
                j++;
            }else if(nums1[i][0]<nums2[j][0]){
                ans.push_back({nums1[i][0],nums1[i][1]});
                i++;
            }else{
                ans.push_back({nums2[j][0],nums2[j][1]});
                j++;
            }
        }
        while(i<n1){
            ans.push_back({nums1[i][0],nums1[i][1]});
            i++;
        } 
        while(j<n2){
            ans.push_back({nums2[j][0],nums2[j][1]});
            j++;
        }
        return ans;
    }
};