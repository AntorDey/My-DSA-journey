#include <iostream>
using namespace std;
void swap(int* a, int* b){

    int temp = *a;
    *a = *b;
    *b = temp; // pass by referance mathod for swap;
}

int main(){

    int x = 25;
    int y = 90;
    cout << x << " " << y << endl;
    swap(&x, &y);
    cout << x << " " << y << endl;
} 