#include <stdio.h>
void function();
void function2();
void function3();
void function4();
void function5();

int main()
{
    function();
    function2();
    function3();
    function4();
    function5();
    printf("ab21\n\n"); 
    //you can change the sequence by change order in int main (above)
    return 0;
}

void function()
{
    printf("op \n\n");
}
void function2()
{
    printf("good morning sir  \n\n");
}
void function3()
{
    printf("good afternoon \n\n");
}
void function4()
{
    printf("good night sir \n\n ");
}
void function5()
{
    printf("so ja bhai \n\n");
}