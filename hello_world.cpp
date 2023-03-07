#include <iostream>
int main(){
	std::string name; // создаем переменную
	std::cout << "Your name:" << std::endl;
	std::cin >> name; // ввод имени в переменную
	std::cout << "Hello world from " << name; //вывод программы
	return 0;
}