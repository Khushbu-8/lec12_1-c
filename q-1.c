#include<stdio.h>
#include<string.h>

 struct stuRecord{
 int stu_id;
 char stu_name[10];
 int stu_age;
 char stu_course[10];
 char stu_city[10];
 int stu_standard;
 char stu_school[10];
 	
 };

void main(){
	
	struct stuRecord s1;
	s1.stu_id = 5679;


		
	printf("enter stu_name : ");
	scanf("%s",&s1.stu_name);
	printf("enter stu_age : ");
	scanf("%d",&s1.stu_age);
	printf("enter stu_course : ");
	scanf("%s",&s1.stu_course);
	printf("enter stu_city : ");
	scanf("%s",&s1.stu_city);
	printf("enter stu_standard : ");
	scanf("%d",&s1.stu_standard);
	printf("enter stu_school : ");
	scanf("%s",&s1.stu_school);
	
	
	printf("\nId is %d :\n",s1.stu_id);
    printf("Name is %s :\n",s1.stu_name);
	printf("Age is %d :\n",s1.stu_age);
	printf("Course is %s :\n",s1.stu_course);
	printf("City is %s :\n",s1.stu_city);
	printf("Standard is %d :\n",s1.stu_standard);
	printf("School is %s :\n",s1.stu_school);

		s2.stu_id = 5678;
	
    printf("enter stu_name : ");
	scanf("%s",&s2.stu_name);
	printf("enter stu_age : ");
	scanf("%d",&s2.stu_age);
	printf("enter stu_course : ");
	scanf("%s",&s2.stu_course);
	printf("enter stu_city : ");
	scanf("%s",&s2.stu_city);
	printf("enter stu_standard : ");
	scanf("%d",&s2.stu_standard);
	printf("enter stu_school : ");
	scanf("%s",&s2.stu_school);
	
	
	printf("\nId is %d :\n",s2.stu_id);
    printf("Name is %s :\n",s2.stu_name);
	printf("Age is %d :\n",s2.stu_age);
	printf("Course is %s :\n",s2.stu_course);
	printf("City is %s :\n",s2.stu_city);
	printf("Standard is %d :\n",s2.stu_standard);
	printf("School is %s :\n",s1.stu_school);
	
		s3.stu_id = 5677;
	
	printf("enter stu_name : ");
	scanf("%s",&s3.stu_name);
	printf("enter stu_age : ");
	scanf("%d",&s3.stu_age);
	printf("enter stu_course : ");
	scanf("%s",&s3.stu_course);
	printf("enter stu_city : ");
	scanf("%s",&s3.stu_city);
	printf("enter stu_standard : ");
	scanf("%d",&s3.stu_standard);
	printf("enter stu_school : ");
	scanf("%s",&s3.stu_school);
	
	
	printf("\nId is %d :\n",s3.stu_id);
    printf("Name is %s :\n",s3.stu_name);
	printf("Age is %d :\n",s3.stu_age);
	printf("Course is %s :\n",s1.stu_course);
	printf("City is %s :\n",s3.stu_city);
	printf("Standard is %d :\n",s3.stu_standard);
	printf("School is %s :\n",s3.stu_school);

	

	
}
