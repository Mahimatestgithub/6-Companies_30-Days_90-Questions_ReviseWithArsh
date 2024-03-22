class Solution {
    
public: 
    bool isValidSerialization(string s) {
    
// TIME COMPLEXITY:- O(N)
	// SPACE COMPLEXITY:- O(N)
        int curr = 1;
        string temp = "";
        s.push_back(',');
        vector<string> v;
        for(auto c:s){
            if(c==','){
                v.push_back(temp);
                temp.clear();
            }
            else
                temp.push_back(c);
        }
        for(auto str:v){
            curr--;
            if(curr<0)
                return false;
            if(str!="#")
                curr+=2;
        }
        return curr==0;
    }
};
 
    
