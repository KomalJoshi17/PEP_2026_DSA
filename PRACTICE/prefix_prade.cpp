int countPrefixes(vector<string>& words, string& s) {
    // add your code here
    int count=0;
    for(string word:words){
        string ans="";
        for(int i=0;i<word.length();i++){
            ans+=s[i];
        }
        if(ans==word){
            count++;
        }
    }
    return count;
}