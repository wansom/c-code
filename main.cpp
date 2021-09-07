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
    string role;
    User(string aname, string alocation, int cage, string myrole){
        name = aname;
        location = alocation;
        age = cage;
        role = myrole;
    };
    bool isAdmin(){
        if(role =="admin"){
            return true;
        }
    return false;
    }
};

int main()
{
    sayHi();
    cout << "Hello world!" << endl;
    User voter("warren","kisumu", 24,"admin");

    cout <<voter.age;
    cout << voter.isAdmin();

    return 0;
}
