#ifndef PROFESSOR_H
#define PROFESSOR_H
#include <iostream>
#include "employee.h"
class Professor: public Employee {
 public:
  Professor();
  virtual ~Professor();
  virtual void get_paid(void);
};
#endif // PROFESSOR_H
