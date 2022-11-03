#include "pch.h"
#include "CppUnitTest.h"
#include "..\\ce103-hw2-lib\ce103-hw2-lib.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CE103HW2LibTest
{
	TEST_CLASS(CE103HW2LibTest)
	{
	public:

		TEST_METHOD(ce103_strlen_test_1)
		{
			char a[20] = "HelloWorld";
			Assert::AreEqual(ce103_strlen(a),10);
		}

		TEST_METHOD(ce103_strlen_test_2)
		{
			char a[20] = "Program";
			Assert::AreEqual(ce103_strlen(a), 7);
		}

		TEST_METHOD(ce103_strlen_test_3)
		{
			char b[20] = { 'P','r','o','g','r','a','m','\0' };
			Assert::AreEqual(ce103_strlen(b), 7);
		}

		TEST_METHOD(ce103_fibonacciNumber_test_1)
		{
			Assert::AreEqual(ce103_fibonacciNumber(1), 0);
		}

		TEST_METHOD(ce103_fibonacciNumber_test_2)
		{
			Assert::AreEqual(ce103_fibonacciNumber(3), 1);
		}

		TEST_METHOD(ce103_fibonacciNumber_test_3)
		{
			Assert::AreEqual(ce103_fibonacciNumber(10), 34);
		}

		TEST_METHOD(ce103_fibonacciNumber_test_4)
		{
			Assert::AreEqual(ce103_fibonacciNumber(30), 514229);
		}

		TEST_METHOD(ce103_strrev_test_1)
		{
			char orig[] = "HelloWorld";
			char rev[] = "dlroWolleH";
			
			Assert::AreEqual(ce103_strrev(orig), rev);
		}

		TEST_METHOD(ce103_strrev_test_2)
		{
			char orig[] = "Computer";
			char rev[] = "retupmoC";

			Assert::AreEqual(ce103_strrev(orig), rev);
		}

		TEST_METHOD(ce103_strrev_test_3)
		{
			char orig[] = "New World";
			char rev[] = "dlroW weN";

			Assert::AreEqual(ce103_strrev(orig), rev);
		}


		TEST_METHOD(ce103_strcat_test_1)
		{
			char a1[30] = "Hello";
			char a2[30] = "World";
			char a3[30] = "HelloWorld";
				
			Assert::AreEqual(ce103_strcat(a1, a2), a3);
		}

		TEST_METHOD(ce103_strcat_test_2)
		{
			char b1[30] = "Computer";
			char b2[30] = "Engineering";
			char b3[30] = "ComputerEngineering";
		
			Assert::AreEqual(ce103_strcat(b1, b2), b3);
		}

		TEST_METHOD(ce103_strcmp_test_1)
		{
			const char b1[30] = "Computer";
			const char b2[30] = "Computer";

			Assert::AreEqual(ce103_strcmp(b1, b2), 0);
		}

		TEST_METHOD(ce103_strcmp_test_2)
		{
			const char b1[30] = "Computer";
			const char b2[30] = "Engineering";

			Assert::AreNotEqual(ce103_strcmp(b1, b2), 0);
		}


		TEST_METHOD(ce103_strcpy_test_1)
		{
			char b1[30] = "Computer";
			char b2[30] = "Hi";

			char expected[30] = "Hi";


			Assert::AreEqual(ce103_strcpy(b1, b2), expected);
		}

		TEST_METHOD(ce103_strcpy_test_2)
		{
			char b1[30] = "Computer";
			char b2[30] = "Engineering";

			char expected[30] = "Engineering";

			Assert::AreEqual(ce103_strcpy(b1, b2), expected);
		}



		TEST_METHOD(ce103_hex2bin_test_1)
		{
			char arr[16+1] = "1313131313131313";
			unsigned char binExpected[8] = { 0x13,0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13 };
			unsigned char binActual[8] = {0};

			ce103_hex2bin(arr, strlen(arr), binActual);

			bool eql = !(memcmp(binActual, binExpected, 8 * sizeof(unsigned char)));

			Assert::AreEqual(eql, true);
		}

		TEST_METHOD(ce103_hex2bin_test_2)
		{
			char arr[16 + 1] = "A1B2C3D4E5678910";
			unsigned char binExpected[8] = { 0xA1,0xB2,0xC3,0xD4,0xE5,0x67,0x89,0x10 };
			unsigned char binActual[8] = { 0 };

			ce103_hex2bin(arr, strlen(arr), binActual);

			bool eql = !(memcmp(binActual, binExpected, 8 * sizeof(unsigned char)));

			Assert::AreEqual(eql, true);
		}


		TEST_METHOD(ce103_bin2hex_test_1)
		{
			char expected[16 + 1] = "";
			char actual[16 + 1] = "1313131313131313";
			unsigned char bin[8] = { 0x13,0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13 };
			
			ce103_bin2hex(bin, 8, expected);

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(ce103_bin2hex_test_2)
		{
			char expected[16 + 1] = "";
			char actual[16 + 1] = "A1B2C3D4E5678910";
			unsigned char bin[8] = { 0xA1,0xB2,0xC3,0xD4,0xE5,0x67,0x89,0x10 };

			ce103_bin2hex(bin, 8, expected);

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(ce103_gcd_test_1)
		{
			int expected = 14;
			int actual = 0;

			actual = ce103_gcd(98, 56);

			Assert::AreEqual(expected, actual);
		}

	};
}
