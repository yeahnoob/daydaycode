using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int total = 0;
        std::map<char, int> cc;
        for(char c : chars) {
            if(cc[c]) {
                cc[c] += 1;
            } else {
                cc[c] = 1;
            }
        }
        for(var w : words) {
            if(chars.length() < w.length()) {
                continue;
            }
        }
    }

    bool checkFit(vector<string>& words, string w) {
        for(char c: w) {
            if(cc[c] != NULL) {
                if(cc[c] == 0) {
                    return false;
                } else {
                    cc[c] -=1;
                    continue;
                }
            } else {
                return false;
            }
        }
        return true;
    }
};
