#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee {
 public:
  Employee();
  virtual ~Employee();
  virtual void get_paid(void);
};

#endif // EMPLOYEE_H
