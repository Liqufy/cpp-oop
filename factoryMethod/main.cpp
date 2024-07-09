#include <iostream>
#include <deque>
using namespace std;

class Product
{
public:
    virtual void use() = 0;
};

class ConcreteProductA : public Product {
public:
    void use() override {
        cout << "Using Product A\n";
    }
};

class Creator {
public:
    virtual Product* factoryMethod() = 0;
    void someOperation()
    {
        Product* product = factoryMethod();
        product->use();
    }
};

class ConcreteCreator : public Creator {
public:
    Product* factoryMethod() override {
        return new ConcreteProductA();
    }
};

int main()
{

}