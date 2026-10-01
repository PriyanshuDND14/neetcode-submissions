class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        
        unordered_map<char,int> seen;

        for(int i =0; i< s.size(); i++){
            seen[tolower(s[i])]++;
            seen[tolower(t[i])]--;
        }

        for(auto x: seen){
            if(x.second != 0) return false;
        }

        return true;
    }
};
