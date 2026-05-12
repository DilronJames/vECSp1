#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    cout << "3rd number: " << nums[2] << endl;

    nums.pop_back();

    cout << "All numbers: " << endl;

    for (int nums : nums) {
        cout << nums << " ";
    }


    return 0;
}