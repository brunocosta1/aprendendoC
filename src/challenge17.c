#include <stdio.h>

struct employee{
    
    char name[20];
    char hireDate[15];
    float salary;

};

int main(){

    struct employee emp1 = { "Bruno", "01/07/2018", 7000.00};

    printf("Employee: %s | Hire date: %s | Salary: %.2f\n", emp1.name, emp1.hireDate, emp1.salary);

    struct employee emp2;

    printf("\nPut the name of employee:\n");
    scanf("%s", emp2.name);

    printf("Put the hire date of employee:\n");
    scanf("%s", emp2.hireDate);

    printf("Put the salary of employee:\n");
    scanf("%f", &emp2.salary);

    printf("Employee: %s | Hire date: %s | Salary: %.2f\n", emp2.name, emp2.hireDate, emp2.salary);

    return 0;

}
