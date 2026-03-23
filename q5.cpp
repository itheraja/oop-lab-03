#include <iostream>
using namespace std;

class FootballPlayer {
private:
    string playerName;
    string position;
    int goalCount;

public:
    // Default Constructor
    FootballPlayer() {
        playerName = "Unknown Player";
        position = "Benchwarmer";
        goalCount = 0;
    }

    
    FootballPlayer(string name, string pos, int goals) {
        playerName = name;
        position = pos;
        goalCount = goals;
    }

    
    FootballPlayer(const FootballPlayer &p) {
        playerName = p.playerName;
        position = p.position;
        goalCount = p.goalCount;
    }

   
    FootballPlayer(string name, string pos = "Midfielder", int goals = 10) {
        playerName = name;
        position = pos;
        goalCount = goals;
    }

   
    void scoreGoal(int goals) {
        goalCount += goals;
        cout << playerName << " scored " << goals << " goal(s)! ⚽\n";
    }

    // Display Player Info
    void displayPlayer() {
        cout << "Name: " << playerName << endl;
        cout << "Position: " << position << endl;
        cout << "Goals: " << goalCount << endl;
        cout << "Commentary: Ballon d’Or loading... \n";
    }
};

int main() {
    // Default constructor
    FootballPlayer p1;

    
    FootballPlayer p2("Lionel Messi", "Forward", 800);

    // Copy constructor
    FootballPlayer p3(p2);

    
    FootballPlayer p4("Cristiano Ronaldo");

    
    FootballPlayer p5("Kylian Mbappe", "Forward");

   
    p2.scoreGoal(2);
    p3.scoreGoal(1);
    p4.scoreGoal(3);
    p5.scoreGoal(4);

   
    p1.displayPlayer();
    p2.displayPlayer();
    p3.displayPlayer();
    p4.displayPlayer();
    p5.displayPlayer();

    return 0;
}
