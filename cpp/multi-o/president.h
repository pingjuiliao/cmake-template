#ifndef PRESIDENT_H
#define PRESIDENT_H

#include "employee.h"
#include <iostream>


class President : public Employee {
 public:
  President();
  virtual ~President();
  virtual void get_paid(void);
};
#endif // PRESIDENT_H
