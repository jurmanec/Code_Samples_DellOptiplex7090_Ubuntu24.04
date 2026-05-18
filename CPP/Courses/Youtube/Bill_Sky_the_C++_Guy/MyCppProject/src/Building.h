#ifndef BUILDING_H
#define BUILDING_H

#pragma once

class Building {
    public:
    // constructor/destructor
    Building() {

    }
    ~Building() {

    }

    int getTotalSquareFootage() const { return totalSquareFootage; }
    void setTotalSquareFootage(int totalSquareFootage_) { totalSquareFootage = totalSquareFootage_; }

    int getNumberOfFloors() const { return numberOfFloors; }
    void setNumberOfFloors(int numberOfFloors_) { numberOfFloors = numberOfFloors_; }

    
    private:
    int totalSquareFootage;
    int numberOfFloors;

};

#endif