class Solution {
    void rev(vector<char>& s, int left, int right) {
        if(left>=right) return;
        swap(s[left], s[right]);
        rev(s, left+1, right-1);
    }
public:
    void reverseString(vector<char>& s) {
        rev(s, 0, (int)s.size()-1);
    }
};