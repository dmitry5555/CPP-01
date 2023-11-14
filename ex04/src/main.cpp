
#include <iostream>
#include <fstream>

void strReplace(std::string& s, const std::string s1, const std::string s2) {
	size_t pos = 0;
	while((pos = s.find(s1, pos)) != std::string::npos)
	{
		s = s.substr(0, pos) + s2 + s.substr(pos + s1.length());
		pos += s2.length();
	}
}

int main() {
	std::ifstream myfile1;
	std::ofstream myfile2;
	std::string s;
	std::string s1;
	std::string s2;

	s1 = "hello";
	s2 = "bye";
	myfile1.open("01.txt");
	myfile2.open("02.txt");

	if (myfile1.is_open() && myfile2.is_open())
	{
		std::getline(myfile1, s, '\0');
		strReplace(s, s1, s2);
		myfile2 << s;
	}
	myfile1.close();
	myfile2.close();

	return(0);
}

