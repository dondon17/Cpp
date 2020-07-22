#include<iostream>
using namespace std;
int main(void){
    int x = 50;
    int age;
    cout << "hello" << endl;
    cout << "x : " << x << endl;

    cin >> age;
    cout << "age = " << age <<endl;

    cout << oct;
    cout << "x(oct) = " << x << endl;
    cout << "age(oct) = " << age << endl;

    cout << hex;
    cout << "x(hex) = " << x << endl;
    cout << "age(hex) = " << age << endl;

    cout << dec;
    cout << "x = " << x << endl;
    cout << "age = " << age << endl;

    // cout 객체는 dec, hex, oct 조정자 제공
    // 한번 설정하면 이후로 재설정하지 않는한 출력되는 진법의 형태가 유지됨
    return 0;
}