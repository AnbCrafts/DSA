/**
 * ============================================================================
 * TCS DYNAMIC SLIDING WINDOW PRACTICE (C++)
 * Target: TCS NQT / Digital / Prime
 * ============================================================================
 * 
 * Instructions:
 * 1. Read `dynamic_sliding_window_practice.md`.
 * 2. Implement your solution in the functions below.
 * 3. Run main() to test against sample test cases.
 * 4. Submit your code here for review!
 * 
 * Compile & Run:
 *   g++ -std=c++17 my_sliding_window_practice.cpp -o my_sliding_window_practice
 *   ./my_sliding_window_practice
 * ============================================================================
 */

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <climits>
#include <algorithm>

using namespace std;

// ============================================================================
// PROBLEM W1: Longest Substring Without Repeating Characters
// Return: Max length of substring with all unique characters.
// Time: O(N), Space: O(min(N, alphabet_size))
// ============================================================================
int lengthOfLongestSubstring(string s) {
    // TODO: Write your solution here using dynamic sliding window + set/map
    return 0;
}

// ============================================================================
// PROBLEM W2: Minimum Size Subarray Sum (Smallest Subarray with Sum >= target)
// Return: Minimal length of contiguous subarray with sum >= target, or 0.
// Time: O(N), Space: O(1)
// ============================================================================
int minSubArrayLen(int target, const vector<int>& nums) {
    // TODO: Write your solution here using dynamic sliding window (Flavor 2: Minimize)
    return 0;
}

// ============================================================================
// PROBLEM W3: Longest Substring with At Most K Distinct Characters
// Return: Max length of substring with at most k distinct characters.
// Time: O(N), Space: O(K)
// ============================================================================
int lengthOfLongestSubstringKDistinct(string s, int k) {
    // TODO: Write your solution here using dynamic sliding window + frequency map
    return 0;
}

// ============================================================================
// PROBLEM W4: Max Consecutive Ones III (Longest Subarray with at most K zeros)
// Return: Maximum consecutive 1s after flipping at most k zeros.
// Time: O(N), Space: O(1)
// ============================================================================
int longestOnes(const vector<int>& nums, int k) {
    // TODO: Write your solution here tracking count of zeros
    return 0;
}

// ============================================================================
// PROBLEM W5: Subarray Product Less Than K
// Return: Total count of contiguous subarrays with product strictly < k.
// Time: O(N), Space: O(1)
// ============================================================================
int numSubarrayProductLessThanK(const vector<int>& nums, int k) {
    // TODO: Write your solution here (Flavor 3: Count subarrays)
    return 0;
}

// ============================================================================
// PROBLEM W6: Fruit Into Baskets (Longest subarray with at most 2 fruit types)
// Return: Maximum number of fruits you can pick.
// Time: O(N), Space: O(1)
// ============================================================================
int totalFruit(const vector<int>& fruits) {
    // TODO: Same as Problem W3 with k = 2
    return 0;
}

// ============================================================================
// TEST HARNESS
// ============================================================================

void runTests() {
    cout << "========================================" << endl;
    cout << " DYNAMIC SLIDING WINDOW TEST RUNNER" << endl;
    cout << "========================================" << endl;

    // Test W1
    cout << "\n[Test W1] Longest Substring Without Repeating: ";
    cout << lengthOfLongestSubstring("abcabcbb") << " (Expected: 3)" << endl;

    // Test W2
    cout << "[Test W2] Minimum Size Subarray Sum: ";
    vector<int> t2 = {2, 3, 1, 2, 4, 3};
    cout << minSubArrayLen(7, t2) << " (Expected: 2)" << endl;

    // Test W3
    cout << "[Test W3] Longest with at most 2 Distinct: ";
    cout << lengthOfLongestSubstringKDistinct("eceba", 2) << " (Expected: 3)" << endl;

    // Test W4
    cout << "[Test W4] Max Consecutive Ones with 2 flips: ";
    vector<int> t4 = {1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    cout << longestOnes(t4, 2) << " (Expected: 6)" << endl;

    // Test W5
    cout << "[Test W5] Subarray Product Less Than 100: ";
    vector<int> t5 = {10, 5, 2, 6};
    cout << numSubarrayProductLessThanK(t5, 100) << " (Expected: 8)" << endl;

    // Test W6
    cout << "[Test W6] Fruit Into Baskets: ";
    vector<int> t6 = {1, 2, 3, 2, 2};
    cout << totalFruit(t6) << " (Expected: 4)" << endl;

    cout << "\nReady! Pick a problem, implement it, and share your solution for review.\n";
}

int main() {
    runTests();
    return 0;
}
