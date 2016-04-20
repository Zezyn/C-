/*
Filename: cplusplus_10_1.cpp
Problem:
Author: Martin Hernandez 
Email: 7607920511m.h@gmail.com
Date: 12/04/2015
Description: Write a grading program for a class with the following grading polocies:
A) There are two quizzes, each graded on the basis of 10 points.
B) There is one midterm exam and one final exam, each graded on the basis of 100 points.
C) The final exam counts for 50 percent of the grade, the midterm counts for 25% and the two quizzes together
count for a total of 25%. Do not forget to normalize the quiz scores. They should be coverted to a percent 
before they are averaged in. 

90+ = A
80+ = B
70+ = C
60+ = D
60- = F

The program will read in the student's scores and output the student's record, which consists of two quiz
and two exam scores as well as the student's average numeric score for the entire course and the final 
letter grade. Define and use a structure for the student record. If this is a class assignment, ask your 
instructor if input/output should be done with the keyboard and screen or if it should be done with files. 
If it is to be done with files, ask your instructor for instructions on file names.
*/

#include <iostream>

using namespace std;

class Grades {
	public:
	void scores();
	double quiz();
	double quiz_two();
	double midterm();
	double final_exam();
	double grade();
	

	private:
	double quiz_score;
	double quiz_two_score;
	double midterm_score;
	double final_exam_score;
	double average_score;
	char total_grade;
	
};

int main() {

	cout << "\n\t\t\t***Welcome to the Grading Program***\n\n";

	Grades student;
	student.scores();
	cout << "\n\t_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@\n";
	student.quiz();
	student.quiz_two();
	student.midterm();
	student.final_exam();
	cout << "\n\t_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@\n";
	student.grade();
	cout << "\n\t_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@_/@\n";

return 0;
}

void Grades::scores() {
	
	quiz_score = 0;
	quiz_two_score = 0;
	midterm_score = 0;
	final_exam_score = 0;
	int error = 0;
	
	cout << "Enter the points for Quiz One: ";
	cin >> quiz_score;
	if(quiz_score > 10) 
		{ cout << "\t***Invalid score. Please try again.***\n"; error = 1; }
	
	cout << "Enter the points for Quiz Two: ";
	cin >> quiz_two_score;
	if(quiz_two_score > 10) 
		{ cout << "\t***Invalid score. Please try again.***\n"; error = 1; }
	
	cout << "Enter the points for the Mid-Term: ";
	cin >> midterm_score;
	if(midterm_score > 100) 
		{ cout << "\t***Invalid score. Please try again.***\n"; error = 1; }
	
	cout << "Enter the points for the Final: ";
	cin >> final_exam_score;
	if(final_exam_score > 100) 
		{ cout << "\t***Invalid score. Please try again.***\n"; error = 1; }

	if(error == 1) { scores(); }
}	

double Grades::quiz() {
	
	char quiz_grade;
	if(quiz_score == 10 || quiz_score == 9) { quiz_grade = 'A'; }
	if(quiz_score == 8 || quiz_score == 7) { quiz_grade = 'B'; }
	if(quiz_score == 6 || quiz_score == 5) { quiz_grade = 'C'; }
	if(quiz_score == 4 || quiz_score == 3) { quiz_grade = 'D'; }
	if(quiz_score <= 2) { quiz_grade = 'F'; }
	cout << "\n\tQuiz 1 grade is:\t" << quiz_grade;
	cout << "\tQuiz 1 points:\t\t" << quiz_score << '\n';
	return quiz_score;
}

double Grades::quiz_two() {
	
	char quiz_grade;
	if(quiz_two_score == 10 || quiz_two_score == 9) { quiz_grade = 'A'; }
	if(quiz_two_score == 8 || quiz_two_score == 7) { quiz_grade = 'B'; }
	if(quiz_two_score == 6 || quiz_two_score == 5) { quiz_grade = 'C'; }
	if(quiz_two_score == 4 || quiz_two_score == 3) { quiz_grade = 'D'; }
	if(quiz_two_score <= 2) { quiz_grade = 'F'; }
	cout << "\n\tQuiz 2 grade is:\t" << quiz_grade;
	cout << "\tQuiz 2 points:\t\t" << quiz_score << '\n';
	return quiz_two_score;
}

double Grades::midterm() {
	
	char midterm_grade;
	if(midterm_score <= 100 && midterm_score >= 90) { midterm_grade = 'A'; }
	if(midterm_score <= 89 && midterm_score >= 80) { midterm_grade = 'B'; }
	if(midterm_score <= 79 && midterm_score >= 70) { midterm_grade = 'C'; }
	if(midterm_score <= 69 && midterm_score >= 60) { midterm_grade = 'D'; }
	if(midterm_score <= 59) { midterm_score = 'F'; }
	cout << "\n\tMid-term grade is:\t" << midterm_grade;
	cout << "\tMid-term points:\t" << midterm_score << '\n';
	return midterm_score;
}

double Grades::final_exam() {
	
	char final_grade;
	if(final_exam_score <= 100 && final_exam_score >= 90) { final_grade = 'A'; }
	if(final_exam_score <= 89 && final_exam_score >= 80) { final_grade = 'B'; }
	if(final_exam_score <= 79 && final_exam_score >= 70) { final_grade = 'C'; }
	if(final_exam_score <= 69 && final_exam_score >= 60) { final_grade = 'D'; }
	if(final_exam_score <= 59) { final_exam_score = 'F'; }
	cout << "\n\tFinal grade is:\t\t" << final_grade;
	cout << "\tFinal points:\t\t" << final_exam_score << '\n';
	return final_exam_score;
}

double Grades::grade() {
	
	double total_points = ((quiz_score + quiz_two_score) + midterm_score +final_exam_score);
	cout << "\n\t\t\t\t\tTotal Points:\t" << total_points << "/220";
	
	average_score = (((quiz_score + quiz_two_score)*1.25) + (midterm_score*.25) +
	(final_exam_score*.5));
	if(average_score <= 100 && average_score >= 90) { total_grade = 'A'; }
	if(average_score <= 89 && average_score >= 80) { total_grade = 'B'; }
	if(average_score <= 79 && average_score >= 70) { total_grade = 'C'; }
	if(average_score <= 69 && average_score >= 60) { total_grade = 'D'; }
	if(average_score <= 59) { average_score = 'F'; }
	cout << "\n\tTotal grade is:\t\t" << total_grade << '\t';
	cout << "Average:\t %" << average_score << '\n';
}