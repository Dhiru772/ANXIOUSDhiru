#include<stdio.h>
int main(){
    int age,i,j,k;
    printf("**************DATING SITE************************\n\t***********************************");
    printf("\nEnter your age dued:");
    scanf("%d",&age);

    if(age<17){
        printf("ooo bro you are just %d Sorry kid you Can't date a girl according to the law:",age);
    }else if(age>=18 && age<40){
        printf("Yoooo!Hello *%d* year buddy you can date a girl:",age);
    }else if(age>=40 && age<100){
        printf("O man you're %d\nSorry boss i think you you need to Think first\nAnyway \npress 1 to continue",age);
        scanf("%d",&age);
        printf("you have still chance");

    }
    return 0;
}