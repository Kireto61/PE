//
// Created by Kiril Valkov on 18.11.24.
//

#ifndef UNTITLED2_ROUTE_H
#define UNTITLED2_ROUTE_H

#include <iostream>
#include <vector>
#include <string>

class route {

private:
    double longDistance;
    int lap;
    std::vector<std::string> stopsPlaces;
public:
    route(double longDistance, int lap,const std::vector<std::string> &stopsPlaces);

    double getLongDistance() const;

    void setLongDistance(double longDistance);

    int getLap() const;

    void setLap(int lap);

    const std::vector<std::string> &getStopsPlaces() const;

    void setStopsPlaces(const std::vector<std::string> &stopsPlaces);

    friend std::ostream &operator<<(std::ostream &os, const route &route);
};


std::ostream  &operator<<(std::ostream &os, const std::vector<std::string> &stopsPlaces);

#endif //UNTITLED2_ROUTE_H
