#include <stdio.h>
int main()
{
    int age;
    int vipPass=0;
    vipPass=1;

    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter the no. of vipPasses\n");
    scanf("%d", &vipPass);
    //if (age<=70 && age>=18)
    if ((age<=70 && age>=18)||vipPass==1)
    {
        printf("As your age is less than 70 and greater than 18 or you are a vip pass holder then you can drive \n");
    }
    else
    {
       printf( "you cannot drive \n" );
    }
  return 0;

}