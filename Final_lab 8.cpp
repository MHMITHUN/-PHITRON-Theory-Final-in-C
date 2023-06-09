//B)
//Bismillahir Rahmanir Rahim

// #include<stuio.h>
// struct stu
// {
//     float mark;
//     int roll;
//     char name[50];
// };
// int main()
// {
//     struct stu s1;
//     struct stu* sp;
//     sp=&s1;
//     printf("enter marks:");
//     scanf("%f",&s1.mark);
//     printf("marks: %.2f",sp->mark);
//     return 0;
// }

//(C)
//Bismillahir Rahmanir Rahim
#include<stdio.h>
struct stu
{
    float mark;
    int roll;
    char name[50];
};
int main()
{
struct stu s1;
printf("Enter information:\n");

printf("Enter name:");
scanf("%s",s1.name);

printf("Enter roll number:");
scanf("%d",&s1.roll);

printf("Enter marks:");
scanf("%f",&s1.mark);

printf("displaying information:\n");
printf("Name: %s\n",s1.name);
printf("Roll number: %d\n",s1.roll);
printf("Marks: %.2f",s1.mark);

    return 0;
}