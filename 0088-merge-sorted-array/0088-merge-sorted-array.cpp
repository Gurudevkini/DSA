#include <vector>

class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        int p1 = m - 1;       // Pointer for nums1's valid elements
        int p2 = n - 1;      
        int p = m + n - 1;   

        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;
            }
            p--;
        }

        // If nums2 has leftover elements, copy them over.
        // If nums1 has leftovers, they are already in their correct positions.
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
    }
};
