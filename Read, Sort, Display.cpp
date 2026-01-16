#include <iostream>
using namespace std;

// Function declarations
void read(int arr[], int size);
void display(int arr[], int size);
void sort(int arr[], int size);

int main() {
    int n;
    int arr[100];   // Array declaration

    cout << "Enter the size: ";
    cin >> n;

    // Menu-driven loop
    while (true) {
        cout << "\nSelect the function:\n";
        cout << "1) Read\n";
        cout << "2) Display\n";
        cout << "3) Sort\n";
        cout << "4) Exit\n";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                read(arr, n);
                break;

            case 2:
                display(arr, n);
                break;

            case 3:
                sort(arr, n);
                break;

            case 4:
                return 0;   // Exit program

            default:
                cout << "Invalid choice" << endl;
        }
    }
}   // ? main() ends here

// Function to read array elements
void read(int arr[], int size) {
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

// Function to display array elements
void display(int arr[], int size) {
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to sort array (Bubble Sort)
void sort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Array sorted successfully." << endl;
}

