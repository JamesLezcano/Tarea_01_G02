#include <gtest/gtest.h>
#include "../src/Postal.hpp"

namespace {
    TEST(TestsPostalclase1_menosKg3, calculoEnvio_TestPostal_clase1_menosKg3) {//Clase 1 menos de 3 km
        Postal postal1{2,1};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.195, actual);
    }
}
namespace {
    TEST(TestsPostalclase2_menosKg3, calculoEnvio_TestPostal_clase2_menosKg3) {//Clase 2 menos de 3 km
        Postal postal1{2,2};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.0195, actual);
    }
}
namespace {
    TEST(TestsPostalclase3_menosKg3, calculoEnvio_TestPostal_clase3_menosKg3) {//Clase 3 menos de 3 km
        Postal postal1{2,3};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.0150, actual);
    }
}

namespace {
    TEST(TestsPostalclase1_entre4_8Kg, calculoEnvio_TestPostal_clase1_entre4_8Kg) { //Clase 1 entre 4 y 8 km
        Postal postal1{4,1};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.450, actual);
    }
}
namespace {
    TEST(TestsPostalclase2_entre4_8Kg, calculoEnvio_TestPostal_clase2_entre4_8Kg) { //Clase 2 entre 4 y 8 km
        Postal postal1{4,2};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.0450, actual);
    }
}
namespace {
    TEST(TestsPostalclase3_entre4_8Kg, calculoEnvio_TestPostal_clase3_entre4_8Kg) { //Clase 3 entre 4 y 8 km
        Postal postal1{4,3};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.0160, actual);
    }
}

namespace {
    TEST(TestsPostalclase1_mas9Kg, calculoEnvio_TestPostal_clase1_mas9Kg) { //Clase 1 más de 9 km
        Postal postal1{9,1};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.500, actual);
    }
}
namespace {
    TEST(TestsPostalclase2_mas9Kg, calculoEnvio_TestPosta2_clase1_mas9Kg) { //Clase 2 más de 9 km
        Postal postal1{9,2};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.0500, actual);
    }
}
namespace {
    TEST(TestsPostalclase3_mas9Kg, calculoEnvio_TestPostal_clase3_mas9Kg) { //Clase 3 más de 9 km
        Postal postal1{9,3};
        double actual = postal1.calculoEnvio();
        EXPECT_EQ(0.0170, actual);
    }
}