#include <iostream>
using namespace std;

class Game
{
private:
    static int active_players;
    string player_name;

public:
    Game(string name)
    {
        player_name = name;
        active_players++;
    }

    ~Game()
    {
        active_players--;
    }

    // A normal member function can access both static and non-static members.
    void displayPlayerInfo()
    {
        cout << "Player: " << player_name << ", Total Active Players: " << active_players << endl;
    }

    // A static member function can ONLY access static members.
    static int getActivePlayerCount()
    {
        // It does not have access to 'this' pointer or non-static members like 'player_name'.
        // cout << player_name; // This would cause a COMPILE ERROR.
        return active_players;
    }
};

// Initialize the static data member
int Game::active_players = 0;

int main()
{
    // We can call the static function even before any objects are created.
    cout << "Initial active players: " << Game::getActivePlayerCount() << endl;

    Game player1("Alice");
    Game player2("Bob");

    player1.displayPlayerInfo();
    player2.displayPlayerInfo();

    // The preferred way to call a static function is using the class name.
    cout << "Current active players: " << Game::getActivePlayerCount() << endl;

    return 0;
}