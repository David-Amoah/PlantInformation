// Copyright 2023
// Author: David Amoah

#include "Plant.h"
#include "Flower.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Define a PrintVector function that prints a vector of plant (or flower) object pointers

void PrintVector(vector <Plant*> myGarden) {
    for (size_t i = 0; i < myGarden.size(); i++) {
        cout << "Plant " << i + 1 << " Information:" << endl;
        myGarden.at(i)->PrintInfo();
        cout << endl;
    }
}

int main() {
   // TODO: Declare a vector called myGarden that can hold object of type plant pointer
   vector<Plant*> myGarden;

   // TODO: Declare variables - plantName, plantCost, flowerName, flowerCost,
   //       colorOfFlowers, isAnnual

   string plantName;
   int plantCost;
   string flowerName;
   int flowerCost;
   string colorOfFlowers;
   string isAnnual;

   string input;

   cin >> input;

   while(input != "-1") {
   // TODO: Check if input is a plant or flower
   //       Store as a plant object or flower object
   //       Add to the vector myGarden
        if (input == "plant")  {
            cin >> plantName;
            cin >> plantCost;
            Plant plant1;
            plant1.SetPlantName(plantName);
            plant1.SetPlantCost(plantCost);
            //myGarden.push_back(&plant1);
            myGarden.push_back(new Plant (plant1));
        }
        else if (input == "flower") {
            cin >> flowerName;
            cin >> flowerCost;
            cin >> isAnnual;
            cin >> colorOfFlowers;
            Flower flower1;
            flower1.SetPlantName(flowerName);
            flower1.SetPlantCost(flowerCost);
            if (isAnnual == "false") {
                flower1.SetPlantType(false);
            }
            else {
                flower1.SetPlantType(true);
            }
            flower1.SetColorOfFlowers(colorOfFlowers);
            //myGarden.push_back(&flower1);
            myGarden.push_back(new Flower (flower1));
        }
      cin >> input;
   }

   // TODO: Call the method PrintVector to print myGarden
    PrintVector(myGarden);

   for (size_t i = 0; i < myGarden.size(); ++i) {
      delete myGarden.at(i);
   }

   return 0;
}