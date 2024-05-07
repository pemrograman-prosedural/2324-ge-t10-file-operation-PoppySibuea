#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "data.h"

// Function prototypes
void saveStudentsToFile(const char *filename, Student *students, int numStudents);
void saveDormsToFile(const char *filename, Dormitory *dorms, int numDorms);
void loadStudentsFromFile(const char *filename, Student *students, int *numStudents);
void loadDormsFromFile(const char *filename, Dormitory *dorms, int *numDorms);

#endif /* REPOSITORY_H */
