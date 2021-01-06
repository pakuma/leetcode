#include<iostream>
#include<vector>

using namespace std;
class Solution{
    public:
        int climbStairs(int n){
            vector<int> steps(n);
            steps[0] = 1;
            steps[1] = 2;
            for(int i = 2; i <= steps.size(); i++){
                cout << "executed " << "\n";
                steps[i] = steps[i-1] + steps[i - 2];
            }
            return steps[n - 1];
        }
};

int main(){
    int n = 3;
    Solution s;
    int out = s.climbStairs(3);
    cout << "Output : " << out << endl;
}
