class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int p = accounts.size();
        int c = 0;
        int h = 0;

        for (int i=0;i<p;i++){
            c = accumulate(accounts[i].begin(),accounts[i].end(),0);     
            if(c > h) { 
                h = c; 
            }
            c = 0; 
        }
        return h;
    }
};
