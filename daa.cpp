#include <stdio.h>

#define MAX_N 1000  // Adjust size as needed

// Function to find the total number of good triplets
int countGoodTriplets(int nums1[], int nums2[], int n) {
    int pos1[MAX_N], pos2[MAX_N];
    int count = 0;

    // Create position mapping for nums1
    for (int i = 0; i < n; i++) {
        pos1[nums1[i]] = i;
    }

    // Create position mapping for nums2
    for (int i = 0; i < n; i++) {
        pos2[nums2[i]] = i;
    }

    // Iterate over all possible triplets (x, y, z)
    for (int x = 0; x < n; x++) {
        for (int y = x + 1; y < n; y++) {
            for (int z = y + 1; z < n; z++) {
                // Check if the triplet (x, y, z) is good
                if (pos1[nums1[x]] < pos1[nums1[y]] && pos1[nums1[y]] < pos1[nums1[z]]
                    && pos2[nums1[x]] < pos2[nums1[y]] && pos2[nums1[y]] < pos2[nums1[z]]) {
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int nums1[] = {2, 0, 1, 3};
    int nums2[] = {0, 1, 2, 3};
    int n = sizeof(nums1) / sizeof(nums1[0]);

    int result = countGoodTriplets(nums1, nums2, n);
    printf("The total number of good triplets is: %d\n", result);

    return 0;
}

