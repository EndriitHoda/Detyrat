class Solution {
public:
    void reverseString(vector<char>& s) {
        int fillimi=0,fundi=s.size()-1;
        while(fundi>fillimi)
        {
            swap(s[fillimi],s[fundi]);
            fillimi++;
            fundi--;
        }
        return;
    }
};
