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
    User(string aname, string alocation, int cage){
        name = aname;
        location = alocation;
        age = cage;
    };
};

int main()
{
    sayHi();
    cout << "Hello world!" << endl;
    User voter("warren","kisumu", 24);

    cout <<voter.name;

    return 0;
}
