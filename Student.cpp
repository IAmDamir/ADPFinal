//
// Created by Damir on 11/24/2021.
//

#include "Student.h"

Student::Student(const string& name, const string& surname, const char* ID, const list<Course>& courses) {
  if (strlen(ID) == 8) {
    strncpy(this->ID, ID, 3);
  } else {
    throw std::invalid_argument("ID is not correct");
  }
  this->name = name;
  this->surname = surname;
  this->courses = courses;
}

ostream &operator<<(ostream &out, const Student &student){
  out << '|';
  out << setw(8) << student.name << '|';
  out << setw(8) << student.surname << '|';
  out << setw(8) << student.ID << '|' << endl;
  out << '|';
  out << *student.courses.begin() << '|';

  return out;
}

void Student::printCourse(const Student &student, int index) const {
  cout << '|';
  auto it = student.courses.begin();
  for (int i = 0; i < index; ++i) {
    it++;
  }

  cout << *it;
  cout << '|';
}

string Student::getFullname() const {
  return name + ' ' + surname;
}

Student::~Student() = default;
