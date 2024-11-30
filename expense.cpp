#include <iostream>
#include <string>
using namespace std;

class everyDay {
public:
    int spent;
    int income;
    string spentType;
    string incomeType;
    int day;

    // Default Constructor
    everyDay() : spent(0), income(0), spentType("N/A"), incomeType("N/A"), day(0) {}

    // Parameterized Constructor
    everyDay(int S, int I, string St, string It, int D)
        : spent(S), income(I), spentType(St), incomeType(It), day(D) {}
};

// Function to input the number of tracking days
int entryDays() {
    int n;
    cout << "How long do you want this app to help you track your finances? (In days)" << endl;
    cin >> n;
    return n;
}

// Function to record data for multiple days
void entryData(int n, everyDay a[]) {
    for (int i = 0; i < n; i++) {
        cout << "___________ Recording data for Day " << i + 1 << " ___________" << endl;
        cout << "How much money did you spend today?" << endl;
        cin >> a[i].spent;
        cout << "What was the type of spending (e.g., food, transport, etc.)?" << endl;
        cin.ignore();
        getline(cin, a[i].spentType);
        cout << "How much money did you earn today?" << endl;
        cin >> a[i].income;
        cout << "What was the type of income (e.g., salary, freelancing, etc.)?" << endl;
        cin.ignore();
        getline(cin, a[i].incomeType);
        a[i].day = i + 1;
    }
}

// Function to calculate and display a report
void calculations(int n, everyDay a[]) {
    int totalSpent = 0, totalIncome = 0;
    cout << "\n___________ Generating Report ___________" << endl;
    for (int i = 0; i < n; i++) {
        totalSpent += a[i].spent;
        totalIncome += a[i].income;
        cout << "Day " << a[i].day << ": Spent " << a[i].spent << " on " << a[i].spentType
             << ", Earned " << a[i].income << " from " << a[i].incomeType << "." << endl;
    }
    cout << "\nTotal Spent: " << totalSpent << endl;
    cout << "Total Earned: " << totalIncome << endl;
    cout << "Net Savings: " << (totalIncome - totalSpent) << endl;
}

int main() {
    int days = entryDays();
    everyDay* records = new everyDay[days]; // Dynamic array
    entryData(days, records);
    calculations(days, records);
    delete[] records; // Free allocated memory
    return 0;
}
