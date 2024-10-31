#include<stdio.h>
#include<stdlib.h>
#define STUDENT_COUNT 5
struct student_details
{
	char name[50];
	int marks;
};

int main()
{
	FILE *fptr;
	struct student_details students[STUDENT_COUNT];
	
	fptr = fopen("C:\\Users\\Administrator\\Desktop\\falcon c program\\sample.txt", "w");
	
	if (fptr == NULL)
	{
		printf("Error opening the file!");
		exit(1);
	}
	for (int i =0; i < STUDENT_COUNT; i++)
	{
	printf("Enter name of student %d: ", i + 1);
	scanf("%s", students[i].name);
	printf("Enter marks of student %d: ", i + 1);
	scanf("%d", &students[i].marks);	
	}
	
	for (int i = 0; i < STUDENT_COUNT; i++)
	{
		fprintf(fptr, "Name: %s, marks: %d\n", students[i].name, students[i].marks);
		
	}
	fclose(fptr);
	printf("Success");
	
	return 0;
	
	
}