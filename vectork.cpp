#include <iostream>
#include <math.h>
#include <iomanip>

class Vector2 {
public:
	float x, y;

	Vector2() {
		x = 0;
		y = 0;
		mag = 0;
	}

	Vector2(float a, float b) {
		x = a;
		y = b;
		calculate_mag();
	}
	
	void translate2d(float tx, float ty) {
		x += tx;
		y += ty;
		calculate_mag();
	}

	void translateX(float tx) {
		x += tx;
		calculate_mag();
	}

	void translateY(float ty) {
		y += ty;
		calculate_mag();
	}

	void scale2d(float sx, float sy) {
		x = x * sx;
		y = y * sy;
		calculate_mag();
	}

	void scaleX(float sx) {
		x = x * sx;
		calculate_mag();
	}

	void scaleY(float sy) {
		y = y * sy;
		calculate_mag();
	}

	void rotate2d(float h, float k, float angle) {
		angle = (3.14159f / 180) * angle;
		float temp_x, temp_y;
		temp_x = (x - h) * cos(angle) - (y - k) * sin(angle) + h;
		temp_y = (x - h) * sin(angle) + (y - k) * cos(angle) + k;
		x = temp_x;
		y = temp_y;
		calculate_mag();
	}

	void add_vector2d(Vector2 v) {
		x = x + v.x;
		y = y + v.y;
		calculate_mag();
	}

	void subtract_vector2d(Vector2 v) {
		x = x - v.x;
		y = y - v.y;
		calculate_mag();
	}

	void normalise2d() {
		x = x / mag;
		y = y / mag;
		mag = 1;
	}

	void add_mag(float m) {
		float temp_mag = mag;
		normalise2d();
		mag = temp_mag + m;
		multiply_scalar(mag);
	}
	
	float get_mag() {
		return mag;
	}

	float dot_product(Vector2 v) {
		return x * v.x + y * v.y;
	}

	void calculate_mag() {
		mag = sqrt(x * x + y * y);
	}

	void multiply_scalar(float s) {
		x = x * s;
		y = y * s;
		calculate_mag();
	}

	void display() {
		std::cout << "X: " << std::setprecision(3) << x << "\tY: "<< std::setprecision(3) << y << "\tMagnitude: " << std::setprecision(4) << mag << std::endl;
	}

private:
	float mag;
};

class Vector3 {
public:
	float x, y, z;

	Vector3() {
		x = 0;
		y = 0;
		z = 0;
		mag = 0;
	}

	Vector3(float a, float b, float c) {
		x = a;
		y = b;
		z = c;
		calculate_mag();
	}

	void translate3d(float tx, float ty, float tz) {
		x += tx;
		y += ty;
		z += tz;
		calculate_mag();
	}

	void translateX(float tx) {
		x += tx;
		calculate_mag();
	}

	void translateY(float ty) {
		y += ty;
		calculate_mag();
	}

	void translateZ(float tz) {
		z += tz;
		calculate_mag();
	}

	void scale3d(float sx, float sy, float sz) {
		x = x * sx;
		y = y * sy;
		z = z * sz;
		calculate_mag();
	}

	void scaleX(float sx) {
		x = x * sx;
		calculate_mag();
	}

	void scaleY(float sy) {
		y = y * sy;
		calculate_mag();
	}

	void scaleZ(float sz) {
		z = z * sz;
		calculate_mag();
	}

	void rotateX(float k, float w, float angle) {
		angle = (3.14159f / 180) * angle;
		float temp_y, temp_z;
		temp_y = (y - k) * cos(angle) - (z - w) * sin(angle) + k;
		temp_z = (y - k) * sin(angle) + (z - w) * cos(angle) + w;
		y = temp_y;
		z = temp_z;
		calculate_mag();
	}

	void rotateY(float w, float h, float angle) {
		angle = (3.14159f / 180) * angle;
		float temp_z, temp_x;
		temp_z = (z - w) * cos(angle) - (x - h) * sin(angle) + w;
		temp_x = (z - w) * sin(angle) + (x - h) * cos(angle) + h;
		z = temp_z;
		x = temp_x;
		calculate_mag();
	}

	void rotateZ(float h, float k, float angle) {
		angle = (3.14159f / 180) * angle;
		float temp_x, temp_y;
		temp_x = (x - h) * cos(angle) - (y - k) * sin(angle) + h;
		temp_y = (x - h) * sin(angle) + (y - k) * cos(angle) + k;
		x = temp_x;
		y = temp_y;
		calculate_mag();
	}

	void add_vector3d(Vector3 v) {
		x = x + v.x;
		y = y + v.y;
		z = z + v.z;
		calculate_mag();
	}

	void subtract_vector3d(Vector3 v) {
		x = x - v.x;
		y = y - v.y;
		z = z - v.z;
		calculate_mag();
	}

	void normalise3d() {
		x = x / mag;
		y = y / mag;
		z = z / mag;
		mag = 1;
	}

	void add_mag(float m) {
		float temp_mag = mag;
		normalise3d();
		mag = temp_mag + m;
		multiply_scalar(mag);
	}

	float get_mag() {
		return mag;
	}

	float dot_product(Vector3 v) {
		return x * v.x + y * v.y + z * v.z;
	}

	void calculate_mag() {
		mag = sqrt(x * x + y * y + z * z);
	}

	void multiply_scalar(float s) {
		x = x * s;
		y = y * s;
		z = z * s;
		calculate_mag();
	}

	void display() {
		std::cout << "X: " << std::setprecision(3) << x;
		std::cout << "\tY: " << std::setprecision(3) << y;
		std::cout << "\tZ: " << std::setprecision(3) << z;
		std::cout << "\tMagnitude: " << std::setprecision(4);
		std::cout << mag << std::endl;
	}

private:
	float mag;
};


int main() {
	//Vector2 v1(0,1), v2(2,2);
	//v1.display();
	//v1.translate2d(2, 2);
	//v1.translateX(2);
	//v1.translateY(2);
	//v1.scale2d(2, 2);
	//v1.scaleX(2);
	//v1.scaleY(2);
	//v1.rotate2d(0, 0, 90);
	//v1.add_vector2d(v2);
	//v1.subtract_vector2d(v2);
	//v1.normalise2d();
	//v1.add_mag(10);
	//std::cout<<v1.dot_product(v2)<<std::endl;
	//v1.multiply_scalar(10);
	//v1.display();

	Vector3 v1(3, 10, 0), v2(2, 2, 2);
	v1.display();
	//v1.translate3d(2, 2, 2);
	//v1.translateX(2);
	//v1.translateY(2);
	//v1.translateZ(2);
	//v1.scale3d(2, 2, 2);
	//v1.scaleX(2);
	//v1.scaleY(2);
	//v1.scaleZ(2);
	//v1.rotateX(0, 0, 90);
	//v1.rotateY(0, 0, 90);
	//v1.rotateZ(0, 0, 90);
	//v1.add_vector3d(v2);
	//v1.subtract_vector3d(v2);
	//v1.normalise3d();
	//v1.add_mag(10);
	//std::cout<<v1.dot_product(v2)<<std::endl;
	//v1.multiply_scalar(10);
	v1.display();

	system("pause");
	return 0;
}
