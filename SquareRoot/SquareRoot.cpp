// SquareRoot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
class SQRoot { // ini classs
public:
    int angka;
    int kuadrat;
    int hasil;

    int twoRoot(int x){
        angka = x;

        return pow(x,2);

    }

    int threeRoot(int x) {
        angka = x;
        return pow(x, 3);
    }

    int mySQRoot(int x, int y) { //ini method square root yang bisa di custom
        angka = x;
        kuadrat = y;
        hasil = angka;

        for (int i = 1; i < kuadrat; i++) {
            hasil =  hasil * angka;
        }
        return hasil;


    }
};

#include <iostream>

int main()
{
    SQRoot root;
    

    cout << root.mySQRoot(16,3) <<"\n";
    cout << root.twoRoot(16) << "\n";
    cout << root.threeRoot(16) << "\n";
    
}

