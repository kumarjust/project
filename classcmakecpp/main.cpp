// Driver file to illustrate
// the implementation of
// complexNum.cpp file
#include <iostream>
#include "header/complexNum.h"
#include "header/header.h"
#include "header/A.h"
#include "header/B.h"
#include "header/C.h"

using namespace std;

// Driver code
int main()
{
	// Defines a complex number
	// object (obj1 = 4 + 5i)
	complexNum obj1(4, 5);
	complexNum obj2;

	// Defines a complex number
	// object (obj2 = 3 + 4i)
	obj2.setNum(3, 4);

	// Prints the complex number
	obj1.print();
	obj2.print();

	// Checks, if two complex
	// number objects are equal or
	// not
	if (obj1 == obj2) {
		cout << "Both the numbers are equal" << endl;
	}
	else {
		cout << "Numbers are not equal" << endl;
	}


	cout<<"like/n"<< endl;



     std::cout << sum(2, 2)<< endl;
     std::cout << sum(112, 222)<<endl ;





	 
 A _a;
 B _b;
 C _c;
 _a.set_A();

  _b.set_B();

  _c.set_C();

 _a.disp_A();

 _b.disp_B();

_c.disp_C();


  


 int p =_a.a*_b.b*_c.c;
 cout << p<< endl;
// _c.cal_product();

 


	system("pause");


	return 0;
}
