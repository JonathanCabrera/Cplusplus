#include <iostream>
using namespace std;


int main() {
 
    string inp;

    cout << "please type in an either a <one> or a <two> to recieve desired output" << endl;
    cout << "please type entry without <>, so <one> would be one" << endl;
    
    cin >> inp;
    
    if (inp == "one") {
    	cout << 1 << endl;
    } else if (inp == "two") {
	cout << 2 << endl;
    }

    return 0;
}
