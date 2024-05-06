// 12S23004 - Poppy Sibuea
// 12S23020 - Rachel C.P. Simorangkir

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./libs/dorm.h"
#include "./libs/student.h"
#include "./libs/repository.h"

int main(int _argc, char **_argv) {
 
    Dorm dorms[MAX_DORMS];
    Student students[MAX_STUDENTS];
    int numDorms = 0;
    int numStudents = 0;

    loadDormData(dorms, &numDorms);
    loadStudentData(students, &numStudents);

    if (strcmp(_argv[1], "dorm-print-all-detail") == 0) {
        printAllDorms(dorms, numDorms);
    }

    if (strcmp(_argv[2], "student-print-all-detail") == 0) {
        printAllStudents(students, numStudents);
    }

    return 0;
}
