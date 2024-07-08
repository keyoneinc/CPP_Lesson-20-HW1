#include <iostream>
#include "Student.h"

int main() {
    Student student1("Yaroslav", 95, "+123456789", "Street", "Kharkiv NTU University", 222);

    Student student2();

    student1.showInfo();

    student1.setAverageScore(97);
    student1.setPhoneNumber("+132112414");

    cout << "\nUpdated Student Information:" << endl;
    student1.showInfo();

    return 0;
}
