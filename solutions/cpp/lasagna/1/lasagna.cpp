// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    // TODO: Return the correct time.
    int timeInOven{40};
    
    return timeInOven;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    // TODO: Calculate and return the remaining in the oven based on the time
    // the lasagna has already been there.
    int ovenTime_{0};
    int remainingOvenTime{0};
    
    ovenTime_= ovenTime();
    remainingOvenTime=ovenTime_-actualMinutesInOven;
    
    return remainingOvenTime;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    // TODO: Calculate and return the preparation time with the
    // `numberOfLayers`.
    
    return numberOfLayers*2;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // TODO: Calculate and return the total time so far.
    int total{0};
    total=preparationTime(numberOfLayers) + actualMinutesInOven;
    return total;
}
