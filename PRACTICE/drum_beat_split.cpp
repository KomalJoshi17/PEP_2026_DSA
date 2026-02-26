string solve(const string &str1, const string &str2) {
    // add your code here
    if(str1+str2!=str2+str1) return "";

    int n=str1.size();
    int m=str2.size();

    int a=n;
    int b=m;

    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return str1.substr(0,a);
}