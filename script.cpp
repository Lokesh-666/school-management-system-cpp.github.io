#include<bits/stdc++.h>
#include<vector>
using namespace std;

struct student{
    string name;
    int roll;
    double age;
    char gender;
    char grade;

};// student structure

void displayAllStudents(const vector<student> AllStudents){
    for(int i=0;i<AllStudents.size();i++){
        cout<<"\n\nName: "<<AllStudents[i].name<<endl;
        cout<<"Roll NO.: "<<AllStudents[i].roll<<endl;
        cout<<"Age: "<<AllStudents[i].age<<endl;
        cout<<"Gender: "<<AllStudents[i].gender<<endl;
        cout<<"Grade: "<<AllStudents[i].grade<<endl<<endl;
    }// for loop

}// displayAllStudents
void addStudent(vector<student>& AllStudents){
    student s;
    cout<<"Enter name: ";
    cin>>s.name;
    cout<<"Enter roll: ";
    cin>>s.roll;
    cout<<"Enter age: ";
    cin>>s.age;
    cout<<"Enter gender: ";
    cin>>s.gender;
    cout<<"Enter grade: ";
    cin>>s.grade;
    AllStudents.push_back(s);
}// addStudent

void printChoicesToDo(){
    cout<<"\n1. Add Student\n2. Delete Student\n3. Update Student\n4. Display Students\n5. Exit\n";
}// printChoicesToDo

void deleteStudent(vector<student>& AllStudents){
    cout<<"Here are all students with index, Tell me index of student that you want to update: ";
    displayAllStudents(AllStudents);
    int i=-1;
    cin>>i;
    if (i<AllStudents.size()){
        AllStudents.erase(AllStudents.begin()+i);
    } // if
    else{
        cout<<"Invalid index";
        cout<<"Nothing was deleted";
    }// else
}// deleteStudent

void displayOneStudents(const vector<student> AllStudents, int i){
    
        cout<<AllStudents[i].name<<endl;
        cout<<AllStudents[i].roll<<endl;
        cout<<AllStudents[i].age<<endl;
        cout<<AllStudents[i].gender<<endl;
        cout<<AllStudents[i].grade<<endl;
    

}// displayOneStudents


void updateStudent(vector<student> &AllStudents){
    cout<<"Here are all students with index, Tell me index of student that you want to update: ";
    displayAllStudents(AllStudents);
    int i=-1;
    cin>>i;
    if (i<AllStudents.size()){
        cout<<"Enter name: ";
        cin>>AllStudents[i].name;
        cout<<"Enter roll: ";
        cin>>AllStudents[i].roll;
        cout<<"Enter age: ";
        cin>>AllStudents[i].age;
        cout<<"Enter gender: ";
        cin>>AllStudents[i].gender;
        cout<<"Enter grade: ";
        cin>>AllStudents[i].grade;
    }// if
}// updateStudent



int main(){
    vector<student> AllStudents;
    while(1){

    printChoicesToDo();
    cout<<"What is your choice: ";
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            addStudent(AllStudents);
            break;       
        case 2:
            deleteStudent(AllStudents);
            break;
        case 3:
            updateStudent(AllStudents);
            break;
        case 4:
            displayAllStudents(AllStudents);
            break;
        case 5:
            exit(0);
            break;
        default:
            cout<<"Give correct input: ";
            break;
    }// switch-case

    }// While loop
    return 0;
}// main
