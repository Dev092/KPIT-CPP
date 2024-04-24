#ifndef ONLINEEXAM_H
#define ONLINEEXAM_H
#include"Exam.h"
enum examPlatform{
    SYNAP=1,
    METTL
};
class OnlineExam:public Exam{
    enum examPlatform ePlatform;
    public:
    OnlineExam();
    OnlineExam(enum examPlatform ep);
    void display();

    enum examPlatform getEPlatform() const { return ePlatform; }
    void setEPlatform(const enum examPlatform &ePlatform_) { ePlatform = ePlatform_; }


};

#endif // ONLINEEXAM_H
