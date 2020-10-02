#include "Teacher.h"
#include "Student.h"
#include <iostream>

int main()
{
    Student student = Student("Jan", 20, 10);
    std::cout << "Student" << std::endl;
    std::cout << "Naam: " << student.getName() << std::endl;
    std::cout << "Leeftijd: " << student.getAge() << std::endl;
    std::cout << "Studiepunten: " << student.getCredits() << std::endl;

    std::cout << "---" << std::endl;

    Teacher teacher = Teacher("Henk", 41, 17.2552f);
    std::cout << "Naam: " << teacher.getName() << std::endl;
    std::cout << "Leeftijd: " << teacher.getAge() << std::endl;
    std::cout << "Salaris: " << teacher.getSalary() << std::endl;

    return 0;
}
