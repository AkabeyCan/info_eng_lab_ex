#include <iostream>

using namespace std;


class Complex {
    double real_;
    double imaginary_;

public:

    Complex(double real_num, double imaginary_num) {
        real_ = real_num;
        imaginary_ = imaginary_num;
    }

    double get_real() {
        return real_;
    }
    void set_real(double real_num) {
        real_ = real_num;
    }
    double get_imaginary() {
        return imaginary_;
    }
    void set_imaginary(double imaginary_num) {

        imaginary_ = imaginary_num;
    }



    void display (){

       cout << real_ << " + " << imaginary_ << "i" << endl;
    }

    void add(Complex num) {
        real_ += num.real_;
        imaginary_ += num.imaginary_;
    }
};

int main() {

    Complex c1(1, 2);

    c1.display();
    c1.set_imaginary(9);
    c1.display();

    return 0;
}
