string isHalfPalindrome(const string& s){
    // add your code here
    int n=s.size();
    int half;
    if(n%2==0){
        half=n/2;
    }else{
        half=(n/2)+1;
    }

    int left=0;
    int right=half-1;

    while(left<right){
        if(s[left]!=s[right]){
            return "NO";
        }

        left++;
        right--;
    }

    return "YES";
}
