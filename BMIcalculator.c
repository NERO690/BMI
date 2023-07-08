#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main()
{
    float height = 0.0;
    float weight = 0.0;
    float BMI = 0.0;

    printf ("what is your height: ");
    scanf ("%f" , &height);
      printf ("what is your weight: ");
    scanf ("%f" , &weight);
    printf ("what is your weight: ");
    BMI = weight * 703 / (height * height);

    if(BMI <= 29.5)
        printf("you are underweight %f. you should eat well", BMI);
    else if  (BMI <= 29.5 && BMI >= 35.5)
        printf("your score is %f, you are eating well", BMI);
    else
        printf("your score is %f, visit the gym", BMI);


}
