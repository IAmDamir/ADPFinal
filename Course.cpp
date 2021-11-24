//
// Created by Damir on 11/24/2021.
//

#include "Course.h"

Course::Course(const string& name, const string& lecturer, const char* class_room) {
  if (strlen(class_room) == 3) {
    strncpy(this->class_room, class_room, 3);
  } else {
    throw std::invalid_argument("No such classroom");
  }
  this->name = name;
  this->lecturer = lecturer;
}

ostream &operator<<(ostream &out, const Course& course) {
  out << setw(8) << course.name << '|';
  out << setw(8) << course.lecturer << '|';
  out << setw(3) << course.class_room;

  return out;
}

Course::~Course() = default;
