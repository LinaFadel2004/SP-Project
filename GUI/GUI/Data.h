#pragma once

#include<string>

//constants 
#define NUM_OF_TEACH 2
#define NUM_OF_STUD 2
#define NUM_OF_SUB 2
#define NUM_OF_EXAM 5
#define NUM_OF_QUESTIONS 6
#define NUM_OF_OPTIONS 4

struct TIME
{
	int hours, min, sec;
};
struct EXAM
{
	std::string exam_name;
	TIME time = { 0,0,0 };
	int grade;
	std::string examText[NUM_OF_QUESTIONS][NUM_OF_OPTIONS];
	short examAnswer[NUM_OF_QUESTIONS];
};
struct Subjects
{
	std::string course_code;
	std::string course_name;
	EXAM test[NUM_OF_EXAM];
};
struct Question_Bank
{
	std::string Question[NUM_OF_QUESTIONS][NUM_OF_OPTIONS] = {};   //maximum 6 question/
	std::string Correct_ans[NUM_OF_QUESTIONS];                // 3 option & 1 for the entered question
};

struct Teacher
{
	std::string Username, correctpassword;
	Subjects course;              //course[0] for teach[0],course[1] for teach[1]       
	Question_Bank ques_bank;
};


struct Student
{
	std::string Username, correctpassword;
	int ID_student;
	//std::Subjects course[NUM_OF_SUB];   //student will choose  course[] -> exam for this sub
};

extern Student stud[NUM_OF_STUD];

extern Teacher teachers[NUM_OF_TEACH];

extern Subjects Course;

extern int user;