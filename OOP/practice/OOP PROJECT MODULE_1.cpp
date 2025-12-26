#include <iostream>
#include <vector>
using namespace std;

// ===================== CLASS 1: ITEM (Base Class) =====================
class Item {
public:
    string itemName;
    int price;
    int quantity;

    // Constructor
    Item(string n = "", int p = 0, int q = 0) {
        itemName = n;
        price = p;
        quantity = q;
    }

    void setQuantity(int q) { quantity = q; }
    int getTotal() { return price * quantity; }

    virtual void display() {
        cout << itemName << " - Price: " << price 
             << " , Quantity: " << quantity << endl;
    }
};

// ===================== CLASS 2: EVENT (Derived) =====================
class Event : public Item {
public:
    string eventType;
    int budget;
    static int eventCount;

    // Default constructor
    Event() : Item() {
        eventType = "Unknown Event";
        budget = 0;
        eventCount++;
    }

    // Constructor Overloading (Parameterized)
    Event(string eType, int b) : Item() {
        eventType = eType;
        budget = b;
        eventCount++;
    }

    void inputEventType() {
        cout << "Enter Event Type Name (Example: Seminar, Workshop): ";
        
        getline(cin, eventType);
    }

    void inputBudget() {
        cout << "Enter Budget for " << eventType << ": ";
        cin >> budget;
    }

    static void showEventCount() {
        cout << "\nTotal Events Created: " << eventCount << endl;
    }
};
int Event::eventCount = 0;


// ===================== CLASS 3: BUDGET (Derived from Event) =====================
class Budget : public Event {
public:
    vector<Item> itemList;
    int totalCost;

    // Default Constructor
    Budget() : Event() {
        totalCost = 0;
    }

    // Constructor Overloading (Parameterized)
    Budget(string eType, int b) : Event(eType, b) {
        totalCost = 0;
        loadItems(); // Auto loads items when using this constructor
    }

    void loadItems() {
        itemList = { {"Certificates",20,0}, {"Pens",5,0},
                     {"Snacks",30,0}, {"Water Bottles",10,0},
                     {"Decorations",50,0} };
    }

    void selectItems() {
        cout << "\n--- Select Items ---\n";
        for(int i=0; i<itemList.size(); i++)
            cout << i+1 << ". " << itemList[i].itemName 
                 << " - Price: " << itemList[i].price << endl;

        int choice, qty;
        do {
            cout << "\nEnter item number (0 to finish): ";
            cin >> choice;

            if(choice > 0 && choice <= itemList.size()) {
                cout << "Quantity: ";
                cin >> qty;
                itemList[choice-1].setQuantity(qty);
                totalCost += itemList[choice-1].getTotal();
            }
        } while(choice != 0);
    }

    void display() override {
        cout << "\n===== Event Budget Summary =====" << endl;
        cout << "Event Type: " << eventType << endl;
        cout << "\nItems Purchased:\n";
        for(auto &i : itemList) i.display();

        cout << "--------------------------------" << endl;
        cout << "Total Cost: " << totalCost << endl;
        cout << "Budget: " << budget << endl;

        if(totalCost > budget) 
            cout << "Status: Over Budget" << endl;
        else
            cout << "Status: Within Budget" << endl;
    }
};


// ===================== MAIN FUNCTION =====================
int main() {
    cout << "===== Event Budget Management System =====\n";

    // 1?? Using Default Constructor (user input)
    Budget E1;
    E1.inputEventType();
    E1.inputBudget();
    E1.loadItems();
    E1.selectItems();
    E1.display();


    // 2?? Using Overloaded Constructor (No input needed for event setup)
    cout << "\n\n--- Creating another event using overloaded constructor automatically ---\n";
    Budget E2("Workshop", 5000);
    E2.selectItems();    // Still select items manually
    E2.display();

    Event::showEventCount();

    return 0;
}
