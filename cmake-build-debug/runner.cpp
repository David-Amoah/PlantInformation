/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#define _CXXTEST_HAVE_EH
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_newCxxTest_init = false;
#include "..\newCxxTest.h"

static newCxxTest suite_newCxxTest;

static CxxTest::List Tests_newCxxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_newCxxTest( "C:/Users/amoah/CLionProjects/plantInfo/newCxxTest.h", 22, "newCxxTest", suite_newCxxTest, Tests_newCxxTest );

static class TestDescription_suite_newCxxTest_testMyPlantClass : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testMyPlantClass() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 26, "testMyPlantClass" ) {}
 void runTest() { suite_newCxxTest.testMyPlantClass(); }
} testDescription_suite_newCxxTest_testMyPlantClass;

static class TestDescription_suite_newCxxTest_testMyFlowerClass : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testMyFlowerClass() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 49, "testMyFlowerClass" ) {}
 void runTest() { suite_newCxxTest.testMyFlowerClass(); }
} testDescription_suite_newCxxTest_testMyFlowerClass;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
