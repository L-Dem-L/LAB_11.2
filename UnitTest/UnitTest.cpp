#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_11.2/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestCalculateAverageGrade)
		{
			// Arrange
			Student student;
			student.physics_grade = 4;
			student.math_grade = 5;
			student.additional_grade.programming = 3;

			// Act
			double result = CalculateAverageGrade(student);

			// Assert
			Assert::AreEqual(4.0, result);
		}

		TEST_METHOD(TestCalculatePercentage)
		{
			// Arrange
			const int N = 3;
			Student students[N];

			students[0].physics_grade = 5;
			students[1].physics_grade = 4;
			students[2].physics_grade = 3;

			// Act
			double result = CalculatePercentage(students, N);

			// Assert
			Assert::AreEqual(66.666, result, 0.001); 
		}

	};
}
