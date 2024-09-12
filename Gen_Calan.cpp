#include <iostream>
using namespace std;
void generateCalendar(int start_day, int num_days) {
    cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
    for (int i = 1; i < start_day; i++) {
        cout << "    ";
    }
    for (int day = 1; day <= num_days; day++) {
        printf("%3d ", day);
        if ((start_day + day - 1) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}
int main() {
    int start_day, num_days;
    cout << "Enter the start day of the month (1=Sun, 2=Mon, ..., 7=Sat): ";
    cin >> start_day;
    cout << "Enter the number of days in the month: ";
    cin >> num_days;
    generateCalendar(start_day, num_days);
    return 0;
}
