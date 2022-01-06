//
//  main.cpp
//  VVP_8
//
//  Created by Роберт Скиталинский on 16.12.2021.
//

#include <iostream>
using namespace std;
/*int main(){
    int x,y;
    cout << "Введите кол-во байт: ";
    cin >> x;
    y = x / 1024;
    if (x % 1024 > 0){
        y += 1;
    }
    cout << "Кол-во килобайтов = " << y << " ";
    return 0;
}

int main(){
    int a,b,x;
    cout << " Введите положительные числа A и B так, чтобы А > B: ";
    cin >> a >> b;
    x = a / b;
    cout << b;
    return 0;
}

int main (){
    int a,b,x;
    cout << " Введите положительные числа А и В так, чтобы А > B ";
    cin >> a;
    cin >> b;
    x = a % b;
    cout << x;
    return 0;

}

int main(){
    int x,y,z;
    cout << "Введите двузначное число: ";
    cin >> x;
    y = x % 10;
    z = x / 10;
    cout << y << z;
    return 0;
}*/

int main(){
    int x,a,c;
    cout << "Введите 3хзначное число:";
    cin >> x;
    a = x / 100;
    c = x % 100;
    cout << c << a;
    return 0;
}

