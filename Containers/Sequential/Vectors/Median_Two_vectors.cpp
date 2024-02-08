#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
double findMedianSortedArrays(vector<int>&, vector<int>&);
int main()
{
    vector<int> nums1 = {1, 2};
    vector<int> nums2 = {3, 4};
    double value = findMedianSortedArrays(nums1, nums2);
    cout << "Result is "<< value <<endl;
}
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
    {
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int nums1_length = nums1.size();
        int median_index = nums1_length / 2;
        cout << "Median_length is "<< median_index<<endl;
        if(nums1_length % 2 == 0 )
        {
            
            double median_elements_add = (nums1[median_index] + nums1[median_index - 1]) ;
            cout << "median_elements_add is "<< median_elements_add<< endl;
            double median = median_elements_add / 2 ;
            cout << " Median_index is "<< nums1[median_index] << endl;
            cout << " Median_index - 1 is "<< nums1[median_index - 1] << endl;
            cout << "The result is "<< median<< endl;
            return median ;
        }
        else 
        {
            return nums1[median_index];                   
        }    
    }