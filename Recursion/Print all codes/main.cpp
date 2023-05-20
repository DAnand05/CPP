#include<bits/stdc++.h>
#include<string.h>
using namespace std;

void printAllCodesHelper(string input,string output){
	if(input.empty()){
		cout << output << endl;
		return;
	}
	int i = input[0] - '0';
	char c = 'a' + i - 1;
	printAllCodesHelper(input.substr(1),output + c);
	if(input[1] != '\0'){
		i = i * 10 + (input[1] - '0');
		if(i >= 0 && i <=26){
			char c = 'a' + i - 1;
			printAllCodesHelper(input.substr(2),output + c);
		}
	}
}

void printAllCodes(string input){
	printAllCodesHelper(input,"");
}

int main(){
	string input;
	cin >> input;
	printAllCodes(input);
	return 0;
}
