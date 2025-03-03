class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> result(n);
        int left=0;

        for (int i=0;i<n;i++)
            if (nums[i] < pivot) result[left++] = nums[i];
        for (int i=0;i<n;i++) {
            if (nums[i] == pivot) {
                result[left++] = nums[i];
            }
        }
        for (int i=0;i<n;i++)
            if (nums[i] > pivot) result[left++] = nums[i];

        return result;
    }
};
////                                2nd                                ////
class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int>small;
            vector<int>equal;
            vector<int>large;
            int n=nums.size();
            for (int i = 0; i < n; i++)
            {
                if (nums[i]<pivot)
                    small.push_back(nums[i]);
                if(nums[i]==pivot)
                    equal.push_back(nums[i]);
                if(nums[i]>pivot)
                    large.push_back(nums[i]);
            }

            small.insert(small.end(),equal.begin(),equal.end());
            small.insert(small.end(),large.begin(),large.end());
            return small;
        }
    };
