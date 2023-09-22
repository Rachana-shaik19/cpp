#include<iostream>
#include<string>
using namespace std;
int main()
{
    string alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string key = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm";
    string message = "";
    cout << "Enter the secret message: ";
    getline(cin, message);
    string encrypted_msg = "";
    cout << "\nEncrypted message: "<<endl;
    for(char c : message)
    {
        size_t position = alphabet.find(c);
        if(position != string::npos)
        {
            char new_char = key.at(position);
            encrypted_msg += new_char;
        }
        else
        {
            encrypted_msg += c;
        }
    }
    cout << encrypted_msg << endl;

    return 0;
}