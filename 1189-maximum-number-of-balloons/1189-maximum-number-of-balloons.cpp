class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int cnt[26] = {0};
        for (char c : text) cnt[c - 'a']++;

        // "balloon" needs: b=1, a=1, l=2, o=2, n=1
        return min({cnt['b' - 'a'],
                    cnt['a' - 'a'],
                    cnt['l' - 'a'] / 2,
                    cnt['o' - 'a'] / 2,
                    cnt['n' - 'a']});
    }
};