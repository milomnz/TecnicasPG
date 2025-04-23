#include <iostream>
#include <vector>

using namespace std;

void visualizar(int num);

int main(){
   int num = 1;
   visualizar(num);
   return 0;
}
void visualizar(int n){
    if (n == 10){
        cout << n;
    }else{
        cout << n << '\t';
        visualizar(n+1);
    }
}