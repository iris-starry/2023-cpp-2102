#include <iostream>
#include <string>

using namespace std;

class Employee {


public:

    Employee(){}
  
    Employee(string name, int id, int age, double salary)
        : name_(name), id_(id), age_(age), salary_(salary)
    {}

  
    void PrintInfo() {
        cout << "이름: " << name_ << endl;
        cout << "사번: " << id_ << endl;
        cout << "나이: " << age_ << endl;
        cout << "급여: " << salary_ << endl;
    }

    void setName(string name) { name_ = name; }
    void setId(int id) { id_ = id; }
    void setAge(int age) { age_ = age; }
    void setSalary(double salary) { salary_ = salary; }
    
private:
    string name_;    
    int id_;         
    int age_;       
    double salary_;  
};

int main() {
    Employee* emp1 = new Employee("홍길동", 1001, 30, 3000.0);
    emp1->PrintInfo();

    Employee* empList = new Employee[2];
    empList[0].setName("김선희");
    empList[0].setId(2102);
    empList[0].setAge(18);
    empList[0].setSalary(3500.0);

    empList[1].setName("이진선");
    empList[1].setId(2114);
    empList[1].setAge(18);
    empList[1].setSalary(2800.0);

    for (int i = 0; i < 2; i++) {
        empList[i].PrintInfo();
    }

 
    delete emp1;
    delete[] empList;

    return 0;
}