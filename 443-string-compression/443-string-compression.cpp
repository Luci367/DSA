class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int ansIndex =0;
        int n = chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            
            }
            // this loop ends if traversal has ended or next character 
            chars[ansIndex++] = chars[i]; // saving the old char
            int count = j-i;
            if(count > 1){
                string cnt = to_string(count);
                for( char ch:cnt){
                    chars[ansIndex++] = ch;
                }
            }
            i=j;
        }
        return ansIndex;
        
    }
};