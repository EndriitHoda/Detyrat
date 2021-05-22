class Solution {
public:
    double findMin(vector<int>& salary){
        int min = salary[0];
        for(int i = 1; i < salary.size(); i++) {
            if(salary[i] < min) min = salary[i];
        }
        return min;
    }
    double findMax(vector<int>& salary){
        int max = salary[0];
        for(int i = 1; i < salary.size(); i++) {
            if(salary[i] > max) max = salary[i];
        }
        return max;
    }
    double average(vector<int>& salary) {
        int min = findMin(salary);
        int max = findMax(salary);
        cout << min << max;
        double sum = 0;
        for(int i = 0; i < salary.size(); i++){
            if(salary[i] == min || salary[i] == max) continue;
            sum += salary[i];
        }
        return sum / (salary.size() - 2);
    }
};