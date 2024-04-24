#include "onlineExam.h"
#include<iostream>

OnlineExam::OnlineExam(){

}
OnlineExam::OnlineExam(enum examPlatform ep):ePlatform(ep){

}
void OnlineExam::display()
{
    std::cout<<ePlatform<<std::endl;
    Exam::display();
    

}