#include <iostream>
using namespace std;

class CricketPlayer {
private:
    string name;
    int jerseyNumber;
    double battingAverage;
    int totalRuns;
    int matches;

public:
    // Parameterized Constructor using 'this' keyword
    CricketPlayer(string name, int jerseyNumber, double battingAverage) {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;
        this->totalRuns = battingAverage; // initial assumption
        this->matches = 1;
    }

    // Improve average (method chaining)
    CricketPlayer& improveAverage(double runs) {
        totalRuns += runs;
        matches++;
        battingAverage = totalRuns / matches;
        return *this; // allows chaining
    }

    // Play match and update stats
    void playMatch(double runsScored) {
        cout << "\n" << name << " played a match and scored " << runsScored << " runs.\n";

        totalRuns += runsScored;
        matches++;
        battingAverage = totalRuns / matches;

        if (runsScored == 0)
            cout << "Oh no! Golden duck \n";
        else if (runsScored >= 100)
            cout << "What a century! Crowd goes wild \n";
        else
            cout << "Solid performance \n";
    }

    // Display stats
    void displayPlayerStats() {
        cout << "\n Player Stats \n";
        cout << "Name: " << name << endl;
        cout << "Jersey Number: " << jerseyNumber << endl;
        cout << "Matches: " << matches << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Batting Average: " << battingAverage << endl;
        cout << "Commentary: This batting average is more consistent than Karachi’s weather!\n";
        cout << "-----------------------------\n";
    }
};

int main() {
    // Creating players
    CricketPlayer p1("Babar Azam", 56, 50.0);
    CricketPlayer p2("Muhammad Rizwan", 16, 48.0);
    CricketPlayer p3("Saim Ayub", 63, 35.0);

    // Playing matches
    p1.playMatch(120);
    p1.playMatch(45);

    p2.playMatch(80);
    p2.playMatch(0);

    p3.playMatch(60);
    p3.playMatch(110);

    // Method chaining
    p1.improveAverage(30).improveAverage(70);

    // Display stats
    p1.displayPlayerStats();
    p2.displayPlayerStats();
    p3.displayPlayerStats();

    return 0;
}
