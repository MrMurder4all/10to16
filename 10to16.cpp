#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>

using namespace std;

string decimalToHexadecimal(int decimalValue) {
    stringstream ss;
    ss << hex << decimalValue;
    return ss.str();
}

int main() {
    string input;
    getline(cin, input);

    vector<int> massiv;
    istringstream iss(input);
    stringstream result_ss;

    while (iss.good()) {
        string substr;
        getline(iss, substr, ',');

        string value = decimalToHexadecimal(stoi(substr));
        if (stoi(substr) < 16) {
            value = "0" + value;
        };
        result_ss << value;
        
    }
    string result = result_ss.str();
    cout << result << endl;


    return 0;
}
