#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the Ammount : ";
    cin >> n;
    int note100, note50, note20, note10, note1;
    switch (1){ 
        case 1: note100 = n/100;
            n = ( n - note100*100 );
            cout << "Required 100 rupees currency is : " << note100 << endl;
        case 2: note50 = n/50;
            n = ( n - note50*50 );
            cout << "Required 50 rupees currency is : " << note50 << endl;
        case 3: note20 = n/20;
            n = ( n - note20*20 );
            cout << "Required 20 rupees currency is : " << note20 << endl;
        case 4: note10 = n/10;
            n = ( n - note10*10 );
            cout << "Required 10 rupees currency is : " << note10 << endl;
        case 5: note1 = n/1;
            n = ( n - note1*1);
            cout << "Required 1 rupees currency is : " << note1 << endl;
    }
    cout << "Done!!";
	return 0;
}