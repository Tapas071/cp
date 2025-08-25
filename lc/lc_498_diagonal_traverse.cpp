#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<pair<int,int>> terminal;
        for( int i =0; i< n; i++){
            for( int j=0;j< m ; j++){
                if( i==n-1 or j==0){
                    terminal.push_back({i,j});
                }
            }
        }
        vector<vector<int>> diags;
        vector<int> ans;
        for( auto x : terminal){
            int i =x.first , j = x.second;
            vector<int> diag;
            while(true){
                diag.push_back(mat[i][j]);
                i--;
                j++;
                if( i==-1 or j==m){
                    diags.push_back(diag);
                    break;
                }
            }
        }
        for( int i =0; i<diags.size();i++){
            if( i%2){
                reverse( diags[i].begin(),diags[i].end());
            }
            for( int j = 0;j< diags[i].size();j++){
                ans.push_back(diags[i][j]);
            }
        }
        return ans;
        
    }
};
int main(){

    return 0;
}
