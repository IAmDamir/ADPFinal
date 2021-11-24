#include <iostream>
#include "Student.h"

void student_info(const Student &student) {
  cout << student;
  int i = 0;

  char input;
  
  while (true) {
    cin >> input;
    switch (input) {
      case 'N':
        i++;
        break;
      case 'A':
        i--;
        break;
      case 'Q':
        return;
      default:
        break;
    }
    student.printCourse(student, i);
  }
}

void timetable(const std::list<Student>& student_list) {
  while (true) {
    string fullname;
    getline(cin, fullname);

    if(fullname == "Q") {
      return;
    }

    for (const auto &it: student_list) {
      if (it.getFullname() == fullname) {
        student_info(it);
      }
    }
  }
}

int main() {
  list<Student> studentList;
  list<Course> courseList1;
  list<Course> courseList2;
  list<Course> courseList3;
  Course course1("course1", "lecturer1", "C11");
  Course course2("course2", "lecturer2", "C12");
  Course course3("course3", "lecturer3", "C13");

  courseList1.push_back(course1);
  courseList1.push_back(course2);
  courseList1.push_back(course3);

  courseList2.push_back(course2);
  courseList2.push_back(course1);
  courseList2.push_back(course3);

  courseList3.push_back(course3);
  courseList3.push_back(course2);
  courseList3.push_back(course1);

  Student student1("name1", "surname1", "12345678", courseList1);
  Student student2("name2", "surname2", "12345678", courseList2);
  Student student3("name3", "surname3", "12345678", courseList3);

  studentList.push_back(student1);
  studentList.push_back(student2);
  studentList.push_back(student3);

  timetable(studentList);
  return 0;
}
