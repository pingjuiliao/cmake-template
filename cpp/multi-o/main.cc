#include <iostream>
#include "employee.h"
#include "president.h"
#include "professor.h"
#include "assistant.h"

#define MAX_EMPLOYEE 10
using namespace std;

void random_init(Employee** arr, size_t size);


int main(int argc, char** argv) {
  Employee *employee_list[MAX_EMPLOYEE];
  
  // initialize
  random_init(employee_list, MAX_EMPLOYEE);
  
  // get paid
  for (int i = 0; i < MAX_EMPLOYEE; ++ i) {
    employee_list[i]->get_paid();
  }  
  return 0;
}

void random_init(Employee** arr, size_t size) {
  const int NUM_CLASS = 3;

  for (int i = 0; i < size; ++i) {
    int r = rand() % NUM_CLASS;
    switch(r) {
     case 0:
       cout << "hired a professor" << endl;
       arr[i] = new Professor();
       break;
     case 1:
       cout << "hired a asisstant" << endl;
       arr[i] = new Assistant();
       break;
     case 2:
       cout << "hired a president" << endl;
       arr[i] = new President();
       break;
    }
  }
  
} 
