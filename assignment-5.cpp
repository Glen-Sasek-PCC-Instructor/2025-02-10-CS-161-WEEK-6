


// Welcome to my Pizza Party Statistics program!
// Enter the number of people, average number of slices per person,
// and the cost of a pizza separated by a space: 10 2.6 10.50
// Number of pizzas: 4
// Cost of pizzas: $42.00
// Tax: $2.94
// Delivery: $8.99
// Total Cost: $53.93
//
// Do you want to enter more (y/n): y
//
// Enter the number of people, average number of slices per person,
// and the cost of a pizza separated by a space: 9 2.5 10.95
// Number of pizzas: 3
// Cost of pizzas: $32.85
// Tax: $2.30
// Delivery: $7.03
// Total Cost: $42.18
//
// Do you want to enter more (y/n): y
//
// Enter the number of people, average number of slices per person,
// and the cost of a pizza separated by a space: 14 3.2 14.95
// Number of pizzas: 6
// Cost of pizzas: $89.70
// Tax: $6.28
// Delivery: $19.20
// Total Cost: $115.17
//
// Do you want to enter more (y/n): n
//
// Number of entries: 3
// Total number of pizzas: 13
// Average number of pizzas: 4.3
// Maximum number of people: 14
// Maximum cost of pizzas: $115.17
//
// Thank you for using my program!

#include <iostream>

using namespace std;

int main() {
    int number_of_entries = 0;
    int total_count_pizzas = 0;
    int max_people = 0;
    float max_cost_USD = 0.0;

    bool next = true;
    while(next) {
        int n_people = 0;
        float avg_slice_per_person = 0.0;
        float cost_per_pizza_USD = 0.0;

        cout << "Welcome to my Pizza Party Statistics program!" << endl;
        cout << "Enter the number of people, average number of slices per person," << endl;
        cout << "and the cost of a pizza separated by a space: ";
        cin >> n_people >> avg_slice_per_person >> cost_per_pizza_USD;

        // TODO: CALCULATE, see instructions for calculation details
        // Number of pizzas: 4
        int number_of_pizzas = 0; // ?? calculate
        // Cost of pizzas: $42.00
        float cost_of_pizzas_USD = 0.0; // ?? calculate
        // Tax: $2.94
        float tax_USD = 0.0; // ?? calculate
        // Delivery: $8.99
        float delivery_USD = 0.0; // ?? calculate
        // Total Cost: $53.93
        float order_cost_USD = delivery_USD + tax_USD + cost_of_pizzas_USD;

        number_of_entries = number_of_entries + 1;

        total_count_pizzas = total_count_pizzas; // + Number of pizzas: 
        if(n_people > max_people) {
            max_people = n_people;
        }

        if(order_cost_USD > max_cost_USD) {
            order_cost_USD = order_cost_USD;
        }

        cout << "Do you want to enter more (y/n): ";
        char c;
        cin >> c;
        if(c != 'y') {
            next = false;
        }
    }

    cout << "Number of entries: " << number_of_entries << endl;
    cout << "Average number of pizzas: " << (total_count_pizzas / static_cast<float>(number_of_entries)) << endl;
    cout << "Maximum number of people: " << max_people << endl;
    cout << "Maximum cost of pizzas: " << max_cost_USD << endl;

    cout << "Thank you for using my program!" << endl;

    return 0;
}