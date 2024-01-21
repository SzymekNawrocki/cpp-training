#include <iostream> 

using namespace std;

int main () {
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA"};

    string secret_message {};
    cout << "Enter the secret message: ";
    getline(cin, secret_message);

    string encrypted_message{};

    cout << "\nEncrypting message..." << endl; 

    for (char c: secret_message) {
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_char {key.at(position)};
        } else {
            encrypted_message += c;
        }
    }

    cout << endl;
    return 0;
}