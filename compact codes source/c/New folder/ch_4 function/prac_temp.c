#include <stdio.h>
float convert();
int main (){
int celcius,ferenheight;
printf("write a celcius temp to convert it into fernheight temp\n");
scanf("%d",&celcius);
printf("the temp in ferenheight is %f", convert (celcius));
return 0;
}
float convert (celcius,ferenheight){
    float result;
    result =  ((celcius*9)/5)+32;
    return result;

return 0;

}