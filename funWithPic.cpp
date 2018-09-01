#include <graphics.h> 
#include <iostream>
#include <math.h>
#include<vector>
#define HEIGHT 569
#define WIDTH 640
//struct point {
//	point(float x, float y) :X(x), Y(y) {};
//	point() = default;
//	float X, Y;
//};
//point translate(float currx, float curry, point translateValue) {
//	point ret;
//	ret.X = translateValue.X  - currx ;
//	ret.Y = translateValue.Y  - curry;
//	return ret;
//
//}
//point translateAngle(const float angle, const point translateValue,const point orig) {
//	point ret;
//	ret.X = cos(atan(translateValue.Y / translateValue.X) + angle)*sqrt(pow(translateValue.X, 2) + pow(translateValue.Y, 2));
//	ret.Y = sin(atan(translateValue.Y / translateValue.X) + angle)*sqrt(pow(translateValue.X, 2) + pow(translateValue.Y, 2));
//	//ret.X = (atan(translateValue.Y / translateValue.X));//*(sqrt(pow(translateValue.X, 2) + pow(translateValue.Y, 2)));
//	//ret.Y = (atan(translateValue.Y / translateValue.X));//*(sqrt(pow(translateValue.X, 2) + pow(translateValue.Y, 2)));
//	std::cout << ret.X << " " << ret.Y << std::endl;
//
//	return ret;
//}
//void branch(point porig,float len) {
//	point orig(porig.X, porig.Y);
//	point p1 = point(HEIGHT / 2, HEIGHT);
//	point p2 = point(WIDTH / 2, HEIGHT - len);
//	point p = translateAngle(PI/3, p1);
//	point p3 = translateAngle(PI/3, p2);
//	line(orig.X, orig.Y, p.X, p3.Y);
//}
int main() {
	initgraph(WIDTH, HEIGHT);
	PIMAGE pimg = newimage(WIDTH, HEIGHT);
	getimage(pimg, "./IMG_0463.JPG", 0, 0);
	//std::vector<unsigned int> vec;
	//putimage(0, 0, pimg);
	for (int i = 0; i < WIDTH; i++) {
		for (int j = 0; j < HEIGHT; j++) {
			color_t c = getpixel_f(i, j, pimg);
			int factor = 20;
			int r = round(factor * GetRValue(c) / 255.00) * 255 / factor;
			int g = round(factor* GetGValue(c) / 255.00) * 255 / factor;
			int b = round(factor*GetBValue(c) / 255.00) * 255 / factor;
			c = EGERGB(r, g, b);
			putpixel(i, j, c);
		}
	}
	/*for (int i = 0; i < WIDTH ; i++) {
		for (int j = 0; j < HEIGHT; j++) {
			color_t c = getpixel_f(i, j, pimg);
			float errR = GetRValue(c) - GetRValue(vec[i*WIDTH + j]);
			float errG = GetGValue(c) - GetGValue(vec[i*WIDTH + j]);
			float errB = GetBValue(c) - GetBValue(vec[i*WIDTH + j]);
			putpixel(i,j,vec[i*WIDTH+j]);
		}
	}*/
	//		int index = (i + 1)*WIDTH + j;
	//		int newr = EGEGET_R(vec[index]);
	//		int newg = EGEGET_G(vec[index]);
	//		int newb = EGEGET_B(vec[index]);
	//		newr = newr + errR * 7 / 16.00;
	//		newg = newg + errG * 7 / 16.00;
	//		newb = newb + errB * 7 / 16.00;
	//		vec[index] = EGERGB(newr, newg, newb);

	//		index = (i - 1)*WIDTH + j+1;
	//		newr = EGEGET_R(vec[index]);
	//		newg = EGEGET_G(vec[index]);
	//		newb = EGEGET_B(vec[index]);
	//		newr = newr + errR * 3 / 16.00;
	//		newg = newg + errG * 3 / 16.00;
	//		newb = newb + errB * 3 / 16.00;
	//		vec[index] = EGERGB(newr, newg, newb);

	//		index = (i)*WIDTH + j+1;
	//		newr = EGEGET_R(vec[index]);
	//		newg = EGEGET_G(vec[index]);
	//		newb = EGEGET_B(vec[index]);
	//		newr = newr + errR * 5 / 16.00;
	//		newg = newg + errG * 5 / 16.00;
	//		newb = newb + errB * 5 / 16.00;
	//		vec[index] = EGERGB(newr, newg, newb);

	//		index = (i + 1)*WIDTH + j+1;
	//		newr = EGEGET_R(vec[index]);
	//		newg = EGEGET_G(vec[index]);
	//		newb = EGEGET_B(vec[index]);
	//		newr = newr + errR * 1 / 16.00;
	//		newg = newg + errG * 1 / 16.00;
	//		newb = newb + errB * 1 / 16.00;
	//		vec[index] = EGERGB(newr, newg, newb);

	//		/*putpixel(i, j, c);
	//		vec[(i + 1)*WIDTH + j] = 
	//		vec[(i-1)*WIDTH+j+1]
	//		vec[(i)*WIDTH+j+1]
	//		vec[(i + 1)*WIDTH + j + 1]*/
	//	}
	//}
	//for (int i = 0; i < WIDTH; i++) {
	//	for (int j = 0; j < HEIGHT; j++) {
	//		color_t c = vec[i*WIDTH + j];
	//		putpixel(i, j, c);
	//	}
	//}
	delimage(pimg);
	getch();
	closegraph();
	return 0;
}
