#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[])
{
    string username;
    int age;
    
    cout << "Hello world!" << endl;
    cout << "What\'s your name?" << endl;
    cin >> username;
    cout << "Hi, " << username << "!" << endl;
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "You\'re " << age << " years old, nice." << endl;
    
    return 0;
}
