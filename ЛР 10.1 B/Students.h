// Students.h 

#include <string>
using namespace std;

enum Specialty { COMPUTER_SCIENCE, INFORMATICS, LABOR_TRAINING, MATH_ECONOMICS, PHYSICS_INFORMATICS };

struct Student
{
    string surname;
    unsigned course;
    Specialty specialty;
    int physics;
    int math;
    union // третя оцінка залежить від спеціальності
    {
        int programming;       
        int numerical_methods; 
        int pedagogy;         
    };
};

void Create(Student* p, const int N);
void Print(Student* p, const int N);
void CountThree(Student* p, const int N, int* k);
void PrintPhysicsMath45(Student* p, const int N);