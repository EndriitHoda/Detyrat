class Solution {
public:
    int findMaxByIndex(vector<int>& stones){
        int max = 0;
        for(int i =0 ;i < stones.size(); i++){
            if(stones[i] > stones[max]) max = i;  
        }
        return max;
    }
    int findMaxByIndex(vector<int>& stones, int ignoreIndex){
        
        int max;
        if(ignoreIndex != 0) max = 0;
        else max = 1;
        for(int i =0 ;i < stones.size(); i++){
            if(stones[i] > stones[max] && i != ignoreIndex) max = i;  
        }
        return max;
    }
    
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size() > 1){
            int maxIndex = findMaxByIndex(stones);
            int secondMaxIndex = findMaxByIndex(stones, maxIndex);
            if(stones[maxIndex] == stones[secondMaxIndex]) {
                    if(maxIndex > secondMaxIndex){
                        stones.erase(stones.begin() + maxIndex);
                        stones.erase(stones.begin() + secondMaxIndex);
                    }
                    else {
                        stones.erase(stones.begin() + secondMaxIndex);
                        stones.erase(stones.begin() + maxIndex);
                    }
            }
            else {
                stones[maxIndex] -= stones[secondMaxIndex];
                stones.erase(stones.begin() + secondMaxIndex);
            }
            lastStoneWeight(stones);
        }
        if(stones.size() == 1){
            return stones[0];
        }
        else return 0;
    }
};