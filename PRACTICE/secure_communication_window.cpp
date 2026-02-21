long long countSecureWindows(string s) {
    // add your code here
    int n=s.length();
    long long ans=0;

    int countA=0;
    int countB=0;
    int countC=0;

    int left=0;
    for(int right=0;right<n;right++){
        if(s[right]=='a') countA++;
        else if(s[right]=='b') countB++;
        else countC++;

        while(countA>0 && countB>0 && countC>0){
            ans+=(n-right);

            if(s[left]=='a') countA--;
            else if(s[left]=='b') countB--;
            else countC--;

            left++;
        }
    }
    return ans;
}

