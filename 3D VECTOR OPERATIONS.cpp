//design a vector 3d class for design 3d game engine where physics simulations requires frequent vector operations like position updates, force calculation, requirememtns, overload, add, sub, multi, div, = or != for comparing vectors

#include <iostream>
using namespace std;

class Vector3D {
	float x,y,z;
	public:
	Vector3D(float a = 0, float b = 0, float c = 0) {
	x=a;
	y=b;
	z=c;
	}
	
	Vector3D operator+(Vector3D& v){
		return Vector3D(x+v.x, y+v.y, z+v.z);
	}
	
	Vector3D operator-(Vector3D& v){
		return Vector3D(x-v.x, y-v.y, z-v.z);
	}
	
	float operator*(Vector3D& v) {
        return (x * v.x) + (y * v.y) + (z * v.z);
    }
	
	Vector3D operator%(Vector3D& v){
		return Vector3D(
		y*v.z-z*v.y,
		z*v.x-x*v.z,
		x*v.y-y*v.x);
	}
	
	bool operator==(Vector3D& v) {
		return (x==v.x && y==v.y && z==v.z);
	}
	
	bool operator!=(Vector3D& v) {
		return !(*this==v);
	}
	
	void display() {
		cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
	}
};
	
int main() {
	Vector3D v1(5,6,7);
	Vector3D v2(8,9,10);
	
	Vector3D add = v1 + v2;
	Vector3D sub = v2 - v1;
    float dot = v1 * v2;
    Vector3D cross = v1 % v2;
	
	cout<<"Vector addition : "<<endl;
	add.display();
	
	cout<<"Vector subtraction : "<<endl;
	sub.display();
	
	cout << "Dot Product: " << dot << endl;

    cout << "Cross Product: ";
    cross.display();
    
    if(v1 == v2) {
    	cout<<"Both vectors are same"<<endl;
    }else{
    	cout<<"Both vectors are not same"<<endl;
}

    return 0;
}

