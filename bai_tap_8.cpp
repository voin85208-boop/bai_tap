#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX_SAI = 6;   // sai 6 lan la bi treo co

// Ve gia treo co theo so lan sai
void veGiaTreo(int sai) {
    cout << "\n  +---+\n";
    cout << "  |   |\n";
    cout << "  |   " << (sai >= 1 ? 'O' : ' ') << "\n";
    cout << "  |  " << (sai >= 3 ? '/' : ' ')
                     << (sai >= 2 ? '|' : ' ')
                     << (sai >= 4 ? '\\' : ' ') << "\n";
    cout << "  |  " << (sai >= 5 ? '/' : ' ') << " "
                     << (sai >= 6 ? '\\' : ' ') << "\n";
    cout << "=====\n";
}

int main() {
    srand(time(0));
    string dsTu[] = {"PROGRAMMING", "COMPUTER", "FUNCTION", "VARIABLE", "RECURSION"};
    string tu = dsTu[rand() % 5];          // chon ngau nhien 1 tu bi mat

    string hienThi(tu.size(), '_');        // "_ _ _ _ ..." cung do dai voi tu bi mat
    string daDoan = "";                    // cac chu cai da doan
    int sai = 0;

    while (sai < MAX_SAI && hienThi != tu) {
        veGiaTreo(sai);
        for (int i = 0; i < hienThi.size(); i++) cout << hienThi[i] << " ";
        cout << "\nDa doan: " << daDoan;
        cout << "\nLuot sai con lai: " << MAX_SAI - sai << "\n";

        cout << "Doan mot chu cai: ";
        char c;
        cin >> c;
        c = toupper(c);

        if (!isalpha(c)) {
            cout << "Nhap chu cai thoi!\n";
            continue;
        }
        if (daDoan.find(c) != string::npos) {
            cout << "Chu nay doan roi!\n";
            continue;
        }
        daDoan += c;

        bool dung = false;
        for (int i = 0; i < tu.size(); i++) {
            if (tu[i] == c) {
                hienThi[i] = c;   // hien chu cai dung cho
                dung = true;
            }
        }
        if (!dung) sai++;         // doan sai thi mat 1 luot
    }

    veGiaTreo(sai);
    if (hienThi == tu) cout << "\nBAN THANG!! Tu bi mat la: " << tu << "\n";
    else               cout << "\nBAN THUA!! Tu bi mat la: " << tu << "\n";
    return 0;
}