#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &nums1, vector<int> &nums2)
{
    int i = 0, j = 0;
    vector<int> v;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] <= nums2[j])
        {
            v.push_back(nums1[i]);
            i++;
        }
        else
        {
            v.push_back(nums2[j]);
            j++;
        }
    }
    while (i < nums1.size())
    {
        v.push_back(nums1[i]);
        i++;
    }
    while (j < nums2.size())
    {
        v.push_back(nums2[j]);
        j++;
    }
    return v;
}
int main()
{
    vector<int> nums1;
    vector<int> nums2;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);
    vector <int> result = merge(nums1,nums2);
    cout<<"After merge sort"<<endl;
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    

    return 0;
}