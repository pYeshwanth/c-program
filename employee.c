#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float basic_salary;
    float total_salary;
};
int main() {
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n];
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Enter Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter Employee Name: ");
        scanf("%s", employees[i].name);
        printf("Enter Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);
        float da = 0.10 * employees[i].basic_salary;
        float hri = 0.20 * employees[i].basic_salary;
        employees[i].total_salary = employees[i].basic_salary + da + hri;
    }
    printf("\nEmployee Details:\n");
    for (i = 0; i < n; i++) {
               printf("\n\nEmployee id %d ",employees[i].id);
               printf("\nEmployee name %s",employees[i].name);
               printf("\nBasic salary %.2f",employees[i].basic_salary);
               printf("\nTotal salary %.2f",employees[i].total_salary);
    }
       return 0;
}

