#include <stdio.h>


struct data{
    char first_name[20];
    char last_name[20];
    char title[10];
    int SSN;
    int E_ID;
};

struct  employee {
    struct data  employee1;
    struct data  employee2;
}dept;

int main(void) {

for (int i=0;i< 2;i++) {
    struct data *employee=(i==0)?&dept.employee1:&dept.employee2; // bool logic to handle  each instance of struct

    printf("Enter first name: ");      // one way of declaring struct pointer, not very ideal and not readable
    scanf("%s",(*employee).first_name);
    printf("Enter last name: ");
    scanf("%s",(*employee).last_name);// access the last name member of struct via pointer employee
    printf("Enter title: ");
    scanf("%s",(*employee).title);
    printf("Enter SSN: ");
    scanf("%d",&(*employee).SSN);
    printf("Enter E_ID: ");
    scanf("%d",&(*employee).E_ID);
    puts("");
}
for (int i=0;i< 2;i++) {
    struct data *employee=(i==0)?&dept.employee1:&dept.employee2;
    printf("employee1->first_name: %s\n",employee->first_name);// access first name member of struct through pointer to emplyee
    printf("employee1->last_name: %s\n",employee->last_name);
    printf("employee1->title: %s\n",employee->title);
    printf("employee1->SSN: %d\n",employee->SSN);
    printf("employee1->E_ID: %d\n",employee->E_ID);

}
    return 0;
}












