#include <stdio.h>
#include <math.h>

struct ComplexRectangular {
	double real;
	double imag;
};

struct ComplexPolar {
	double magnitude;
	double angle;
};

void rectangular_to_polar(struct ComplexRectangular c, struct ComplexPolar *p) {
	p->magnitude = sqrt(c.real * c.real + c.imag * c.imag);
	p->angle = atan2(c.imag, c.real);
}

void polar_to_rectangular(struct ComplexPolar p, struct ComplexRectangular *c) {
	c->real = p.magnitude * cos(p.angle);
	c->imag = p.magnitude * sin(p.angle);
}

int main() {
	struct ComplexRectangular c1 = {3.0, 4.0};
	struct ComplexPolar p1;
	
	rectangular_to_polar(c1, &p1);
	printf("Rectangular: %lf + %lfi\n", c1.real, c1.imag);
	printf("Polar: %lf ? %lf radians\n", p1.magnitude, p1.angle);
	
	struct ComplexPolar p2 = {5.0, M_PI / 3.0};
	struct ComplexRectangular c2;
	
	polar_to_rectangular(p2, &c2);
	printf("Polar: %lf ? %lf radians\n", p2.magnitude, p2.angle);
	printf("Rectangular: %lf + %lfi\n", c2.real, c2.imag);
	
	return 0;
}

