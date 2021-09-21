//valid palindrome
class Solution {
public:
    bool isPalin(string s, int left, int right) {
	while (left < right) {
		if (s[left] != s[right]) return false;
		left++;
		right--;
	}
	return true;
}
    bool validPalindrome(string s) {
         int left = 0, right = s.length() - 1;
	while (left < right) {
		if (s[left] != s[right]) {
			return isPalin(s, left + 1, right) || isPalin(s, left, right - 1);
		}
		left++;
		right--;
	}
	return true;
    }
};
