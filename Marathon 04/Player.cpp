#include "Player.h"
#include<cstring>
Player::Player():numberOfMatchesPlayed(2)
{
}

Player::Player( int numofM, char *pName)
{
    numberOfMatchesPlayed=numofM;
    pName=new char[20];
    strcpy(playerName,pName);
}


Player::~Player()
{
    delete playerName;
}

Player::Player(const Player &obj)
{
    scores=obj.scores;
    numberOfMatchesPlayed=obj.numberOfMatchesPlayed;
    playerName=new char[20];
    strcpy(playerName,obj.playerName);
}

bool Player::operator==(const Player &c2)
{
    if( playerName==c2.playerName && numberOfMatchesPlayed==c2.numberOfMatchesPlayed){
        return true;
    }
    else
    {
        return false;
    }
}

Player Player::operator=(const Player &c2)
{
    Player temp;
    temp.numberOfMatchesPlayed=numberOfMatchesPlayed;
    char* pn= new char[20];
    strcpy(pn,playerName);
    temp.playerName=pn;
    delete pn;
    return temp;
}

void Player::operator+(const Player &c2)
{
    numberOfMatchesPlayed=c2.numberOfMatchesPlayed;

}

void Player::display()
{
    std::cout<<numberOfMatchesPlayed<<std::endl;
}

std::ostream &operator<<(std::ostream &os, const Player &rhs) {
   
      os << " numberOfMatchesPlayed: " << rhs.numberOfMatchesPlayed
       << " playerName: " << rhs.playerName;
    return os;
}

std::istream &operator>>(std::istream &is, Player &obj)
{
    
    int nom;
    char* pn=new char[20];
 
    

    std::cout<<"Enter the num of matches :"<<std::endl;
    is>>nom;
    obj.setNumberOfMatchesPlayed(nom);

    std::cout<<"Enter the name:"<<std::endl;
    is>>pn;

    delete pn;
}
