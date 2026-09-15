#include <stdio.h>

int main(){
char studentName[50];
float test1;
float test2;
float assignmentMark;
float total;

printf("ENTER STUDENT NAME:");
scanf("%s", &studentName);
printf("ENTER TEST MARK1:");
scanf("%f", &test1);
printf("ENTER TEST MARK1: ");
scanf("%f",&test2);
printf("ENTER ASSIGNMENT MARK:");
scanf("%f", &assignmentMark);

total = test1 + test2 + assignmentMark;
    printf("\nStudent Name: %s", studentName);
    printf("\nTotal Mark: %d", total);
    
if(total >= 75 && total <= 100) {
    printf("\nResult: Distinction");
}
else if(total >= 60){
    printf("\nResult: Credit");
}
if(total >= 50){
    printf("\nResult: Pass");
}
else {
    printf("Fail");
}
return 0;
}