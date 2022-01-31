#include <bits/stdc++.h>
using namespace std;

class Product
{
private: // By default the data members are private
    int id;
    char name[100];

public:
    int mrp;
    int selling_price;
};

int main()
{
    Product camera;
    camera.mrp = 100;
    camera.selling_price = 200;
    cout << sizeof(camera) << endl;
    cout << camera.mrp;
    return 0;
}