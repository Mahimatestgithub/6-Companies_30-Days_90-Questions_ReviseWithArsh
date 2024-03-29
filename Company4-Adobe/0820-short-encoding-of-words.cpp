bool compare(string &a,string &b){ //https://leetcode.com/problems/short-encoding-of-words/solutions/1095927/easiest-c-solution-with-explanation
    return a.length()>b.length();
}
class Solution {
public:
    
    int minimumLengthEncoding(vector<string>& words) {
        
        sort(words.begin(),words.end(),compare);
        string res="";
        res=res+words[0]+"#";
        
        for(int i=1;i<words.size();i++){
            
            int pos=res.find(words[i]+"#");
            if(pos!=-1)
                continue;
            else
                res+=words[i]+"#";
            
        }
        
        return res.length();
        
    }
};