#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float find_Voltage(float i,float r){
    return i*r;
}
float find_Resistance(float v,float i){
    return v/i;
}
float find_Current(float v,float r){
    return v/r;
}
int main(){
    float value1,value2;
    char choice;
    
    while (1)
    {
    printf("please enter two values to find the third value:\n");
    printf("enter respectively v for voltage,r for resistance,i for current\n");
    printf("example:to find voltage,enter r and i\n");
    printf("for example,if you want to find resistance(r),you should respectively enter v and i\n");

    printf("enter first value: \n");
    scanf("%f", &value1);
    printf("enter second value: \n");
    scanf("%f", &value2);
    printf("enter the type of value you want to find(v/r/ı):\n");
    scanf(" %c", &choice); // Note the space before %c

    switch(choice){
        case 'v':
        printf("Voltage(v)=%.2f\n", find_Voltage(value1,value2));
        break;
        case 'r':
        printf("resistance(r)=%.2f\n",find_Resistance(value1,value2));
        break;
        case 'i':
        printf("Current(i)=%.2f\n",find_Current(value1,value2));
        break;
    }
    return 0;
    }
}