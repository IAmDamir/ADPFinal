//
// Created by Damir on 11/24/2021.
//

#pragma once
#ifndef UNTITLED2_STUDENT_H
#define UNTITLED2_STUDENT_H

#include <list>
#include <iterator>
#include "Course.h"

class Student {
public:
  Student(const string& name, const string& surname, const char* ID, const list<Course>& courses);
  ~Student();

  friend ostream& operator<<(ostream& out, const Student& student) ;

  void printCourse(const Student &student, int index) const;
  string getFullname() const;
private:
  string name;
  string surname;
  char ID[8];
  list<Course> courses;
};


#endif //UNTITLED2_STUDENT_H
