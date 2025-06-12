#include <iostream>
using namespace std;

int main() {
    int n;
    double* sensors[5];
    double total = 0;

    cout << "How many sensor readings (maximum 5)? ";
    cin >> n;

    if (n < 1 || n > 5) {
        cout << "Invalid number of sensors. Please enter between 1 and 5." << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        sensors[i] = new double;
        cout << "Enter temperature for sensor " << i + 1 << ": ";
        cin >> *sensors[i];
        total += *sensors[i];  // Total calculated here
    }

    double min = *sensors[0];
    double max = *sensors[0];

    for (int i = 0; i < n; i++) {
        if (*sensors[i] < min)
            min = *sensors[i];
        if (*sensors[i] > max)
            max = *sensors[i];
    }

    double average = total / n;

    cout << "\nMinimum temperature: " << min << endl;
    cout << "Maximum temperature: " << max << endl;
    cout << "Average temperature: " << average << endl;

    for (int i = 0; i < n; i++) {
        delete sensors[i];
    }

    return 0;
}
