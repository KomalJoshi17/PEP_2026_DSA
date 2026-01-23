// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int age=5;
//     int &ref=age; // & represents reference and ref is another name of the box where previously name is age
//     ref=20; // ref is updated therefore age is also updated becauses its just like adding into the same box having two names
//     cout<<age<<" "<<ref;
//     return 0;
// }


// passed by value
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
   
// void increment(int x){
//     x++;
//     cout<<"Inside function : "<<x<<endl;
// }

// int main(){
//     int age=5;
//     increment(age);
//     cout<<"inside main : "<<age<<endl; // will return age as 5 because when i have passed age into function and then function is taking the paramter, then here what actually happens is like the copy is created and function performs the work on that copy and not actually the function is working on the age 
//     return 0;
// }

// passed by reference
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
void increment(int &x){ // reference is given and now the value changes all over because same is block is given with the same name
    x++;
    cout<<"Inside function : "<<x<<endl;
}

int main(){
    int age=5;
    increment(age);
    cout<<"inside main : "<<age<<endl;
    return 0;
}