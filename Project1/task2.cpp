#include "iostream"
#include "string"
#include "ctime"
#include "vector"
#include "random"
using namespace std;


int main(int argc, char** argv) {
	int N = 100, sum = 0, min, max;
	random_device rd;
	mt19937 rng(rd());
	uniform_int_distribution<> dist(INT_MIN,INT_MAX);
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		v[i] = dist(rng);
		sum = sum + v[i];
		
		cout << v[i] << endl;
	}
	float sr = (float)sum / N;
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++) {
		cout << v[i] << endl;
	}
	cout << "sum=" << sum << " N= " << sr << endl;
	cout << "min=" << v.front() << endl;
	cout << "max=" << v.back() << endl;
	system("pause");
	return 0;
	

}