Menyra 1:
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {


        int index = 0;
        vector<int> result;
        result.resize(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            int sum = 0;
            for (int j = 0; j < nums.size(); j++) {

                sum += abs(nums[i] - nums[j]);
            }

            result[index++] = sum;

        }


        return result;

    }
};

int main() {

    Solution sn;
    vector<int> vecOfNums{ 2,3,5 };

    vector<int> result = sn.getSumAbsoluteDifferences(vecOfNums);
    cout << "Output: ";
    for (int i = 0; i < result.size(); i++) {

        cout << result[i] << ' ';
    }

    return 0;
}
Menyra 2:
class Solution {
public:
   vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ret(nums.size(),0) ;
        int tmp = 0;
        for(int i=1; i<nums.size(); ++i)
            tmp += (nums[i]-nums[0]);
        int leftcnt = 1;
        int rightcnt = nums.size()-1;
        
        ret[0]=tmp;
        
        for(int i=1; i<nums.size(); ++i){
            ret[i] = tmp;
            ret[i] += leftcnt*(nums[i]-nums[i-1]);
            ret[i] -= rightcnt*(nums[i]-nums[i-1]);
            tmp = ret[i];
            leftcnt++;
            rightcnt--;
        }
        return ret;
    }
};