#include "offlineExam.h"
#include<iostream>
#include"Address.h"
OfflineExam::OfflineExam():examLocation("Pune",835652)
{

}

OfflineExam::OfflineExam(std::string c, int pc):examLocation(c,pc)
{
}

void OfflineExam::display()
{
    examLocation.display();
    Exam::display();
}
