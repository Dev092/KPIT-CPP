#include "Exam.h"

Exam::Exam():examCode(111)
{
}

Exam::Exam(int ec, int d, int m, int y):examCode(ec),examDate(d,m,y)
{

}

void Exam::display()
{
    std::cout<<examCode<<" "<<examDate<<std::endl;
}
