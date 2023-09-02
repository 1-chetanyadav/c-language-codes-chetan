#include <iostream>
// #include <stdio.h>
using namespace std;
int main () {
// local variable declaration:
char grade = 'D';
switch(grade) {
case 'A' :
cout << "Outstanding!" << endl;
break;
case 'B' :
case 'C' :
cout << "Well done" << endl;
break;
case 'D' :
cout << "Pass" << endl;
break;
case 'F' :
cout << "Try again" << endl;
break;
default :
cout << "Invalid grade" << endl;
}
cout << "Your grade is " << grade << endl;
return 0;
}