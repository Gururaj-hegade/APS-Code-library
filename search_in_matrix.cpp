#include<bits/stdc++.h>
using namespace  std;
bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size();
        int n=mat[0].size();
        int i=m-1;
        int j=0;
        while(i>=0 && j<n)
        {
            if(mat[i][j]==target)
                return true;
            else if(mat[i][j]>target)
                i--;
            else
                j++;
        }
        return false;
    }
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> mat(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int target;
    cin>>target;
    bool ans=searchMatrix(mat,target);
    if(ans){
        cout<<"Tareget found"<<endl;
    }else{
        cout<<"Target not found"<<endl;
    }
    return 0;
}