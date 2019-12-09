#include <stdio.h>
#include <string.h>
#include "CUnit/Basic.h"

int init_suite(void) { return 0; }
int clean_suite(void) { return 0; }

    
int dodaj(int a, int b)  //dodawanie
	{
		return a + b;
	}

void test_sum(void) //test function 1
{
int i;
for(i=0; i<1000; i++) CU_ASSERT(i+1==dodaj(i,1));
CU_ASSERT(5==dodaj(3,2));
CU_ASSERT(9==dodaj(3,6));
CU_ASSERT(10==dodaj(-3,6));
CU_ASSERT(6==dodaj(0,6));

}


int main()		//main function
    {
	
	CU_pSuite pSuite1;
	CU_initialize_registry();
	pSuite1 = CU_add_suite("Basic_Test_suite1", init_suite, clean_suite);
	CU_add_test(pSuite1, "\n\n Testing Sum Function.. \n\n", test_sum);
	CU_basic_run_tests();
	CU_cleanup_registry();

	return CU_get_error();
        

	/*
	int liczba1=0;
	int liczba2=0;
	int suma=0;
	
	printf("Podaj pierwsza: ");
  	scanf("%d", &liczba1); 
	
	printf("Podaj druga: ");
  	scanf("%d", &liczba2); 
	
	suma = dodaj(liczba1,liczba2);
	printf("Suma: ");	
	printf("%d ", suma);
	printf("\n");
		     	
	return 0;
	*/
    }
