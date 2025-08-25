/* Divneev singh
PRN 24070123043
ENTC A2
*/

#include<iostream>
using namespace std;

class Car
{
    public: 
    string brand_name;
    string price;
    int year;


    void Brand_name()
    {
        cout<<"Enter the name of the car : ";
        cin>>brand_name;

    }
    
    void Price()
    {
        cout<<endl<<"Enter the price of the car : ";
        cin>>price;
    }

    void Year()
    {
        cout<<endl<<"Enter the year in which the car is bought : ";
        cin>>year;
    }

    void display()
    {
        cout<<"\nThe name of the car brand is : "<<brand_name<<endl;
        cout<<"The price of the car is : "<<price<<endl;
        cout<<"The year in which the car was bought is : "<<year<<endl;
    }

}; // end of class

int main()
{
    Car c;
    c.Brand_name();
    c.Price();
    c.Year();
    c.display();

}

/* output for this code 
Enter the name of the car : BMW

Enter the price of the car : 1cr  

Enter the year in which the car is bought : 2023

The name of the car brand is : BMW
The price of the car is : 1cr
The year in which the car was bought is : 2023

*/
