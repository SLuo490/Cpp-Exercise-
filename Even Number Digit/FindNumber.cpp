/*
 Shi Tao Luo
 Find Even Number Digits
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int findNumbers (vector<int> & nums) {
    int count = 0;
    
    //loop through vector
    for (int i = 0; i < nums.size();i++) {
        //change each number to string and find its length
        //check if num is even, if it is, increase count by 1
        if (to_string(nums[i]).length() % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    //Test Case:
    vector <int> nums = {32,12,1,5,100,10};
    cout << findNumbers(nums) << endl;
}
