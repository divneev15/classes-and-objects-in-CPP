/*Divneev Singh
24070123043
Entc A2
*/

#include<iostream>
#include<string>
using namespace std;
class Calculator{
    public:
    float a,b,add,diff,mul,div;
    void mult();
    void div1();
    void input();
    void addition(){
        add=a+b;
    }
    void subtraction(){
        diff=a-b;
    }
};
void Calculator::input(){
        cout<<"Enter The first number: "<<endl;
        cin>>a;
        cout<<"Enter The second number: "<<endl;
        cin>>b;}
void Calculator::mult(){
      mul=a*b;
    }
void Calculator::div1(){
      div=a/b;
    }    
    
int main(){
Calculator c1;
c1.input();
c1.mult();
c1.div1();
c1.addition();
c1.subtraction();
cout<<"Addition: "<<c1.add<<endl;
cout<<"Subtraction: "<<c1.diff<<endl;
cout<<"Multipilcation: "<<c1.mul<<endl;
cout<<"Divition: "<<c1.div<<endl;

}
/*
Output:
Enter The first number: 10
Enter The second number: 5      
Addition: 15
Subtraction: 5
Multipilcation: 50
Divition: 2
*/
