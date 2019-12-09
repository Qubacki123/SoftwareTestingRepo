gcc calc.c -ICUnit/include -LCUnit/lib -lcunit -o calc.out
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:CUnit/lib
./calc.out
