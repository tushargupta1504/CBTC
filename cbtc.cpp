#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
public:
  string name;
  int age;
  double gpa;
  
  Student(string name, int age, double gpa) {
    this->name = name;
    this->age = age; 
    this->gpa = gpa;
  }
};

class Records {
private:
  vector<Student> students;

public:
  void addStudent(Student student) {
    students.push_back(student);
  }
  
  void printStudents() {
    for(Student s : students) {
      cout << "Name: " << s.name << ", Age: " << s.age << ", GPA: " << s.gpa << endl; 
    }
  }
};

int main() {
  Records records;
  
  Student john("John Doe", 18, 3.5);
  Student jane("Jane Smith", 17, 3.8);
  
  records.addStudent(john);
  records.addStudent(jane);
  
  records.printStudents();
  
  return 0;
}