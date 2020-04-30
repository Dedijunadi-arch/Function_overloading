#include <iostream>
using namespace std;
class luaskotak {
public:
    int luas_kotak(int panjang, int lebar) {
        int luas = panjang * lebar;
        return luas;
    }
    double luas_kotak(double panjang, double lebar) {
        double luas = panjang * lebar;
        return luas;
    }
    int luas_kotak(int sisi) {
        return sisi*sisi;
    }
    double luas_kotak(double sisi) {
        return sisi*sisi;
    }
    
};
int main() {
    luaskotak obj;
    cout<<"Luas kotak 2x3     : "<<obj.luas_kotak(2,3)<<endl;
    cout<<"Luas kotak 2.5x3.5 : "<<obj.luas_kotak(2.5,3.5)<<endl;
    cout<<"Luas kotak 2x2     : "<<obj.luas_kotak(2)<<endl;
    cout<<"Luas kotak 2.5x2.5 : "<<obj.luas_kotak(2.5)<<endl;
    cin.get();
   return 0;
}
