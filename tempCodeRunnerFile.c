#include <stdio.h>
int main()
{
    int age;
    int vipPass=0;
    vipPass=1;

    printf("Enter your age\n");
    scanf("%d",&age);

    if ((age<=70 && age>=18)||vipPass==1)
    {
        ("As your age is less than 70 and greater than 18 or you are a vip pass holder then you can drive \n");
    }
    else
    {
       ( "you cannot drive \n" );
    }
  return 0;

}