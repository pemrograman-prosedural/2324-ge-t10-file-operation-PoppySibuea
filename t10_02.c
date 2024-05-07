// 12S23004 - Poppy Sibuea
// 12S23020 - Rachel C.P. Simorangkir

#include <stdio.h>
#include "repository.h" // Memuat fungsi-fungsi untuk menyimpan dan memuat data dari berkas
#include "simulator.h" // Mengasumsikan bahwa Anda memiliki fungsi-fungsi untuk menjalankan simulasi

int main() {
    // Inisialisasi data mahasiswa dan asrama
    Student students[MAX_STUDENTS];
    Dormitory dorms[MAX_DORMS];
    int numStudents = 0, numDorms = 0;

    // Menjalankan simulasi
    runSimulation(students, &numStudents, dorms, &numDorms);

    // Menyimpan data mahasiswa dan asrama ke dalam berkas
    saveStudentsToFile("./storage/student-repository.txt", students, numStudents);
    saveDormsToFile("./storage/dormitory-repository.txt", dorms, numDorms);

    return 0;
}

