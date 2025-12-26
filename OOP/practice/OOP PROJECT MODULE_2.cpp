#include <iostream>
#include <vector>
using namespace std;
// ===================== CLASS 1: ITEM =====================
class Item {
public:
    string itemName;
    int price;
    int quantity;
    Item(string n = "", int p = 0, int q = 0) {
        itemName = n;
        price = p;
        quantity = q;
    }
//Exception Handling
    void setQuantity(int q) {
        if (q < 0)
            throw "Quantity cannot be negative!";
        quantity = q;
    }
    int getTotal() {
        return price * quantity;
    }
    void display() {
        if (quantity > 0)
            cout << itemName << " - Price: " << price
                 << " , Quantity: " << quantity << endl;
    }
};
// ===================== CLASS 2: EVENT =====================
class Event {
protected:
    string eventType;
    int budget;
public:
    static int eventCount;
    Event(string e = "", int b = 0) {
        eventType = e;
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
   //Exception Handling
        if (budget <= 0)
            throw "Budget must be greater than zero!";
    }
    // Getters (IMPORTANT for aggregation)
    string getEventType() {
        return eventType;
    }
    int getBudget() {
        return budget;
    }
    static void showEventCount() {
        cout << "\nTotal Events Created: " << eventCount << endl;
    }
    // Friend function declaration
    friend void showEventDetails(Event e);
};
int Event::eventCount = 0;
// ===================== FRIEND FUNCTION =====================
void showEventDetails(Event e) {
    cout << "\n(Event Checked by Friend Function)\n";
    cout << "Event Type: " << e.eventType << endl;
    cout << "Budget: " << e.budget << endl;
}
// ===================== CLASS 3: BUDGET (AGGREGATION) =====================
class Budget {
private:
    Event* event;              // Aggregation (HAS-A)
    vector<Item> itemList;
    int totalCost;

public:
    Budget(Event* e) {
        event = e;
        totalCost = 0;
    }

    void loadItems() {
        itemList = {
            {"Certificates", 20, 0},
            {"Pens", 5, 0},
            {"Snacks", 30, 0},
            {"Water Bottles", 10, 0},
            {"Decorations", 50, 0}
        };
    }
    void selectItems() {
        cout << "\n--- Select Items ---\n";
        for (int i = 0; i < itemList.size(); i++)
            cout << i + 1 << ". " << itemList[i].itemName
                 << " - Price: " << itemList[i].price << endl;
        int choice, qty;
        do {
            cout << "\nEnter item number (0 to finish): ";
            cin >> choice;

            if (choice > 0 && choice <= itemList.size()) {
                cout << "Quantity: ";
                cin >> qty;

                try {
                    itemList[choice - 1].setQuantity(qty);
                    totalCost += itemList[choice - 1].getTotal();
                }
                catch (const char* msg) {
                    cout << "Error: " << msg << endl;
                }
            }
        } while (choice != 0);
    }
    void display() {
        cout << "\n===== Event Budget Summary =====" << endl;
        cout << "Event Type: " << event->getEventType() << endl;
        cout << "\nItems Purchased:\n";
        for (Item& i : itemList)
            i.display();
        cout << "--------------------------------" << endl;
        cout << "Total Cost: " << totalCost << endl;
        cout << "Budget: " << event->getBudget() << endl;

        if (totalCost > event->getBudget())
            cout << "Status: Over Budget" << endl;
        else
            cout << "Status: Within Budget" << endl;
    }
};
// ===================== MAIN FUNCTION =====================
int main() {
    cout << "===== Event Budget Management System =====\n";
    try {
        Event e1;
        e1.inputEventType();
        e1.inputBudget();
        showEventDetails(e1);   // Friend function call
        Budget b1(&e1);         // Aggregation
        b1.loadItems();
        b1.selectItems();
        b1.display();
        Event::showEventCount();
    }
    catch (const char* msg)//here char* is read-only array of characters
      {
        cout << "Program Error: " << msg << endl;
    }
    return 0;
}
