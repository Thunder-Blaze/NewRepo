#include <iostream>
using namespace std;
// THIS IS A CODE FOR A PATTERN. ENTER INTEGERS IN BETWEEN 4 TO 10 FOR GOOD OUTPUT.
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (i<=j){
                cout<<n+1-i<<" ";
            }
            else{
                cout<<n+1-j<<" ";
            }
        }
        for (int j=n+1; j<=2*n-1; j++){
            if (i<=(2*n-j)){
                cout<<n+1-i<<" ";
                if(j==2*n-1) cout<<endl;
            }
            else{
                cout<<j+1-n<<" ";
                if(j==2*n-1) cout<<endl;
            }
        }
    }
    for (int i=n+1; i<=2*n-1; i++){
        for (int j=1; j<=n; j++){
            if ((2*n-i)<=j){
                cout<<i+1-n<<" ";
            }
            else{
                cout<<n+1-j<<" ";
            }
        }
        for (int j=n+1; j<=2*n-1; j++){
            if ((2*n-i)<=(2*n-j)){
                cout<<i+1-n<<" ";
                if(j==2*n-1) cout<<endl;
            }
            else{
                cout<<j+1-n<<" ";
                if(j==2*n-1) cout<<endl;
            }
        }
    }
    return 0;
}
