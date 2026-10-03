#include <stdio.h>

struct Student {
    int id;
    char name[50],grade;
    
    int age;
    char gender[10];
   
    int marks[5];
};

int main() {
    struct Student student;
    
    printf("Enter student ID: ");
    scanf("%d", &student.id);
    
    printf("Enter student name: ");
    scanf("%s", student.name);
    
    printf("Enter student age: ");
    scanf("%d", &student.age);
    
    printf("Enter student gender: ");
    scanf("%s", student.gender);

    printf("Enter student grade/class: ");
    getchar();
    scanf("%c",&student.grade);

    printf("Enter marks for 5 subjects: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &student.marks[i]);
    }

    printf("\nStudent Details:\n");
    printf("ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Gender: %s\n", student.gender);
  
    printf("Grade/Class: %c\n", student.grade);
    printf("Marks: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", student.marks[i]);
    }
    printf("\n");

    return 0;
}
