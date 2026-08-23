#include <stdio.h>

int main() {
    double revenue;
    double expenses;
    double balance;

    //extensions
    int departments;
    double payroll;
    double procurement;
    double assets;

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------\n");

    printf("Enter Total Revenue: ");
    scanf("%If", &revenue);

    printf("Enter Total Expenses: ");
    scanf("%If", &expenses);

    balance = revenue - expenses;

    printf("\nMUNICIPAL BUDGET SUMMARY\n");
    printf("---------------------------\n");
    printf("Revenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);
    printf("Balance: %.2f\n", balance);

    printf("MUNICIPAL BUDGET CALCULATOR\n");
    printf("---------------------------\n");

    printf("Enter  number of departments: ");
    scanf("%d", &departments);

    printf("Enter payroll: ");
    scanf("%If", &payroll);

    printf("Enter procurement: ");
    scanf("%If", &procurement);

    printf("Enter assets: ");
    scanf("%If", &assets);

    printf("\nFINANCIAL SUMMARY\n");
    scanf("----------------------------\n");
    printf("Departments: %d\n", departments);
    printf("Payroll:     %.2f\n", payroll);
    printf("Procurement: %.2f\n", procurement);
    printf("Assets:      %.2f\n", assets);

    return 0;

}