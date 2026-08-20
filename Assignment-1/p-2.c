#include <stdio.h>

// An employee's basic salary is 30000, house rent is 15000 and medical allowance is 5000. Write a C program to calculate and display the employee's gross salary.

int main()
{
    int base_salary = 30000, house_rent = 15000, medical_allowance = 5000, gross_salary;

    gross_salary = base_salary + house_rent + medical_allowance;

    printf("Employee's gross salary is %d", gross_salary);

    return 0;
}
