class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length(), m = s2.length();

        if (n > m)
            return false;

        vector<int> freq1(26, 0), freq2(26, 0);

        // Frequency of s1 and first window of s2
        for (int i = 0; i < n; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        // Slide the window
        for (int i = n; i < m; i++) {
            if (freq1 == freq2)
                return true;

            freq2[s2[i] - 'a']++;          // Add new character
            freq2[s2[i - n] - 'a']--;      // Remove old character
        }

        // Check the last window
        return freq1 == freq2;
    }
};
