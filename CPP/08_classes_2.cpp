#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
class Student{
    public:
    string name;
    string clas;
    string course;

    Student(string name, string clas, string course){
        this->name=name;
        this->clas=clas;
        this->course=course;
    }
};

int main(){
    Student *ptr=new Student("komal","cpp","btech-cse");
    cout<<ptr->name;
    cout<<endl;

    ptr->name="priya";
    cout<<ptr->name;

    delete ptr;
    return 0;
}