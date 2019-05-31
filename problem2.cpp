#include <iostream>
#include <string.h>
#include <string>

using namespace std;

string splitString(int *start, string s, int end){
	int i, count;
	count = 0;
	for(i = (*start); i <= end; i++){
		if(s[i] == '('){
			count++;
		} else{
			count --;
		}
		if(count == 0){
			break;
		}
	}
	string newString = s.substr(*start, i+1 - (*start));
	(*start) = i + 1;
	return newString;
}

string removeParentheses(string toBeModified){
	string newString = toBeModified.substr(1,toBeModified.length()-2);
	return newString;
}


int main(){
   string a;
   cout << "Input: ";
   cin >> a;

   int length = a.length();
   int start = 0;

   string newString;
   string removedString;
   string finalString;

   while(start != length){
   		newString = splitString(&start, a, length);
   		removedString = removeParentheses(newString);
   		finalString.append(removedString);
    }

   cout << endl << endl;
   cout << "Output: " << finalString;

}