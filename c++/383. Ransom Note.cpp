class Solution {
    public:
        bool canConstruct(string ransomNote, string magazine) {
            unordered_map<char,int> map;
            if(ransomNote.size() > magazine.size()){
                return false;
            }
                for(int i=0;i<magazine.size();i++){
                map[magazine[i]]++;
            }
        
            for(int i=0;i<ransomNote.size();i++){
                if(map[ransomNote[i]] >0){ // check if map has at least one ransomNote[i] letter
                    map[ransomNote[i]]--; // if yes, delete that letter's amount value
                }
                else{
                    return false; // if = 0, return false
                }
            }
        return true;
        }
};
