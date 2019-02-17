#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }
    int i=0,j=N-1;
    bool isPalindrome=true;
    while(i<=j) {
        if(A[i]!=A[j]) {
            isPalindrome=false;
            break;
        }
        i++;
        j--;
    }
    if(isPalindrome==1)
    cout<<"true";
    else
        cout<<"false";
    return 0;
}
