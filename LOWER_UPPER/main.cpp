#include <iostream>
using namespace std;

int main()
{
    char letter;
    cin>>letter;
    int ascii_form_of_letter=(int)letter;
    if(ascii_form_of_letter>64 &&ascii_form_of_letter<91)
        cout<<"UPPERCASE";
    else if(ascii_form_of_letter>96 &&ascii_form_of_letter<123)
        cout<<"LOWERCASE";
    else
        cout<<"Invalid"<<endl;
    return 0;
}
