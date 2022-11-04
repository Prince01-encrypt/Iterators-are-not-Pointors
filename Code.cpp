class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int size1 = nums.size();
        set<int,greater<int>> temp;
        set<int> :: iterator it;
        for(int i = 0; i < size1; i++) {
            temp.insert(nums[i]);
        }
        if(temp.size() < 3) {
            // cout << "ass";
            return *(temp.begin());
        }
        it = temp.begin();
        it++;
        it++;
        return *it;
    }
};
