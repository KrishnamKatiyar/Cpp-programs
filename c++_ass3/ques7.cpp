#include <iostream>
using namespace std;

class Mobile {
public:
    string brand;
    int price;
    string color;

    Mobile() {}

    Mobile(string b, int p, string c) {
        brand = b;
        price = p;
        color = c;
    }
};

int main() {
    const int numMobiles = 5;
    Mobile mobiles[numMobiles];

    for (int i = 0; i < numMobiles; i++) {
        cout << "Enter details for mobile " << i + 1 << ":\n";
        cout << "Brand: ";
        cin >> mobiles[i].brand;
        cout << "Price: ";
        cin >> mobiles[i].price;
        cout << "Color: ";
        cin >> mobiles[i].color;
    }

    int count = 0;
    for (int i = 0; i < numMobiles; i++) {
        if (mobiles[i].price > 5000) {
            count++;
        }
    }
    cout << "Total number of mobiles having price greater than 5000: " << count << endl;

    cout << "Mobiles in the price range 1000 to 10000:" << endl;
    for (int i = 0; i < numMobiles; i++) {
        if (mobiles[i].price >= 1000 && mobiles[i].price <= 10000) {
            cout << "Brand: " << mobiles[i].brand << ", Price: " << mobiles[i].price << ", Color: " << mobiles[i].color << endl;
        }
    }

    return 0;
}

