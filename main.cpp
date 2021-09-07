#include <iostream>

using namespace std;

void sayHi(){
cout<<"hello world"<<endl;
};
class User{
public:
    string name;
    string location;
    int age;
};

int main()
{
    sayHi();
    cout << "Hello world!" << endl;
    User admin;
     admin.name="warren";
     admin.age = 20;

    cout <<admin.name;
    return 0;
}
