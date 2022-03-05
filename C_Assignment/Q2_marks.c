/*
Write a function that receives marks received by a student in 3 subjects
and returns the total and percentage of these marks. Call this function from
main( ) and print the results in main( ).
*/

#include <stdio.h>

void calculate(float, float, float, float *, float *);              //function prototype

int main()
{
    float s1, s2, s3, total, percent;
    
    printf("Enter the marks of 3 subjects out of 100:\n");
    scanf("%f %f %f", &s1, &s2, &s3);
    
    calculate(s1, s2, s3, &total, &percent);                //function call
    printf("The total of all the marks is: %0.3f\n", total);
    printf("The percentage of the marks is: %0.3f", percent);
    
    return 0;
}
void calculate(float a, float b, float c, float *total, float *percent) {           //function defination
    *total = a+b+c;
    *percent = ((a+b+c)/300.0)*100;
}
