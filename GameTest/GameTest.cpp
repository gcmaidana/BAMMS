#include "pch.h"
#include "CppUnitTest.h"
#include "../BAMMS/Game.h"
#include "../BAMMS/NBAGame.h"
#include "../BAMMS/CollegeGame.h"
#include "../BAMMS/Game.cpp"
#include "../BAMMS/Team.h"
#include "../BAMMS/Team.cpp"
#include "../BAMMS/MyStack.h"
#include "../BAMMS/MyStack.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GameTest
{
	TEST_CLASS(GameTest)
	{
	public:

		TEST_METHOD(NBAGameTestNumOfPeriods)
		{
			Game* g = new NBAGame();
			Assert::AreEqual(g->GetNumOfPeriods(), 4);

		}

		TEST_METHOD(NBAGameTestPeriodLength)
		{
			Game* g = new NBAGame();
			Assert::AreEqual(g->GetPeriodLength(), 720);
		}

		TEST_METHOD(NBAGameTestNumOfTimeouts)
		{
			Game* g = new NBAGame();
			Assert::AreEqual(g->GetNumOfTimeouts(), 7);
		}

		TEST_METHOD(NBAGameTestShotclockLength)
		{
			Game* g = new NBAGame();
			Assert::AreEqual(g->GetShotclockLength(), 24);
		}

		TEST_METHOD(NBAGameTestPeriod)
		{
			Game* g = new NBAGame();
			Assert::AreEqual(g->GetPeriod(), 1);
		}

		TEST_METHOD(NBAGameTestShotclock)
		{
			Game* g = new NBAGame();
			Assert::AreEqual(g->GetShotclock(), g->GetShotclockLength());
		}

		TEST_METHOD(NBAGameTestGameclock)
		{
			Game* g = new NBAGame();
			Assert::AreEqual(g->GetGameclock(), g->GetPeriodLength());
		}

		TEST_METHOD(NBAGameTestBonus)
		{
			Game* g = new NBAGame();
			Assert::IsTrue(g->GetBonus() == false);
		}

		TEST_METHOD(NBAGameTestDoubleBonus)
		{
			Game* g = new NBAGame();
			Assert::IsTrue(g->GetDoubleBonus() == false);
		}


		TEST_METHOD(CollegeGameTestNumOfPeriods)
		{
			Game* g = new CollegeGame();
			Assert::AreEqual(g->GetNumOfPeriods(), 2);
		}

		TEST_METHOD(CollegeGameTestPeriodLength)
		{
			Game* g = new CollegeGame();
			Assert::AreEqual(g->GetPeriodLength(), 1200);
		}

		TEST_METHOD(CollegeGameTestNumOfTimeouts)
		{
			Game* g = new CollegeGame();
			Assert::AreEqual(g->GetNumOfTimeouts(), 4);
		}

		TEST_METHOD(CollegeGameTestShotclockLength)
		{
			Game* g = new CollegeGame();
			Assert::AreEqual(g->GetShotclockLength(), 30);
		}

		TEST_METHOD(CollegeGameTestPeriod)
		{
			Game* g = new CollegeGame();
			Assert::AreEqual(g->GetPeriod(), 1);
		}

		TEST_METHOD(CollegeGameTestShotclock)
		{
			Game* g = new CollegeGame();
			Assert::AreEqual(g->GetShotclock(), g->GetShotclockLength());
		}

		TEST_METHOD(CollegeGameTestGameclock)
		{
			Game* g = new CollegeGame();
			Assert::AreEqual(g->GetGameclock(), g->GetPeriodLength());
		}

		TEST_METHOD(CollegeGameTestBonus)
		{
			Game* g = new CollegeGame();
			Assert::IsTrue(g->GetBonus() == false);
		}

		TEST_METHOD(CollegeGameTestDoubleBonus)
		{
			Game* g = new CollegeGame();
			Assert::IsTrue(g->GetDoubleBonus() == false);
		}


		TEST_METHOD(IncrementScore)
		{
			Team* t = new Team(1);

			t->incrementScore(1);
			Assert::AreEqual(t->getScore(), 1);
		}

		TEST_METHOD(DecrementScore)
		{
			Team* t = new Team(1);

			t->incrementScore(1);
			t->decrementScore();
			Assert::AreEqual(t->getScore(), 0);
		}

		TEST_METHOD(DecrementScorePastZero)
		{
			Team* t = new Team(1);

			t->incrementScore(1);
			t->decrementScore();
			t->decrementScore();
			Assert::AreEqual(t->getScore(), 0);
		}


		TEST_METHOD(IncrementFoul)
		{
			Team* t = new Team(1);

			t->incrementFoul();
			Assert::AreEqual(t->getFouls(), 1);
		}

		TEST_METHOD(DecrementFoul)
		{
			Team* t = new Team(1);

			t->incrementFoul();
			t->decrementFoul();
			Assert::AreEqual(t->getFouls(), 0);
		}

		TEST_METHOD(DecrementFoulPastZero)
		{
			Team* t = new Team(1);

			t->incrementFoul();
			t->decrementFoul();
			t->decrementFoul();
			Assert::AreEqual(t->getFouls(), 0);
		}




		TEST_METHOD(IncrementTimeouts)
		{
			Team* t = new Team(0);

			t->incrementTimeout();
			Assert::AreEqual(t->getTimeouts(), 1);
		}

		TEST_METHOD(DecrementTimeouts)
		{
			Team* t = new Team(0);

			t->incrementTimeout();
			t->decrementTimeout();
			Assert::AreEqual(t->getTimeouts(), 0);
		}

		TEST_METHOD(DecrementTimeoutsPastZero)
		{
			Team* t = new Team(0);

			t->incrementTimeout();
			t->decrementTimeout();
			t->decrementTimeout();
			Assert::AreEqual(t->getTimeouts(), 0);
		}
	};
}
