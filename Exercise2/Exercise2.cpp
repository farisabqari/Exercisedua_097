#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x; 

public:
    bidangDatar() { 
        x = 0;
    }

    virtual void input() = 0;

    virtual float Luas() = 0; 
    virtual float Keliling() = 0; 

    void setX(int a) { 
        this->x = a;
    }

    int getX() { 
        return x;
    }
};
class Lingkaran : public bidangDatar {
public:
    void input() {
        cout << "Masukkan jejari: ";
        int jejari;
        cin >> jejari;
        setX(jejari);
    }

    float Luas() {
        return 3.14 * getX() * getX();
    }

    float Keliling() {
        return 2 * 3.14 * getX();
    }
};
class Bujursangkar : public bidangDatar {
public:
    void input() {
        cout << "Masukkan sisi: ";
        int sisi;
        cin >> sisi;
        setX(sisi);
    }

    float Luas() {
        return getX() * getX();
    }

    float Keliling() {
        return 4 * getX();
    }
};
int main() {
    bidangDatar* obj;

    cout << "Lingkaran dibuat" << endl;
    obj = new Lingkaran();
    obj->input();
    cout << "Luas Lingkaran = " << obj->Luas() << endl;
    cout << "Keliling Lingkaran = " << obj->Keliling() << endl;

    cout << "Bujursangkar dibuat" << endl;
    obj = new Bujursangkar();
    obj->input();
    cout << "Luas Bujursangkar = " << obj->Luas() << endl;


    cout << "Keliling Bujursangkar = " << obj->Keliling() << endl;

    delete obj;

    return 0;
}