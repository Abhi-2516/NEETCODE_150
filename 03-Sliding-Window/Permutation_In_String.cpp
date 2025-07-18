class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()){
            return false;
        }
        vector<int> s1count(26,0);
        vector<int> s2count(26,0);

        for(int i = 0; i<s1.length();i++){
            s1count[s1[i]- 'a']++;
            s2count[s2[i]- 'a']++;
        }
        int m = 0;
        for(int i = 0 ; i<26 ; i++){
            if(s1count[i]==s2count[i]){
                m++;
            }
        }
        int l = 0;
        for(int r = s1.length();r<s2.length();r++){
            if(m == 26) {return true;}
            int x = s2[r]-'a';
            s2count[x]++;
            if(s1count[x]==s2count[x]){
                m++;
            }
            else if(s1count[x] + 1 == s2count[x]){
                m--;
            }

            x = s2[l] - 'a';
            s2count[x]--;
            if(s1count[x] == s2count[x]){
                m++;
            }
            else if (s1count[x]-1 == s2count[x]){
                m--;
            }
            l++;

        }
        return m == 26;


    }  
        
            
};