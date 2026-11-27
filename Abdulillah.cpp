#include <iostream>
#include <string>

using namespace std;

int main() {
    
    bool isEmergency = false; 

    if (isEmergency) {
        cout << "[-] SYSTEM LOCKDOWN: Access Blocked!" << endl;
        return 0;
    }

    
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "[-] Access Denied: Minimum age requirement not met." << endl;
        return 0; 
    }

    
    string password;
    cout << "Enter password: ";
    cin >> password;

    if (password == "Admin123") {
        cout << "[+] Access Granted: Administrator Level" << endl;
    } 
    else if (password == "User123") {
        cout << "[+] Access Granted: Standard User Level" << endl;
    } 
    else {
        cout << "[-] Access Denied: Invalid Password!" << endl;
    }

    return 0;
}
