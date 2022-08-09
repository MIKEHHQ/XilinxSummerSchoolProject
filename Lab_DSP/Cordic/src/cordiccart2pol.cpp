#include "cordiccart2pol.h"

data_t Kvalues[NO_ITER] = {1,	0.500000000000000,	0.250000000000000,	0.125000000000000,	0.0625000000000000,	0.0312500000000000,	0.0156250000000000,	0.00781250000000000,	0.00390625000000000,	0.00195312500000000,	0.000976562500000000,	0.000488281250000000,	0.000244140625000000,	0.000122070312500000,	6.10351562500000e-05,	3.05175781250000e-05};

data_t angles[NO_ITER] = {0.785398163397448,	0.463647609000806,	0.244978663126864,	0.124354994546761,	0.0624188099959574,	0.0312398334302683,	0.0156237286204768,	0.00781234106010111,	0.00390623013196697,	0.00195312251647882,	0.000976562189559320,	0.000488281211194898,	0.000244140620149362,	0.000122070311893670,	6.10351561742088e-05,	3.05175781155261e-05};


void cordiccart2pol(data_t x, data_t y, data_t * r,  data_t * theta)
{
	// Write your code here

	#pragma HLS INTERFACE s_axilite port=x
	#pragma HLS INTERFACE s_axilite port=y
	#pragma HLS INTERFACE s_axilite port=r
	#pragma HLS INTERFACE s_axilite port=theta
	#pragma HLS INTERFACE s_axilite port=return bundle=CTRL

	data_t pi = 1.570796326794896;
	data_t c_x, c_y;
	data_t angle;

	if (y > 0) {
		// rotate by -90
		c_x = y;
		c_y = -x;
		angle = pi;
	} else {
		// rotate by 90
		c_x = -y;
		c_y = x;
		angle = -pi;
	}

	for (int i = 0; i < NO_ITER; i++) {
		coef_t signma;
		if (c_y < 0) {
			signma = 1;
		} else {
			signma = -1;
		}
		data_t tempX = c_x;
		c_x = c_x + (-signma) * Kvalues[i] * c_y;
		c_y = c_y + signma * Kvalues[i] * tempX;
		angle -= signma * angles[i];
	}

	*r = c_x * (data_t) 0.607;
	*theta = angle;
}
