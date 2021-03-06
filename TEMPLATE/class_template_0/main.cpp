#include "vec2.cpp"
#include <iostream>


int main() {
	vec2<float> a;
	vec2<int> b(21, 42);
	vec2<float> c(21.21f, 42.42f);
	vec2<bool> d(true, false);
	vec2<float> e(c);

	// DON'T WORK ON OPERATOR SIDE
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << e << std::endl;

	std::cout << "a.get_x(): " << a.get_x() << std::endl;
	std::cout << "a.get_y(): " << a.get_y() << std::endl;

	std::cout << "b.get_x(): " << b.get_x() << std::endl;
	std::cout << "b.get_y(): " << b.get_y() << std::endl;

	std::cout << "c.get_x(): " << c.get_x() << std::endl;
	std::cout << "c.get_y(): " << c.get_y() << std::endl;

	std::cout << "d.get_x(): " << d.get_x() << std::endl;
	std::cout << "d.get_y(): " << d.get_y() << std::endl;

	std::cout << "e.get_x(): " << e.get_x() << std::endl;
	std::cout << "e.get_y(): " << e.get_y() << std::endl;

	printf("e = a\n");
	e = a;
	std::cout << "e.get_x(): " << e.get_x() << std::endl;
	std::cout << "e.get_y(): " << e.get_y() << std::endl;

	return (0);
}
