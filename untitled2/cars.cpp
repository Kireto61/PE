//
// Created by Kiril Valkov on 6.11.24.
//
#pragma once

#include "cars.h"

const std::string &cars::getBrand() const {
    return brand;
}

void cars::setBrand(const std::string &brand) {
    if(!brand.empty()){
        cars::brand = brand;
    }
}

const std::string &cars::getModel() const {
    return model;
}

void cars::setModel(const std::string &model) {
    if(!model.empty()){
        cars::model = model;
    }
}

int cars::getYear() const {
    return year;
}

void cars::setYear(int year) {
    if(year>=1769&&year<=2024){
        cars::year = year;
    }
}

int cars::getCountOfSeats() const {
    return countOfSeats;
}

void cars::setCountOfSeats(int countOfSeats) {
    if(countOfSeats>0){
        cars::countOfSeats = countOfSeats;
    }
}

int cars::getLoadCapacity() const {
    return loadCapacity;
}

void cars::setLoadCapacity(int loadCapacity) {
    if(loadCapacity>0){
        cars::loadCapacity = loadCapacity;
    }
}

double cars::getFuelConsumption() const {
    return fuelConsumption;
}

void cars::setFuelConsumption(double fuelConsumption) {
    if(fuelConsumption>0.0){
        cars::fuelConsumption = fuelConsumption;
    }
}

cars::cars(std::string brand, std::string model, int year, int countOfSeats, int loadCapacity, double fuelConsumption) {
    setBrand(brand);
    setModel(model);
    setYear(year);
    setCountOfSeats(countOfSeats);
    setLoadCapacity(loadCapacity);
    setFuelConsumption(fuelConsumption);
}

std::ostream &operator<<(std::ostream &os, const cars &cars) {
    os << "brand: " << cars.brand << " model: " << cars.model << " year: " << cars.year << " countOfSeats: "
       << cars.countOfSeats << " loadCapacity: " << cars.loadCapacity << " fuelConsumption: " << cars.fuelConsumption;
    return os;
}
