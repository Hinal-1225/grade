#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char studid[10];
    char name[30];
    char division;
    short int semester;
    short int sub1;
    short int sub2;
    short int sub3;
    float per;
    char grade[3];
};
int main()
{
	system("cls");
	struct student stud[100];
	int i,n;
    printf("\nEnter number of students :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter student[%d] Details :",i+1);
        printf("\nEnter Student id:");
        scanf("%s",stud[i].studid);
        printf("\nEnter Student name:");
        scanf("%s",stud[i].name);
        printf("\nEnter Student division:");
        scanf("%s",stud[i].division);
        printf("\nEnter Student semester:");
        scanf("%d",&stud[i].semester);
        printf("\nEnter Student marks of sub1:");
        scanf("%d",&stud[i].sub1);
        printf("\nEnter Student marks of sub2:");
        scanf("%d",&stud[i].sub2);
        printf("\nEnter Student marks of sub3:");
        scanf("%d",&stud[i].sub3);
        //student percentage
        stud[i].per=(stud[i].sub1+stud[i].sub2+stud[i].sub3)*100/300;
        //student grade
        if(stud[i].per>=80)
            strcpy(stud[i].grade,"AA");
        else if(stud[i].per>=75)
            strcpy(stud[i].grade,"AB");
        else if(stud[i].per>=70)
            strcpy(stud[i].grade,"BB");
        else if(stud[i].per>=65)
            strcpy(stud[i].grade,"BC");
        else if(stud[i].per>=60)
            strcpy(stud[i].grade,"CC");
        else if(stud[i].per>=55)
            strcpy(stud[i].grade,"CD");
        else if(stud[i].per>=50)
            strcpy(stud[i].grade,"DD");
        else
            strcpy(stud[i].grade,"FF");
    }
    //print all student detail
    printf("\nstudid \t name \t division \t semester \t sub1 \t sub2 \t sub3 \t per \t grade ");
    printf("\n********************************************************************************");
    for(i=0;i<n;i++)
    {
        printf("\n%s\t%s\t%s\t%d\t%d\%d\t%d\t%f\t%s",stud[i].studid,stud[i].name,stud[i].division,stud[i].semester,
               stud[i].sub1,stud[i].sub2,stud[i].sub3,stud[i].per,stud[i].grade);
    }
	system("pause");
	return 10;
}

