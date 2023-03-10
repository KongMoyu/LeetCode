class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for(int i = 1; i < n + 1; i++){
            string s = to_string(i);
            if(i % 15 ==0) s = "FizzBuzz";
            else if(i % 3 == 0) s = "Fizz";
            else if(i % 5 == 0) s = "Buzz";
            ans.push_back(s);
        }
        return ans;
    }
};
