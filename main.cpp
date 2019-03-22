#include<stdio.h>
#include<stdlib.h>

int main()
{
	float height,weight,bmi;
	printf("Please enter your height(cm):");
	scanf("%f",&height);
	printf("Please enter your weight(kg):");
	scanf("%f",&weight);
	bmi = ((weight/(height*height))*10000);
	printf("Your BMI is: %.2f\n",bmi);
	system("pause");
	return 0;
}
