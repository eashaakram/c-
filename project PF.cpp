#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Item {
    string name;
    int price;
    int quantity;
};

void welcomePage() {
    system("cls");
    cout << "===== Welcome to Budget Calculator for Event Management =====\n";
    cout << "Press Enter to continue...";
    cin.ignore(); cin.get();
}

bool registerUser() {
    system("cls");
    string id, password;
    cout << "--- New User Registration ---\n";
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Create your Password: ";
    cin >> password;

    ofstream file("users.txt", ios::app);
    file << id << " " << password << "\n";
    file.close();
    cout << "Successfully registered!\n";
    cout << "Press Enter to continue...";
    cin.ignore(); cin.get();
    return true;
}

bool loginUser() {
    system("cls");
    string password, file_id, file_pass;
    cout << "--- User Login ---\n";
    cout << "Enter your Password: ";
    cin >> password;

    ifstream file("users.txt");
    bool found = false;
    while (file >> file_id >> file_pass) {
        if (file_pass == password) {
            found = true;
            break;
        }
    }
    file.close();
    return found;
}

int chooseEventType() {
    system("cls");
    int choice;
    cout << "Select the type of event you want to organize:\n";
    cout << "1. Seminar\n2. Workshop\n3. Fun Activity\n4. Other Event\n";
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

int enterBudget() {
    system("cls");
    int budget;
    cout << "Enter your budget for the event: ";
    cin >> budget;
    return budget;
}

vector<Item> getItems(int eventType) {
    vector<Item> items;
    if (eventType == 1) {
        items = {{"Certificates", 20, 0}, {"Pens", 5, 0}, {"Snacks", 30, 0},
                 {"Water Bottles", 10, 0}, {"Decorations", 50, 0},
                 {"Name Tags", 10, 0}, {"Flower Bouquets", 100, 0}};
    } else if (eventType == 2) {
        items = {{"Projector", 300, 0}, {"Extension Cords", 100, 0},
                 {"Whiteboard Markers", 15, 0}, {"Notebooks", 20, 0},
                 {"Refreshments", 40, 0}, {"Chairs", 0, 0}, {"Banners", 70, 0}};
    } else if (eventType == 3) {
        items = {{"Game Prizes", 100, 0}, {"Snacks", 30, 0}, {"Drinks", 20, 0},
                 {"Decorations", 50, 0}, {"Speakers", 250, 0},
                 {"Lights", 150, 0}, {"Balloons", 10, 0}};
    } else {
        items = {{"Custom Item 1", 25, 0}, {"Custom Item 2", 50, 0}};
    }
    return items;
}

int showItemsAndSelect(vector<Item>& items) {
    system("cls");
    int total = 0;
    cout << "Available Items:\n";
    for (int i = 0; i < items.size(); i++) {
        cout << i + 1 << ". " << items[i].name << " - Price: " << items[i].price << "\n";
    }
    cout << items.size() + 1 << ". Add New Custom Item\n";
    cout << "0. Finish selection\n";

    int choice;
    do {
        cout << "\nEnter item number (0 to finish): ";
        cin >> choice;

        if (choice > 0 && choice <= items.size()) {
            int qty;
            cout << "Enter quantity for " << items[choice - 1].name << ": ";
            cin >> qty;
            items[choice - 1].quantity += qty;
            total += items[choice - 1].price * qty;
        } else if (choice == items.size() + 1) {
            Item custom;
            cout << "Enter item name: ";
            cin.ignore();
            getline(cin, custom.name);
            cout << "Enter item price: ";
            cin >> custom.price;
            cout << "Enter quantity: ";
            cin >> custom.quantity;
            items.push_back(custom);
            total += custom.price * custom.quantity;
        }
    } while (choice != 0);

    return total;
}

void finalPage(int& total, int& budget, int& eventType, vector<Item>& items) {
    while (true) {
        system("cls");
        cout << "==== Budget Summary ====\n";
        cout << "Total Cost: " << total << "\n";
        cout << "Your Budget: " << budget << "\n";
        if (total > budget) {
            cout << "Warning: Your total exceeds the budget.\n";
            cout << "Options:\n1. Re-enter Budget\n2. Re-select Items\n3. Exit\nEnter choice: ";
            int ch;
            cin >> ch;
            if (ch == 1) {
                budget = enterBudget();
            } else if (ch == 2) {
                total = showItemsAndSelect(items);
            } else {
                break;
            }
        } else {
            cout << "Success: Your event fits within the budget!\n";
            break;
        }
    }
}
int main() 
{
    welcomePage();
    int option;
    bool success = false;
    do 
    {
        system("cls");
        cout << "===== Event Management Login System =====\n";
        cout << "1. Register\n2. Login\nEnter your choice: ";
        cin >> option;
        if (option == 1) success = registerUser();
        else if (option == 2) success = loginUser();
    } 
     while (!success);

    int eventType = chooseEventType();
    int budget = enterBudget();
    vector<Item> items = getItems(eventType);
    int total = showItemsAndSelect(items);
    finalPage(total, budget, eventType, items);
    return 0;
}