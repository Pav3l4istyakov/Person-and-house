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
		std::cout << "\t���:" << name << "\t�������:" << age << std::endl;
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
		std::cout << "\t����� �������" << RoomNumber << std::endl;
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
		std::cout << "\t������� ����������:" << ManagementArea << std::endl;
	}
	void manageHouse() {
		std::cout << name << "\t��������� ����� � ���� ������:" << ManagementArea << std::endl;
	}
};

int main() {
	setlocale(LC_ALL, "RU");
	HouseResident resident("Alice", 30, "101");
	HouseManager manager("Bob", 45, "������� ���");
	std::cout << "���������� � ���������:"<<std::endl;
	resident.DisplayResidentInfo();
	manager.manageHouse();
	return 0;
}

