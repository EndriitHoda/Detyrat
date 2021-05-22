Menyra 1:
#include <iostream>

using namespace std;

int main()
{
    const int n = 4;
    int m[n][n];
    int d_majtas = 0, d_djathtas = 0;
    cout << "Sheno elementet e matrices" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i + 1 << "][" << j + 1 << "]=";
            cin >> m[i][j];
            if (i == j)
                d_majtas += m[i][j];
            if ((i + j) == n-1 && i != j)
                d_djathtas += m[i][j];
        }
    }

    cout << "Shuma e elementeve ne diagonale eshte " << d_djathtas + d_majtas;


    return 0;
}
Menyra 2:
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat.size(); j++){
                if(i == j){
                    sum += mat[i][j];
                    continue;
                }
                else if(mat.size() -1 - i == j){
                    sum += mat[i][j];
                    continue;
                }
            }
        }
        return sum;
    }
};