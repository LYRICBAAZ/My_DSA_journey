#include<iostream>
using namespace std;
class Complex{
    int real,img;

    public:
    // Default constructure
    Complex(){

    }
    // Argumented constructure
    Complex(int real,int img){
        this->real = real;
        this->img = img;
    }

    Complex operator + (Complex & C){
        Complex ans;
        ans.real = this->real + C.real;
        ans.img = this->img + C.img;
        return ans;
    }

    void Display(){ 

        cout << real << " + i" << img << endl;
        
    }


};
int main(){
    Complex C1(3,6);
    Complex C2(7,4);

    Complex C3 = C1 + C2;
    //  C1.operator+(C2);
    // 👉 c1 = object hai (calling object)
    //  operator+	function
    //  C2	Parameter


    //Printing
    C1.Display();
    C2.Display();
    C3.Display();
}