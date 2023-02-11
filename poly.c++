#include <iostream>
using namespace std;
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee : AbstractEmployee
{
private:
    /* string Name; */
    string Company;
    int Age;

protected:
    string Name;

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
    virtual void Work()
    {
        cout << Name << " is checking email , task backlog, performing tasks..." << endl;
    }
};

class Developer : public Employee
{
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    }
    void FixBug()
    {
        cout << getName() /* Name */ << " fixed bug using " << FavProgrammingLanguage << endl;
    }
    void Work()
    {
        cout << Name << " is writing " << FavProgrammingLanguage << " code " << endl;
    }
};
class Teacher : public Employee
{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        Subject = subject;
    }
    void PrepareLesson()
    {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
    void Work()
    {
        cout << Name << " is teaching " << Subject << " in class " << endl;
    }
};
int main()
{
    Developer d = Developer("Raj", "MasterX", 20, "C++");
    d.FixBug();
    d.AskForPromotion();
    Teacher t = Teacher("jack", "Cool School", 33, "History");
    t.PrepareLesson();
    t.AskForPromotion();
    t.Work();
    d.Work();
    Employee *e = &t;
    Employee *e1 = &d;
    e->Work();
    e1->Work();
    /* Employee employee = Employee("Raj", "MasterX", 20); */

    /* employee.AskForPromotion(); */
    /* employee.setAge(9);
    cout<<employee.getName()<< " is "<<employee.getAge()<<" year old"; */
    return 0;
}