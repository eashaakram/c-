#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
struct Item {
    string name;
    int price;
    int quantity;
};
void welcomePage() {
     int one;
    cout << "\n\t\t\t===== Welcome to Budget Calculator for Event Management =====\n\n";
    cout << "Press 1 to continue...";
    cin>>one;
}
bool registerUser() {
	char next;
    system("cls");
    string id, password;
    cout << "\n\t\t\t--- New User Registration ---\n\n";
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Create your Password: ";
    cin >> password;
    ofstream file("users.txt", ios::app);
    file << id << " " << password << "\n";
    file.close();
    cout << "Successfully registered!\n";
    cout << "Press any character to continue  or go ahead...";
    cin>>next;
    return true;
}
bool loginUser() {
    system("cls");
    string password, file_pass;
    cout << "\n\t\t\t--- User Login ---\n\n";
    while (true) {
        cout << "Enter your Password: ";
        cin >> password;
        ifstream file("users.txt");
        bool found = false;
        while (file >> file_pass) {
            if (file_pass == password) {
                found = true;
                break;
            }
        }
        file.close();
        if (found)    return true;          
        else   cout << "Incorrect password. Try again.\n";       
    }
}
int chooseEventType() {
    system("cls");
    int choice;
    cout << "Select the type of event you want to organize:\n";
    cout << "1. Seminar\n2. Workshop\n3. Fun Activity\n";
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
        items = { {"Certificates", 100, 0}, {"Pens", 50, 0}, {"Snacks", 50, 0},
                  {"Water Bottles", 60, 0}, {"Decorations", 500, 0},
                  {"Name Tags", 50, 0}, {"Flower Bouquets", 400, 0} };
    } else if (eventType == 2) {
        items = { {"Pens", 50, 0}, {"Certificates", 100, 0},
                  {"Whiteboard Markers", 50, 0}, {"Notebooks", 50, 0},
                  {"Refreshments", 200, 0}, {"Entry cards", 10, 0}, {"Banners", 200, 0} };
    } else if (eventType == 3) {
        items = { {"Game Prizes", 500, 0}, {"Snacks", 50, 0}, {"Drinks", 100, 0},
                  {"Protective Gear", 100, 0}, {"Timer", 250, 0},
                  {"Setup Items", 200, 0}, {"Balloons", 10, 0} };
    }
    return items;
}
int showItemsAndSelect(vector<Item>& items, int eventType) {
    system("cls");
    int total = 0;
    int choice;
    bool firstTime = true;
    int customOption = 8;
    do {
        if (firstTime) {
            cout << "Available Items:\n";
            for (int i = 0; i < items.size(); i++) {
                cout << i + 1 << ". " << items[i].name << " - Price: " << items[i].price << "\n";
            }
            cout << customOption << ". Add a New Custom Item\n";
            cout << "0. Finish selection\n";
            firstTime = false;
        }
        cout << "\nEnter item number (Enter 0 to finish): ";
        cin >> choice;
        if (choice > 0 && choice <= items.size()) {
            int qty;
            cout << "Enter quantity for " << items[choice - 1].name << ": ";
            cin >> qty;
            items[choice - 1].quantity += qty;
            total += items[choice - 1].price * qty;
        } else if (choice == customOption) {
            Item custom;
            cout << "Enter item name: ";
            cin>>custom.name;
            cout << "Enter item price: ";
            cin >> custom.price;
            cout << "Enter quantity: ";
            cin >> custom.quantity;
            total += custom.price * custom.quantity;
        }
    } while (choice != 0);
    return total;
}
void finalPage(int& total, int& budget, int& eventType, vector<Item>& items) {
    while (true) {
        system("cls");
        cout << "\n\t\t\t\t===== Budget Summary =====\n\n";
        cout << "Total Cost: " << total << "\n";
        cout << "Your Budget: " << budget << "\n\n";

        if (total > budget) {
            cout << "Warning: Your total exceeds the budget.\n\n";
        } else {
            cout << "Success: Your event fits within the budget!\n\n";
        }
        cout << "Options:\n1. Re-enter Budget\n2. Re-select Items\n3. Exit\nEnter choice: ";
        int ch;
        cin >> ch;
        if (ch == 1) {
            budget = enterBudget();
        } else if (ch == 2) {
            total = showItemsAndSelect(items, eventType);
        } else {
            break;
        }
    }
}
int main() {
    welcomePage();
    int option;
    bool success = false;
    do {
        system("cls");
        cout << "\n\t\t\t===== Event Management Login System =====\n\n";
        cout << "1. Register\n2. Login\nEnter your choice: ";
        cin >> option;
        if (option == 1) success = registerUser();
        else if (option == 2) success = loginUser();
    } while (!success);
    int eventType = chooseEventType();
    int budget = enterBudget();
    vector<Item> items = getItems(eventType);
    int total = showItemsAndSelect(items, eventType);
    finalPage(total, budget, eventType, items);
    return 0;
}