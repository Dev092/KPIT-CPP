#ifndef EXAM_H
#define EXAM_H

#include"Date.h"
class Exam{
    int examCode;
    Date examDate;
    public:
    Exam();
    Exam(int ec,int d,int m,int y);
    void display();

};

#endif // EXAM_H
