/** ==================================================================================================================*\
  @file UT_CanNM.c

  @brief Testy jednostkowe do CanNM
\*====================================================================================================================*/
#include "Std_Types.h"

#include "acutest.h"
#include "fff.h"

#include "CanNM.c"


/**
  @brief Test zerowania modułu

  Funkcja testująca reset modułu.
*/
// void Test_Of_Calc_Reset(void)
// {
//     akumulator = 0xFFFFFFFFL;

//     Calc_Reset();

//     TEST_CHECK(Lib_Calc_MemS_fake.call_count == 1);
//     TEST_CHECK(Lib_Calc_MemS_fake.arg0_val == 0L);
//     TEST_CHECK(akumulator == 0L);
// }
/*
  Lista testów - wpisz tutaj wszystkie funkcje które mają być wykonane jako testy.
*/
TEST_LIST = {
    // { "Test of Calc_Reset", Test_Of_Calc_Reset },   /* Format to { "nazwa testu", nazwa_funkcji } */

    { NULL, NULL }                                        /* To musi być na końcu */
};
    
