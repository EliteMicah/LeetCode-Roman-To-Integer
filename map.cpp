class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        map<char, int> romanMap {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

        for (int j = 0; j < s.size(); j++) {
            if (romanMap[s[j]] < romanMap[s[j+1]])
                result-=romanMap[s[j]];
            else
                result+=romanMap[s[j]];
        }
        return result;
    }
};
