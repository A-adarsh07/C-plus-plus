// class - user defined data types 

// predifined data types - int,char,float etc

// #include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Employee {
    public:
    string Name;
    string Company;
    int Age;

    void introduction(){
        cout << "Name " << Name <<endl;
        cout <<"Company " << Company <<endl;
        cout << "Age " << Age <<endl;
    }
    
    // Constructor = doesn't have return type , same name as class , the job of construcotr here is to create object of the employee 
    Employee (string name, string company,int age ) {
        Name = name; 
        Company = company;
        Age = age;
    }

 
};

// Access Modifiers , in C++ there is 3 access modifiers - Public , Private and protected 
// by default the class is private - not accessible outside the class 


int main() {
    Employee employee1 = Employee("Adarsh","Accenture",25);
    
    employee1.introduction();
}