#include<iostream>
using namespace std;

int main(){
    int even = 0;
    int odd = 0;
    int number;
    while(number != 0){
        cout << "Enter an integer: ";
        cin >> number;
        if(number % 2 == 0){
            even++;
        }else{
            odd++;
        }

    }
    cout << "#Even numbers = " << even - 1 << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
