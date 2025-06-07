#include <iostream>
using namespace std;

// Structures
struct Location {
    string country;
    string region;
    string site;
};

struct MaintenanceEntry {
    string date;
    string technician;
};

struct Equipment {
    int id;
    string type;
    Location location;
    MaintenanceEntry maintain[5];
};

struct Timestamp {
    string date;
    string time;
};

struct SensorReading {
    string sensorID;
    float value;
    Timestamp times;
};

// Function to display sensor reading
void displaySensorReading(SensorReading r) {
    cout << "\nSensor Reading:\n";
    cout << "Sensor ID: " << r.sensorID << endl;
    cout << "Value: " << r.value << endl;
    cout << "Timestamp: " << r.times.date << " " << r.times.time << endl;
}

int main() {
    Equipment equipments[3];

    // Input equipment details
    for (int i = 0; i < 3; i++) {
        cout << "\nEnter details for equipment #" << i + 1 << ":\n";
        cout << "ID: ";
        cin >> equipments[i].id;

        cout << "Type (no spaces): ";
        cin >> equipments[i].type;

        cout << "Country (no spaces): ";
        cin >> equipments[i].location.country;

        cout << "Region (no spaces): ";
        cin >> equipments[i].location.region;

        cout << "Site (no spaces): ";
        cin >> equipments[i].location.site;

        for (int j = 0; j < 5; j++) {
            cout << "Maintenance entry #" << j + 1 << " date (or 'none' to stop): ";
            cin >> equipments[i].maintain[j].date;
            if (equipments[i].maintain[j].date == "none") break;

            cout << "Technician name (no spaces): ";
            cin >> equipments[i].maintain[j].technician;
        }
    }

    // Display equipment summary
    cout << "\n--- Equipment Summary ---\n";
    for (int i = 0; i < 3; i++) {
        cout << "\nEquipment #" << i + 1 << "\n";
        cout << "ID: " << equipments[i].id << endl;
        cout << "Type: " << equipments[i].type << endl;
        cout << "Location: " << equipments[i].location.country << ", "
             << equipments[i].location.region << ", "
             << equipments[i].location.site << endl;

        cout << "Maintenance Log:\n";
        for (int j = 0; j < 5; j++) {
            if (equipments[i].maintain[j].date == "none" || equipments[i].maintain[j].date == "") 
                break;
            cout << "  Date: " << equipments[i].maintain[j].date
                 << ", Technician: " << equipments[i].maintain[j].technician << endl;
        }
    }

    // Sensor Reading (step-by-step assignment)
    SensorReading reading1;
    reading1.sensorID = "S101";
    reading1.value = 23.7;
    reading1.times.date = "2024-06-01";
    reading1.times.time = "10:15";

    displaySensorReading(reading1);

    SensorReading reading2;
    cout << "\nEnter another sensor reading:\n";
    cout << "Sensor ID (no spaces): ";
    cin >> reading2.sensorID;
    cout << "Value: ";
    cin >> reading2.value;
    cout << "Date (YYYY-MM-DD): ";
    cin >> reading2.times.date;
    cout << "Time (HH:MM): ";
    cin >> reading2.times.time;

    displaySensorReading(reading2);

    return 0;
}
