#include <iostream>
#include <string>
using namespace std;

int main() {
    int ramz = 1234, ramzWarede, talashHa = 0, hisabJari = 500, pasandaz = 0, bardashtRozane = 0;
    string akherin1 = " ", akherin2 = " ", akherin3 = " ", jawab = " ";

    while (talashHa < 3) {
        cout << " =================================\n";
        cout << " ||  Ba bank C++ khush amadid.  ||\n";
        cout << " ||   Ramz khud ra wared knid:  ||\n";
        cout << " =================================\n";

        cin >> ramzWarede;

        if (ramzWarede == ramz) {
            break;  
        } else {
            talashHa++;
            if (talashHa < 3) {
                cout << "**Ramz nadrst ast. Talash mujadad (" << (3 - talashHa) << " bar digar talash mitawanid).\n";
            } else {
                cout << "**Dastrasi wojod nadarad. talash haytan naMowafaq bod.\n";
                return 0;
            }
        }
    }

    int guzina = 0, mowjodi = hisabJari;

    while (guzina != 6) {
        cout << " =========================\n";
        cout << " ||        Minu         ||\n";
        cout << " =========================\n";
        cout << " || 1. Mizan mowjodi    ||\n";
        cout << " || 2. Bardasht pol     ||\n";
        cout << " || 3. Wariz pol        ||\n";
        cout << " || 4. Inteqal pol      ||\n";
        cout << " || 5. Taghir ramz      ||\n";
        cout << " || 6. Kharej shudan    ||\n";
        cout << " =========================\n";

        cout << "**yak guzina ra intkhab knid: ";
        cin >> guzina;

        int miqdar;

        if (guzina == 1) {
            cout << "**Mizan mowjodi shoma ast " << mowjodi << "AFN" << "\n";
            if (mowjodi < 100) cout << "*** Hushdar: Mowjodi shoma kamtar az 100 AFN ast! ***\n";
        } else if (guzina == 2) {
            cout << "**Miqdar ra baray bardasht wared knid: ";
            cin >> miqdar;
            if (miqdar > 500 - bardashtRozane) {
                cout << "**Shoma namitawanid az 500AFN bishtar bardarid.\n";
            } else if (miqdar <= mowjodi) {
                mowjodi -= miqdar;
                bardashtRozane += miqdar;
                cout << "**Miqdar bardashta shuda " << miqdar << "AFN" << "\n";
                akherin3 = akherin2; akherin2 = akherin1; akherin1 = "bardasht AFN" + to_string(miqdar);
            } else {
                cout << "**Miqdar pol baray bardasht kafi nist\n";
            }
        } else if (guzina == 3) {
            cout << "**Miqdar ra baray wariz wared knid: ";
            cin >> miqdar;
            mowjodi += miqdar;
            cout << "**Miqdar wariz shuda " << miqdar << "AFN" << "\n";
            akherin3 = akherin2; akherin2 = akherin1; akherin1 = "Wariz AFN" + to_string(miqdar);
        } else if (guzina == 4) {
            cout << "**Miqdar ra baray inteqal wared knid: ";
            cin >> miqdar;
            if (miqdar <= mowjodi) {
                mowjodi -= miqdar;
                pasandaz += miqdar;
                cout << "**Miqdar muntaqil shuda " << miqdar << "AFN" << "\n";
                akherin3 = akherin2; akherin2 = akherin1; akherin1 = "Intqal AFN " + to_string(miqdar);
            } else {
                cout << "**Miqdar pol kafi nist\n";
            }
        } else if (guzina == 5) {
            cout << "**Ramz jadid ra wared knid: ";
            cin >> ramz;
            cout << "**Ramz ba mowafaqyat taghir yaft.\n";
        } else if (guzina == 6) {
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
            cout << "||Az einki bank C++ ra intekhab namodaed sipasguzarim! ||\n";
            cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
            break;
        } else {
            cout << "**guzinae nadarst. dobara koshesh knid.\n";
        }

        hisabJari = mowjodi;

        cout << "=====================\n";
        cout << "|| 3 traknsh Akhar ||\n";
        cout << "=====================\n";
        if (akherin1 != "") cout << akherin1 << endl;
        if (akherin2 != "") cout << akherin2 << endl;
        if (akherin3 != "") cout << akherin3 << endl;

        cout << "**Aya mikhuwahed edama dehid ? (b/n): ";
        cin >> jawab;
        if (jawab == "n") {
            cout << " ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
            cout << " || Az einki bank C++ ra intekhab namodaed sipasguzarim! ||\n";
            cout << " ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
            break;
        }
    }

    return 0;
}
