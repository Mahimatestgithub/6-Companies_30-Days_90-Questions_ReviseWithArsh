class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string> ans;
        pad("", digits, ans);
        return ans;
    }

    vector<string> pad(string p, string str, vector<string>& ans) {
        if(str.empty()) {
            ans.push_back(p);
            return ans;
        }
        int digit = str[0] - '0';
        if(digit < 7) {
            for(int i=(digit - 2)*3;i<(digit - 1)*3;i++) {
                char ch = 'a' + i;
                pad(p + ch, str.substr(1), ans);
            }
        }
        else if(digit == 7) {
                for(int i=(digit - 2)*3;i<=(digit - 1)*3;i++) {
                    char ch = 'a' + i;
                    pad(p + ch, str.substr(1), ans);
            }
        }
        else if(digit == 8) {
                for(int i=(digit - 2)*3 + 1;i<=(digit - 1)*3;i++) {
                    char ch = 'a' + i;
                    pad(p + ch, str.substr(1), ans);
            }
        }
        else if(digit == 9) {
                for(int i=22;i<=25;i++) {
                    char ch = 'a' + i;
                    pad(p + ch, str.substr(1), ans);
            }
        }
        return ans;
    }
};

