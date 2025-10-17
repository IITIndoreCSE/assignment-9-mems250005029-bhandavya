#include <iostream>
#include <string>
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord records[12];

    // Input data for 12 months
    for (int i = 0; i < 12; ++i) {
        cout << "Enter sales data for each month:\n";
        cout << "Month " << i + 1 << " name: ";
        cin >> records[i].month;
        cout << "Sales amount: ";
        cin >> records[i].amount;
    }

    // Find max and min sales months
    int maxIdx = 0, minIdx = 0;
    for (int i = 1; i < 12; ++i) {
        if (records[i].amount > records[maxIdx].amount)
            maxIdx = i;
        if (records[i].amount < records[minIdx].amount)
            minIdx = i;
    }

    cout << "Month with maximum sales: " << records[maxIdx].month
         << " (" << records[maxIdx].amount << ")" << endl;
    cout << "Month with minimum sales: " << records[minIdx].month
         << " (" << records[minIdx].amount << ")" << endl;

    return 0;
}
	
