//
// Created by Kiril Valkov on 18.11.24.
//
#pragma once

#include "route.h"

double route::getLongDistance() const {
    return longDistance;
}

void route::setLongDistance(double longDistance) {
    if(longDistance>0.0){
        route::longDistance = longDistance;
    }
}

int route::getLap() const {
    return lap;
}

void route::setLap(int lap) {
    if(lap>0){
        route::lap = lap;
    }
}

const std::vector<std::string> &route::getStopsPlaces() const {
    return stopsPlaces;
}

void route::setStopsPlaces(const std::vector<std::string> &stopsPlaces) {
    if(stopsPlaces.empty()){
        route::stopsPlaces = stopsPlaces;
    }
}
route::route(double longDistance, int lap, const std::vector<std::string> &stopsPlaces) {
    setLap(lap);
    setLongDistance(longDistance);
    setStopsPlaces(stopsPlaces);
}
std::ostream &operator<<(std::ostream &os, const std::vector<std::string> &stopsPlaces) {
    for(auto& x : stopsPlaces){
        os<<x<<", ";
    }
    return os;
}

std::ostream &operator<<(std::ostream &os, const route &route) {
    os << "longDistance: " << route.longDistance << " lap: " << route.lap << " stopsPlaces: " << route.stopsPlaces;
    return os;
}
