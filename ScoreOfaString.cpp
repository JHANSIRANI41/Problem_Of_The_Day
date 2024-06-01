//solution for the score of a string:
//we need to find the ASCII using int(char). 
class Solution {
public:
    int scoreOfString(string s) {
      int i=1;
      int ans=0;
      int n=s.size();
      while(i<n)
      {
        int val=abs(s[i]-int(s[i-1]);
        ans=ans+val;
        i++;
      }
       return ans;
    }
   
};
