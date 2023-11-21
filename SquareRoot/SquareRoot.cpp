// SquareRoot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
class SQRoot { // ini classs
public:
    int angka;
    int kuadrat;
    int hasil;

    int mySQRoot(int x, int y) { //ini method square root yang bisa di custom
        angka = x;
        kuadrat = y;

        return pow(x,y);


    }
};

#include <iostream>

int main()
{
    SQRoot root;
    

    cout << root.mySQRoot(16,3) <<"\n";
    
}

