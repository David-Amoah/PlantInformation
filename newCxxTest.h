// Copyright 2023
// Author: David Amoah

#ifndef PLANTINFO_NEWCXXTEST_H
#define PLANTINFO_NEWCXXTEST_H


#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H



#include "Plant.h"
#include "Flower.h"
#include <iostream>

using std::cout;
using std::endl;

#include <cxxtest/TestSuite.h>

class newCxxTest : public CxxTest::TestSuite {
public:


    void testMyPlantClass() {
        Plant newPlant;

        newPlant.SetPlantName("Lavender");
        newPlant.SetPlantCost(25);

        TS_ASSERT_EQUALS(newPlant.GetPlantName(), "Lavender");
        TS_ASSERT_EQUALS(newPlant.GetPlantCost(), 25);

        cout << endl;
        newPlant.PrintInfo();


        //test for destructor
        Plant* p = new Plant[3];
        TS_ASSERT_THROWS_NOTHING(p->GetPlantName());




    }

    void testMyFlowerClass() {
        Flower newFlower;

        newFlower.SetPlantName("Orchid");
        newFlower.SetPlantCost(45);
        newFlower.SetPlantType(false);
        newFlower.SetColorOfFlowers("Yellow");

        TS_ASSERT_EQUALS(newFlower.GetPlantName(), "Orchid");
        TS_ASSERT_EQUALS(newFlower.GetPlantCost(), 45);
        TS_ASSERT(!newFlower.GetPlantType());
        TS_ASSERT_EQUALS(newFlower.GetColorOfFlowers(), "Yellow");

        cout << endl;
        newFlower.PrintInfo();

    }


};
#endif /* NEWCXXTEST_H */



#endif //PLANTINFO_NEWCXXTEST_H
