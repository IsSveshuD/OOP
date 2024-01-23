#ifndef FLIGHT_BOOKING_SYSTEM_H
#define FLIGHT_BOOKING_SYSTEM_H

#include "Flightrequest.h"
#include <list>

class FlightBookingSystem {
private:
    std::list<FlightRequest> requests;

public:
    void addRequest(const FlightRequest& request) {
        requests.push_back(request);
        std::cout << "������ ������� ���������.\n";
    }

    void removeRequest(int flightNumber, const std::string& departureDate) {
        requests.remove_if([&](const FlightRequest& request) {
            return (request.flightNumber == flightNumber && request.departureDate == departureDate);
            });
        std::cout << "������ ������� �������.\n";
    }

    void printRequestsByFlightAndDate(int flightNumber, const std::string& departureDate) {
        for (const auto& request : requests) {
            if (request.flightNumber == flightNumber && request.departureDate == departureDate) {
                std::cout << "����� ����������: " << request.destination << "\n";
                std::cout << "����� �����: " << request.flightNumber << "\n";
                std::cout << "������� � �������� ���������: " << request.passengerName << "\n";
                std::cout << "�������� ���� ������: " << request.departureDate << "\n\n";
            }
        }
    }

    void printAllRequests() {
        for (const auto& request : requests) {
            std::cout << "����� ����������: " << request.destination << "\n";
            std::cout << "����� �����: " << request.flightNumber << "\n";
            std::cout << "������� � �������� ���������: " << request.passengerName << "\n";
            std::cout << "�������� ���� ������: " << request.departureDate << "\n\n";
        }
    }
};

#endif
