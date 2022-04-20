#include <iostream>
#include <string>
#include "Effects.h"

using namespace std;

void dichelp() {
	cout << "The Langs that are suported are:" << endl;
	cout << "c++" << endl;
}


// C++ Dic
void dicCPPhelp() {
	cout << "[1] Functions" << endl;
}


static void dicCPPFunctions() {
	cout << "c++ Functions" << endl;
	cout << "-------------" << endl;

	cout << "Defining a Function:" << endl;
	cout << "--------------------" << endl;
	cout << "return_type function_name( parameter list ) {" << endl;
	cout << " body of the function" << endl;
	cout << "}" << endl;

	cout << "Calling a Function:" << endl;
	cout << "-------------------" << endl;
	cout << "While creating a C++ function, you give a definition of what the function has to do. To use a" << endl;
	cout << "function, you will have to call or invoke that function." << endl;

	cout << "When a program calls a function, program control is transferred to the called function. A" << endl;
	cout << "called function performs defined task and when it’s return statement is executed or when its" << endl;
	cout << "function-ending closing brace is reached, it returns program control back to the main" << endl;
	cout << "program." << endl;

	cout << "To call a function, you simply need to pass the required parameters along with function" << endl;
	cout << "name, and if function returns a value, then you can store returned value. For example:" << endl;
	cout << "---------------------------------------------------------------------------------------" << endl;

	cout << "#include <iostream>" << endl;
	cout << "using namespace std;" << endl;
	cout << "                    " << endl;
	cout << "// function declaration" << endl;
	cout << "int max(int num1, int num2);" << endl;
	cout << "                            " << endl;
	cout << "int main () {" << endl;
	cout << " // local variable declaration:" << endl;
	cout << "int a = 100;" << endl;
	cout << "int b = 200;" << endl;
	cout << "int ret;" << endl;
	cout << "        " << endl;
	cout << "// calling a function to get max value." << endl;
	cout << " ret = max(a, b);" << endl;
	cout << " cout << 'Max value is : ' << ret << endl;" << endl;
	cout << "                                          " << endl;
	cout << "return 0;" << endl;
	cout << "}" << endl;
	cout << "     " << endl;

	cout << "// function returning the max between two numbers" << endl;
	cout << "int max(int num1, int num2) {" << endl;
	cout << "// local variable declaration" << endl;
	cout << "int result;" << endl;
	cout << "           " << endl;

	cout << "if (num1 > num2)" << endl;
	cout << "result = num1;" << endl;
	cout << "else" << endl;
	cout << "result = num2;" << endl;
	cout << "              " << endl;
	cout << "return result; " << endl;
	cout << "}" << endl;
	cout << "---------------------------------------------------------------------------------------" << endl;

}


void diccpp() {
	cout << "Welcome to the c++ dic!" << endl;
	cout << "-------------------" << endl;
	
	dicCPPhelp();

	cout << "What Do you whant to search:" << endl;
	string dicCppuserinput;
	//cin >> dicCppuserinput;
	getline(cin, dicCppuserinput);

	if (dicCppuserinput == "1") {
		dicCPPFunctions();
	}



}
//_____________________________________________________________________

void dicfun() {
	
	cout << "Welcome to the dic!" << endl;
	//TypeWriter("Welcome to the dic!");
	cout << "-------------------" << endl;

	cout << "What Do you whant to search:" << endl;
	string dicuserinput;
	getline(cin, dicuserinput);

	if (dicuserinput == "help" || dicuserinput == "h") {
		dichelp();
	}
	if (dicuserinput == "c++" || dicuserinput == "cpp") {
		diccpp();
	}
	

}