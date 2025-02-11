





// Welcome to the Rock Collector Championships!
// Enter player 1 name: Gordan Freeman
// How many rocks did Gordan Freeman collect? -9
// Invalid amount. 0 will be entered.
// Enter player 2 name: Link
// How many rocks did Link collect? 45
// Enter player 3 name: D. Va
// How many rocks did D. Va collect? 45
// Link and D. Va are tied for first place.
// Gordan Freeman is in second place!
// The average number of rocks collected by the top three players is
// 30.00 rocks!
// Congratulations Rock Collectors!


// Welcome to the Rock Collector Championships!
// Enter player 1 name: Mario
// How many rocks did Mario collect? 56
// Enter player 2 name: Master Chief
// How many rocks did Master Chief collect? 56
// Enter player 3 name: Sonic
// How many rocks did Sonic collect? 56
// It is a three way tie!
// The average number of rocks collected by the top three players is
// 56.00 rocks!
// Congratulations Rock Collectors!


// Welcome to the Rock Collector Championships!
// Enter player 1 name: King Dedede
// How many rocks did King Dedede collect? 57
// Enter player 2 name: Samus
// How many rocks did Samus collect? 102
// Enter player 3 name: Kirby
// How many rocks did Kirby collect? 62
// Samus is in first place!
// Kirby is in second place.
// King Dedede is in third place.
// The average number of rocks collected by the top three players is
// 73.67 rocks!
// Congratulations Rock Collectors!

#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_PLAYERS = 3;

const string MSG_WELCOME = "Welcome to the Rock Collector Championships!";
const string MSG_GOODBYE = "Congratulations Rock Collectors!";

int main() {
    string player_1_name = "";
    string player_2_name = "";
    string player_3_name = "";   

    int player_1_count = 0; 
    int player_2_count = 0;
    int player_3_count = 0;

    float average = 0.0;

    cout << MSG_WELCOME << endl;
    
    cout << "Enter player 1 name: ";
    getline(cin, player_1_name);

    cout << "How many rocks did " << player_1_name << " collect? ";
    cin >> player_1_count;
    cin.get();
    // TODO: Validate input

    cout << "Enter player 2 name: ";
    getline(cin, player_2_name);

    cout << "How many rocks did " << player_2_name << " collect? ";
    cin >> player_2_count;
    cin.get();
    // TODO: Validate input

    cout << "Enter player 3 name: ";
    getline(cin, player_3_name);

    cout << "How many rocks did " << player_3_name << " collect? ";
    cin >> player_3_count;
    cin.get();
    // TODO: Validate input

/*
TIES 
P1      P2      P3
first = first = first

P1      P2      P3
first = first > second

P1      P3      P2
first = first > second

P2     P3       P1
first = first > second

P1      P2          P3
first > second  =   second

P2      P1          P3
first > second  =   second

P3      P1          P2
first > second  =   second

P1  P2  P3
P1  P3  P2
P2  P1  P3
P2  P3  P1
P3  P1  P2
P3  P2  P1
*/

    cout << endl << endl;
    
    if(player_1_count == player_2_count && player_2_count == player_3_count) {
        cout << "TIE" << endl;
    } else if (player_1_count == player_2_count && player_2_count > player_3_count) {
        cout << "TIE 1=2 > 3" << endl;
    } else if (player_1_count == player_3_count && player_3_count > player_2_count) {
        cout << "TIE 1=3 > 2" << endl;
    } else if (player_2_count == player_3_count && player_3_count > player_1_count) {
        cout << "TIE 2=3 > 1" << endl;
    } else if (player_1_count > player_2_count && player_2_count == player_3_count) {
        cout << "TIE  1 > 2=3" << endl;
    } else if (player_2_count > player_1_count && player_1_count == player_3_count) {
        cout << "TIE  2 > 1=3" << endl;
    } else if (player_3_count > player_1_count && player_1_count == player_2_count) {
        cout << "TIE  3 > 1=2" << endl;
    } else if (player_1_count > player_2_count && player_2_count > player_3_count) {
        cout << "1 2 3" << endl;
    } else if (player_1_count > player_3_count && player_3_count > player_2_count) {
        cout << "1 3 2" << endl;
    } else if (player_2_count > player_1_count && player_1_count > player_3_count) {
        // cout << "2 1 3" << endl;
        cout << player_2_name << " is in first place!" << endl;
        cout << player_1_name << " is in second place!" << endl;
        cout << player_3_name << " is in third place!" << endl;
    } else if (player_2_count > player_3_count && player_3_count > player_1_count) {
        cout << "2 3 1" << endl;
    } else if (player_3_count > player_1_count && player_1_count > player_2_count) {
        cout << "3 1 2" << endl;
    } else if (player_3_count > player_2_count && player_2_count > player_1_count) {
        cout << "3 2 1" << endl;
    }


    
    average = (player_1_count + player_2_count + player_3_count) / static_cast<float>(NUM_PLAYERS);
    cout << fixed << setprecision(2);
    cout << "AVERAGE: " << average << endl;

    return 0;
}