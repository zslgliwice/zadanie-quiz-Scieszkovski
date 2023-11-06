#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odpowiedz;

int main() {
    HANDLE uchwyt = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(uchwyt, 8);

    cout << "\aPodaj imie: ";
    cin >> imie;
    int pkt = 0;

    system("cls");
    cout << "Zaczynamy za...";
    Sleep(1000);
    system("cls");
    cout << "3";
    Sleep(1000);
    system("cls");
    cout << "2";
    Sleep(1000);
    system("cls");
    cout << "1";
    Sleep(1000);
    system("cls");

    SetConsoleTextAttribute(uchwyt, 15);
    cout << imie << " Twoje pierwsze pytanie: \n";
    SetConsoleTextAttribute(uchwyt, 14);
    cout << "Kiedy zostala wydana gra Cyberpunk2077?" << endl;
    SetConsoleTextAttribute(uchwyt, 11);
    cout << "a) 1 Stycznia 2077" << endl;
    cout << "b) 10 Grudnia 2020" << endl;
    cout << "c) 10 Grudnia 2021" << endl;
    SetConsoleTextAttribute(uchwyt, 9);
    cout << "Twoja odpowiedz: ";
    cin >> odpowiedz;
    system("cls");

    if (odpowiedz == "b") {
        pkt++;
        SetConsoleTextAttribute(uchwyt, 10);
        cout << "Poprawna odpowiedz! | Twoje punkty: " << pkt;
    } else if (odpowiedz == "a") {
        SetConsoleTextAttribute(uchwyt, 12);
        cout << "Na serio? | Twoje punkty: " << pkt;
    } else {
        SetConsoleTextAttribute(uchwyt, 12);
        cout << "Zle! Rok wczesniej! | Twoje punkty: " << pkt;
    }
    Sleep(1000);
    system("cls");

    cout << imie << " twoje drugie pytanie: \n";
    SetConsoleTextAttribute(uchwyt, 14);
    cout << "Co jest glownym celem gry?" << endl;
    SetConsoleTextAttribute(uchwyt, 11);
    cout << "a) Usuniecie chipu z glowy glownego bohatera" << endl;
    cout << "b) Zemsta na zabojcy jego przyjaciela" << endl;
    cout << "c) Obalenie rzadu" << endl;
    SetConsoleTextAttribute(uchwyt, 9);
    cout << "Twoja odpowiedz: ";
    cin >> odpowiedz;
    system("cls");

    if (odpowiedz == "a") {
        pkt++;
        SetConsoleTextAttribute(uchwyt, 10);
        cout << "Poprawna odpowiedz! | Twoje punkty: " << pkt;
    } else {
        SetConsoleTextAttribute(uchwyt, 12);
        cout << "Ktos tu nie zna fabuly! | Twoje punkty: " << pkt;
    }
    Sleep(1000);
    system("cls");

    cout << imie << " twoje trzecie pytanie: \n";
    SetConsoleTextAttribute(uchwyt, 14);
    cout << "Jak ma na imie nasza postac?" << endl;
    SetConsoleTextAttribute(uchwyt, 11);
    cout << "a) V" << endl;
    cout << "b) T" << endl;
    cout << "c) Jaroslaw Kaczynski" << endl;
    SetConsoleTextAttribute(uchwyt, 9);
    cout << "Twoja odpowiedz: ";
    cin >> odpowiedz;
    system("cls");

    if (odpowiedz == "a") {
        pkt++;
        SetConsoleTextAttribute(uchwyt, 10);
        cout << "Poprawna odpowiedz! | Twoje punkty: " << pkt;
    } else if(odpowiedz == "c") {
        SetConsoleTextAttribute(uchwyt, 12);
        cout << "*cisza* | Twoje punkty: " << pkt;
    } else{
        SetConsoleTextAttribute(uchwyt, 12);
        cout << "Zle! | Twoje punkty: " << pkt;
        }
    Sleep(3000);
    system("cls");

    cout << imie << " twoje czwarte pytanie: \n";
    SetConsoleTextAttribute(uchwyt, 14);
    cout << "Kim z zawodu jest nasz bohater?" << endl;
    SetConsoleTextAttribute(uchwyt, 11);
    cout << "a) Hydraulikiem" << endl;
    cout << "b) Najemnikiem" << endl;
    cout << "c) Politykiem" << endl;
    SetConsoleTextAttribute(uchwyt, 9);
    cout << "Twoja odpowiedz: ";
    cin >> odpowiedz;
    system("cls");

    if (odpowiedz == "b") {
        pkt++;
        SetConsoleTextAttribute(uchwyt, 10);
        cout << "Poprawna odpowiedz! | Twoje punkty: " << pkt;
    } else if (odpowiedz == "c"){
        SetConsoleTextAttribute(uchwyt, 12);
        cout << "Zle! To nie Kaczynski! | Twoje punkty: " << pkt;
    } else {
        SetConsoleTextAttribute(uchwyt, 12);
        cout << "Zle! | Twoje punkty: " << pkt;
    }
    Sleep(1000);
    system("cls");

    cout << imie << " Twoje piate pytanie: \n";
    SetConsoleTextAttribute(uchwyt, 14);
    cout << "Gdzie toczy sie akcja?" << endl;
    SetConsoleTextAttribute(uchwyt, 11);
    cout << "a) W Los Angeles" << endl;
    cout << "b) W senacie w Warszawie" << endl;
    cout << "c) W Night City" << endl;
    SetConsoleTextAttribute(uchwyt, 9);
    cout << "Twoja odpowiedz: ";
    cin >> odpowiedz;
    system("cls");

    if (odpowiedz == "c") {
        pkt++;
        SetConsoleTextAttribute(uchwyt, 10);
        cout << "Poprawna odpowiedz! | Twoje punkty: " << pkt;
    } else if (odpowiedz == "b") {
        SetConsoleTextAttribute(uchwyt, 12);
        cout << "Zle! No ile mozna?! | Twoje punkty: " << pkt;
    } else {
        SetConsoleTextAttribute(uchwyt, 12);
        cout << "Zle! | Twoje punkty: " << pkt;
    }
    Sleep(1000);
    system("cls");

    SetConsoleTextAttribute(uchwyt, 13);
    cout << "BRAWO, WLASNIE UKONCZYLES TEST Z WYNIKIEM " << pkt << " PUNKTOW";
    SetConsoleTextAttribute(uchwyt, 10);

    if (pkt == 7) {
        cout << " | ODPOWIEDZIALES NA WSZYSTKIE PYTANIA POPRAWNIE!";
    }

    cout << endl;

    if (pkt == 0) {
        cout << "Musisz sie zapoznac!";
    } else if (pkt < 4) {
        cout << "Malo wiesz!";
    } else if (pkt < 5) {
        cout << "Powiedzmy... jest okej";
    } else if (pkt == 5) {
        cout << "Elegancko";
    }

    return 0;
}

