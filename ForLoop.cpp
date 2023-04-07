class Solution {
public:
    int romanToInt(string s) {
        int value = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'I') {
                if (s[i+1] == 'V' && i+1 <= s.length()) {
                  value+=4;
                  i++;
                }
                else if (s[i+1] == 'X' && i+1 <= s.length()) {
                  value+=9;
                  i++;
                }
                else
                    value++;
            }
            else if (s[i] == 'V') {
                value+= 5;
            }
            else if (s[i] == 'X') {
                if (s[i+1] == 'L' && i+1 <= s.length()) {
                  value+=40;
                  i++;
                }
                else if (s[i+1] == 'C' && i+1 <= s.length()) {
                  value+=90;
                  i++;
                }
                else
                    value+= 10;
            }
            else if (s[i] == 'L') {
                value+= 50;
            }
            else if (s[i] == 'C') {
                if (s[i+1] == 'D' && i+1 <= s.length()) {
                  value+=400;
                  i++;
                }
                else if (s[i+1] == 'M' && i+1 <= s.length()) {
                  value+=900;
                  i++;
                }
                else
                    value+= 100;
            }
            else if (s[i] == 'D') {
                value+= 500;
            }
            else if (s[i] == 'M') {
                value+= 1000;
            }
        }
        return value;
    }
};
