
#include <iostream>
#include <limits>
using namespace std;

int main(){
	char var[10];
	bool valid = false;

	while(!valid){
		cout << "Enter a string 9 characters long: ";
		cin.getline(var, 10, '\n');

		if(cin.fail()){
			valid = false;
			cout << endl << "Input exceeds variable size. Please try again." << endl;
			// cin.clear();
            fflush(stdin);
            // cin.ignore();
		} // end fail check

		else valid = true;

	} // end input loop

}