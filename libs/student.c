#include "student.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

void assigment_student(struct student_t *students, struct dorm_t *dorm){
  if (students->gender == dorm->gender){
    if (dorm->capacity > dorm->resients_num){
      dorm->residents_num++;
      dorm->dorm = dorm;
    }else{
      student->dorm = NULL;
    }
  }
}

void move_student(struct student_t *students, struct dorm_t *target){
  if (students->dorm == NULL){
    assign_student(student,target);
    return;
  }
  student->dorm->residents_num--;
  student->dorm = target;
  student->dorm->residents_num++;
}

void print_student(struct student_t *student, int size){
  for (int indeks = 0; indeks < size; indeks++){
   switch (student[indeks].gender)
    {
    case GENDER_FEMALE:
    printf("%s|%s|%s|female\n",student[indeks].id,student[indeks].name,student[indeks].year);
    student[indeks].printed_before = 1;
    break;

    case GENDER_MALE:
    printf("%s|%s|%s|male\n",student[indeks].id,student[indeks].name,student[indeks].year);
    student[indeks].printed_before = 1;
    break;
    }
  }
}

void print_student_detail(struct student_t *students, int size){
  for (int indeks = 0; indeks < size; indeks++){
      switch (students[indeks].gender)
      {
      case GENDER_FEMALE:
         if(student[indeks].dorm != NULL && student[indeks].printed_before == 0){
           printf("%s|%s|%s|female|%s\n",students[indeks].id,students[indeks].name,students[indeks].year,students[indeks].dorm->name);
           break;
         }
         printf("%s|%s|%s|female|unsigned\n",students[indeks].id,students[indeks].name,students[indeks].year);
         student[indeks].printed_before = 1;
      break;

      case GENDER_MALE:
         if(student[indeks].dorm != NULL && student[indeks].printed_before == 0){
           printf("%s|%s|%s|male|%s\n",students[indeks].id,students[indeks].name,students[indeks].year,students[indeks].dorm->name);
           break;
         }
         printf("%s|%s|%s|male|unsigned\n",students[indeks].id,students[indeks].name,students[indeks].year);
         student[indeks].printed_before = 1;
         break;
      }
   }
}

struct student_t create_student(char *_id, char *_name, char *_year, enum gender_t _gender){
     struct student_t newStudent;

     memset(newStudent.id, '\0',strlen(newStudent.id));
     memset(newStudent.name, '\0',strlen(newStudent.name));
     memset(newStudent.year, '\0',strlen(newStudent.year));

     strcpy(newStudent.id,_id);
     strcpy(newStudent.name,_name);
     strcpy(newStudent.year,_year); 

     newStudent.gender = gender;
     newStudent.dorm = NULL;
     newStudent.printed_before = 0;

     newStudent.print_student = &printed_student;
     newStudent.print_student_detail = &print_student_detail;
    
     return newStudent;
}