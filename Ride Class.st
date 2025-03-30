Object subclass: #Ride
    instanceVariableNames: 'rideID pickupLocation dropoffLocation distance fare'
    classVariableNames: ''
    package: 'RideSharing'.

Ride >> initializeWith: id pickup: pickup dropoff: dropoff dist: dist
    rideID := id.
    pickupLocation := pickup.
    dropoffLocation := dropoff.
    distance := dist.
    fare := 0.
    ^ self.

Ride >> calculateFare
    fare := distance * 1.0. "Base rate $1/mile"
    ^ fare.

Ride >> displayDetails
    ^ 'Ride ', rideID, ' from ', pickupLocation, ' to ', dropoffLocation,
      ' (', distance asString, ' miles) - $', fare asString.
