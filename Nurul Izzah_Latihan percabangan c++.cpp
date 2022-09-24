#include <iostream>
using namespace std;
int main(){
	string gender = "L";
	float tb = 165;
	float bb = 48;
	float bb_ideal;
	
	if(gender == "L"){
	bb_ideal = (tb - 100) - ((tb - 100) * 0.1);
}   else if(gender == "P"){
    bb_ideal = (tb - 100) - ((tb - 100) * 0.15);
}   else {
	cout << "Gender Salah";  
}

if(bb == bb_ideal){
 cout << "berat badan anda ideal";
 } else if (bb > bb_ideal){
 	cout << "berat badan anda Gemuk";
 }	else {
 	cout << "Berat Badan anda Kurus";
 }
 
}



