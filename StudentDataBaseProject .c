#include<stdio.h>
#include<stdlib.h>
#include<string>

void enterssline()   // adds a star line //
{
	printf("************************************************************************************************************************************************************************");
}

void entersline() // adds a line//
{
	printf("________________________________________________________________________________________________________________________________________________________________________");
}

void addnl()  //adds new line //
{
	printf("\n");
}



int main()
{
mainpage:
	enterssline();
	printf("                                                                             HELLO THERE                                                                        \n");
   enterssline();
   printf("\n\n");
   printf(" HOW CAN WE HELP YOU TODAY ?\n\n\n");
   entersline();
   printf("\n");
   printf(" HERE ARE THE OPTIONS AVAILABLE   :\n");
   entersline();
   printf("\n\n");
   printf(" 1 : ENROLL NEW STUDENT DATA  \n\n");
   printf(" 2 : CHECK EXISTING STUDENT DETAILS  \n\n");  
   printf(" 3 : MODIFY STUDENT DETAILS  \n\n");  
   printf (" 4 : EXIT MENU  \n\n");
   entersline();
   printf("\n");  
   printf(" ENTER THE OPTION YOU WANT TO PROCEED WITH  : ");
  
int opt,i,n,deez,k,rn;
//opt is for options at menu , n is for number of students in part 1, i is for loop,deez is for confirmation at end of task //
// rn and k are variables for part3 involving rollnumber//
scanf("%d",&opt);

struct student
	{
	char name[30];
	int rollno;
	char section[10];
	float cgpa;
	char branch[10];
	}s[100];

if (opt==1)
{
	system ("cls");
	goto part1;
}
if (opt==2)
{
	system("cls");
	goto part2;
}
if (opt==3)
{
	system ("cls");
	goto part3;
}
if (opt==4)
{
	system ("cls");
	goto part4;
}

part1:	
printf("Enter the number of students you want to add new data for :\n");
scanf("%d",&n);

for (i=0;i<n;i++)
{
	printf("\n Enter information of student %d:\n",i+1);
printf("Enter name: ");
scanf("%s", s[i].name);

printf("Enter Roll Number :");
scanf("%d",&s[i].rollno);

printf("Enter Section : ");
scanf("%s",&s[i].section);

printf("Enter cgpa : ");
scanf("%f",&s[i].cgpa);

printf("Enter branch : ");
scanf("%s",&s[i].branch);
}
printf("Press 1 to go back to menu, press 2 to enter new data ");
scanf("%d",&deez);

if (deez==1)
{
	system ("cls");
	goto mainpage;
}else
 {
 if (deez==2)
 {system ("cls");
 goto part1;
}
}
part2:
	printf("Displaying entered informtion \n");
for (i=0;i<n;i++)
{
	printf(" Displaying details of student No. %d\n",i+1);
	printf("\t Name : %s\n",s[i].name);
	printf("\t Roll Number : %d\n",s[i].rollno);
	printf("\t Section : %s \n",s[i].section);
	printf("\t Branch : %s\n",s[i].branch);
	printf("\t CGPA : %.2f\n",s[i].cgpa);
}

printf(" press 1 to go back to home screen , press 2 to revisit this page :");
	 scanf("%d",&deez);
	 if (deez==1)
	 {
	 	system("cls");
	 	goto mainpage;
	 }
else
 {
	if (deez==2)
	{
		system("cls");
		goto part2;
	}
}

part3:	

	printf("Enter Roll number to search student record: \n");
scanf("%d",&rn);
for (i=0;i<=n;i++)
{
	if (s[i].rollno==rn)
	{
		k=i;
		printf("\n Data found at position no %d \n",k+1);
	
printf("\tNAME OF THE STUDENT :%s\n ",s[k].name);
printf("Add new name : ");
scanf("%s",&s[k].name);
addnl();

printf("\tSECTION OF THE STUDENT : %s\n",s[k+1].section);
printf(" Add new section :");
scanf("%s",&s[k].section);
addnl();

printf("CGPA SCORED : %.2f\n\n",s[k].cgpa);
printf("\t Add new GCPA :");
scanf("%f",&s[k].cgpa);
addnl();

printf("BRANCH THAT THE STUDENT BELONGS TO : %s\n",s[k].branch);
printf("Add new branch :");
scanf("%s",&s[k].branch);
addnl();

printf("NAME : %s\n",s[k].name);
printf("SECTION : %s\n",s[k].section);
printf("CGPA : %.2f\n",s[k].cgpa);
printf("BRANCH : %s\n",s[k].branch);

}
printf("press 1 to go to main screen , press 2 to edit more data");
scanf("%d",&deez);
if (deez==1)
{
	system("cls");
	goto mainpage;		
}
else 
{
	if (deez==2)
	{
		system ("cls");
		goto part3;
	}
}
}

part4:
return 0;
}

