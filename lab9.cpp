#include <string>
#include <iomanip>
#include <ctime>
#include <iostream>
#include <math.h>

using namespace std;

int num = 0; 
    int pos = 0; 
    bool neword = false; 
    int start; 
     
string sort_texting(string text) {
	int end;
    
    text += " ";
    while(pos<text.length()) {
        if (!isspace(text[pos])) {
        start = pos;
        end = text.find(" ", start);
		neword = true;
        num++; 
        }
        if (neword && num % 2 == 0) {
        text.erase(start,end-start);
        }
        else if (neword) {
        pos = end;
        }
    neword = false;
	pos++;
    }
text.pop_back();
return text;
}


int main(){

string text;
 cout << "Enter text: "; getline(cin,text);
cout << "\nFormated text: " << sort_texting(text)<<"\n";
}

