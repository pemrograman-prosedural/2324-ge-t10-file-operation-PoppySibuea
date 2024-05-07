#include "repository.h"
#include <stdio.h>

void saveStudentsToFile(const char *filename, Student *students, int numStudents) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Unable to open file %s\n", filename);
        return;
    }

    for (int i = 0; i < numStudents; i++) {
        fprintf(file, "%s|%s|%d|%s\n", students[i].id, students[i].name, students[i].year, students[i].gender);
    }

    fclose(file);
}

void saveDormsToFile(const char *filename, Dormitory *dorms, int numDorms) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error: Unable to open file %s\n", filename);
        return;
    }

    for (int i = 0; i < numDorms; i++) {
        fprintf(file, "%s|%d|%s\n", dorms[i].name, dorms[i].capacity, dorms[i].gender);
    }

    fclose(file);
}

void loadStudentsFromFile(const char *filename, Student *students, int *numStudents) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Unable to open file %s\n", filename);
        return;
    }

    *numStudents = 0;
    while (fscanf(file, "%[^|]|%[^|]|%d|%s\n", students[*numStudents].id, students[*numStudents].name, &students[*numStudents].year, students[*numStudents].gender) != EOF) {
        (*numStudents)++;
    }

    fclose(file);
}

void loadDormsFromFile(const char *filename, Dormitory *dorms, int *numDorms) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Unable to open file %s\n", filename);
        return;
    }

    *numDorms = 0;
    while (fscanf(file, "%[^|]|%d|%s\n", dorms[*numDorms].name, &dorms[*numDorms].capacity, dorms[*numDorms].gender) != EOF) {
        (*numDorms)++;
    }

    fclose(file);
}

