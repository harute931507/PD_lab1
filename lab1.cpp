#include<iostream>
using namespace std;

int main(){
        float input;
        int num;

        cout << "Enter a postive number : ";
        cin >> input;

        while( input < 1 || input - (int)input != 0 ){
                cout << "Please enter a postive number : ";
                cin >> input;
        }

        num = input;
        cout << num;

        while( num > 1 ){
                num = num % 2 ? 3*num + 1 : num / 2;
                cout << " " << num;
        }
	cout << endl;

        return 0;
}
