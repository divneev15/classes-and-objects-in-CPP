//Divneev (24070123043) Entc A2 

#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name,branch,subject,year;
    float result;
};
int main(){
Student s1;
    s1.name = "Divneev Singh";
    s1.branch = "ENTC";    
    s1.subject = "C++";
    s1.year = "2nd Year";
    s1.result = 8.5;    
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;    
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.result << endl;
     s1.name = "Avtar singh";
    s1.branch = "ENTC";    
    s1.subject = "C++";
    s1.year = "2nd Year";
    s1.result = 6.9;    
    cout << "Name: " << s1.name << endl;
    cout << "Branch: " << s1.branch << endl;    
    cout << "Subject: " << s1.subject << endl;
    cout << "Year: " << s1.year << endl;
    cout << "Result: " << s1.result << endl;

}
/*
Output:
Name: Divneev Singh
Branch: ENTC
Subject: C++
Year: 2nd Year
Result: 8.5
Name: Avtar singh
Branch: ENTC
Subject: C++
Year: 2nd Year
Result: 6.9
*/
