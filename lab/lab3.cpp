#include <iostream>
using namespace std;

class Employee {
private:
    string firstName;
    string lastName;
    int mSalary;
public:
    Employee() {
        firstName = " ";
        lastName = " ";
        mSalary = 0;
    }

    void setFirstName(string tmp)
    {
        firstName = tmp;
    }
    void setLastName(string tmp)
    {
        lastName = tmp;
    }
    void setMsalary(int tmp)
    {
        if (tmp > 0)
            mSalary = tmp;
    }
    string getFirstName() 
    {
        return firstName;
    }
    string getLastName() 
    {
        return lastName;
    }
    int getMsalary() 
    {
        return mSalary;
    }

};

int main() {
    Employee obj1;

    cout << obj1.getMsalary();

    return 0;
}