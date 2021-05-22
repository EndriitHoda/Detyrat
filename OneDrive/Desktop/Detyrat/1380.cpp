// Example program
#include <iostream>
#include <string>
#include <bits/stdc++.h>
Menyra 1:
using namespace std;

vector<int> numriLucky (vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> row(n, INT_MAX), col(m, INT_MIN);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            row[i] = min(row[i], matrix[i][j]);
    }
    unordered_set<int> s;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            col[i] = max(col[i], matrix[j][i]);
    }
    for(int i=0;i<n;i++)
        s.insert(row[i]);
    for(int i=0;i<m;i++)
        if(s.count(col[i]))
            return {col[i]};
    return {};
}
int main(){
    vector<vector<int>> v = {{3,7,8},{9,11,13},{15,16,17}};
    vector<int> output = numriLucky(v);
    for(auto x: output)
        cout<<x;
}

Menyra 2:
class Solution{
    public:
vector<int> luckyNumbers(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<int> row(n, INT_MAX), col(m, INT_MIN);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            row[i] = min(row[i], matrix[i][j]);
    }
    unordered_set<int> s;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            col[i] = max(col[i], matrix[j][i]);
    }
    for(int i=0;i<n;i++)
        s.insert(row[i]);
    for(int i=0;i<m;i++)
        if(s.count(col[i]))
            return {col[i]};
    return {};
}
};
