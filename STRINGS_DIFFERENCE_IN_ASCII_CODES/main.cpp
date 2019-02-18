#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
   char word[1000];
   cin>>word;
   string newWord="";
   int i=0,it=1;
   while(*(word+i)!='\0' && (*(word+it))!='\0') {
    int a=(int) *(word+i);
    int b=(int) *(word+(i+1));
    int diff=b-a;

    char temp=*(word+i);
    string diff_in_string=to_string(diff);
    //cout<<temp<<diff;
    newWord=newWord+temp;
    newWord+=diff_in_string;
    i++;
    it=i+1;
   }
   newWord+=word[i];
   cout<<newWord;
    return 0;
}
