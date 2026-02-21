int countGoodSubstrings(string s) {
    // add your code here
    int count=0;
    int n=s.size();

    for(int i=0;i+2<n;i++){
        char a=s[i];
        char b=s[i+1];
        char c=s[i+2];

        if(a!=b && a!=c && b!=c){
            count++;
        }
    }

    return count;
}
