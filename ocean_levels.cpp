
#include <iostream>
using namespace std;

int main() {
    const double ANNUAL_RISE = 1.5;

    const int YEARS_FIVE = 5;
    const int YEARS_SEVEN = 7;
    const int YEARS_TEN = 10;

    double rise_five_years = ANNUAL_RISE * YEARS_FIVE;
    double rise_seven_years = ANNUAL_RISE * YEARS_SEVEN;
    double rise_ten_years = ANNUAL_RISE * YEARS_TEN;

    cout << "Ocean-level rise after 5 years: "
         << rise_five_years << " millimeters" << endl;
    cout << "Ocean-level rise after 7 years: "
         << rise_seven_years << " millimeters" << endl;
    cout << "Ocean-level rise after 10 years: "
         << rise_ten_years << " millimeters" << endl;

    return 0;
}

