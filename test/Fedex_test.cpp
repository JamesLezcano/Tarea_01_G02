#include <gtest/gtest.h>
#include "../src/Fedex.hpp"

namespace {
    TEST(EnvioTestsFedex1, calculoEnvio_TestFedex1) {  //menos de 500km y menos de 4kg
        
        Fedex fedex1{2,2};

        double actual = fedex1.calculoEnvio();
        EXPECT_EQ(20, actual);
    }
}
namespace {
    TEST(EnvioTestsFedex2, calculoEnvio_TestFedex2) {  //mas de 500km y menos de 4kg
        
        Fedex fedex2{501,2};
       
        double actual= fedex2.calculoEnvio();
        
        EXPECT_EQ(25, actual);
    }
}
namespace {
    TEST(EnvioTestsFedex3, calculoEnvio_TestFedex3) {  //menos de 500km y mas de 4kg
        
        Fedex fedex3{2,6};
        double actual=fedex3.calculoEnvio();
               
        EXPECT_EQ(23, actual);
    }
}
namespace {
    TEST(EnvioTestsFedex4, calculoEnvio_TestFedex4) {  //mas de 500km y mas de 4kg
        
        Fedex fedex4{501,6};
        double actual=fedex4.calculoEnvio();

        EXPECT_EQ(28, actual);
    }
}