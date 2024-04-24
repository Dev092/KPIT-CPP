#include<cstring>
#include <iostream>
enum playerType{
    ACHIEVERS,
    EXPLORERS
};
class Player{
    int* scores;
    int numberOfMatchesPlayed;
    char* playerName;
    enum playerType pt;
    public:
    Player();
    Player(int numofM,char* pName);
    ~Player();
    Player(const Player &obj);
    bool operator==(const Player &c2);
    Player operator=(const Player &c2);
    void operator+(const Player &c2);
    void display();
    
    char &operator[](int index)
    {
        return playerName[index];
    }

    int getNumberOfMatchesPlayed() const { return numberOfMatchesPlayed; }
    void setNumberOfMatchesPlayed(int numberOfMatchesPlayed_) { numberOfMatchesPlayed = numberOfMatchesPlayed_; }

    friend std::ostream &operator<<(std::ostream &os, const Player &obj);
    friend std::istream &operator>>(std::istream &is, Player &obj);
    
};

