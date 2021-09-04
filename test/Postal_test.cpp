#include <gtest/gtest.h>
#include "../src/Postal.hpp"

namespace {
    TEST(EnvioTestsPostal1, calculoEnvio_TestPosta1) {//Clase 1 menos de 3 km
        Postal postal1{2,1};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.195, actual);
    }
}
namespace {
    TEST(EnvioTestsPostal2, calculoEnvio_TestPostal2) {//Clase 2 menos de 3 km
        Postal postal1{2,2};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.0195, actual);
    }
}
namespace {
    TEST(EnvioTestsPosta3, calculoEnvio_TestPostal3) {//Clase 3 menos de 3 km
        Postal postal1{2,3};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.0150, actual);
    }
}

namespace {
    TEST(EnvioTestsPostal4, calculoEnvio_TestPosta4) { //Clase 1 entre 4 y 8 km
        Postal postal1{4,1};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.450, actual);
    }
}
namespace {
    TEST(EnvioTestsPostal5, calculoEnvio_TestPostal5) { //Clase 2 entre 4 y 8 km
        Postal postal1{4,2};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.0450, actual);
    }
}
namespace {
    TEST(EnvioTestsPosta6, calculoEnvio_TestPostal6) { //Clase 3 entre 4 y 8 km
        Postal postal1{4,3};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.0160, actual);
    }
}

namespace {
    TEST(EnvioTestsPostal7, calculoEnvio_TestPosta7) { //Clase 1 más de 9 km
        Postal postal1{9,1};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.500, actual);
    }
}
namespace {
    TEST(EnvioTestsPostal8, calculoEnvio_TestPostal8) { //Clase 2 más de 9 km
        Postal postal1{9,2};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.0500, actual);
    }
}
namespace {
    TEST(EnvioTestsPosta9, calculoEnvio_TestPostal9) { //Clase 3 más de 9 km
        Postal postal1{9,3};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.0170, actual);
    }
}