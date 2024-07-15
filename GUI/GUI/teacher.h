#pragma once
#include <msclr/marshal_cppstd.h>
#include "Data.h"
#include "teacher_profile.h"
#include <fstream>


namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for teacher
	/// </summary>
	public ref class teacher : public System::Windows::Forms::Form
	{

		int Ques_index = -1;
		bool check;
		int Exam_NUM = 0;
		int index;
	private:
		int user;
		TextBox^ ans1_textBox;
		TextBox^ ans2_textBox;
		TextBox^ ans3_textBox;
		TextBox^ ques_textBox;
		TextBox^ correct_ans;

	private: System::Windows::Forms::TextBox^ exam_name;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ Create;
	private: System::Windows::Forms::FlowLayoutPanel^ Exams_page;

	private: System::Windows::Forms::Label^ Exams_label;
	private: System::Windows::Forms::Label^ Your_Exams;
	private: System::Windows::Forms::FlowLayoutPanel^ open_exams;
	private: System::Windows::Forms::Label^ Timer;
	private: System::Windows::Forms::Button^ back;
	private: System::Windows::Forms::Label^ pass_password;






	public:

		Form^ login_again;
		teacher(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			ans1_textBox = gcnew TextBox();
			ans2_textBox = gcnew TextBox();
			ans3_textBox = gcnew TextBox();
			ques_textBox = gcnew TextBox();
		}
		teacher(Form^ teacher_page, String^ username, String^ password)
		{
			InitializeComponent();
			login_again = teacher_page;
			teacher_name->Text = username;
			pass_password->Text = password;
			//
			//TODO: Add the constructor code here
			//
		}
		teacher(int user)
		{
			InitializeComponent();
			this->user = user;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~teacher()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ Name_grade;


	private: System::Windows::Forms::Label^ Grade;
	private: System::Windows::Forms::Panel^ status_panel;

	private: System::Windows::Forms::Button^ edit;


	private: System::Windows::Forms::Button^ del;
	private: System::Windows::Forms::Button^ add_question;





	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;



	private: System::Windows::Forms::Panel^ one_question;
	private: System::Windows::Forms::Label^ c;
	private: System::Windows::Forms::Label^ b;
	private: System::Windows::Forms::Label^ a;
	private: System::Windows::Forms::Label^ num;
	private: System::Windows::Forms::TextBox^ ans3;
	private: System::Windows::Forms::TextBox^ ans2;
	private: System::Windows::Forms::TextBox^ ans1;
	private: System::Windows::Forms::TextBox^ Write;
	private: System::Windows::Forms::Button^ save;
	private: System::Windows::Forms::Panel^ del_panel;

	private: System::Windows::Forms::Label^ del_label;
	private: System::Windows::Forms::TextBox^ del_textBox;
	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ minutes;

	private: System::Windows::Forms::TextBox^ hours;
	private: System::Windows::Forms::TextBox^ seconds;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ display;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel_ques;





	private: System::Windows::Forms::Panel^ pn_nav_bar;
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ Home;
	private: System::Windows::Forms::Button^ Question_Bank;
	private: System::Windows::Forms::Button^ Create_New_Test;







	private: System::Windows::Forms::Panel^ panel_container;
	private: System::Windows::Forms::Button^ logout;
	private: System::Windows::Forms::Button^ Existing_test;
	private: System::Windows::Forms::Button^ View_button;


	private: System::Windows::Forms::Button^ collapse;
	private: System::Windows::Forms::Panel^ info;
	private: System::Windows::Forms::PictureBox^ profile_photo;
	private: System::Windows::Forms::Label^ teacher_name;

	private: System::Windows::Forms::Label^ teacher_label;
	private: System::Windows::Forms::Panel^ Home_page;
	private: System::Windows::Forms::Panel^ Grades_page;

	private: System::Windows::Forms::Panel^ New_Exam_Page;
	private: System::Windows::Forms::Panel^ QB_page;
	private: System::ComponentModel::IContainer^ components;



	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(teacher::typeid));
			this->pn_nav_bar = (gcnew System::Windows::Forms::Panel());
			this->collapse = (gcnew System::Windows::Forms::Button());
			this->info = (gcnew System::Windows::Forms::Panel());
			this->profile_photo = (gcnew System::Windows::Forms::PictureBox());
			this->teacher_label = (gcnew System::Windows::Forms::Label());
			this->teacher_name = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Home = (gcnew System::Windows::Forms::Button());
			this->Question_Bank = (gcnew System::Windows::Forms::Button());
			this->Create_New_Test = (gcnew System::Windows::Forms::Button());
			this->Existing_test = (gcnew System::Windows::Forms::Button());
			this->View_button = (gcnew System::Windows::Forms::Button());
			this->panel_container = (gcnew System::Windows::Forms::Panel());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->QB_page = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->one_question = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->c = (gcnew System::Windows::Forms::Label());
			this->b = (gcnew System::Windows::Forms::Label());
			this->a = (gcnew System::Windows::Forms::Label());
			this->num = (gcnew System::Windows::Forms::Label());
			this->ans3 = (gcnew System::Windows::Forms::TextBox());
			this->ans2 = (gcnew System::Windows::Forms::TextBox());
			this->ans1 = (gcnew System::Windows::Forms::TextBox());
			this->Write = (gcnew System::Windows::Forms::TextBox());
			this->save = (gcnew System::Windows::Forms::Button());
			this->del_panel = (gcnew System::Windows::Forms::Panel());
			this->del_label = (gcnew System::Windows::Forms::Label());
			this->del_textBox = (gcnew System::Windows::Forms::TextBox());
			this->status_panel = (gcnew System::Windows::Forms::Panel());
			this->del = (gcnew System::Windows::Forms::Button());
			this->add_question = (gcnew System::Windows::Forms::Button());
			this->edit = (gcnew System::Windows::Forms::Button());
			this->New_Exam_Page = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel_ques = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Create = (gcnew System::Windows::Forms::Button());
			this->display = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->exam_name = (gcnew System::Windows::Forms::TextBox());
			this->seconds = (gcnew System::Windows::Forms::TextBox());
			this->minutes = (gcnew System::Windows::Forms::TextBox());
			this->hours = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->open_exams = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Timer = (gcnew System::Windows::Forms::Label());
			this->Exams_page = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Your_Exams = (gcnew System::Windows::Forms::Label());
			this->Exams_label = (gcnew System::Windows::Forms::Label());
			this->Grades_page = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Grade = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Name_grade = (gcnew System::Windows::Forms::Label());
			this->Home_page = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pass_password = (gcnew System::Windows::Forms::Label());
			this->pn_nav_bar->SuspendLayout();
			this->info->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile_photo))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel_container->SuspendLayout();
			this->QB_page->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->one_question->SuspendLayout();
			this->del_panel->SuspendLayout();
			this->status_panel->SuspendLayout();
			this->New_Exam_Page->SuspendLayout();
			this->flowLayoutPanel_ques->SuspendLayout();
			this->open_exams->SuspendLayout();
			this->Exams_page->SuspendLayout();
			this->Grades_page->SuspendLayout();
			this->Home_page->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pn_nav_bar
			// 
			this->pn_nav_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_nav_bar->Controls->Add(this->collapse);
			this->pn_nav_bar->Controls->Add(this->info);
			this->pn_nav_bar->Controls->Add(this->flowLayoutPanel1);
			this->pn_nav_bar->Dock = System::Windows::Forms::DockStyle::Left;
			this->pn_nav_bar->Location = System::Drawing::Point(0, 0);
			this->pn_nav_bar->Name = L"pn_nav_bar";
			this->pn_nav_bar->Size = System::Drawing::Size(260, 580);
			this->pn_nav_bar->TabIndex = 1;
			// 
			// collapse
			// 
			this->collapse->FlatAppearance->BorderSize = 0;
			this->collapse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->collapse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"collapse.Image")));
			this->collapse->Location = System::Drawing::Point(-1, 0);
			this->collapse->Name = L"collapse";
			this->collapse->Size = System::Drawing::Size(49, 39);
			this->collapse->TabIndex = 4;
			this->collapse->UseVisualStyleBackColor = true;
			this->collapse->Click += gcnew System::EventHandler(this, &teacher::collapse_Click);
			// 
			// info
			// 
			this->info->Controls->Add(this->profile_photo);
			this->info->Controls->Add(this->teacher_label);
			this->info->Controls->Add(this->teacher_name);
			this->info->Location = System::Drawing::Point(3, 34);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(292, 251);
			this->info->TabIndex = 5;
			// 
			// profile_photo
			// 
			this->profile_photo->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->profile_photo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile_photo.Image")));
			this->profile_photo->Location = System::Drawing::Point(0, 30);
			this->profile_photo->Name = L"profile_photo";
			this->profile_photo->Size = System::Drawing::Size(254, 171);
			this->profile_photo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->profile_photo->TabIndex = 0;
			this->profile_photo->TabStop = false;
			// 
			// teacher_label
			// 
			this->teacher_label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->teacher_label->BackColor = System::Drawing::Color::Transparent;
			this->teacher_label->Font = (gcnew System::Drawing::Font(L"MJ Gheir", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->teacher_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->teacher_label->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->teacher_label->Location = System::Drawing::Point(0, 0);
			this->teacher_label->Name = L"teacher_label";
			this->teacher_label->Size = System::Drawing::Size(257, 35);
			this->teacher_label->TabIndex = 1;
			this->teacher_label->Text = L"Teacher";
			this->teacher_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// teacher_name
			// 
			this->teacher_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->teacher_name->BackColor = System::Drawing::Color::Transparent;
			this->teacher_name->Cursor = System::Windows::Forms::Cursors::Hand;
			this->teacher_name->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teacher_name->ForeColor = System::Drawing::Color::Crimson;
			this->teacher_name->Location = System::Drawing::Point(0, 197);
			this->teacher_name->Margin = System::Windows::Forms::Padding(5);
			this->teacher_name->Name = L"teacher_name";
			this->teacher_name->Size = System::Drawing::Size(257, 52);
			this->teacher_name->TabIndex = 2;
			this->teacher_name->Text = L"Gehad Ibrahim";
			this->teacher_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->teacher_name->Click += gcnew System::EventHandler(this, &teacher::teacher_name_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->Home);
			this->flowLayoutPanel1->Controls->Add(this->Question_Bank);
			this->flowLayoutPanel1->Controls->Add(this->Create_New_Test);
			this->flowLayoutPanel1->Controls->Add(this->Existing_test);
			this->flowLayoutPanel1->Controls->Add(this->View_button);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 288);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(260, 292);
			this->flowLayoutPanel1->TabIndex = 3;
			// 
			// Home
			// 
			this->Home->FlatAppearance->BorderSize = 0;
			this->Home->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Home->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Home->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Home->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Home.Image")));
			this->Home->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Home->Location = System::Drawing::Point(3, 5);
			this->Home->Margin = System::Windows::Forms::Padding(3, 5, 3, 3);
			this->Home->Name = L"Home";
			this->Home->Size = System::Drawing::Size(257, 50);
			this->Home->TabIndex = 0;
			this->Home->Text = L"Home";
			this->Home->Click += gcnew System::EventHandler(this, &teacher::Home_Click);
			// 
			// Question_Bank
			// 
			this->Question_Bank->FlatAppearance->BorderSize = 0;
			this->Question_Bank->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Question_Bank->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Question_Bank->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Question_Bank->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Question_Bank.Image")));
			this->Question_Bank->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Question_Bank->Location = System::Drawing::Point(3, 63);
			this->Question_Bank->Margin = System::Windows::Forms::Padding(3, 5, 3, 3);
			this->Question_Bank->Name = L"Question_Bank";
			this->Question_Bank->Size = System::Drawing::Size(257, 50);
			this->Question_Bank->TabIndex = 0;
			this->Question_Bank->Text = L"     Question Bank";
			this->Question_Bank->Click += gcnew System::EventHandler(this, &teacher::Question_Bank_Click);
			// 
			// Create_New_Test
			// 
			this->Create_New_Test->FlatAppearance->BorderSize = 0;
			this->Create_New_Test->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Create_New_Test->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Create_New_Test->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Create_New_Test->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Create_New_Test.Image")));
			this->Create_New_Test->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Create_New_Test->Location = System::Drawing::Point(3, 121);
			this->Create_New_Test->Margin = System::Windows::Forms::Padding(3, 5, 3, 3);
			this->Create_New_Test->Name = L"Create_New_Test";
			this->Create_New_Test->Size = System::Drawing::Size(257, 50);
			this->Create_New_Test->TabIndex = 0;
			this->Create_New_Test->Text = L"Create New Exam";
			this->Create_New_Test->Click += gcnew System::EventHandler(this, &teacher::Create_New_Test_Click);
			// 
			// Existing_test
			// 
			this->Existing_test->FlatAppearance->BorderSize = 0;
			this->Existing_test->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Existing_test->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Existing_test->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Existing_test->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Existing_test.Image")));
			this->Existing_test->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Existing_test->Location = System::Drawing::Point(3, 179);
			this->Existing_test->Margin = System::Windows::Forms::Padding(3, 5, 3, 3);
			this->Existing_test->Name = L"Existing_test";
			this->Existing_test->Size = System::Drawing::Size(257, 50);
			this->Existing_test->TabIndex = 0;
			this->Existing_test->Text = L"Exams";
			this->Existing_test->Click += gcnew System::EventHandler(this, &teacher::Existing_test_Click);
			// 
			// View_button
			// 
			this->View_button->FlatAppearance->BorderSize = 0;
			this->View_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->View_button->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->View_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->View_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"View_button.Image")));
			this->View_button->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->View_button->Location = System::Drawing::Point(3, 237);
			this->View_button->Margin = System::Windows::Forms::Padding(3, 5, 3, 3);
			this->View_button->Name = L"View_button";
			this->View_button->Size = System::Drawing::Size(257, 50);
			this->View_button->TabIndex = 0;
			this->View_button->Text = L"Students Grades";
			this->View_button->Click += gcnew System::EventHandler(this, &teacher::View_button_Click);
			// 
			// panel_container
			// 
			this->panel_container->Controls->Add(this->logout);
			this->panel_container->Controls->Add(this->back);
			this->panel_container->Controls->Add(this->QB_page);
			this->panel_container->Controls->Add(this->New_Exam_Page);
			this->panel_container->Controls->Add(this->open_exams);
			this->panel_container->Controls->Add(this->Exams_page);
			this->panel_container->Controls->Add(this->Grades_page);
			this->panel_container->Controls->Add(this->Home_page);
			this->panel_container->Controls->Add(this->pass_password);
			this->panel_container->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_container->Location = System::Drawing::Point(260, 0);
			this->panel_container->Name = L"panel_container";
			this->panel_container->Size = System::Drawing::Size(650, 580);
			this->panel_container->TabIndex = 2;
			// 
			// logout
			// 
			this->logout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->logout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logout.BackgroundImage")));
			this->logout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logout->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->logout->FlatAppearance->BorderSize = 0;
			this->logout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->logout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout->Location = System::Drawing::Point(583, 23);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(47, 50);
			this->logout->TabIndex = 1;
			this->logout->UseVisualStyleBackColor = false;
			this->logout->Click += gcnew System::EventHandler(this, &teacher::logout_Click);
			// 
			// back
			// 
			this->back->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->back->BackColor = System::Drawing::Color::Transparent;
			this->back->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"back.BackgroundImage")));
			this->back->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->back->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->back->FlatAppearance->BorderSize = 0;
			this->back->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->back->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->back->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back->Location = System::Drawing::Point(583, 510);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(47, 50);
			this->back->TabIndex = 2;
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &teacher::back_Click);
			// 
			// QB_page
			// 
			this->QB_page->Controls->Add(this->flowLayoutPanel2);
			this->QB_page->Controls->Add(this->status_panel);
			this->QB_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->QB_page->Location = System::Drawing::Point(0, 0);
			this->QB_page->Name = L"QB_page";
			this->QB_page->Size = System::Drawing::Size(650, 580);
			this->QB_page->TabIndex = 3;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->Controls->Add(this->one_question);
			this->flowLayoutPanel2->Controls->Add(this->save);
			this->flowLayoutPanel2->Controls->Add(this->del_panel);
			this->flowLayoutPanel2->Cursor = System::Windows::Forms::Cursors::Default;
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(650, 510);
			this->flowLayoutPanel2->TabIndex = 4;
			// 
			// one_question
			// 
			this->one_question->Controls->Add(this->textBox1);
			this->one_question->Controls->Add(this->label5);
			this->one_question->Controls->Add(this->c);
			this->one_question->Controls->Add(this->b);
			this->one_question->Controls->Add(this->a);
			this->one_question->Controls->Add(this->num);
			this->one_question->Controls->Add(this->ans3);
			this->one_question->Controls->Add(this->ans2);
			this->one_question->Controls->Add(this->ans1);
			this->one_question->Controls->Add(this->Write);
			this->one_question->Location = System::Drawing::Point(3, 3);
			this->one_question->Name = L"one_question";
			this->one_question->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->one_question->Size = System::Drawing::Size(644, 184);
			this->one_question->TabIndex = 3;
			this->one_question->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(324, 148);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(37, 30);
			this->textBox1->TabIndex = 25;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"MJ Gheir", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label5->ForeColor = System::Drawing::Color::Green;
			this->label5->Location = System::Drawing::Point(2, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(315, 30);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Enter the Correct Answer: ";
			this->label5->Visible = false;
			// 
			// c
			// 
			this->c->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->c->BackColor = System::Drawing::Color::Transparent;
			this->c->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->c->ForeColor = System::Drawing::Color::White;
			this->c->Location = System::Drawing::Point(441, 73);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(45, 39);
			this->c->TabIndex = 23;
			this->c->Text = L"c.";
			this->c->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// b
			// 
			this->b->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->b->BackColor = System::Drawing::Color::Transparent;
			this->b->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b->ForeColor = System::Drawing::Color::White;
			this->b->Location = System::Drawing::Point(233, 73);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(45, 39);
			this->b->TabIndex = 12;
			this->b->Text = L"b.";
			this->b->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// a
			// 
			this->a->BackColor = System::Drawing::Color::Transparent;
			this->a->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->a->ForeColor = System::Drawing::Color::White;
			this->a->Location = System::Drawing::Point(30, 73);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(45, 39);
			this->a->TabIndex = 10;
			this->a->Text = L"a.";
			this->a->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// num
			// 
			this->num->BackColor = System::Drawing::Color::Transparent;
			this->num->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num->ForeColor = System::Drawing::Color::White;
			this->num->Location = System::Drawing::Point(5, 10);
			this->num->Name = L"num";
			this->num->Size = System::Drawing::Size(45, 39);
			this->num->TabIndex = 9;
			this->num->Text = L"1.";
			this->num->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ans3
			// 
			this->ans3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->ans3->BackColor = System::Drawing::Color::Black;
			this->ans3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ans3->ForeColor = System::Drawing::Color::White;
			this->ans3->Location = System::Drawing::Point(476, 79);
			this->ans3->Name = L"ans3";
			this->ans3->Size = System::Drawing::Size(155, 32);
			this->ans3->TabIndex = 5;
			// 
			// ans2
			// 
			this->ans2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ans2->BackColor = System::Drawing::Color::Black;
			this->ans2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ans2->ForeColor = System::Drawing::Color::White;
			this->ans2->Location = System::Drawing::Point(267, 79);
			this->ans2->Name = L"ans2";
			this->ans2->Size = System::Drawing::Size(155, 32);
			this->ans2->TabIndex = 5;
			// 
			// ans1
			// 
			this->ans1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->ans1->BackColor = System::Drawing::Color::Black;
			this->ans1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ans1->ForeColor = System::Drawing::Color::White;
			this->ans1->Location = System::Drawing::Point(63, 80);
			this->ans1->Name = L"ans1";
			this->ans1->Size = System::Drawing::Size(155, 32);
			this->ans1->TabIndex = 5;
			// 
			// Write
			// 
			this->Write->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->Write->BackColor = System::Drawing::Color::Black;
			this->Write->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Write->ForeColor = System::Drawing::Color::White;
			this->Write->Location = System::Drawing::Point(38, 20);
			this->Write->Name = L"Write";
			this->Write->Size = System::Drawing::Size(543, 32);
			this->Write->TabIndex = 5;
			// 
			// save
			// 
			this->save->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->save->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->save->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Green;
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save->ForeColor = System::Drawing::Color::White;
			this->save->Location = System::Drawing::Point(3, 193);
			this->save->Name = L"save";
			this->save->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->save->Size = System::Drawing::Size(125, 45);
			this->save->TabIndex = 5;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = true;
			this->save->Visible = false;
			this->save->Click += gcnew System::EventHandler(this, &teacher::save_Click);
			// 
			// del_panel
			// 
			this->del_panel->Controls->Add(this->del_label);
			this->del_panel->Controls->Add(this->del_textBox);
			this->del_panel->Location = System::Drawing::Point(3, 244);
			this->del_panel->Name = L"del_panel";
			this->del_panel->Size = System::Drawing::Size(627, 67);
			this->del_panel->TabIndex = 6;
			this->del_panel->Visible = false;
			// 
			// del_label
			// 
			this->del_label->AutoSize = true;
			this->del_label->Font = (gcnew System::Drawing::Font(L"MJ Gheir", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->del_label->ForeColor = System::Drawing::Color::Red;
			this->del_label->Location = System::Drawing::Point(2, 19);
			this->del_label->Name = L"del_label";
			this->del_label->Size = System::Drawing::Size(574, 30);
			this->del_label->TabIndex = 10;
			this->del_label->Text = L"Enter the number of Question you want to delete: ";
			// 
			// del_textBox
			// 
			this->del_textBox->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->del_textBox->Location = System::Drawing::Point(577, 15);
			this->del_textBox->Name = L"del_textBox";
			this->del_textBox->Size = System::Drawing::Size(47, 39);
			this->del_textBox->TabIndex = 11;
			this->del_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// status_panel
			// 
			this->status_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(70)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->status_panel->Controls->Add(this->del);
			this->status_panel->Controls->Add(this->add_question);
			this->status_panel->Controls->Add(this->edit);
			this->status_panel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->status_panel->Location = System::Drawing::Point(0, 510);
			this->status_panel->Name = L"status_panel";
			this->status_panel->Size = System::Drawing::Size(650, 70);
			this->status_panel->TabIndex = 2;
			// 
			// del
			// 
			this->del->FlatAppearance->BorderSize = 0;
			this->del->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->del->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del.Image")));
			this->del->Location = System::Drawing::Point(505, 0);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(71, 75);
			this->del->TabIndex = 3;
			this->del->UseVisualStyleBackColor = true;
			this->del->Click += gcnew System::EventHandler(this, &teacher::del_Click);
			// 
			// add_question
			// 
			this->add_question->FlatAppearance->BorderSize = 0;
			this->add_question->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_question->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"add_question.Image")));
			this->add_question->Location = System::Drawing::Point(79, 0);
			this->add_question->Name = L"add_question";
			this->add_question->Size = System::Drawing::Size(71, 75);
			this->add_question->TabIndex = 1;
			this->add_question->UseVisualStyleBackColor = true;
			this->add_question->Click += gcnew System::EventHandler(this, &teacher::add_question_Click);
			// 
			// edit
			// 
			this->edit->FlatAppearance->BorderSize = 0;
			this->edit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edit.Image")));
			this->edit->Location = System::Drawing::Point(292, 0);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(71, 75);
			this->edit->TabIndex = 2;
			this->edit->UseVisualStyleBackColor = true;
			this->edit->Click += gcnew System::EventHandler(this, &teacher::edit_Click);
			// 
			// New_Exam_Page
			// 
			this->New_Exam_Page->Controls->Add(this->flowLayoutPanel_ques);
			this->New_Exam_Page->Controls->Add(this->display);
			this->New_Exam_Page->Controls->Add(this->label3);
			this->New_Exam_Page->Controls->Add(this->label2);
			this->New_Exam_Page->Controls->Add(this->exam_name);
			this->New_Exam_Page->Controls->Add(this->seconds);
			this->New_Exam_Page->Controls->Add(this->minutes);
			this->New_Exam_Page->Controls->Add(this->hours);
			this->New_Exam_Page->Controls->Add(this->label4);
			this->New_Exam_Page->Controls->Add(this->label6);
			this->New_Exam_Page->Controls->Add(this->label1);
			this->New_Exam_Page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->New_Exam_Page->Location = System::Drawing::Point(0, 0);
			this->New_Exam_Page->Name = L"New_Exam_Page";
			this->New_Exam_Page->Size = System::Drawing::Size(650, 580);
			this->New_Exam_Page->TabIndex = 3;
			// 
			// flowLayoutPanel_ques
			// 
			this->flowLayoutPanel_ques->AutoScroll = true;
			this->flowLayoutPanel_ques->Controls->Add(this->Create);
			this->flowLayoutPanel_ques->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->flowLayoutPanel_ques->Location = System::Drawing::Point(0, 349);
			this->flowLayoutPanel_ques->Name = L"flowLayoutPanel_ques";
			this->flowLayoutPanel_ques->Size = System::Drawing::Size(650, 231);
			this->flowLayoutPanel_ques->TabIndex = 5;
			// 
			// Create
			// 
			this->Create->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Create->BackColor = System::Drawing::Color::Green;
			this->Create->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Create->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Green;
			this->Create->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Create->ForeColor = System::Drawing::Color::White;
			this->Create->Location = System::Drawing::Point(3, 3);
			this->Create->Name = L"Create";
			this->Create->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Create->Size = System::Drawing::Size(125, 45);
			this->Create->TabIndex = 6;
			this->Create->Text = L"Create";
			this->Create->UseVisualStyleBackColor = false;
			this->Create->Click += gcnew System::EventHandler(this, &teacher::Create_Click);
			// 
			// display
			// 
			this->display->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->display->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Goldenrod;
			this->display->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MistyRose;
			this->display->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->display->ForeColor = System::Drawing::Color::Red;
			this->display->Location = System::Drawing::Point(391, 283);
			this->display->Name = L"display";
			this->display->Size = System::Drawing::Size(247, 59);
			this->display->TabIndex = 4;
			this->display->Text = L"View Questions";
			this->display->UseVisualStyleBackColor = true;
			this->display->Click += gcnew System::EventHandler(this, &teacher::display_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(172, 203);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 63);
			this->label3->TabIndex = 3;
			this->label3->Text = L":";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(77, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 63);
			this->label2->TabIndex = 3;
			this->label2->Text = L":";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// exam_name
			// 
			this->exam_name->BackColor = System::Drawing::Color::Black;
			this->exam_name->Font = (gcnew System::Drawing::Font(L"Noor", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->exam_name->ForeColor = System::Drawing::Color::White;
			this->exam_name->Location = System::Drawing::Point(13, 61);
			this->exam_name->Name = L"exam_name";
			this->exam_name->Size = System::Drawing::Size(514, 41);
			this->exam_name->TabIndex = 2;
			this->exam_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// seconds
			// 
			this->seconds->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seconds->Location = System::Drawing::Point(215, 216);
			this->seconds->Name = L"seconds";
			this->seconds->Size = System::Drawing::Size(46, 37);
			this->seconds->TabIndex = 2;
			this->seconds->Text = L"00";
			this->seconds->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// minutes
			// 
			this->minutes->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14));
			this->minutes->Location = System::Drawing::Point(120, 216);
			this->minutes->Name = L"minutes";
			this->minutes->Size = System::Drawing::Size(46, 37);
			this->minutes->TabIndex = 2;
			this->minutes->Text = L"00";
			this->minutes->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// hours
			// 
			this->hours->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14));
			this->hours->Location = System::Drawing::Point(25, 216);
			this->hours->Name = L"hours";
			this->hours->Size = System::Drawing::Size(46, 37);
			this->hours->TabIndex = 2;
			this->hours->Text = L"00";
			this->hours->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"NSimSun", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(6, 288);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(377, 40);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Set Exam Questions";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"NSimSun", 20));
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(3, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(277, 40);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Set Exam Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"NSimSun", 20));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(6, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Set Exam Time";
			// 
			// open_exams
			// 
			this->open_exams->Controls->Add(this->Timer);
			this->open_exams->Location = System::Drawing::Point(0, 0);
			this->open_exams->Name = L"open_exams";
			this->open_exams->Size = System::Drawing::Size(650, 580);
			this->open_exams->TabIndex = 8;
			// 
			// Timer
			// 
			this->Timer->ForeColor = System::Drawing::Color::Red;
			this->Timer->Location = System::Drawing::Point(3, 0);
			this->Timer->Name = L"Timer";
			this->Timer->Size = System::Drawing::Size(641, 79);
			this->Timer->TabIndex = 0;
			this->Timer->Text = L"Timer";
			this->Timer->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Exams_page
			// 
			this->Exams_page->Controls->Add(this->Your_Exams);
			this->Exams_page->Controls->Add(this->Exams_label);
			this->Exams_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Exams_page->Location = System::Drawing::Point(0, 0);
			this->Exams_page->Name = L"Exams_page";
			this->Exams_page->Size = System::Drawing::Size(650, 580);
			this->Exams_page->TabIndex = 7;
			// 
			// Your_Exams
			// 
			this->Your_Exams->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Your_Exams->ForeColor = System::Drawing::Color::Tomato;
			this->Your_Exams->Location = System::Drawing::Point(3, 0);
			this->Your_Exams->Name = L"Your_Exams";
			this->Your_Exams->Size = System::Drawing::Size(644, 98);
			this->Your_Exams->TabIndex = 8;
			this->Your_Exams->Text = L"Your Exams";
			this->Your_Exams->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Your_Exams->Visible = false;
			// 
			// Exams_label
			// 
			this->Exams_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->Exams_label->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exams_label->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Exams_label->Location = System::Drawing::Point(3, 98);
			this->Exams_label->Name = L"Exams_label";
			this->Exams_label->Size = System::Drawing::Size(641, 630);
			this->Exams_label->TabIndex = 5;
			this->Exams_label->Text = L"There is no Exams yet\r\nGo and Create one First";
			this->Exams_label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Grades_page
			// 
			this->Grades_page->Controls->Add(this->label8);
			this->Grades_page->Controls->Add(this->Grade);
			this->Grades_page->Controls->Add(this->label7);
			this->Grades_page->Controls->Add(this->Name_grade);
			this->Grades_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Grades_page->Location = System::Drawing::Point(0, 0);
			this->Grades_page->Name = L"Grades_page";
			this->Grades_page->Size = System::Drawing::Size(650, 580);
			this->Grades_page->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"SimSun", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(427, 147);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(77, 40);
			this->label8->TabIndex = 1;
			this->label8->Text = L"3/3";
			// 
			// Grade
			// 
			this->Grade->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Grade->AutoSize = true;
			this->Grade->Font = (gcnew System::Drawing::Font(L"SimSun", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grade->ForeColor = System::Drawing::Color::Yellow;
			this->Grade->Location = System::Drawing::Point(410, 34);
			this->Grade->Name = L"Grade";
			this->Grade->Size = System::Drawing::Size(117, 40);
			this->Grade->TabIndex = 1;
			this->Grade->Text = L"Grade";
			// 
			// label7
			// 
			this->label7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"SimSun", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(132, 141);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(77, 40);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Aya";
			// 
			// Name_grade
			// 
			this->Name_grade->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Name_grade->AutoSize = true;
			this->Name_grade->Font = (gcnew System::Drawing::Font(L"SimSun", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name_grade->ForeColor = System::Drawing::Color::Yellow;
			this->Name_grade->Location = System::Drawing::Point(124, 34);
			this->Name_grade->Name = L"Name_grade";
			this->Name_grade->Size = System::Drawing::Size(97, 40);
			this->Name_grade->TabIndex = 0;
			this->Name_grade->Text = L"Name";
			// 
			// Home_page
			// 
			this->Home_page->Controls->Add(this->pictureBox1);
			this->Home_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Home_page->Location = System::Drawing::Point(0, 0);
			this->Home_page->Name = L"Home_page";
			this->Home_page->Size = System::Drawing::Size(650, 580);
			this->Home_page->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-372, -165);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1164, 745);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pass_password
			// 
			this->pass_password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pass_password->BackColor = System::Drawing::Color::Transparent;
			this->pass_password->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pass_password->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass_password->ForeColor = System::Drawing::Color::Crimson;
			this->pass_password->Location = System::Drawing::Point(322, 160);
			this->pass_password->Margin = System::Windows::Forms::Padding(5);
			this->pass_password->Name = L"pass_password";
			this->pass_password->Size = System::Drawing::Size(257, 52);
			this->pass_password->TabIndex = 2;
			this->pass_password->Text = L"Gehad Ibrahim";
			this->pass_password->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->pass_password->Visible = false;
			this->pass_password->Click += gcnew System::EventHandler(this, &teacher::teacher_name_Click);
			// 
			// teacher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 32);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(910, 580);
			this->Controls->Add(this->panel_container);
			this->Controls->Add(this->pn_nav_bar);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"teacher";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"teacher";
			this->pn_nav_bar->ResumeLayout(false);
			this->info->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile_photo))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel_container->ResumeLayout(false);
			this->QB_page->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->one_question->ResumeLayout(false);
			this->one_question->PerformLayout();
			this->del_panel->ResumeLayout(false);
			this->del_panel->PerformLayout();
			this->status_panel->ResumeLayout(false);
			this->New_Exam_Page->ResumeLayout(false);
			this->New_Exam_Page->PerformLayout();
			this->flowLayoutPanel_ques->ResumeLayout(false);
			this->open_exams->ResumeLayout(false);
			this->Exams_page->ResumeLayout(false);
			this->Grades_page->ResumeLayout(false);
			this->Grades_page->PerformLayout();
			this->Home_page->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}





