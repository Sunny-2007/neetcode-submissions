class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int front = 0, back = numbers.size() - 1;
        while(front < back) {
            if(numbers[front] + numbers[back] < target) {
                front++;
            }
            else if(numbers[front] + numbers[back] > target){
                back--;
            }
            else {
                vector<int> v;
                v.push_back(front+1);
                v.push_back(back+1);
                return v;
            }
        }
    }
};
