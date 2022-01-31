#include <bits/stdc++.h>
using namespace std;

class Product
{
private: // By default the data members are private
    int id;
    char name[100];
    int mrp;
    int selling_price;

public:
    // Setters
    void setMrp(int price)
    {
        mrp = price;
    }

    void setSellingPrice(int price)
    {
        // additional checks
        if (price > mrp)
        {
            selling_price = mrp;
        }
        else
        {
            selling_price = price;
        }
    }

    // Getters

    int getMrp()
    {
        return mrp;
    }

    int getSelingPrice()
    {
        return selling_price;
    }
};

int main()
{
    Product camera;
    camera.setMrp(100);
    camera.setSellingPrice(90);
    cout << camera.getMrp() << endl;
    cout << camera.getSelingPrice() << endl;
    return 0;
}