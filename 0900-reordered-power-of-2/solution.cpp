#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Count digits frequency of a number
    string countDigits(int n) {
        string freq(10, '0'); 
        while (n) {
            freq[n % 10]++; 
            n /= 10;
        }
        return freq;
    }

    bool reorderedPowerOf2(int n) {
        string target = countDigits(n);
        for (int i = 0; i < 31; i++) {
            if (countDigits(1 << i) == target) 
                return true;
        }
        return false;
    }
};

