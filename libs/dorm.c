#include "dorm.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void print_dorm_all_detail(struct dorm_t *dorms, int size){
    for (int indeks = 0; indeks < size; indeks++){
        switch (dorms[indeks].gender)
        {
        case GENDER_MALE :
            if (dorms[indeks].printed_before == 0){
                printf("%s|%d|male|%d\n", dorms[indeks].name, dorms[indeks].capacity, dorms[indeks].residents_num);
                dorms [indeks].printed_before = 1;
                break;
            }
            printf("%s|%d|male|0\n", dorms[indeks].name, dorms[indeks].capacity);
            dorms[indeks].printed_before = 1;
            break;

        case GENDER_MALE:
            if (dorms[indeks].printed_before == 0){
                printf("%s|%d|female|%d\n", dorms[indeks].name, dorms[indeks].capacity, dorms[indeks].residents_num);
                dorms[indeks].printed_before = 1;
                break;
            }
            printf("%s|%d|female|0\n", dorms[indeks].name, dorms[indeks].capacity);
            dorms[indeks].printed_before = 1;
            break;
        }
    }
}

struct dorm_t create_dorm(char *name, unsigned short capacity, enum gender_t gender){
    struct dorm_t newDorm;

    memset(&newDorm.name, '\0', strln(newDorm.name));

    strcpy(newDorm.name, name);
    newDorm.capacity = _capacity;
    newDorm.gender = _gender;
    newDorm.residents_num = 0;
    newDorm.printed_before = 0;

    newDorm.print_dorm_all_detail = print_dorm_all_detail;

    return newDorm;
}