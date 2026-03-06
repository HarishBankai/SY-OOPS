//DESIGN A ONLINE SHOPPING SYSTEM WITH FOLLOWING CLASSES : PRODUCT (NAME, PRICE, DESCRIPRION), ATTRIBUTES (SIZE, COLOR, BRAND, ETC.) AND CLOTHING (DERIVED FROM BOTH PRODUCTS AND ATTRIBUTES)

#include <iostream>
using namespace std;

class Product {
protected:
	
	string name;
	float price;
	string description;
	
	public:
	void getProduct() {
 	 	cout << "Product Name = " << endl;
		cin >> name;
		cout << "Product Price = " << endl;
		cin >> price;
		cout << "Product Description = " << endl;
		cin >> description;
		}
		
	void showProduct() {
 	 	cout << "Product Name = " << name << endl;
		cout << "Product Price = " << price << endl;
		cout << "Product Description = " << description << endl;
		}
};

class Attributes {
protected:
	string size;
	string colour;
	string brand;
	
	public:
	void getAttributes() {
 	 	cout << "Size = " << endl;
		cin >> size;
		cout << "Colour = " << endl;
		cin >> colour;
		cout << "Brand = " << endl;
		cin >> brand;
		}
		
	void showAttributes() {
 	 	cout << "Size = " << size << endl;
		cout << "Colour = " << colour << endl;
		cout << "Brand = " << brand <<endl;
		}
};

class Clothing : public Product, public Attributes {	
public:
	void display() {
 	 	showProduct();
 	 	showAttributes();
		}
};

int main() {
    Clothing c;
    
    cout << "Enter Clothing details :"<<endl;
    c.getProduct();
    c.getAttributes();
    
    cout << "\n Clothing Information : "<<endl;
    c.display();
    
    return 0;
}
