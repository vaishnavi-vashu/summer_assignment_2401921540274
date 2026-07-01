class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.length();
        int m = p.length();

        if (m > n)
            return ans;

        vector<int> freqP(26, 0), freqS(26, 0);

        // Build frequency arrays
        for (int i = 0; i < m; i++) {
            freqP[p[i] - 'a']++;
            freqS[s[i] - 'a']++;
        }

        // Check first window
        if (freqP == freqS)
            ans.push_back(0);

        // Slide the window
        for (int i = m; i < n; i++) {
            freqS[s[i] - 'a']++;          // Add new character
            freqS[s[i - m] - 'a']--;      // Remove old character

            if (freqP == freqS)
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};
