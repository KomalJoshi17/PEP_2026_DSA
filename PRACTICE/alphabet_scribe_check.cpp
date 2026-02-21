string checkIfComplete(string sentence) {
    // add your code here
    if(sentence.length()<26) return "No";

    vector<bool>seen(26,false);
    int count=0;

    for(char ch:sentence){
        if(!seen[ch-'a']){
            seen[ch-'a']=true;
            count++;
        }
        if(count==26) return "Yes";
    }
    return "No";
}