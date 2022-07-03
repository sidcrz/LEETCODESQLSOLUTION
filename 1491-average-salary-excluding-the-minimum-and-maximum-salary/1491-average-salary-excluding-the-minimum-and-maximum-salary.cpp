class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double av = 0;
        for(int i = 1;i<salary.size()-1;i++){
            av += salary[i];
        }
        return av/(salary.size()-2);
    }
    
};