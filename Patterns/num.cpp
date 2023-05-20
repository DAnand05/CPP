#include<iostream>

using namespace std;

void print(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    print(n-1);

}
int main(){
    int n;
    cin>>n;
    print(n);
    /*
    for(int i = n; i >= 1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    */
}
