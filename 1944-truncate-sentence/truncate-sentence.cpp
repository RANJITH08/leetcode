class Solution {
public:
    string cal (string s,int k)
    {
        int index=0,space=0;
        for(char c : s)
        {
            if(c==' ') space++;
            if(space == k) break;
            index++;
        }
        return s.substr(0,index);
    }
    string truncateSentence(string s, int k) 
    {
      return cal(s,k);
    }
};