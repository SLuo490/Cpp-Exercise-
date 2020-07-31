/*
 Shi Tao Luo
 Consecutive Ones
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count_one = 0;
    int ans  = 0;
    for(int i = 0; i < nums.size(); i++)  {
        if(nums[i] == 1)  {
            //increase count by 1
            count_one++;
            //set answer to the max between answer and count
            ans = max(ans, count_one);
        }
        else {
            //if the next number is not one, reset count to zero
            count_one = 0;
        }
    }
    return ans;
}

int main() {
    //test case:
    vector<int> nums = {1,1,0,1,1,1};
    cout << findMaxConsecutiveOnes(nums) << endl;
}
