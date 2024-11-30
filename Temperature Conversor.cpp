#include <iostream>
#include <iomanip> 

using namespace std;

double CelForFah(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double FahForCel(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double CelForKel(double celsius) {
    return celsius + 273.15;
}

double KelForCel(double kelvin) {
    return kelvin - 273.15;
}

double FahForKel(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

double KelForFah(double kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}

void Sm() {
    cout << "\n=====================================" << endl;
    cout << "           THE CONVERSOR               " << endl;
    cout << "=====================================" << endl;
    cout << "1. Celsius for Fahrenheit" << endl;
    cout << "2. Fahrenheit for Celsius" << endl;
    cout << "3. Celsius for Kelvin" << endl;
    cout << "4. Kelvin for Celsius" << endl;
    cout << "5. Fahrenheit for Kelvin" << endl;
    cout << "6. Kelvin for Fahrenheit" << endl;
    cout << "0. To leave" << endl;
    cout << "=====================================" << endl;
    cout << "Choose The Command (0-6): ";
}

int main() {
    int menu;
    double t, r;

    do {
        Sm();
        cin >> menu;
        switch (menu) {
        case 1:
            system("cls");
            cout << "Enter temperature in Celsius: ";
            cin >> t;
            r = CelForFah(t);
            cout << fixed << setprecision(2) << t << " Celsius = " << r << " Fahrenheit" << endl;
            break;
        case 2:
            system("cls");
            cout << "Enter temperature in Fahrenheit: ";
            cin >> t;
            r = FahForCel(t);
            cout << fixed << setprecision(2) << t << " Fahrenheit = " << r << " Celsius" << endl;
            break;
        case 3:
            system("cls");
            cout << "Enter temperature in Celsius: ";
            cin >> t;
            r = CelForKel(t);
            cout << fixed << setprecision(2) << t << " Celsius = " << r << " Kelvin" << endl;
            break;
        case 4:
            system("cls");
            cout << "Enter temperature in Kelvin: ";
            cin >> t;
            r = KelForCel(t);
            cout << fixed << setprecision(2) << t << " Kelvin = " << r << " Celsius" << endl;
            break;
        case 5:
            system("cls");
            cout << "Enter temperature in Fahrenheit: ";
            cin >> t;
            r = FahForKel(t);
            cout << fixed << setprecision(2) << t << " Fahrenheit = " << r << " Kelvin" << endl;
            break;
        case 6:
            system("cls");
            cout << "Enter temperature in Kelvin: ";
            cin >> t;
            r = KelForFah(t);
            cout << fixed << setprecision(2) << t << " Kelvin = " << r << " Fahrenheit" << endl;
            break;
        case 0:
            system("cls");
            cout << "Goodbye!" << endl;
            break;
        default:
            system("cls");
            cout << "Error!" << endl;
        }

        cout << endl;

    } while (menu != 0);

    return 0;
}
