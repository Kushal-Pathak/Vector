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


int main() {
	Vector2 v1(0,1), v2(2,2);
	v1.display();

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

	v1.display();
	system("pause");
	return 0;
}
