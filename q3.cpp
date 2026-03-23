#include <iostream>
using namespace std;

class SmartDevice {
private:
    string deviceName;
    string type;
    bool status; // true = ON, false = OFF

public:
    // Parameterized Constructor
    SmartDevice(string name, string t, bool s) {
        deviceName = name;
        type = t;
        status = s;
        cout << deviceName << " (" << type << ") has been activated. Status: "
             << (status ? "ON" : "OFF") << endl;
    }

    // Display Function
    void display() {
        cout << "\nDevice Name: " << deviceName << endl;
        cout << "Type: " << type << endl;
        cout << "Status: " << (status ? "ON" : "OFF") << endl;
    }

    // Destructor
    ~SmartDevice() {
        cout << deviceName << " is shutting down... Goodbye, cruel world 💔\n";
    }
};

int main() {
    // Creating objects
    SmartDevice d1("Alexa", "Voice Assistant", true);
    SmartDevice d2("Roomba", "Robo-Vacuum", false);

    d1.display();
    d2.display();

    cout << "\n--- Creating a temporary device ---\n";

    {
        SmartDevice d3("Smart Coffee Maker", "Coffee Overlord", true);
        d3.display();
    } // d3 destroyed here (goes out of scope)

    cout << "\n--- End of Program ---\n";

    return 0;
}
