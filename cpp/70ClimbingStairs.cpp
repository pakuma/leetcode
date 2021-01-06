#include<iostream>
#include<vector>

using namespace std;
class Solution{
    public:
        int climbStairs(int n){
            if(n == 1) return 1;
            vector<int> steps(n);
            steps[0] = 1;
            steps[1] = 2;
            for(int i = 2; i <=(int) steps.size(); i++){
              steps[i] = steps[i-1] + steps[i - 2];
            }
            return steps[n - 1];
        }
};

int main(){
    Solution s;
    int out = s.climbStairs(3);
    cout << "Output : " << out << endl;
}
