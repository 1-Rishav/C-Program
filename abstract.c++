#include <iostream>
using namespace std;
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee : AbstractEmployee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company)
    {
        Company = company;
    }
    string getCompany()
    {
        return Company;
    }
    void setAge(int age)
    {
        if (age >= 18)
        {
            Age = age;
        }
        Age = age;
    }
    int getAge()
    {
        return Age;
    }
    void IntroduceYourself()
    {
        cout << "Name " << Name;
        cout << "Company " << Company;
        cout << "Age " << Age;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion()
    {
        if (Age > 30)
            cout << Name << " got promoted " << endl;
        else
            cout << Name << ", sorry No promotion for you" << endl;
    }
};

int main()
{
    Employee employee = Employee("Raj", "MasterX", 20);
    employee.AskForPromotion();
    /* employee.setAge(9);
    cout<<employee.getName()<< " is "<<employee.getAge()<<" year old"; */
    return 0;
}