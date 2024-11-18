//
// Created by Kiril Valkov on 6.11.24.
//

#ifndef UNTITLED2_CARS_H
#define UNTITLED2_CARS_H

#include <iostream>

#include <string>


class cars {
private:
    std::string brand;
    std::string model;
    int year;
    int countOfSeats;
    int loadCapacity;
    double fuelConsumption;


public:
    cars(std::string brand, std::string model, int year, int countOfSeats, int loadCapacity, double fuelConsumption);

    const std::string &getBrand() const;

    void setBrand(const std::string &brand);

    const std::string &getModel() const;

    void setModel(const std::string &model);

    int getYear() const;

    void setYear(int year);

    int getCountOfSeats() const;

    void setCountOfSeats(int countOfSeats);

    int getLoadCapacity() const;

    void setLoadCapacity(int loadCapacity);

    double getFuelConsumption() const;

    void setFuelConsumption(double fuelConsumption);

    friend std::ostream &operator<<(std::ostream &os, const cars &cars);
};


#endif //UNTITLED2_CARS_H
