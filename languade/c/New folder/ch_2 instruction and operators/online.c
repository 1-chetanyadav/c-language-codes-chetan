
#include <stdio.h>
int main () {
// local variable declaration:
char grade = 'D';
switch(grade) {
case 'A' :
printf( "Outstanding!");
break;
case 'B' :
case 'C' :
printf( "Well done");
break;
case 'D' :
printf( "Pass");
break;
case 'F' :
printf( "Try again");
break;
default :
printf( "Invalid grade");
}
printf("Your grade is ", grade);
return 0;
}