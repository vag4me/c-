#include <iostream>

using namespace std;

class Animal
{
    
    public:  
        int num;
        Animal(int numb){
            num = numb;
        };
        
};

class Dog : public Animal  
{
    public:
        Dog(int n) : Animal(n){};
        void print2()
        {
            cout << num;
        }
};

int main()
{
    int num;
    Dog obj(3);
    
    obj.print2();
    
    
    return 0;
}
