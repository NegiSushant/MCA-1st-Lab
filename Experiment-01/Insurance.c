/*
            Ques-->>> write a program to calculate the insurance ammount based upon the given condition.
                                1) if age 21-30 then the amount is 10000, 
                                2) if age 31-40 then the amount is 15000, 
                                3) if age 41-50 then amount is 20000, 
                                4) if age 51-60 then the amount is 40000 otherwise 
                                5) insurance is not possible.
                                6) but if gender is female there is discount of 10% in insurance amount, 
                                7) if insurer is a smoker then the amount will be increase by 10%.
*/

#include<stdio.h>

void main(){
    int age;
    char female, smoker;
    printf("Is insurare female type Y/N: ");
    scanf("%c", &female);

    fflush(stdin);
    printf("\nIs insurare smoker type Y/N: ");
    scanf("%c", &smoker);

    printf("\nPlease enter the age: ");
    scanf("%d", &age);

    if(female == 'Y' || female == 'y')
    {
        if(smoker == 'Y' || smoker == 'y')
        {
            if(age >= 21 && age <= 30){
                printf("insurance amount = 9900");
            }else if(age >= 31 && age <= 40){
                printf("insurance amount = 14850");
            }else if(age >= 41 && age <= 50){
                printf("insurance amount = 19800");
            }else if(age >= 51 && age <= 60){
                    printf("insurance amount = 39600");
            }else{
                printf("Insurare is not Eligible for insurance!");
            }
        }else{
            if(age >= 21 && age <= 30){
                printf("insurance amount = 9000");
            }else if(age >= 31 && age <= 40){
                printf("insurance amount = 13500");
            }else if(age >= 41 && age <= 50){
                printf("insurance amount = 18000");
            }else if(age >= 51 && age <= 60){
                    printf("insurance amount = 36000");
            }else{
                printf("Insurare is not Eligible for insurance!");
            }
        }
    }
    else{
            if(smoker == 'Y' || smoker == 'y')
            {
                if(age >= 21 && age <= 30){
                    printf("insurance amount = 11000");
                }else if(age >= 31 && age <= 40){
                    printf("insurance amount = 16500");
                }else if(age >= 41 && age <= 50){
                    printf("insurance amount = 22000");
                }else if(age >= 51 && age <= 60){
                    printf("insurance amount = 44000");
                }else{
                    printf("Insurare is not Eligible for insurance!");
                }
            }else{
                if(age >= 21 && age <= 30){
                    printf("insurance amount = 10000");
                }else if(age >= 31 && age <= 40){
                    printf("insurance amount = 15000");
                }else if(age >= 41 && age <= 50){
                    printf("insurance amount = 20000");
                }else if(age >= 51 && age <= 60){
                    printf("insurance amount = 40000");
                }else{
                    printf("Insurare is not Eligible for insurance!");
                }
            }
        }
    printf("\nCompiled by: Sushant Singh Negi");
    printf("\nL.I. - 2224mca1117");
}