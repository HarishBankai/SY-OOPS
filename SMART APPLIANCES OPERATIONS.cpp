#include<iostream>
using namespace std;

class smartAppliance {
	string name;
	bool status;
	public:
		void setAppliance(string n, bool s) {
			name=n;
			status=s;
		}
		
		void display() {
		cout<<"Appliance name:"<<name<<endl;
		if(status == true)
		
		cout<<"status:ON"<<endl;
		else
		cout<<"status:OFF"<<endl;		
		}
		
		void operator!() {
		status=!status;
		cout<<"status toggled successfully"<<endl;
		}
};

int main()
{
	smartAppliance a1,a2,a3;
	a1.setAppliance("Fan",false);
	a2.setAppliance("LED",true);
	a3.setAppliance("AC",false);
	cout<<"Initial Status:"<<endl;
	a1.display();
	a2.display();
	a3.display();
	
	!a1;
	!a2;
	!a3;
	
	cout<<"After toggling :"<<endl;
	a1.display();
	a2.display();
	a3.display();
};
