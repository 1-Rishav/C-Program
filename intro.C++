#include<iostream>
using namespace std;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        cout<<"Name\n" <<Name;
        cout<<"\nCompany\n" <<Company;
        cout<<"Age\n" <<Age;
            }
        Employee(string name , string company , int age){
            Name=name;
            Company=company;
            Age=age;
        }
};

int main(){
    Employee employee=Employee("Raj" , "MasterX" , 20);
    /* employee.Name="Raj";
    employee.Company="MasterX";
    employee.Age=20; */
    employee.IntroduceYourself();
    return 0;

}
