#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;        //name of employee
    int idNumber;       //ID number of employee
    string department;  //Department of employee
    string position;    //Position of employee
public:
    Employee(string n, int id, string dpt, string pt) {
        setName(n);
        setID(id);
        setDepartment(dpt);
        setPosition(pt);
    } //end constructor1

    Employee(string n, int id) {
        setName(n);
        setID(id);
        setDepartment(" ");
        setPosition(" ");
    } //end constructor2

    Employee() {
        setName(" ");
        setID(0);
        setDepartment(" ");
        setPosition(" ");
    } //end constructor2

    void setName(string n) {
        name = n;
    }

    void setID(int ID) {
        idNumber = ID;
    }

    void setDepartment(string d) {
        department = d;
    }

    void setPosition(string p) {
        position = p;
    }

    string getName() {
        return name;
    }
    int getIdNumber() {
        return idNumber;
    }
    string getDepartment() {
        return department;
    }
    string getPosition() {
        return position;
    }
};

int main() {
    Employee Susan("Susan Meyer", 47899, "Accounting", "Vice President");
    Employee Mark("Mark Jones", 39119, "IT", "Programmer");
    Employee Joy("Joy Rogers", 81774, "Manufacturing", "Engineer");

    cout << "Name" << "\t\t\t" << "ID Number" << "\t" << "Department" << "\t\t" << "Position" << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << Susan.getName() << "\t\t" << Susan.getIdNumber() << "\t\t" << Susan.getDepartment() << "\t\t" << Susan.getPosition() << endl;
    cout << Mark.getName() << "\t\t" << Mark.getIdNumber() << "\t\t" << Mark.getDepartment() << "\t\t\t\t" << Mark.getPosition() << endl;
    cout << Joy.getName() << "\t\t" << Joy.getIdNumber() << "\t\t" << Joy.getDepartment() << "\t" << Joy.getPosition() << endl;
    return 0;
}