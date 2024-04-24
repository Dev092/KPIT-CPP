#include "onlineExam.h"
#include "offlineExam.h"
#include "Address.h"
#include "Date.h"
#include "Exam.h"
#include <string>
void searchByPlatform(examPlatform e, OnlineExam obj[])
{
    bool flag=false;
    try
    {
        for (int i = 0; i < 3; i++)
        {
            if (obj[i].getEPlatform() == e)
            {
                obj[i].display();
                flag=true;
            }
        }
        if(flag==false){
            throw std::runtime_error("Enter valid input");
        }
    }
    catch (std::exception &e)
    {
        std::cout << "Exception occoured" << e.what();
    }
}


void searchBtCity(std::string cty, OfflineExam obj[])
{
    bool flag=false;
    try
    {
        for (int i = 0; i < 3; i++)
        {
            if (obj[i].getExamLocation().getCityName() == cty)
            {
                obj[i].display();
                flag=true;
            }
        }
        if(flag==false){
            throw std::runtime_error("Enter valid input");
        }
    }
    catch (std::exception &e)
    {
        std::cout << "Exception occoured" << e.what();
    }
}

int main()
{
    try
    {
        OnlineExam *obj = new OnlineExam[3];
        obj[0] = OnlineExam(examPlatform::METTL);
        obj[1] = OnlineExam(examPlatform::SYNAP);
        obj[2] = OnlineExam(examPlatform::METTL);
        for (int i = 0; i < 3; i++)
        {
            obj[i].display();
        }

        

        OfflineExam ofExam[3] = {
            {"Pune", 89786},
            {"Samastipur", 65764},
            {"Purnia", 87456}};
             for(int i=0;i<3;i++){
            ofExam[i].display();
        }
        std::string cty;
        std::cout << "Enter the city:" << std::endl;
        std::cin >> cty;
        searchBtCity(cty, ofExam);
        std::cout<<"Searching in onlineExam:..."<<std::endl;
        searchByPlatform(examPlatform::METTL,obj);
         }

        catch(std::exception &e){
            std::cout<<"Exception Occoured :"<<std::endl;
        }

        return 0;
    }