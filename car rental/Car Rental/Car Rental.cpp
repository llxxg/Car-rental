#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <dos.h>
#include <iomanip>
#include <string>

using namespace std;
class customer
{
private:
public:
    string customername;
    string carmodel;
    string carnumber;
    char data;

};
class rent : public customer
{

public:
    int days = 0, rentalfee = 0;
    void data()
    {
        string path = "arhiv.txt";

        ofstream flout;

        flout.open(path, ofstream::app);

        setlocale(LC_ALL, "Ru-ru");
        int login();
        login();
        int uun;
        cout << "Введите свое имя: ";
        cin >> customername;
        cout << endl;
        do
        {
            cout << "Выберете авто" << endl;
            cout << "Hyundai Sonata" << endl;
            cout << "BMW X5m" << endl;
            cout << "Toyota Yaris" << endl;
            cout << endl;
            cout << "Выберите автомобиль из вышеперечисленных вариантов: ";
            cin >> carmodel;
            cout << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            if (carmodel == "1")
            {
                system("CLS");
                flout << "Машина:" << "Hyundai Sonata" << "\n";
                cout << "Hyundai Sonata" << endl;
                cout << "Цвет: Orange" << endl;
                cout << "Максимальная скорость: 210 Km/h" << endl;


            }
            if (carmodel == "2")
            {
                system("CLS");
                flout << "Машина:" << "BMW X5m" << "\n";
                cout << "BMW X5m" << endl;
                cout << "Цвет: satin black" << endl;
                cout << "Максимальная скорость: 250 Km/h" << endl;



            }
            if (carmodel == "3")
            {
                system("CLS");
                flout << "Машина:" << "Toyota Yaris" << "\n";
                cout << "Toyota Yaris" << endl;
                cout << "Цвет: Dark Blue (8W7)" << endl;
                cout << "Максимальная скорость: 180 Km/h" << endl;
              
            }
            if (carmodel != "1" && carmodel != "2" && carmodel != "3")

                cout << "Пожалуйста, попробуйте еще раз!" << endl;
        } while (carmodel != "1" && carmodel != "2" && carmodel != "3");
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Предоставте свои личные данные: " << endl;
        cout << "Введите свой ИИН: ";
        
        cin >> uun;

        flout << "ИИН:" << uun << "\n";
        cout << "Выберите номер автомобиля: ";
        cin >> carnumber;
        cout << "Количество дней, на которые вы хотите арендовать автомобиль: ";
        cin >> days;
        cout << endl;
    }
    void calculate()
    {
       
        system("CLS");

        if (carmodel == "1")
            rentalfee = days * 56;
        if (carmodel == "2")
            rentalfee = days * 60;
        if (carmodel == "3")
            rentalfee = days * 75;
    }
    void showrent()
    {
        
        int ad;
        int cm;
        cm = cm = 0;
        ad = ad = 0;
        cout << "Car Rental" << endl;
        cout << "" << endl;
        cout << "| Customer Name:" << "-----------------|" << setw(10) << customername << " |" << endl;
        cout << "| Car Model:" << "---------------------|" << setw(10) << carmodel << " |" << endl;
        cout << "| Car Nomer:" << "---------------------|" << setw(10) << carnumber << " |" << endl;
        cout << "| Количество дней:" << "---------------|" << setw(10) << days << " |" << endl;
        cout << "| Ваша арендная плата составляет:" << "|" << setw(10) << rentalfee << " |" << endl;
        cout << "| Caution Money:" << "-----------------|" << setw(10) << cm << " |" << endl;
        cout << "| Advanced :" << "---------------------|" << setw(10) << ad << " |" << endl;
        cout << "________________________________________________________" << endl;
        cout << "\n";
        cout << "| Общая сумма аренды составляет:" << "-|" << setw(10) << rentalfee << " |" << endl;
        cout << "________________________________________________________" << endl;
        cout << " " << endl;
        cout << "///////////////////////////////////////////////////////////" << endl;
        cout << "Оплатите сумму до установленного срока" << endl;
        cout << "///////////////////////////////////////////////////////////" << endl;
        ofstream flout;
        string path = "arhiv.txt";
        flout.open(path, ofstream::app);
        flout << "Customer Name:" << customername << "\n";
        flout << "Car Model:" << carmodel << "\n";
        
        flout << "Car Nomer:" << carnumber << "\n";
        flout << "Количество дней:" << days << "\n";
        flout << "Ваша арендная плата составляет:" << rentalfee << "\n";
        flout << "Caution Money:" << cm << "\n";
        flout << "Advanced:" << ad << "\n" << "\n";
        int f;
        system("PAUSE");

        system("CLS");

        ifstream inf("thanks.txt");


        char str[300];

        while (inf) {
            inf.getline(str, 300);
            if (inf) cout << str << endl;
        }
        inf.close();
    }
};
class welcome {
    ;
public:
    int welcum()
    {
        ifstream in("");

        if (!in) {
            cout << "!!!!\n";
        }
        char str[1000];
        while (in) {
            in.getline(str, 1000);
            if (in) cout << str << endl;
        }
        in.close();
        system("CLS");
        return 0;
    }

};
int main()
{
    

    welcome obj1;
    obj1.welcum();
    rent obj2;

    obj2.data();
    obj2.calculate();
    obj2.showrent();

    return 0; //end of the program
}

int login() {

    string password = "";
    char great;
    cout << endl << "Вход в систему" << endl;
    cout << endl << "Введите пароль: ";
    great = _getch();
    while (great != 13) {
        password.push_back(great);
        cout << '*';
        great = _getch();
    }

    if (password == "parol") {
        cout << endl << "Доступ предоставлен" << endl << endl;
        system("PAUSE");
        system("CLS");


    }

    else {
        cout << endl << "Повторите попытку " << ::endl << ::endl;
        system("PAUSE");
        system("CLS");
        login();
    }

    return 0;
}