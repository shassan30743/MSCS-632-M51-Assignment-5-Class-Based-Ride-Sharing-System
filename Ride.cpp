#include "Ride.h"

Ride::Ride(const std::string& id, const std::string& pickup, const std::string& dropoff, double dist)
    : rideID(id), pickupLocation(pickup), dropoffLocation(dropoff), distance(dist), fareCalculated(0.0) {}

double Ride::calculateFare() {
    fareCalculated = distance * 1.0; // Base rate $1/mile
    return fareCalculated;
}

void Ride::displayDetails() const {
    std::cout << "Ride ID: " << rideID << "\nPickup: " << pickupLocation
              << "\nDropoff: " << dropoffLocation << "\nDistance: " << distance
              << " miles\nFare: $" << fareCalculated << "\n";
}

StandardRide::StandardRide(const std::string& id, const std::string& pickup, const std::string& dropoff, double dist)
    : Ride(id, pickup, dropoff, dist) {}

double StandardRide::calculateFare() {
    fareCalculated = distance * 1.5; // $1.5/mile
    return fareCalculated;
}

PremiumRide::PremiumRide(const std::string& id, const std::string& pickup, const std::string& dropoff, double dist)
    : Ride(id, pickup, dropoff, dist) {}

double PremiumRide::calculateFare() {
    fareCalculated = (distance * 2.5) + 10.0; // $2.5/mile + $10 fee
    return fareCalculated;
}
