#include<iostream>>
using namespace std;

string  gen_random(int len) {
    string s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; ++i) {
        s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return s;
}
int main{
    int choice;
     cout<<"welcome to string generators!"<<endl;
     cout<<"You are going to choose category of words"<<endl;
     cout<<"type 1 to get word of 5 characters"<<endl;
     cin>>choice;
     cout<<gen_random(choice)<<endl;
    return 0;
}