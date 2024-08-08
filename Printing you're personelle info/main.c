#include <stdio.h>
#include <string.h>
int main ()
{
    // declaring the variables

    char primary_info[5][50];
    int secondary_info[2];

    // for the Primary info
    puts("+------------- Primary Info -------------+");
    printf("Enter You're name : ");
    scanf("%s" , &primary_info[0]);

    printf("Enter You're Last Name : ");
    scanf("%s" , &primary_info[1]);

    // Clear the input buffer before using fgets
    getchar();

    printf("Enter You're Personelle addrese : ");
    fgets(primary_info[2] , sizeof(primary_info[2]) ,  stdin);

    printf("\nEnter You're sexe : ");
    scanf("%s" , &primary_info[3]);

    printf("Enter You're city : ");
    scanf("%s" , &primary_info[4]);

    // for the secondary info
    puts("+------------- Primary Info -------------+");
    printf("Enter You're Age : ");
    scanf("%d" , &secondary_info[0]);


    printf("Enter You're Phone number : ");
    scanf("%d" , &secondary_info[1]);

    puts("+------------- Seccufully! and this is Your data -------------+");

    printf("Hello u said ur full name is %s %s \n" , primary_info[0] , primary_info[1]);
    printf("and Youre personelle addres was %s \n" , primary_info[2]);
    printf("And your sexe is %s\n" , primary_info[3]);
    printf("And the city where do u live is  %s\n" , primary_info[4]);

    printf("And your age is %d\n" , secondary_info[0]);
    printf("And your phone number is %d\n" , secondary_info[1]);







    return 0;
}
