#include <iostream>
#include "vector.h"
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
	v1.translate3d(2, 2, 2);
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