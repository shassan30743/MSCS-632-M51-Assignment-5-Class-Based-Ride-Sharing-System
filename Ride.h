#include <iostream>
#include <string>
#include <vector>

class Ride {
protected:
    std::string rideID;
    std::string pickupLocation;
    std::string dropoffLocation;
    double distance;
    double fareCalculated;

public:
    Ride(const std::string& id, const std::string& pickup, const std::string& dropoff, double dist);
    virtual ~Ride() = default;
    virtual double calculateFare();
    virtual void displayDetails() const;
};

class StandardRide : public Ride {
public:
    StandardRide(const std::string& id, const std::string& pickup, const std::string& dropoff, double dist);
    double calculateFare() override;
};

class PremiumRide : public Ride {
public:
    PremiumRide(const std::string& id, const std::string& pickup, const std::string& dropoff, double dist);
    double calculateFare() override;
};
