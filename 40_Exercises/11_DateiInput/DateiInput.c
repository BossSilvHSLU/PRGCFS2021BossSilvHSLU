#include <stdio.h>

#define MAX_NAME_LENGHT 30
#define NUM_GRADES 6
#define NUM_STUDENTS 5
#define AVERAGE_STUDENT 5

float sum = 0;


struct student {
	char firstname[MAX_NAME_LENGHT];
	char lastname[MAX_NAME_LENGHT ];
	float grades[NUM_GRADES];
	float average;
};

struct student *ptr = NULL;


/*void ComputeStudentGradeAverage( struct student *stud){
	float average = 0.0;
	for(int i = 0; i < NUM_GRADES; i++){
		average += stud->grades[i];
		printf("grade %d = %f\n", i, stud->grades[i]); 
	}
	stud->average = average/NUM_GRADES;
}
*/



struct student students[NUM_STUDENTS] = { 
[0].firstname = "Tony", 	[0].lastname = "Stark", 	[0].grades = {6.0, 5.8, 5.9, 6.0, 5.9, 6.0},
[1].firstname = "Peter", 	[1].lastname = "Parker", 	[1].grades = {4.5, 4.8, 5.8, 3.2, 5.9, 5.2},
[2].firstname = "Bruce", 	[2].lastname = "Banner", 	[2].grades = {5.5, 2.8, 5.3, 4.8, 5.4, 4.5},
[3].firstname = "Steve", 	[3].lastname = "Rodgers", 	[3].grades = {4.9, 3.9, 5.8, 2.3, 4.3, 5.4},
[4].firstname = "Natasha", 	[4].lastname = "Romanoff", 	[4].grades = {5.3, 5.2, 5.1, 5.7, 4.9, 5.9} };

int main()
{


ptr = &students[1]; 

FILE *fp1;

fp1 = fopen(" File of Heroes.csv", "w"); //creat a file

for (int j = 0; j < NUM_STUDENTS; j++)
	{
	
	sum = 0;

		for (int i = 0; i <= NUM_GRADES; i++)
			{
			sum = sum + students[j].grades[i];
			}
		
	
			
	float AverageStudent = sum / NUM_GRADES;

	float Sum2 = Sum2 + AverageStudent;

	float AverageClass = Sum2 / NUM_STUDENTS;



	fprintf(fp1," Durchschnitt von %s %s = %.4f\n  ", students[j].firstname ,students[j].lastname, AverageStudent);

	if ( j == ( NUM_STUDENTS - 1) )
	{
	printf(" Klassenschnitt = %.4f\n  ", AverageClass);
	}


	}
	



/* printf("before %f\n", students[1].average);
ComputeStudentGradeAverage(&students[1]);
printf("after %f\n", students[1].average);
*/




// ptr->firstname = (*ptr).firstname
/*	printf(" Durchschnitt von %s %s %.4f\n  ", ptr->firstname ,ptr->lastname, ptr-//  >grades[1]  );
	printf(" Durchschnitt von %s %s %.4f\n  ", (*ptr).firstname ,students[1].lastname, ptr->grades[1]  );
*/

return 0;
}
