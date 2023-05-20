#include <iostream>

using namespace std;

string getString(int n){
    string map[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    return map[n];
}

void printCombinations(int num,string output){
    if(num==0){
        cout<<output<<endl;
        return;
    }
    int lastIndex=num%10;
    int smallNum=num/10;
    string options=getString(lastIndex);
    for(int i=0;i<options.length();i++){
        printCombinations(smallNum,options[i]+output);
    }
}

int main(){
    int n;
    cin>>n;
    printCombinations(n,"");
}
