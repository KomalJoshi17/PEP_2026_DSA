// class is blueprint of object
// object is real world entity

// classes are reuseable
// classes generally have two things attributes(data members) and functionalities(behaviour/ method functions)
// by default in cpp class is private

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// class Car{
//     // data members
//     public:
//     string name;
//     string color;
//     int speed;

//     // data methods
//     void increaseSpeed(){

//     }

//     void fly(){

//     }

//     // constructor --> same name as class name and does not have any return type and its called automatically when object is created
//     // Car(){
//     //     cout<<"Default constructor method is called"<<endl;
//     // }
//     // multiple constructors are possible

//     Car(string name, string color, int speed){
//     // Car(string name1, string color1, int speed1){
//         // name=name1;
//         // color=color1;
//         // speed=speed1;

//         this->name=name;
//         this->color=color;
//         this->speed=speed;
//     }
// };

// int main(){
//     Car c1("Suzuki","Black",50); // c1 represents the real world entity
//     // cout<<c1.speed(); // gives the error because the things are not initialised
//     // everytime when object is created default method is always running behind thats why we use constructor to run things smoothly
//     // constructor is the special method that always get called when the object is created

//     cout<<c1.name;
//     cout<<endl;
//     Car c2("Tata","white",65);
//     cout<<c2.color;
//     return 0;
// }

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
    Student std1("komal","cpp","btech");
    cout<<std1.name<<" "<<std1.clas<<" "<<std1.course<<endl;

    std1.name="priya";
    cout<<std1.name;
    cout<<endl;

    Student std2("priya","dsa","btech-cse");
    std2.clas="java";
    cout<<std2.name<<" "<<std2.clas<<" "<<std2.course<<endl;
    
    // when you create object and when work is done it will automatically get deleted
    // but when in heap memory we are doing so, we have to create and delete it manually ( heap is run time memory bigger in size, undefined boundaries)
    return 0;
}