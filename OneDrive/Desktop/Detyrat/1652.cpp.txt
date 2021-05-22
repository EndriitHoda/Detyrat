class Solution {
public:
    int reminder(int a, int b){
        if(a < 0){
            return b + a;
        }
        else {
            return a%b;
        }
    }
    int sum(vector<int> & code, int k, int fromIndex){
        int sum = 0;
        
        int to = fromIndex + reminder(k, code.size());
        if(k > 0){
            for(int i = fromIndex + 1; i <= to; i++){
                sum += code[reminder(i, code.size())];
            }
        } else {
            for(int i = to; i < code.size() + fromIndex; i++){
                sum += code[reminder(i, code.size())];
            }
        }
        return sum;
    }
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> _copyCode = code;
        
        if(k == 0){
            for(int i = 0; i < code.size(); i++){
                code[i] = 0;
            }
        }
        else {
            for(int i = 0; i < code.size(); i++){
                code[i] = sum(_copyCode, k, i);
            }
        }
        return code;
    }
};