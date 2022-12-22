#include<stdio.h>
#include<string.h>

struct student{
	int rollNo;
	int age;
	char name[20];
	float marks;
};

void main(){
	struct student pankaj, sahil, raju;

	pankaj.rollNo = 1;
	pankaj.age = 17;
	strcpy(pankaj.name, "Pankaj");
	pankaj.marks = 235;

	sahil.rollNo = 2;
	sahil.age = 16;
	strcpy(sahil.name, "Sahil");
	sahil.marks = 278;

	raju.rollNo = 3;
	raju.age = 17;
	strcpy(raju.name, "Raju");
	raju.marks = 159;

	int decide;

	printf("Enter Roll no. of student to see details:: ");
	scanf("%d", &decide);

	if (decide==1)
		printf("Name: %s, Age: %d, Marks: %.2f", pankaj.name, pankaj.age, pankaj.marks);
	else if (decide==2)
		printf("Name: %s, Age: %d, Marks: %.2f", sahil.name, sahil.age, sahil.marks);
	else
		printf("Name: %s, Age: %d, Marks: %.2f", raju.name, raju.age, raju.marks);


}