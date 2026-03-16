#include "pch.h"
#include "CppUnitTest.h"

char* rockPaperScissors(char player1[], char player2[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSTests
{
    TEST_CLASS(RPSTests)
    {
    public:

        TEST_METHOD(Player1Win_PassTest)
        {
            char* result = rockPaperScissors((char*)"Rock", (char*)"Scissors");
            Assert::AreEqual("Player1", result);
        }
    };
}