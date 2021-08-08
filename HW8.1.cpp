#include <iostream>
using namespace std;

template <typename T>
T div(T& a, T& b){
    if(b == T(0)){ //не могу понять почему здесь возникает ошибка
        throw DivisionByZero("Forbiden to divide by 0");
    }
    return a / b;
}
int main(){
    int a = 4;
    int b = 2;
    try
    {   
        int a = 4;
        int b = 2;
        cout << div(a, b) << endl;
    } catch (const DivisionByZero* exception){ // и здесь
        cout << "Forbiden to divide by 0" << exception << endl;
    }
    return 0;
}