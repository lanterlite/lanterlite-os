#include <iostream>
#include <fstream>
using namespace std;

bool kernel_enabled = true;
string kernel_name = "Light";
string kernel_version = "1.0.0";
string command_input;
string null = "";

void command_parser(string x){
	if (x == "help"){
		cout  << " === Help === " << endl;
	}
}

void command_operator(){
	getline(cin, command_input);
	command_parser(command_input);
}


int main () {
	while (kernel_enabled == true) {
		command_operator();
	}
}