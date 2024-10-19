#include<iostream>
#include<string>
// main class
class Person {
protected: 
	std::string name;
	int age;
public:
	Person(std::string n, int a) : name(n), age(a){}
	void Displayinfo() {
		std::cout << "\tимя:" << name << "\tвозраст:" << age << std::endl;
	}
};
//Derived class for House Resident
class HouseResident :public Person {
private:
	std::string RoomNumber;
public:
	HouseResident(std::string n, int a, std::string room) : Person(n, a), RoomNumber(room) {}
	void DisplayResidentInfo() {
		Displayinfo();
		std::cout << "\tномер комнаты" << RoomNumber << std::endl;
	}
};
// Derived class for House Manager
class HouseManager :public Person {
private:
	std::string ManagementArea;
public:
	HouseManager(std::string n, int a, std::string area):Person(n,a),ManagementArea(area) {}
	void DisplayManagerInfo() {
		Displayinfo();
		std::cout << "\tОбласть управления:" << ManagementArea << std::endl;
	}
	void manageHouse() {
		std::cout << name << "\tуправляет домом в этом районе:" << ManagementArea << std::endl;
	}
};

int main() {
	setlocale(LC_ALL, "RU");
	HouseResident resident("Alice", 30, "101");
	HouseManager manager("Bob", 45, "главный зал");
	std::cout << "Информация о резиденте:"<<std::endl;
	resident.DisplayResidentInfo();
	manager.manageHouse();
	return 0;
}

