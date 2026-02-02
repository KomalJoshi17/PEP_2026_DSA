// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
   
// void wavePrint(int arr[][3]){
//     for(int j=0;j<3;j++){
//         if(j%2==0){
//             for(int i=0;i<3;i++){
//                 cout<<arr[i][j]<<" ";
//             }
//         }else{
//             for(int i=2;i>=0;i--){
//                 cout<<arr[i][j]<<" ";
//             }
//         }
//     }
// }

// int main(){
//     int arr[][3]={6,2,5,1,7,9,4,8,3};

//     wavePrint(arr);
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
   
void wavePrint(int arr[][3]){
    for(int i=0;i<3;i++){
        if(i%2==0){
            for(int j=2;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int j=0;j<3;j++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

int main(){
    int arr[][3]={6,2,5,1,7,9,4,8,3};

    wavePrint(arr);
    return 0;
}