#include <iostream>

using namespace std;

int main()
{
    int A[26]={0};
    char c[1000];
    cin>>c;
    int i=0;
    while(*(c+i)!='\0') {
        int ascii_representation_of_character=(char)*(c+i);
        int frequency_calculator;
        if(ascii_representation_of_character>64 && ascii_representation_of_character<91)
            frequency_calculator=ascii_representation_of_character-65;
        else
            frequency_calculator=ascii_representation_of_character-97;
        A[frequency_calculator]+=1;
        i++;
    }
    int max_frequency=0;
    for(int i=0;i<26;i++) {
        if(A[i]>A[max_frequency])
            max_frequency=i;
    }
    cout<< (char)(97+max_frequency);
   /* for(int i=0;i<26;i++) {
        cout<<A[i]<<endl;
    }*/
    return 0;
}
