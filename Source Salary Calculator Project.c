
#include <stdio.h>

int main(void) {

	int hourlyWage, hoursPerWeek, monthlySalary, annualSalary;


	printf("What is your hourly wage?\n");
	scanf_s("%d", &hourlyWage);

	printf("How many hours do you work per week?\n");
	scanf_s("%d", &hoursPerWeek);


	monthlySalary = (hoursPerWeek * hourlyWage) * 4;
	printf("If you earn %d per hour and work %d hours per week. You earn: %d monthly!\n", hoursPerWeek, hourlyWage, monthlySalary);


	annualSalary = monthlySalary * 12;
	printf("If you earn: %d monthly, you earn: %d annually!\n", monthlySalary, annualSalary);

	system("pause");
}
