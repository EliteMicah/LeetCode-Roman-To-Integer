// Turning a number into Roman Numeral

class Solution {
public:
    string intToRoman(int num) {
        string result = "";
        vector<pair<string, int>> romanVec {{"M", 1000}, {"CM", 900}, {"D", 500}, {"CD", 400}, {"C", 100}, 
        {"XC", 90}, {"L", 50}, {"XL", 40}, {"X", 10}, {"IX", 9}, {"V", 5}, {"IV", 4}, {"I", 1}};

        for (int j = 0; j < romanVec.size(); j++) {
            while (num >= romanVec[j].second) {
                result += romanVec[j].first;
                num -= romanVec[j].second;
            }
        }
        return result;
    }
};
