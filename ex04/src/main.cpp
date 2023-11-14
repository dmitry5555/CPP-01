

#include <iostream>
#include <fstream>

int main() {
	std::ifstream myfile1;
	std::ofstream myfile2;
	std::string temp;
	std::string s1;
	std::string s2;	
 
	s1 = "hello";
	s2 = "bye";
	myfile1.open("01.txt");
	myfile2.open("02.txt");
	
	if (myfile1.is_open() && myfile2.is_open())
	{
		myfile1 >> temp;
		while(temp.find(s1))
		{
			
		}
		myfile2 << temp;
	}
	// myfile1 << 
	myfile1.close();
	myfile2.close();
	return(0);

}
