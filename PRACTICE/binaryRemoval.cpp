string binaryRemoval(string& s) {
    // add your code here
    string result="";

    for(char ch:s){
        if(!result.empty() && result.back()==ch){
            result.pop_back();
        }else{
            result.push_back(ch);
        }
    }
    return result;
}