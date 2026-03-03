#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // properties ||attributes

private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // non-parameterized
    Teacher()
    {
        cout << "Hii,I am constructor" << endl;
        dept = "Computer Science";
    };

    // parameterized
    //  Teacher(string n, string d, string s, double sal)
    //  {
    //      name = n;
    //      dept = d;
    //      subject = s;
    //      salary = sal;
    //  }
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    // copy constructor
    Teacher(Teacher &t)
    {
        cout << "i am custom copy constructor\n";
        name = t.name;
        dept = t.dept;
        subject = t.subject;
        salary = t.salary;
    }

    // methods || member fuction

    void changeDept(string newDept)
    {
        dept = newDept;
    };
    // setter function to set private properties to value

    void setSalary(double s)
    {
        salary = s;
    };

    // getter fuction to get private properties

    double getSalary()
    {
        return salary;
    };
    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "dept: " << dept << endl;
        cout << "subject: " << subject << endl;
        cout << "salary: " << salary << endl;
    }
};

class Account
{

private:
    double balance;
    string password;

public:
    string accountId;
    string username;
};

int main()
{
    Teacher t1("Shradha", "ComputerScience", "c++", 25000);

    // t1.name = "Shradha";
    // t1.subject = "c++";
    // t1.dept = "Computer Science";
    // t1.salary = 25000;
    // cout << t1.name << endl;
    // cout << t1.dept << endl;
    // t1.getInfo();

    Teacher t2(t1); // default copy constructor -invoke
    t2.getInfo();
    return 0;
}