#include <cmath>
#include <iostream>

using namespace std;

void bezie(int p0, int p1, int p2, double s);

int main() {
	int x1, y1, x2, y2, x3, y3;
	float x, y;
	int step = 1;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	bezie(x1, x2, x3, step);
	system("pause");
}

void bezie(int p0, int p1, int p2, double s) {
	float p;
	for (float i = 0; i <=100; i += s) {
		float v = (1 - i);
		p = (p0 * pow(v, 2) + 2 * p1 * i* v + p2 * pow(i, 2))/100;
		cout.precision(3);
		if (p==int(p)) {
			cout <<p<<" "<<endl;
		}
	}
}