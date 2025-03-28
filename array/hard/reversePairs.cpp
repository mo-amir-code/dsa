#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int merge(vector<int> &nums, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    int count = 0;
    while (left <= mid && right <= high)
    {
        cout << "Left: " << nums[left] << ", Right: " << nums[right] << endl;
        if (nums[left] <= nums[right])
        {
            temp.push_back(nums[left]);
            left++;
        }
        else
        {
            temp.push_back(nums[right]);
            int res = 2 * nums[right];
            if (nums[left] > res)
                count += (mid - left + 1);
            right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(nums[left]);
        left++;
    }

    while (right <= high)
    {
        temp.push_back(nums[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        nums[i] = temp[i - low];
    }

    return count;
}

int mergeSort(vector<int> &nums, int low, int high)
{
    int count = 0;
    if (low >= high)
        return count;
    int mid = (low + high) / 2;
    count += mergeSort(nums, low, mid);
    count += mergeSort(nums, mid + 1, high);
    count += merge(nums, low, mid, high);
    return count;
}
int reversePairs(vector<int> &nums)
{
    int n = nums.size();
    return mergeSort(nums, 0, n - 1);
}

int main()
{
    vector<int> nums = {1, 3, 2, 3, 1};
    cout << reversePairs(nums)<<endl;

    for(int el : nums) cout<<el<<" ";
    return 0;
}