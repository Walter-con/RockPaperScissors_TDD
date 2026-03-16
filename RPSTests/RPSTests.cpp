#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPSTests
{
	TEST_CLASS(RPSTests)
	{
	public:

		TEST_METHOD(Player1Wins)
		{
			char* result = rockPaperScissors("Rock", "Scissors");
			Assert::AreEqual("Player1", result);
		}
	};
}
