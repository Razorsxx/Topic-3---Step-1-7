// Topic 3 - Step 1-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
using namespace std;

class Player
{
public:
    int PlayerFitness;
    bool RightFoot;
    bool yellow;
    bool red;
    string playingPos;

    Player()
    {
        PlayerFitness = 0;
        RightFoot = false;
        yellow = false;
        red = false;
        playingPos = " ";
    }
};

class Team
{
public:
    string teamName;
    int Score;
    bool playingaway;
    Player playerList[11];

    Team()
    {
        teamName = " ";
        Score = 0;
        playingaway = false;
    }
};

class Stadium
{
public:
    int BallXPos;
    int BallYPos;
    int BallZPos;
    int MinLeft;
    int ExtraTime;
    string winner;
    float ballSpeed;
    string name;
    float windSpeed;
    Team Team1;
    Team Team2;

    Stadium()
    {
        BallXPos = 0;
        BallYPos = 0;
        BallZPos = 0;
        MinLeft = 0;
        ExtraTime = 0;
        winner = " ";
        ballSpeed = 0;
        name = " ";
        windSpeed = 0;
    }
};

int main()
{
    Stadium myStadium;
}
