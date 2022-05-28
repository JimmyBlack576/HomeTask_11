#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");


    int num,n6,n5,n4,n3,n2,n1,temp,sum1,sum2;
    cout << "Введите шестизначное число: \n";
    cin >> num;

    if (num / 100000 < 1 || num / 100000 > 9)
        cout << "Вы ввели не шестизначное число!\n";
    else
        cout << " Верно! \n";
    n6 = num % 10;
    temp = num / 10;
    n5 = temp % 10;
    temp = temp / 10;
    n4 = temp % 10;
    temp = temp / 10;
    n3 = temp % 10;
    temp = temp / 10;
    n2 = temp % 10;
    temp = temp / 10;
    n1 = temp % 10;
    temp = temp / 10;

    cout << n1 <<" "<< n2 <<" "<< n3 << endl;
    cout << n4 <<" " << n5 <<" " << n6 << endl;
    sum1 = n1 + n2 + n3;
    sum2 = n4 + n5 + n6;

    if (sum1 == sum2)
        cout << "Поздравляем! Это счастливое число!\n";
    else
        cout << " Не фартануло! хD \n";
}
