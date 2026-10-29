
#include <iostream>
#include <string>
#include <utility>
using namespace std;

class ShoppingBag
{
public:
    string item;
    int quantity;
    double price;

    ShoppingBag(string name, int qty, double cost)
    {
        item = name;
        quantity = qty;
        price = cost;
    }
};

int main()
{
    ShoppingBag bag1("Shopping Bag", 2, 499.50);
    ShoppingBag bag2("", 0, 0.0);

    cout << "Before moving:" << endl;
    cout << "Item: " << bag1.item << endl;
    cout << "Quantity: " << bag1.quantity << endl;
    cout << "Price: " << bag1.price << endl;

    bag2.item = std::move(bag1.item);
    bag2.quantity = std::move(bag1.quantity);
    bag2.price = std::move(bag1.price);
    cout << "\nAfter moving:" << endl;
    
    cout << "Bag 1 Item: " << bag1.item << endl;
    cout << "Bag 2 Item: " << bag2.item << endl;
    cout << "Bag 2 Quantity: " << bag2.quantity << endl;
    cout << "Bag 2 Price: " << bag2.price << endl;

    return 0;
}
