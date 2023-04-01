#include <stdio.h>
#include <string.h>

union student {
    char name[51];
    float gpa;
};

int main() {
    union student s;
    
    printf("Enter student name (up to 50 characters): ");
    fgets(s.name, sizeof(s.name), stdin);
    
    printf("Enter student GPA: ");
    scanf("%f", &s.gpa);
    
    printf("Student name: %s\n", s.name);
    printf("Student GPA: %.2f\n", s.gpa);
    
    return 0;
}


