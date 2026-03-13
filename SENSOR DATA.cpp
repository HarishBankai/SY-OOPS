// IN A SMART CITY PROGRAM, TO MONITOR THE ENVIRONMENT A DATA LOGGER IN NEEDED. DESIGN A CLASS DATA LOGGER THAT CAN STORE 1. SENSORY DATA (int / float), TIMESTAMPS (date), DATA ENTRY AND DISPLAY FEATURE

//design a vector 3d class for design 3d game engine where physics simulations requires frequent vector operations like position updates, force calculation, requirememtns, overload, add, sub, multi, div, = or != for comparing vectors

#include <iostream>
using namespace std;

class Date {
    int day, month, year; 
public:
    void getDate() {
        cout << "Enter date (dd mm yyyy) : " << endl;
        cin >> day >> month >> year;
    }
    
    void showDate() { 
        cout << day << "/" << month << "/" << year;
    }
};

template<typename T> 
class Datalogger {
    T sensorData;    
    Date timestamp;
    
public:
    void showValue(T value) {
        cout << value;
    }
    
    void enterData() {
        cout << "Enter sensor data : " << endl;
        cin >> sensorData;
        
        timestamp.getDate(); 
    }
    
    void displayData() {
        cout << "\n--- Logged Data ---" << endl;
        cout << "Sensor data : ";
        showValue(sensorData); 
        cout << endl;
        
        cout << "Date : "; 
        timestamp.showDate(); 
        cout << endl;
    }
};

int main() {
    cout << "Integer Sensor Logger : " << endl;
    
    Datalogger<int> intlog;
    intlog.enterData();  
    intlog.displayData();  
    
    return 0;
}
