#ifndef ASSISTANT_H
#define ASSISTANT_H
#include "employee.h"
#include <iostream>

class Assistant : public Employee {
 public:
  Assistant();
  virtual ~Assistant();
  virtual void get_paid(void);
};

#endif 
