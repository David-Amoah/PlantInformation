// Copyright 2023
// Author: David Amoah

#include "Plant.h"

#include "Plant.h"
#include <iostream>

Plant::~Plant() {};

void Plant::SetPlantName(string userPlantName) {
    plantName = userPlantName;
}

string Plant::GetPlantName() const {
    return plantName;
}

void Plant::SetPlantCost(int userPlantCost) {
    plantCost = userPlantCost;
}

int Plant::GetPlantCost() const {
    return plantCost;
}

void Plant::PrintInfo() const {
    cout << "   Plant name: " << plantName << endl;
    cout << "   Cost: " << plantCost << endl;
}
