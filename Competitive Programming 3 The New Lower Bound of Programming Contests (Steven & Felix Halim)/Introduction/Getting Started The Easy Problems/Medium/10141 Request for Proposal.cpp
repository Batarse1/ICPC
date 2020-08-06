#include <iostream>
#include <string>

using namespace std;

int main() {
    bool line = false;
    int n = 0, p = 0, compliance = 0, best_compliance = 0, cont = 0;
    string name_of_the_proposal = "", best_proposal = "";
    double price = 0, best_price = 0;
    while (cin >> n >> p) {
        compliance = 0;
        best_compliance = 0;
        name_of_the_proposal = "";
        best_proposal = "";
        price = 0;
        best_price = 0;
        cont++;
        if (n == 0 and p == 0) {
            break;
        }
        string requirements[n] = {};
        cin.clear();
        cin.ignore(1000, '\n');
        for (int i = 0; i < n; i++) {
            getline(cin, requirements[i]);
        }
        for (int i = 0; i < p; i++) {
            getline(cin, name_of_the_proposal);
            cin>>price;
            cin>>compliance;
            cin.clear();
            cin.ignore(1000, '\n');
            for (int j = 0; j < compliance; j++) {
                getline(cin, requirements[j]);
            }
            if (i == 0) {
                best_compliance = compliance;
                best_price = price;
                best_proposal = name_of_the_proposal;
            } else if (compliance > best_compliance) {
                best_compliance = compliance;
                best_price = price;
                best_proposal = name_of_the_proposal;
            } else if (compliance == best_compliance) {
                if (price < best_price) {
                    best_compliance = compliance;
                    best_price = price;
                    best_proposal = name_of_the_proposal;
                }
            }
        }
        if (line == true) {
            cout << endl;
        }
        cout << "RFP #" << cont << endl << best_proposal << endl;
        line = true;
    }
    return 0;
}