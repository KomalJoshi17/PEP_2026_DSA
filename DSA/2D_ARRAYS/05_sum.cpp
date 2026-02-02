// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n=3;
//     int m=3;

//     int arr[3][3]={6,2,5,1,7,9,4,8,3};

//     int sum=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//         cout<<sum<<endl;
//         sum=0;
//     }
//     return 0;
// }



// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
    
// int main(){
//     int n=3;
//     int m=3;

//     int arr[3][3]={6,2,5,1,7,9,4,8,3};

//     int sum=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//     }
//     cout<<sum;
//     return 0;
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n=3;
    int m=3;

    int arr[3][3]={6,2,5,1,7,9,4,8,3};

    int sum=0;
    int maxSum=0;
    int idx1=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
            if(sum>maxSum){
                maxSum=sum;
                idx1=i;
            }
        }
        cout<<sum<<" ";
        sum=0;
    }
    cout<<endl;
    cout<<idx1;
    return 0;
}