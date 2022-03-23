#include "Student.h"

Student::Student(int a,int b,int c)
{
	grade1=a;
	grade2=b;
	grade3=c;
}

int Student:: pass()
{
	if(grade1 >= 5 && grade2 >= 5 && grade3>=5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int Student:: mo()
{
	return (grade1+grade2+grade3)/3;
}
