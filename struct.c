#include<stdio.h>

//fgets(stu1.name, sizeof(stu1.name), stdin);

typedef struct Birthday{
    int year;
    int month;
    int day;
}Birthday;

typedef struct Student{
    int id;
    char *name;
    int age;
    float score;
    Birthday birthday;
}Student;

void printstuinfo(Student pStu[], int len){
    for(int i = 0; i < len; i++){
    printf("%d\t%s\t%d\t%f\t%d-%d-%d",(pStu+i)->id,
        (pStu+i)->name,(pStu+i)->age,(pStu+i)->score,
        (pStu+i)->birthday.year,(pStu+i)->birthday.month,(pStu+i)->birthday.day);
    }
}

int main(){
    //Student stu1 = {1001, "neko", 18, 98.4, {2007, 11, 18}};
    //Student *pStu = &stu1;
    Student students[] = {
        {1001, "neko", 18, 98.4, 
        {2007, 11, 18}}
    };
    printstuinfo(students,sizeof(students)/sizeof(students[0]));
    return 0;
}