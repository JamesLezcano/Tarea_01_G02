#include <gtest/gtest.h>
#include "../src/Fedex.hpp"

namespace {
    TEST(EnvioTestFedexmenos500menos4kg, calculoEnvio_TestFedexmenos500menos4kg) {  //menos de 500km y menos de 4kg
        
        Fedex fedex1{2,2};

        double actual = fedex1.calculoEnvio();
        EXPECT_EQ(20, actual);
    }
}
namespace {
    TEST(EnvioTestFedexmas500menos4kg, calculoEnvio_TestFedexmas500menos4kg) {  //mas de 500km y menos de 4kg
        
        Fedex fedex2{501,2};
       
        double actual= fedex2.calculoEnvio();
        
        EXPECT_EQ(25, actual);
    }
}
namespace {
    TEST(EnvioTestFedexmenos500mas4kg, calculoEnvio_TestFedexmenos500mas4kg) {  //menos de 500km y mas de 4kg
        
        Fedex fedex3{2,6};
        double actual=fedex3.calculoEnvio();
               
        EXPECT_EQ(23, actual);
    }
}
namespace {
    TEST(EnvioTestFedexmas500mas4kg, calculoEnvio_TestFedexmas500mas4kg) {  //mas de 500km y mas de 4kg
        
        Fedex fedex4{501,6};
        double actual=fedex4.calculoEnvio();

        EXPECT_EQ(28, actual);
    }
}