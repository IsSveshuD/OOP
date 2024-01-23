#ifndef AEROFLOT_H
#define AEROFLOT_H

#include <iostream>
#include <string>

class AEROFLOT {
private:
    std::string destination;
    int flightNumber;
    std::string aircraftType;

public:
    // ����������� �� ���������
    AEROFLOT() : flightNumber(0) {}

    // ����������� ������
    AEROFLOT(std::string dest, int number, std::string type) : destination(dest), flightNumber(number), aircraftType(type) {}

    // ������ �������
    std::string getDestination() const {
        return destination;
    }

    int getFlightNumber() const {
        return flightNumber;
    }

    void setFlightNumber(int number) {
        flightNumber = number;
    }

    std::string getAircraftType() const {
        return aircraftType;
    }

    void setInputValues() {
        std::cout << "������� ����� ����������: ";
        std::cin >> destination;
        std::cout << "������� ����� �����: ";
        std::cin >> flightNumber;
        std::cout << "������� ��� ��������: ";
        std::cin >> aircraftType;
    }
};

// ������������� �������� ���������� � �������
std::ostream& operator<<(std::ostream& os, const AEROFLOT& aeroflot);

std::istream& operator>>(std::istream& is, AEROFLOT& aeroflot);

#endif 
