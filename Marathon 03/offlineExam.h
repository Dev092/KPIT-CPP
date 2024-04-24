#ifndef OFFLINEEXAM_H
#define OFFLINEEXAM_H

#include"Address.h"
#include"Exam.h"
class OfflineExam:public Exam{
    Address examLocation;
    public:
    OfflineExam();
    OfflineExam(std::string c, int pc);
    void display();
 


    Address getExamLocation() const { return examLocation; }
    void setExamLocation(const Address &examLocation_) { examLocation = examLocation_; }



};

#endif // OFFLINEEXAM_H
