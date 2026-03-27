//CREATE A C++ PROGRAM FOR ONLINE PAYMENT SYSTEM WHERE DIFFERENT PAYMENT METHOD, : UPI , CREDIT CARD, DEBIT CARD AND PAYPAL ARE IMPLEMENTED. BEST CLASS PAYMENT METHOD WILL CONTAIN PROCESS PAYMENT WHICH HANDLES PAYMENT WHEN DERIVED CLASSES CREDIT CARD. DEBIT CARD, UPI AND PAYPAL WILL OVERWRITE THE PROCESS PAYMENT _MENTHOD TO IMPOLEMENT SPECIFIC PAYMENT LOGIC FOR EACH METHOD AND VIRYTUAL FUNCTION WIL BE USED TO ENSURE THAT COORECT FUNCTION METHOD IS CALLED

#include <iostream>
using namespace std;

class payment_method {
public:
		virtual void process_payment() {
		cout<<"Processing General Payment.."<<endl;
	}
};

class creditcard:public payment_method {
	public:
		void process_payment() {
			cout<<"Processing General Payment Using Credit Card.."<<endl;
		}
};

class debitcard:public payment_method {
	public:
		void process_payment() {
			cout<<"Processing General Payment Using Debit Card.."<<endl;
		}
};

class upi:public payment_method {
	public:
		void process_payment() {
			cout<<"Processing General Payment Using UPI.."<<endl;
		}
};

class paypal:public payment_method {
	public:
		void process_payment() {
			cout<<"Processing General Payment Using PayPal.."<<endl;
		}
};

int main() {
	payment_method *p;
	creditcard c;
	debitcard d;
	upi u;
	paypal pp;
	
	p=&c;
	p->process_payment();
	
	p=&d;
	p->process_payment();
	
	p=&u;
	p->process_payment();
	
	p=&pp;
	p->process_payment();
	
	return 0;
}
