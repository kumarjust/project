#ifndef C_H
#define C_H
#include <iostream>
#include "A.h"
#include "B.h"

using namespace std;

class C : public A, public B

{
 protected:

 

 

 public:
int c;

void set_C();


void disp_C();


 
};
#endif