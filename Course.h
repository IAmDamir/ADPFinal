//
// Created by Damir on 11/24/2021.
//

#pragma once
#ifndef UNTITLED2_COURSE_H
#define UNTITLED2_COURSE_H

#include <string>
#include <cstring>
#include <stdexcept>
#include <iomanip>
#include <iostream>

using namespace std;

class Course {
public:
  Course(const string& name, const string& lecturer, const char* class_room);
  ~Course();

  friend ostream &operator<<(ostream& out, const Course& course);

private:
  string name;
  string lecturer;
  char class_room[3];
};


#endif //UNTITLED2_COURSE_H
