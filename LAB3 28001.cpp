#include <iostream>
using namespace std;

int main() {
	int choice;
	do
	{
		cout<<"Canteen Billing Assistant System\n"<<endl;
		cout<<"1. Add price\n"<<endl;
		cout<<"2. Subtract the discount\n"<<endl;
		cout<<"3. Multiply quantity and price\n"<<endl;
		cout<<"4. Divide bill between students\n"<<endl;
		cout<<"5. Exit\n"<<endl;
		cout<<"Enter the choice : ";
		cin>>choice;
		
		switch(choice) {
			case 1: {
				std::cout << "Addition selected." << endl;
				float price1, price2;
				cout << "Enter the price of first item"<<endl;
				cin>>price1;
				cout << "Enter the price of second item"<<endl;
				cin>>price2;
				cout << "Total bill : "<<(price1+price2)<<endl;
            	break;
            }
			case 2: {
    			cout << "Subtraction (Discount) selected." << endl;
    			float price, percent, finalPrice;
    
    			cout << "Enter the price of item: ";
    			cin >> price;
    			cout << "Enter the discount percentage: ";
    			cin >> percent;

    			float discountAmount = (percent / 100) * price; 
    			finalPrice = price - discountAmount;

  			    cout << "Discount Amount: " << discountAmount << endl;
    			cout << "Final Price: " << finalPrice << endl;
    			break;
            }
            case 3: {
            	std::cout << "Multiplication selected." << endl;
            	float price, quantity;
				cout << "Enter the price of item"<<endl;
				cin>>price;
				cout << "Enter the quantity of item"<<endl;
				cin>>quantity;
				cout << "Total net price : "<<(price*quantity)<<endl;
            	break;
            }
            case 4: {
            	std::cout << "Division selected." << endl;
            	float bill, students;
				cout << "Enter the bill of the order"<<endl;
				cin>>bill;
				cout << "Enter the no.of students"<<endl;
				cin>>students;
				cout << "Bill per head: "<<(bill/students)<<endl;
            	break;
            }
            case 5:
            	cout<<"Exiting....." <<endl;
            	break;
            default:
            	cout << "Invalid choice." << endl;
            	break;
		}
	}
	while(choice!=5);
	return 0;
}