#pragma endregion


		/////////// Moving between pages ///////////

	private: System::Void logout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide(); //hide teacher page
		login_again->Show();  // open login form
	}
	private: System::Void collapse_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pn_nav_bar->Width == 260)
		{
			pn_nav_bar->Width = 55;
			info->Visible = false;
		}
		else
		{
			pn_nav_bar->Width = 260;
			info->Visible = true;
		}
	}
	private: System::Void Home_Click(System::Object^ sender, System::EventArgs^ e) {
		Home_page->BringToFront();
		logout->BringToFront();
	}
	private: System::Void Question_Bank_Click(System::Object^ sender, System::EventArgs^ e) {
		QB_page->BringToFront();
		logout->BringToFront();
	}
	private: System::Void Create_New_Test_Click(System::Object^ sender, System::EventArgs^ e) {
		New_Exam_Page->BringToFront();
		logout->BringToFront();
	}
	private: System::Void Existing_test_Click(System::Object^ sender, System::EventArgs^ e) {
		Exams_page->BringToFront();
		logout->BringToFront();
	}
	private: System::Void View_button_Click(System::Object^ sender, System::EventArgs^ e) {
		Grades_page->BringToFront();
		logout->BringToFront();
	}








	  /////////// Question bank ///////////

	private: System::Void add_question_Click(System::Object^ sender, System::EventArgs^ e) {
		{
			Panel^ question = gcnew Panel();
			question->Size = Drawing::Size(644, 184);
			question->BackColor = System::Drawing::Color::Black;

			ques_textBox = gcnew TextBox();
			ques_textBox->Location = Drawing::Point(35, 15);
			ques_textBox->ForeColor = Drawing::Color::White;
			ques_textBox->BackColor = Drawing::Color::Black;
			ques_textBox->Width = 540;
			ques_textBox->Height = 32;
			ques_textBox->BorderStyle = BorderStyle::None;

			// Attach event handler for text change
			ques_textBox->TextChanged += gcnew System::EventHandler(this, &teacher::ques_textBox_TextChanged);
			question->Controls->Add(ques_textBox);

			Label^ num = gcnew Label();
			num->Location = Drawing::Point(5, 10);
			num->Size = Drawing::Size(45, 39);
			num->Text = (flowLayoutPanel2->Controls->Count - 2).ToString() + ".";
			num->ForeColor = Drawing::Color::White;
			num->BackColor = Drawing::Color::Transparent;
			num->TextAlign = Drawing::ContentAlignment::MiddleLeft;

			question->Controls->Add(num);


			Label^ a = gcnew Label();
			a->Location = Drawing::Point(24, 70);
			a->Size = Drawing::Size(45, 39);
			a->Text = "a.";
			a->ForeColor = Drawing::Color::White;
			a->BackColor = Drawing::Color::Transparent;
			a->TextAlign = Drawing::ContentAlignment::MiddleLeft;


			question->Controls->Add(a);

			Label^ b = gcnew Label();
			b->Location = Drawing::Point(227, 70);
			b->Size = Drawing::Size(45, 39);
			b->Text = "b.";
			b->ForeColor = Drawing::Color::White;
			b->BackColor = Drawing::Color::Transparent;
			b->TextAlign = Drawing::ContentAlignment::MiddleLeft;

			question->Controls->Add(b);

			Label^ c = gcnew Label();
			c->Location = Drawing::Point(435, 70);
			c->Size = Drawing::Size(45, 39);
			c->Text = "c.";
			c->ForeColor = Drawing::Color::White;
			c->BackColor = Drawing::Color::Transparent;
			c->TextAlign = Drawing::ContentAlignment::MiddleLeft;

			question->Controls->Add(c);

			ans1_textBox = gcnew TextBox();
			ans1_textBox->Location = Drawing::Point(69, 70);
			ans1_textBox->Size = Drawing::Size(155, 33);
			ans1_textBox->ForeColor = Drawing::Color::White;
			ans1_textBox->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.0f);
			ans1_textBox->BackColor = Drawing::Color::Black;
			ans1_textBox->BorderStyle = BorderStyle::None;

			ans1_textBox->TextChanged += gcnew System::EventHandler(this, &teacher::ans1_textBox_TextChanged);
			question->Controls->Add(ans1_textBox);


			ans2_textBox = gcnew TextBox();
			ans2_textBox->Location = Drawing::Point(273, 70);
			ans2_textBox->Size = Drawing::Size(155, 32);
			ans2_textBox->ForeColor = Drawing::Color::White;
			ans2_textBox->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.0f);
			ans2_textBox->BackColor = Drawing::Color::Black;
			ans2_textBox->BorderStyle = BorderStyle::None;

			ans2_textBox->TextChanged += gcnew System::EventHandler(this, &teacher::ans2_textBox_TextChanged);
			question->Controls->Add(ans2_textBox);


			ans3_textBox = gcnew TextBox();
			ans3_textBox->Location = Drawing::Point(482, 70);
			ans3_textBox->Size = Drawing::Size(155, 32);
			ans3_textBox->ForeColor = Drawing::Color::White;
			ans3_textBox->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.0f);
			ans3_textBox->BackColor = Drawing::Color::Black;
			ans3_textBox->BorderStyle = BorderStyle::None;

			ans3_textBox->TextChanged += gcnew System::EventHandler(this, &teacher::ans3_textBox_TextChanged);
			question->Controls->Add(ans3_textBox);


			Label^ Correct_ans = gcnew Label();
			Correct_ans->Location = Drawing::Point(2, 147);
			Correct_ans->Size = Drawing::Size(315, 30);
			Correct_ans->Text = "Enter the Correct Answer: ";
			Correct_ans->ForeColor = Drawing::Color::Green;
			Correct_ans->BackColor = Drawing::Color::Transparent;
			Correct_ans->TextAlign = Drawing::ContentAlignment::MiddleLeft;

			question->Controls->Add(Correct_ans);


			correct_ans = gcnew TextBox();
			correct_ans->Location = Drawing::Point(324, 148);
			correct_ans->Size = Drawing::Size(37, 30);
			correct_ans->Font = gcnew System::Drawing::Font("Microsoft Sans Serif", 12.0f);

			correct_ans->TextChanged += gcnew System::EventHandler(this, &teacher::correct_ans_TextChanged);
			question->Controls->Add(correct_ans);


			// add the new question to the panel
			flowLayoutPanel2->Controls->Add(question);

			save->Visible = true;
			flowLayoutPanel2->Controls->Add(save);
			flowLayoutPanel2->Controls->Add(del_panel);
			del_panel->Visible = false;


			add_question->Enabled = false;

			Ques_index += 1;
		}
	}

		   void CheckAnswerTextBoxes() {
			   // Check if any of the answer text boxes are empty
			   bool anyEmpty = String::IsNullOrWhiteSpace(ans1_textBox->Text) ||
				   String::IsNullOrWhiteSpace(ans2_textBox->Text) ||
				   String::IsNullOrWhiteSpace(ans3_textBox->Text) ||
				   String::IsNullOrWhiteSpace(ques_textBox->Text) ||
				   String::IsNullOrWhiteSpace(correct_ans->Text);

			   // Enable/disable the "Add" button based on whether any answer text box is empty
			   add_question->Enabled = !anyEmpty;
		   }

		   // Enable/disable the "Add Question" button based on whether the question & ans text boxes are empty
	private: System::Void ques_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		CheckAnswerTextBoxes();

		String^ enteredquestion = ques_textBox->Text;
		std::string Entered_Question = msclr::interop::marshal_as<std::string>(enteredquestion);

		//save question inside the array
		teachers[user].ques_bank.Question[Ques_index][0] = Entered_Question;

		if (Ques_index == NUM_OF_QUESTIONS) {
			add_question->Enabled = false;
			MessageBox::Show("You have reached the max number of question", "Couldn't add more", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void ans1_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		CheckAnswerTextBoxes();

		String^ enteredans1 = ans1_textBox->Text;
		std::string Entered_Ans1 = msclr::interop::marshal_as<std::string>(enteredans1);

		//save ans1 inside the array
		teachers[user].ques_bank.Question[Ques_index][1] = Entered_Ans1;
	}
	private: System::Void ans2_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		CheckAnswerTextBoxes();

		String^ enteredans2 = ans2_textBox->Text;
		std::string Entered_Ans2 = msclr::interop::marshal_as<std::string>(enteredans2);

		//save ans2 inside the array
		teachers[user].ques_bank.Question[Ques_index][2] = Entered_Ans2;
	}
	private: System::Void ans3_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		CheckAnswerTextBoxes();

		String^ enteredans3 = ans3_textBox->Text;
		std::string Entered_Ans3 = msclr::interop::marshal_as<std::string>(enteredans3);

		//save ans3 inside the array
		teachers[user].ques_bank.Question[Ques_index][3] = Entered_Ans3;
	}
	private: System::Void correct_ans_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		CheckAnswerTextBoxes();

		String^ enteredans = ans3_textBox->Text;
		std::string Entered_Ans = msclr::interop::marshal_as<std::string>(enteredans);

		//save correct ans inside the array
		teachers[user].ques_bank.Correct_ans[Ques_index] = Entered_Ans;
	}


	private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {
		for each (Control ^ control in flowLayoutPanel2->Controls)
		{
			// Check if the control is a Panel
			if (Panel^ question = dynamic_cast<Panel^>(control))
			{
				// Disable the question panel
				question->Enabled = false;
			}
		}

		std::ifstream inFile("questions_bank.txt");
		if (!inFile.is_open()) {
			MessageBox::Show("Unable to open file to read questions.");
			return;
		}

		std::string question = msclr::interop::marshal_as<std::string>(ques_textBox->Text);
		std::string option1 = msclr::interop::marshal_as<std::string>(ans1_textBox->Text);
		std::string option2 = msclr::interop::marshal_as<std::string>(ans2_textBox->Text);
		std::string option3 = msclr::interop::marshal_as<std::string>(ans3_textBox->Text);
		std::string correctAnswer = msclr::interop::marshal_as<std::string>(correct_ans->Text);

		bool found = false;
		std::vector<std::string> questions;
		std::string line;
		while (std::getline(inFile, line)) {
			if (line == question) {
				// Skip next 4 lines (options and correct answer)
				for (int i = 0; i < 4; ++i) std::getline(inFile, line);
				questions.push_back(question);
				questions.push_back(option1);
				questions.push_back(option2);
				questions.push_back(option3);
				questions.push_back(correctAnswer);
				found = true;
			}
			else {
				questions.push_back(line);
			}
		}
		inFile.close();

		if (!found) {
			questions.push_back(question);
			questions.push_back(option1);
			questions.push_back(option2);
			questions.push_back(option3);
			questions.push_back(correctAnswer);
		}

		std::ofstream outFile("questions_bank.txt", std::ios::trunc);
		if (!outFile.is_open()) {
			MessageBox::Show("Unable to open file to save questions.");
			return;
		}

		for (const auto& q : questions) {
			outFile << q << "\n";
		}

		outFile.close();
		MessageBox::Show("Questions saved successfully.");
	}
	private: System::Void edit_Click(System::Object^ sender, System::EventArgs^ e) {
		for each (Control ^ control in flowLayoutPanel2->Controls)
		{
			// Check if the control is a Panel
			if (Panel^ question = dynamic_cast<Panel^>(control))
			{
				// Disable the question panel
				question->Enabled = true;
			}
		}
	}
	private: System::Void del_Click(System::Object^ sender, System::EventArgs^ e) {

		del_panel->Visible = true;

		// Convert input from del_textBox to an integer
		//Int32::TryParse: This is a method provided by the Int32 class in .NET. It attempts to convert a string representation of a number to its 32-bit signed integer equivalent.
		int indexToDelete;
		if (!Int32::TryParse(del_textBox->Text, indexToDelete))
		{
			return;
		}

		// Check if the index is within the range of flowLayoutPanel2->Controls
		if (indexToDelete >= 0 && indexToDelete < flowLayoutPanel2->Controls->Count - 1)
		{
			// Get the question panel at the specified index
			Panel^ questionPanel = dynamic_cast<Panel^>(flowLayoutPanel2->Controls[indexToDelete]);

			flowLayoutPanel2->Controls->Remove(questionPanel);
			del_textBox->Clear();

		}
		// I was Trying to Renumber the remaining questions..
/*  for (int i = indexToDelete; i < flowLayoutPanel2->Controls->Count - 2; i++)
	{
		Label^ num = dynamic_cast<Label^>(flowLayoutPanel2->Controls[i]->Controls["num"]);
		num->Text = (i + 1).ToString() + ".";
	}
*/

	}






		   /////////// Create New Exam ///////////

	private: System::Void display_Click(System::Object^ sender, System::EventArgs^ e) {

		flowLayoutPanel_ques->Controls->Clear(); //to prevent repeating questions each time I click view

		for (int i = 0; i < NUM_OF_QUESTIONS; i++)
		{
			std::string stdQuestion = teachers[user].ques_bank.Question[i][0]; //save only questions

			if (!stdQuestion.empty())
			{
				// Create a CheckBox for the non-empty question
				CheckBox^ ques_checkbox = gcnew CheckBox();
				ques_checkbox->Text = gcnew String(stdQuestion.c_str());
				ques_checkbox->ForeColor = Drawing::Color::White;
				ques_checkbox->BackColor = Drawing::Color::Black;
				ques_checkbox->AutoSize = true;

				// Add event handler for CheckBox CheckedChanged event
				ques_checkbox->CheckedChanged += gcnew System::EventHandler(this, &teacher::CheckBox_CheckedChanged);

				// Add the CheckBox to the flowLayoutPanel_ques
				flowLayoutPanel_ques->Controls->Add(ques_checkbox);
				// Set the Tag property to the index of the question panel
				ques_checkbox->Tag = index;
				flowLayoutPanel_ques->Controls->Add(Create);
			}
		}

		// Set the flow direction to top-down
		flowLayoutPanel_ques->FlowDirection = FlowDirection::TopDown;
	}

    // Event handler for CheckBox CheckedChanged event
	private: System::Void CheckBox_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		CheckBox^ checkBox = safe_cast<CheckBox^>(sender);
		int index = flowLayoutPanel_ques->Controls->IndexOf(checkBox);

		if (checkBox->Checked)
		{
			check = true;
		}
		else
		{
			check = false;
		}
	}

    // Function to clear the checked state from all checkboxes
	private: void ClearCheckBoxes() {
		// Iterate through all controls in the flowLayoutPanel_ques
		for each (Control ^ control in flowLayoutPanel_ques->Controls) {
			// Check if the control is a checkbox
			if (CheckBox^ checkBox = dynamic_cast<CheckBox^>(control)) {
				// If it's a checkbox, clear its checked state
				checkBox->Checked = false;
			}
		}
	}


	private: System::Void Create_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(exam_name->Text))
		{
			MessageBox::Show("Exam Name is Empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (hours->Text->Equals("00") && minutes->Text->Equals("00") && seconds->Text->Equals("00"))
		{
			MessageBox::Show("You have not Set the Timer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (check == false)
		{
			MessageBox::Show("You have not Choosen any Questions!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
		{
			Exams_label->Visible = false;
			Your_Exams->Visible = true;

			// Create a new link label
			LinkLabel^ newLinkLabel = gcnew LinkLabel();
			newLinkLabel->Text = exam_name->Text;
			newLinkLabel->Size = Drawing::Size(697, 51);
			newLinkLabel->LinkColor = Drawing::Color::DodgerBlue;
			newLinkLabel->ActiveLinkColor = Drawing::Color::Firebrick;
			newLinkLabel->Font = gcnew::System::Drawing::Font("Microsoft Sans Serif", 22.0f);
			newLinkLabel->Visible = true;

			// Create a label for time
			Label^ timeLabel = gcnew Label();
			timeLabel->Text = "00:00:00"; // Set initial text
			timeLabel->Location = Point(10, 10); // Set location within the panel

			// Handle the Click event for the newLinkLabel
			newLinkLabel->Click += gcnew System::EventHandler(this, &teacher::OpenExamPanel);
			Timer->Text = "Timer: " + hours->Text + ":" + minutes->Text + ":" + seconds->Text;

			Exams_page->Controls->Add(newLinkLabel);

			//clear exam name
			exam_name->Text = ""; 

			//clear exam timer
			hours->Text = "00";
			minutes->Text = "00";
			seconds->Text = "00";

			//clear CheckBoxes
			ClearCheckBoxes();
		}


	}


	private: System::Void OpenExamPanel(System::Object^ sender, System::EventArgs^ e) {
	
		open_exams->BringToFront();
		back->BringToFront();
	}

private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {
	if (open_exams->Visible)
	{
		Exams_page->BringToFront();
		logout->BringToFront();
	}
}

private: System::Void teacher_name_Click(System::Object^ sender, System::EventArgs^ e) {
	teacher_profile^ profile = gcnew teacher_profile(teacher_name->Text, pass_password->Text);   //open profile , pass name
	profile->ShowDialog();
}
};
}
