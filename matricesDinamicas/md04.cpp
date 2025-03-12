#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<vector<string>> matrizCadenas;
	matrizCadenas.push_back({"Daniel", "Samuel", "Alejandro"});
	cout << matrizCadenas[0][1][3];
	return 0;
}