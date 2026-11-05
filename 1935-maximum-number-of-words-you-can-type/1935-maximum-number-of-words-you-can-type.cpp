class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int count = 0, totalvalue = 0;
        vector<int>br(26,0);
        for(char ch : brokenLetters){
            br[ch - 'a'] = 1;
        }
        bool space = false;
        for(char ch : text){
            if(ch == ' '){
                space = false;
                totalvalue++;
            }
            else if(br[ch - 'a'] == 1 && space == false){
                count++;
                space = true;
            }
        }
        totalvalue++;
        return totalvalue - count;
    }
};