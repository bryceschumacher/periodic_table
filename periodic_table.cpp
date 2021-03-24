#include <iostream>
using namespace std;
#include <fstream>
#include <sstream>

void menu() {
    cout << "\n\n\n\n";
    cout << "/-------------------------------------------------------------------------------------------------------------------------------\\" << endl;
    cout << "| |----|                                                                                                                 |----| |" << endl;
    cout << "| | H  |                                                                                                                 | He | |" << endl;
    cout << "| |----| |----|                                                                       |----| |----| |----| |----| |----| |----| |" << endl;
    cout << "| | Li | | Be |                                                                       | B  | | C  | | N  | | O  | | F  | | Ne | |" << endl;
    cout << "| |----| |----|                                                                       |----| |----| |----| |----| |----| |----| |" << endl;
    cout << "| | Na | | Mg |                                                                       | Al | | Si | | P  | | S  | | Cl | | Ar | |" << endl;
    cout << "| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |" << endl;
    cout << "| | K  | | Ca | | Sc | | Ti | | V  | | Cr | | Mn | | Fe | | Co | | Ni | | Cu | | Zn | | Ga | | Ge | | As | | Se | | Br | | Kr | |" << endl;
    cout << "| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |" << endl;
    cout << "| | Rb | | Sr | | Y  | | Zr | | Nb | | Mo | | Tc | | Ru | | Rh | | Pd | | Ag | | Cd | | In | | Sn | | Sb | | Te | | I  | | Xe | |" << endl;
    cout << "| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |" << endl;
    cout << "| | Cs | | Ba | | Lu | | Hf | | Ta | | W  | | Re | | Os | | Ir | | Pt | | Au | | Hg | | Tl | | Pb | | Bi | | Po | | At | | Rn | |" << endl;
    cout << "| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |" << endl;
    cout << "| | Fr | | Ra | | Lr | | Rf | | Db | | Sg | | Bh | | Hs | | Mt | | Ds | | Rg | | Cn |                                           |" << endl;
    cout << "| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----|                                           |" << endl;
    cout << "\\-------------------------------------------------------------------------------------------------------------------------------/" << endl;
    cout << "\n\n";
}
void menu2() {
    cout << "\n\n\n\n";
    cout << "/-------------------------------------------------------------------------------------------------------------------------------\\" << endl;
    cout << "| |----|                                                                                                                 |----| |" << endl;
    cout << "| | H  |                                                                                                                 | He | |" << endl;
    cout << "| | 1  |                                                                                                                 | 2  | |" << endl;
    cout << "| |----| |----|                                                                       |----| |----| |----| |----| |----| |----| |" << endl;
    cout << "| | Li | | Be |                                                                       | B  | | C  | | N  | | O  | | F  | | Ne | |" << endl;
    cout << "| | 3  | | 4  |                                                                       | 5  | | 6  | | 7  | | 8  | | 9  | | 10 | |" << endl;
    cout << "| |----| |----|                                                                       |----| |----| |----| |----| |----| |----| |" << endl;
    cout << "| | Na | | Mg |                                                                       | Al | | Si | | P  | | S  | | Cl | | Ar | |" << endl;
    cout << "| | 11 | | 12 |                                                                       | 13 | | 14 | | 15 | | 16 | | 17 | | 18 | |" << endl;
    cout << "| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |" << endl;
    cout << "| | K  | | Ca | | Sc | | Ti | | V  | | Cr | | Mn | | Fe | | Co | | Ni | | Cu | | Zn | | Ga | | Ge | | As | | Se | | Br | | Kr | |" << endl;
    cout << "| | 19 | | 20 | | 21 | | 22 | | 23 | | 24 | | 25 | | 26 | | 27 | | 28 | | 29 | | 30 | | 31 | | 32 | | 33 | | 34 | | 35 | | 36 | |" << endl;
    cout << "| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |" << endl;
    cout << "| | Rb | | Sr | | Y  | | Zr | | Nb | | Mo | | Tc | | Ru | | Rh | | Pd | | Ag | | Cd | | In | | Sn | | Sb | | Te | | I  | | Xe | |" << endl;
    cout << "| | 37 | | 38 | | 39 | | 40 | | 41 | | 42 | | 43 | | 44 | | 45 | | 46 | | 47 | | 48 | | 49 | | 50 | | 51 | | 52 | | 53 | | 54 | |" << endl;
    cout << "| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |" << endl;
    cout << "| | Cs | | Ba | | Lu | | Hf | | Ta | | W  | | Re | | Os | | Ir | | Pt | | Au | | Hg | | Tl | | Pb | | Bi | | Po | | At | | Rn | |" << endl;
    cout << "| | 55 | | 56 | | 71 | | 72 | | 73 | | 74 | | 75 | | 76 | | 77 | | 78 | | 79 | | 80 | | 81 | | 82 | | 83 | | 84 | | 85 | | 86 | |" << endl;
    cout << "| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |" << endl;
    cout << "| | Fr | | Ra | | Lr | | Rf | | Db | | Sg | | Bh | | Hs | | Mt | | Ds | | Rg | | Cn |                                           |" << endl;
    cout << "| | 87 | | 88 | | 103| | 104| | 105| | 106| | 107| | 108| | 109| | 110| | 111| | 112|                                           |" << endl;
    cout << "| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----| |----|                                           |" << endl;
    cout << "\\-------------------------------------------------------------------------------------------------------------------------------/" << endl;
    cout << "\n\n";
}
void loadInInformation(string text_file, string arr[84][4]) {
    ifstream inStream;
    inStream.open(text_file);
    string line, first, second, third, fourth;
    int i = 0;
    while (getline(inStream, line)) {
        stringstream s(line);
        getline(s, first, ',');
        arr[i][0] = first;
        getline(s, second, ',');
        arr[i][1] = second;
        getline(s, third, ',');
        arr[i][2] = third;
        getline(s, fourth, '\n');
        arr[i][3] = fourth;
        i++;
    }
}
void printInfo(string my_data[84][4], string option_element) {
    int row_num = -1;
    int row_counter = 1;
    for(int n = 0; n < 84; n++) {
        if(my_data[n][3] == option_element) {
            row_num = row_counter;
            break;
        }
        row_counter++;
    }
    string nonsense = "";
    cout << "\n\n" << endl;
    cout << my_data[row_num-1][0] << ":" << endl;
    cout << "Protons: " << my_data[row_num-1][1] << endl;
    cout << "Molar Mass: " << my_data[row_num-1][2] << " g/mol" << endl;
    cout << "Press enter to continue" << endl;
    getline(cin, nonsense);
}
int main() {
    int option = 0;
    string option_string = "";
    string atomic_number = "";
    cout << "\n\n\n";
    cout << "------------------------------------------------------------------------------------------------------" << endl;
    cout << "| Welcome to the Periodic Table Project by Bryce Schumacher                                          |" << endl;
    cout << "| This project is mostly built for my own personal use, so doesn't include lanthanides or actiniides |" << endl;
    cout << "| If you want to include those, can change text file and UI accordingly. Enjoy!                      |" << endl;
    cout << "------------------------------------------------------------------------------------------------------" << endl;
    cout << "\n\n";
    cout << "Would you like your periodic table to be shown with:" << endl;
    cout << "1. Elements only" << endl;
    cout << "2. Elements and atomic numbers (recommended to make terminal bigger)" << endl;
    getline(cin, atomic_number);
    while(option != 2) {
        // shows according menu depending on user input
        if(atomic_number == "1") {
            menu();
        }
        else if(atomic_number == "2") {
            menu2();
        }
        // loads in data into "my_data" array from loadInInformation function
        string my_data[84][4];
        loadInInformation("periodic_info.txt", my_data);
        cout << "Choose an option: " << endl;
        cout << "1. Display element information" << endl;
        cout << "2. Quit " << endl;
        getline(cin, option_string);
        option = stoi(option_string);
        if(option == 1) {
            string option_element = "";
            cout << "Enter an element symbol in lowercase (e.g. he): " << endl;
            getline(cin, option_element);
            string nonsense = "";
            printInfo(my_data, option_element);
        }
    }
}
