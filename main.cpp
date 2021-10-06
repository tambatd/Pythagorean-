#include <iostream>
#include <math.h>
using namespace std;

double path(const float& a, const float& b){
	float c;
	c = sqrt(sqrt(a)+sqrt(b));
	return c;
}

int main() {
	cout << path(5,5);
  return 0;
	}
