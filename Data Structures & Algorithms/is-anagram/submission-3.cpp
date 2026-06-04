#include <algorithm>


class Solution {
public:
    bool isAnagram(string s, string t) {
        //count the characters
        if(s.size() != t.size())
            return false;

        
        std::map<char, int> charCounter;

        for(auto item: s)
        {
            charCounter[item] += 1;
        }

        for(auto item: t)
        {
            charCounter[item] -= 1;
        }

        for (auto it = charCounter.begin(); it != charCounter.end(); ++it) {
            std::cout << it->first << " -> " << it->second << '\n';
        }

        bool allZero = std::all_of(
            charCounter.begin(),
            charCounter.end(),
            [](const auto& p){
                return (p.second  == 0);
            }
        );

        if (allZero)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
