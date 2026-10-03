#include<stdio.h> 
#include<string.h>

struct student 
{ 
    char usn[15]; 
    char name[25]; 
    int m1,m2,m3; 
    float avg, total; 
}; 

void main() 
{ 
    struct student s[20]; 
    int n,i; 
    float tavg,sum=0.0; 
    
    printf("Enter the number of students: "); 
    scanf("%d",&n); 
    getchar(); // consume newline after entering number
    
    for(i=0;i<n;i++) 
    { 
        printf("\nEnter the details of student %d:\n", i+1); 
        printf("USN: "); 
        fgets(s[i].usn, 15, stdin);
        s[i].usn[strcspn(s[i].usn, "\n")] = 0; // remove trailing newline
        
        printf("Name: "); 
        fgets(s[i].name, 25, stdin); 
        s[i].name[strcspn(s[i].name, "\n")] = 0; // remove trailing newline
        
        printf("Enter the marks for three subjects: "); 
        scanf("%d%d%d", &s[i].m1, &s[i].m2, &s[i].m3); 
        getchar(); // consume newline after marks input
    } 
    
    for(i=0;i<n;i++)
    {
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3; 
        s[i].avg = s[i].total / 3.0;
    }
    
    for(i=0;i<n;i++) 
    {
        if(s[i].avg >= 35) 
            printf("\n%s has scored above the average marks.", s[i].name); 
        else 
            printf("\n%s has scored below the average marks.", s[i].name); 
    } 
}
