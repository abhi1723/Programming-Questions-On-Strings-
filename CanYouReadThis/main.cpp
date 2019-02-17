#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string sentance,word="";
    getline(cin,sentance);
    word+=sentance[0];
    for(int i=1;i<=sentance.length();i++) {
      int ascii_representation_of_character=(int)sentance[i];
      if(ascii_representation_of_character>96 && ascii_representation_of_character<123) {
        word+=sentance[i];
      }
      else if(ascii_representation_of_character>64 && ascii_representation_of_character<91) {
        cout<<word<<endl;
        word="";
        word+=sentance[i];
      }
      else if (sentance[i]=='\0'){
        cout<<word<<endl;
      }
    }
    return 0;
}
