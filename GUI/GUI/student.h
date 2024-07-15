#pragma once
#include "student_profile.h"
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for student
	/// </summary>
	public ref class student : public System::Windows::Forms::Form
	{
		int remainingSeconds = -1;
		int page;
	private: System::Windows::Forms::LinkLabel^ linkLabel_exam1;
	private: System::Windows::Forms::FlowLayoutPanel^ Exam1;
	private: System::Windows::Forms::Panel^ one_question;
	private: System::Windows::Forms::TextBox^ Ans_1;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ c;
	private: System::Windows::Forms::Label^ b;
	private: System::Windows::Forms::Label^ a;
	private: System::Windows::Forms::Label^ num;
	private: System::Windows::Forms::TextBox^ ans3;
	private: System::Windows::Forms::TextBox^ ans2;
	private: System::Windows::Forms::TextBox^ ans1;
	private: System::Windows::Forms::TextBox^ Write;
	private: System::Windows::Forms::Button^ Submit;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ Ans_3;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ Ans_2;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ course_name;
	private: System::Windows::Forms::Label^ Grade_label;











	private: System::Windows::Forms::Panel^ top;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ sp_grade;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::FlowLayoutPanel^ Left;
	private: System::Windows::Forms::Label^ label;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Panel^ sp_grades;
	private: System::Windows::Forms::Label^ Spp_grade;
	private: System::Windows::Forms::Panel^ Physics_grades;

	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Panel^ calc_grades;

	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Panel^ Electro_grades;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ Time;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ pass_password;







	public:
		Form^ login_again;

		student(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		student(Form^ st_page, String^ username, String^ password)
		{
			InitializeComponent();
			login_again = st_page;
			std_name->Text = username;
			pass_password->Text = password;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~student()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ pn_nav_bar;
	private: System::Windows::Forms::Panel^ panel_container;

	private: System::Windows::Forms::Button^ logout;
	private: System::Windows::Forms::Label^ student_label;

	private: System::Windows::Forms::PictureBox^ profile_photo;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ info;

	private: System::Windows::Forms::Button^ Home;
	private: System::Windows::Forms::Button^ Exam;
	private: System::Windows::Forms::Button^ Grades;





	private: System::Windows::Forms::Label^ std_name;
	private: System::Windows::Forms::Panel^ Home_page;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ Exam_page;
	private: System::Windows::Forms::Panel^ Grades_page;
	private: System::Windows::Forms::Button^ collapse;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ physics;

	private: System::Windows::Forms::Button^ Calc;
	private: System::Windows::Forms::Button^ SP;
private: System::Windows::Forms::Button^ Electro;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ Sp_Page;
	private: System::Windows::Forms::Panel^ Calculus_Page;
private: System::Windows::Forms::Panel^ Electro_Page;

	private: System::Windows::Forms::Panel^ Physics_Page;
	private: System::Windows::Forms::Button^ back;


	private: System::Windows::Forms::Label^ his_ex;
	private: System::Windows::Forms::Label^ sp_ex;
	private: System::Windows::Forms::Panel^ all_grades_pn;
	private: System::Windows::Forms::Panel^ Courses_grades;
private: System::ComponentModel::IContainer^ components;











	protected:



	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(student::typeid));
			this->pn_nav_bar = (gcnew System::Windows::Forms::Panel());
			this->collapse = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->Home = (gcnew System::Windows::Forms::Button());
			this->Exam = (gcnew System::Windows::Forms::Button());
			this->Grades = (gcnew System::Windows::Forms::Button());
			this->info = (gcnew System::Windows::Forms::Panel());
			this->profile_photo = (gcnew System::Windows::Forms::PictureBox());
			this->std_name = (gcnew System::Windows::Forms::Label());
			this->student_label = (gcnew System::Windows::Forms::Label());
			this->panel_container = (gcnew System::Windows::Forms::Panel());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->Home_page = (gcnew System::Windows::Forms::Panel());
			this->pass_password = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Exam1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->one_question = (gcnew System::Windows::Forms::Panel());
			this->Ans_1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->c = (gcnew System::Windows::Forms::Label());
			this->b = (gcnew System::Windows::Forms::Label());
			this->a = (gcnew System::Windows::Forms::Label());
			this->num = (gcnew System::Windows::Forms::Label());
			this->ans3 = (gcnew System::Windows::Forms::TextBox());
			this->ans2 = (gcnew System::Windows::Forms::TextBox());
			this->ans1 = (gcnew System::Windows::Forms::TextBox());
			this->Write = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Ans_2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Ans_3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->Submit = (gcnew System::Windows::Forms::Button());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->Exam_page = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Electro = (gcnew System::Windows::Forms::Button());
			this->SP = (gcnew System::Windows::Forms::Button());
			this->Calc = (gcnew System::Windows::Forms::Button());
			this->physics = (gcnew System::Windows::Forms::Button());
			this->Grades_page = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->back = (gcnew System::Windows::Forms::Button());
			this->Sp_Page = (gcnew System::Windows::Forms::Panel());
			this->linkLabel_exam1 = (gcnew System::Windows::Forms::LinkLabel());
			this->sp_ex = (gcnew System::Windows::Forms::Label());
			this->Electro_Page = (gcnew System::Windows::Forms::Panel());
			this->his_ex = (gcnew System::Windows::Forms::Label());
			this->Calculus_Page = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->Physics_Page = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->all_grades_pn = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->sp_grade = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->Left = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->label = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->top = (gcnew System::Windows::Forms::Panel());
			this->Grade_label = (gcnew System::Windows::Forms::Label());
			this->course_name = (gcnew System::Windows::Forms::Label());
			this->Courses_grades = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->Physics_grades = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->Electro_grades = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->calc_grades = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->sp_grades = (gcnew System::Windows::Forms::Panel());
			this->Spp_grade = (gcnew System::Windows::Forms::Label());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->pn_nav_bar->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->info->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile_photo))->BeginInit();
			this->panel_container->SuspendLayout();
			this->Home_page->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->Exam1->SuspendLayout();
			this->one_question->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->Exam_page->SuspendLayout();
			this->Grades_page->SuspendLayout();
			this->Sp_Page->SuspendLayout();
			this->Electro_Page->SuspendLayout();
			this->Calculus_Page->SuspendLayout();
			this->Physics_Page->SuspendLayout();
			this->all_grades_pn->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->Left->SuspendLayout();
			this->top->SuspendLayout();
			this->Courses_grades->SuspendLayout();
			this->Physics_grades->SuspendLayout();
			this->Electro_grades->SuspendLayout();
			this->calc_grades->SuspendLayout();
			this->sp_grades->SuspendLayout();
			this->SuspendLayout();
			// 
			// pn_nav_bar
			// 
			this->pn_nav_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pn_nav_bar->Controls->Add(this->collapse);
			this->pn_nav_bar->Controls->Add(this->flowLayoutPanel1);
			this->pn_nav_bar->Controls->Add(this->info);
			this->pn_nav_bar->Dock = System::Windows::Forms::DockStyle::Left;
			this->pn_nav_bar->Location = System::Drawing::Point(0, 0);
			this->pn_nav_bar->Name = L"pn_nav_bar";
			this->pn_nav_bar->Size = System::Drawing::Size(210, 580);
			this->pn_nav_bar->TabIndex = 0;
			// 
			// collapse
			// 
			this->collapse->FlatAppearance->BorderSize = 0;
			this->collapse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->collapse->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"collapse.Image")));
			this->collapse->Location = System::Drawing::Point(-3, -1);
			this->collapse->Name = L"collapse";
			this->collapse->Size = System::Drawing::Size(49, 39);
			this->collapse->TabIndex = 3;
			this->collapse->UseVisualStyleBackColor = true;
			this->collapse->Click += gcnew System::EventHandler(this, &student::collapse_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->Home);
			this->flowLayoutPanel1->Controls->Add(this->Exam);
			this->flowLayoutPanel1->Controls->Add(this->Grades);
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 296);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(211, 284);
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
			this->Home->Location = System::Drawing::Point(3, 10);
			this->Home->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->Home->Name = L"Home";
			this->Home->Size = System::Drawing::Size(208, 53);
			this->Home->TabIndex = 0;
			this->Home->Text = L"Home";
			this->Home->Click += gcnew System::EventHandler(this, &student::Home_Click);
			// 
			// Exam
			// 
			this->Exam->FlatAppearance->BorderSize = 0;
			this->Exam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exam->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exam->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Exam->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Exam.Image")));
			this->Exam->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Exam->Location = System::Drawing::Point(3, 76);
			this->Exam->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->Exam->Name = L"Exam";
			this->Exam->Size = System::Drawing::Size(208, 53);
			this->Exam->TabIndex = 0;
			this->Exam->Text = L"Exams";
			this->Exam->Click += gcnew System::EventHandler(this, &student::Exam_Click);
			// 
			// Grades
			// 
			this->Grades->FlatAppearance->BorderSize = 0;
			this->Grades->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Grades->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grades->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->Grades->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Grades.Image")));
			this->Grades->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Grades->Location = System::Drawing::Point(3, 142);
			this->Grades->Margin = System::Windows::Forms::Padding(3, 10, 3, 3);
			this->Grades->Name = L"Grades";
			this->Grades->Size = System::Drawing::Size(208, 53);
			this->Grades->TabIndex = 0;
			this->Grades->Text = L"Grades";
			this->Grades->Click += gcnew System::EventHandler(this, &student::Grades_Click);
			// 
			// info
			// 
			this->info->Controls->Add(this->profile_photo);
			this->info->Controls->Add(this->std_name);
			this->info->Controls->Add(this->student_label);
			this->info->Location = System::Drawing::Point(0, 41);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(210, 252);
			this->info->TabIndex = 2;
			// 
			// profile_photo
			// 
			this->profile_photo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"profile_photo.Image")));
			this->profile_photo->Location = System::Drawing::Point(0, 30);
			this->profile_photo->Name = L"profile_photo";
			this->profile_photo->Size = System::Drawing::Size(211, 172);
			this->profile_photo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->profile_photo->TabIndex = 0;
			this->profile_photo->TabStop = false;
			// 
			// std_name
			// 
			this->std_name->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->std_name->BackColor = System::Drawing::Color::Transparent;
			this->std_name->Cursor = System::Windows::Forms::Cursors::Hand;
			this->std_name->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->std_name->ForeColor = System::Drawing::Color::Crimson;
			this->std_name->Location = System::Drawing::Point(0, 201);
			this->std_name->Margin = System::Windows::Forms::Padding(5);
			this->std_name->Name = L"std_name";
			this->std_name->Size = System::Drawing::Size(211, 51);
			this->std_name->TabIndex = 2;
			this->std_name->Text = L"Lina Fadel";
			this->std_name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->std_name->Click += gcnew System::EventHandler(this, &student::std_name_Click);
			// 
			// student_label
			// 
			this->student_label->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->student_label->BackColor = System::Drawing::Color::Transparent;
			this->student_label->Font = (gcnew System::Drawing::Font(L"MJ Gheir", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->student_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->student_label->Location = System::Drawing::Point(0, -5);
			this->student_label->Name = L"student_label";
			this->student_label->Size = System::Drawing::Size(211, 35);
			this->student_label->TabIndex = 1;
			this->student_label->Text = L"Student";
			this->student_label->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// panel_container
			// 
			this->panel_container->Controls->Add(this->logout);
			this->panel_container->Controls->Add(this->Home_page);
			this->panel_container->Controls->Add(this->Exam1);
			this->panel_container->Controls->Add(this->Exam_page);
			this->panel_container->Controls->Add(this->Grades_page);
			this->panel_container->Controls->Add(this->back);
			this->panel_container->Controls->Add(this->Sp_Page);
			this->panel_container->Controls->Add(this->Electro_Page);
			this->panel_container->Controls->Add(this->Calculus_Page);
			this->panel_container->Controls->Add(this->Physics_Page);
			this->panel_container->Controls->Add(this->all_grades_pn);
			this->panel_container->Controls->Add(this->Courses_grades);
			this->panel_container->Controls->Add(this->Physics_grades);
			this->panel_container->Controls->Add(this->Electro_grades);
			this->panel_container->Controls->Add(this->calc_grades);
			this->panel_container->Controls->Add(this->sp_grades);
			this->panel_container->Controls->Add(this->pass_password);
			this->panel_container->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_container->Location = System::Drawing::Point(210, 0);
			this->panel_container->Name = L"panel_container";
			this->panel_container->Size = System::Drawing::Size(700, 580);
			this->panel_container->TabIndex = 1;
			this->panel_container->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &student::panel_container_MouseDown);
			this->panel_container->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &student::panel_container_MouseMove);
			this->panel_container->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &student::panel_container_MouseUp);
			// 
			// logout
			// 
			this->logout->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->logout->BackColor = System::Drawing::Color::Transparent;
			this->logout->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"logout.BackgroundImage")));
			this->logout->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logout->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->logout->FlatAppearance->BorderSize = 0;
			this->logout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->logout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DimGray;
			this->logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout->Location = System::Drawing::Point(641, 518);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(47, 50);
			this->logout->TabIndex = 1;
			this->logout->UseVisualStyleBackColor = false;
			this->logout->Click += gcnew System::EventHandler(this, &student::button1_Click);
			// 
			// Home_page
			// 
			this->Home_page->Controls->Add(this->pictureBox1);
			this->Home_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Home_page->Location = System::Drawing::Point(0, 0);
			this->Home_page->Name = L"Home_page";
			this->Home_page->Size = System::Drawing::Size(700, 580);
			this->Home_page->TabIndex = 2;
			// 
			// pass_password
			// 
			this->pass_password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pass_password->BackColor = System::Drawing::Color::Transparent;
			this->pass_password->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pass_password->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass_password->ForeColor = System::Drawing::Color::Crimson;
			this->pass_password->Location = System::Drawing::Point(0, 0);
			this->pass_password->Margin = System::Windows::Forms::Padding(5);
			this->pass_password->Name = L"pass_password";
			this->pass_password->Size = System::Drawing::Size(211, 51);
			this->pass_password->TabIndex = 14;
			this->pass_password->Text = L"Lina Fadel";
			this->pass_password->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->pass_password->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-837, -359);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(2312, 1372);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// Exam1
			// 
			this->Exam1->AutoScroll = true;
			this->Exam1->Controls->Add(this->one_question);
			this->Exam1->Controls->Add(this->panel2);
			this->Exam1->Controls->Add(this->panel1);
			this->Exam1->Controls->Add(this->Submit);
			this->Exam1->Controls->Add(this->Time);
			this->Exam1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Exam1->Location = System::Drawing::Point(0, 0);
			this->Exam1->Name = L"Exam1";
			this->Exam1->Size = System::Drawing::Size(700, 580);
			this->Exam1->TabIndex = 3;
			// 
			// one_question
			// 
			this->one_question->Controls->Add(this->Ans_1);
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
			this->one_question->Size = System::Drawing::Size(696, 184);
			this->one_question->TabIndex = 6;
			// 
			// Ans_1
			// 
			this->Ans_1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Ans_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ans_1->Location = System::Drawing::Point(324, 148);
			this->Ans_1->Name = L"Ans_1";
			this->Ans_1->Size = System::Drawing::Size(37, 30);
			this->Ans_1->TabIndex = 25;
			this->Ans_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			// 
			// c
			// 
			this->c->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->c->BackColor = System::Drawing::Color::Transparent;
			this->c->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->c->ForeColor = System::Drawing::Color::White;
			this->c->Location = System::Drawing::Point(493, 73);
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
			this->b->Location = System::Drawing::Point(259, 73);
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
			this->ans3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans3->ForeColor = System::Drawing::Color::White;
			this->ans3->Location = System::Drawing::Point(544, 79);
			this->ans3->Name = L"ans3";
			this->ans3->ReadOnly = true;
			this->ans3->Size = System::Drawing::Size(139, 30);
			this->ans3->TabIndex = 5;
			this->ans3->Text = L"float";
			// 
			// ans2
			// 
			this->ans2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->ans2->BackColor = System::Drawing::Color::Black;
			this->ans2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ans2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans2->ForeColor = System::Drawing::Color::White;
			this->ans2->Location = System::Drawing::Point(310, 79);
			this->ans2->Name = L"ans2";
			this->ans2->ReadOnly = true;
			this->ans2->Size = System::Drawing::Size(155, 30);
			this->ans2->TabIndex = 5;
			this->ans2->Text = L"number";
			// 
			// ans1
			// 
			this->ans1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->ans1->BackColor = System::Drawing::Color::Black;
			this->ans1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ans1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ans1->ForeColor = System::Drawing::Color::White;
			this->ans1->Location = System::Drawing::Point(81, 80);
			this->ans1->Name = L"ans1";
			this->ans1->ReadOnly = true;
			this->ans1->Size = System::Drawing::Size(155, 30);
			this->ans1->TabIndex = 5;
			this->ans1->Text = L"int";
			// 
			// Write
			// 
			this->Write->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->Write->BackColor = System::Drawing::Color::Black;
			this->Write->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Write->Font = (gcnew System::Drawing::Font(L"Sitka Display", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Write->ForeColor = System::Drawing::Color::White;
			this->Write->Location = System::Drawing::Point(48, 13);
			this->Write->Name = L"Write";
			this->Write->ReadOnly = true;
			this->Write->Size = System::Drawing::Size(634, 36);
			this->Write->TabIndex = 5;
			this->Write->Text = L"Which of the following is not a valid data type in C++\?";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Ans_2);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->textBox10);
			this->panel2->Controls->Add(this->textBox11);
			this->panel2->Location = System::Drawing::Point(3, 193);
			this->panel2->Name = L"panel2";
			this->panel2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->panel2->Size = System::Drawing::Size(713, 184);
			this->panel2->TabIndex = 27;
			// 
			// Ans_2
			// 
			this->Ans_2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Ans_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ans_2->Location = System::Drawing::Point(324, 148);
			this->Ans_2->Name = L"Ans_2";
			this->Ans_2->Size = System::Drawing::Size(37, 30);
			this->Ans_2->TabIndex = 25;
			this->Ans_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"MJ Gheir", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label8->ForeColor = System::Drawing::Color::Green;
			this->label8->Location = System::Drawing::Point(2, 147);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(315, 30);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Enter the Correct Answer: ";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(510, 73);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(45, 39);
			this->label9->TabIndex = 23;
			this->label9->Text = L"c.";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(267, 73);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(45, 39);
			this->label10->TabIndex = 12;
			this->label10->Text = L"b.";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(30, 73);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 39);
			this->label11->TabIndex = 10;
			this->label11->Text = L"a.";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(5, 10);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(45, 39);
			this->label12->TabIndex = 9;
			this->label12->Text = L"2.";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox8
			// 
			this->textBox8->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox8->BackColor = System::Drawing::Color::Black;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(561, 79);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(139, 30);
			this->textBox8->TabIndex = 5;
			this->textBox8->Text = L"for";
			// 
			// textBox9
			// 
			this->textBox9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox9->BackColor = System::Drawing::Color::Black;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(318, 79);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(155, 30);
			this->textBox9->TabIndex = 5;
			this->textBox9->Text = L"while";
			// 
			// textBox10
			// 
			this->textBox10->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox10->BackColor = System::Drawing::Color::Black;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->ForeColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(81, 80);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(155, 30);
			this->textBox10->TabIndex = 5;
			this->textBox10->Text = L"do-while";
			// 
			// textBox11
			// 
			this->textBox11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox11->BackColor = System::Drawing::Color::Black;
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Sitka Display", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(49, 6);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(665, 36);
			this->textBox11->TabIndex = 5;
			this->textBox11->Text = L"Which loop structure will execute its body at least once\?";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->Ans_3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Location = System::Drawing::Point(3, 383);
			this->panel1->Name = L"panel1";
			this->panel1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->panel1->Size = System::Drawing::Size(694, 184);
			this->panel1->TabIndex = 26;
			// 
			// Ans_3
			// 
			this->Ans_3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Ans_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ans_3->Location = System::Drawing::Point(324, 148);
			this->Ans_3->Name = L"Ans_3";
			this->Ans_3->Size = System::Drawing::Size(37, 30);
			this->Ans_3->TabIndex = 25;
			this->Ans_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MJ Gheir", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label2->ForeColor = System::Drawing::Color::Green;
			this->label2->Location = System::Drawing::Point(2, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(315, 30);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Enter the Correct Answer: ";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(491, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(45, 39);
			this->label3->TabIndex = 23;
			this->label3->Text = L"c.";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(258, 73);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 39);
			this->label4->TabIndex = 12;
			this->label4->Text = L"b.";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(30, 73);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 39);
			this->label6->TabIndex = 10;
			this->label6->Text = L"a.";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(5, 10);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 39);
			this->label7->TabIndex = 9;
			this->label7->Text = L"3.";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(542, 79);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(139, 30);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"for";
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox4->BackColor = System::Drawing::Color::Black;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(309, 79);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(155, 30);
			this->textBox4->TabIndex = 5;
			this->textBox4->Text = L"loop";
			// 
			// textBox5
			// 
			this->textBox5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(81, 80);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(155, 30);
			this->textBox5->TabIndex = 5;
			this->textBox5->Text = L"start";
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Sitka Display", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(48, 6);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(632, 36);
			this->textBox6->TabIndex = 5;
			this->textBox6->Text = L"In C++, which keyword is used to start a loop\?";
			// 
			// Submit
			// 
			this->Submit->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->Submit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gainsboro;
			this->Submit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Green;
			this->Submit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Submit->ForeColor = System::Drawing::Color::DodgerBlue;
			this->Submit->Location = System::Drawing::Point(3, 573);
			this->Submit->Name = L"Submit";
			this->Submit->Size = System::Drawing::Size(147, 50);
			this->Submit->TabIndex = 5;
			this->Submit->Text = L"Submit";
			this->Submit->UseVisualStyleBackColor = true;
			this->Submit->Click += gcnew System::EventHandler(this, &student::Submit_Click);
			// 
			// Time
			// 
			this->Time->ForeColor = System::Drawing::Color::White;
			this->Time->Location = System::Drawing::Point(156, 570);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(329, 43);
			this->Time->TabIndex = 28;
			this->Time->Text = L"Time";
			this->Time->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Exam_page
			// 
			this->Exam_page->Controls->Add(this->label1);
			this->Exam_page->Controls->Add(this->Electro);
			this->Exam_page->Controls->Add(this->SP);
			this->Exam_page->Controls->Add(this->Calc);
			this->Exam_page->Controls->Add(this->physics);
			this->Exam_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Exam_page->Location = System::Drawing::Point(0, 0);
			this->Exam_page->Name = L"Exam_page";
			this->Exam_page->Size = System::Drawing::Size(700, 580);
			this->Exam_page->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(694, 97);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Available Courses";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Electro
			// 
			this->Electro->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->Electro->FlatAppearance->BorderSize = 2;
			this->Electro->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->Electro->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->Electro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Electro->Font = (gcnew System::Drawing::Font(L"Sylfaen", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Electro->ForeColor = System::Drawing::Color::Gold;
			this->Electro->Location = System::Drawing::Point(68, 340);
			this->Electro->Name = L"Electro";
			this->Electro->Size = System::Drawing::Size(212, 67);
			this->Electro->TabIndex = 3;
			this->Electro->Text = L"Electro";
			this->Electro->UseVisualStyleBackColor = true;
			this->Electro->Click += gcnew System::EventHandler(this, &student::History_Click);
			// 
			// SP
			// 
			this->SP->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->SP->FlatAppearance->BorderSize = 2;
			this->SP->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->SP->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->SP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SP->Font = (gcnew System::Drawing::Font(L"Sylfaen", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SP->ForeColor = System::Drawing::Color::Gold;
			this->SP->Location = System::Drawing::Point(68, 174);
			this->SP->Name = L"SP";
			this->SP->Size = System::Drawing::Size(212, 67);
			this->SP->TabIndex = 1;
			this->SP->Text = L"SP";
			this->SP->UseVisualStyleBackColor = true;
			this->SP->Click += gcnew System::EventHandler(this, &student::SP_Click);
			// 
			// Calc
			// 
			this->Calc->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->Calc->FlatAppearance->BorderSize = 2;
			this->Calc->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->Calc->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->Calc->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Calc->Font = (gcnew System::Drawing::Font(L"Sylfaen", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Calc->ForeColor = System::Drawing::Color::Gold;
			this->Calc->Location = System::Drawing::Point(420, 174);
			this->Calc->Name = L"Calc";
			this->Calc->Size = System::Drawing::Size(212, 67);
			this->Calc->TabIndex = 2;
			this->Calc->Text = L"Calculus";
			this->Calc->UseVisualStyleBackColor = true;
			this->Calc->Click += gcnew System::EventHandler(this, &student::Calc_Click);
			// 
			// physics
			// 
			this->physics->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->physics->FlatAppearance->BorderSize = 2;
			this->physics->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->physics->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->physics->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->physics->Font = (gcnew System::Drawing::Font(L"Sylfaen", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->physics->ForeColor = System::Drawing::Color::Gold;
			this->physics->Location = System::Drawing::Point(420, 340);
			this->physics->Name = L"physics";
			this->physics->Size = System::Drawing::Size(212, 67);
			this->physics->TabIndex = 4;
			this->physics->Text = L"Physics";
			this->physics->UseVisualStyleBackColor = true;
			this->physics->Click += gcnew System::EventHandler(this, &student::Maths_Click);
			// 
			// Grades_page
			// 
			this->Grades_page->Controls->Add(this->button2);
			this->Grades_page->Controls->Add(this->button1);
			this->Grades_page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Grades_page->Location = System::Drawing::Point(0, 0);
			this->Grades_page->Name = L"Grades_page";
			this->Grades_page->Size = System::Drawing::Size(700, 580);
			this->Grades_page->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Yellow;
			this->button2->Location = System::Drawing::Point(45, 340);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(611, 80);
			this->button2->TabIndex = 0;
			this->button2->Text = L"View All Your Grades";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &student::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Navy;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(45, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(611, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"View Grades in a specific subject";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &student::button1_Click_1);
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
			this->back->Location = System::Drawing::Point(641, 518);
			this->back->Name = L"back";
			this->back->Size = System::Drawing::Size(47, 50);
			this->back->TabIndex = 1;
			this->back->UseVisualStyleBackColor = false;
			this->back->Click += gcnew System::EventHandler(this, &student::back_Click);
			// 
			// Sp_Page
			// 
			this->Sp_Page->Controls->Add(this->linkLabel_exam1);
			this->Sp_Page->Controls->Add(this->sp_ex);
			this->Sp_Page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Sp_Page->Location = System::Drawing::Point(0, 0);
			this->Sp_Page->Name = L"Sp_Page";
			this->Sp_Page->Size = System::Drawing::Size(700, 580);
			this->Sp_Page->TabIndex = 5;
			// 
			// linkLabel_exam1
			// 
			this->linkLabel_exam1->ActiveLinkColor = System::Drawing::Color::Firebrick;
			this->linkLabel_exam1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel_exam1->ForeColor = System::Drawing::Color::White;
			this->linkLabel_exam1->LinkColor = System::Drawing::Color::DodgerBlue;
			this->linkLabel_exam1->Location = System::Drawing::Point(0, 97);
			this->linkLabel_exam1->Name = L"linkLabel_exam1";
			this->linkLabel_exam1->Size = System::Drawing::Size(697, 51);
			this->linkLabel_exam1->TabIndex = 2;
			this->linkLabel_exam1->TabStop = true;
			this->linkLabel_exam1->Text = L"Exam 1";
			this->linkLabel_exam1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &student::linkLabel1_LinkClicked);
			// 
			// sp_ex
			// 
			this->sp_ex->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->sp_ex->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sp_ex->ForeColor = System::Drawing::Color::Tomato;
			this->sp_ex->Location = System::Drawing::Point(0, 0);
			this->sp_ex->Name = L"sp_ex";
			this->sp_ex->Size = System::Drawing::Size(700, 68);
			this->sp_ex->TabIndex = 1;
			this->sp_ex->Text = L"Time For Exam";
			this->sp_ex->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Electro_Page
			// 
			this->Electro_Page->Controls->Add(this->his_ex);
			this->Electro_Page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Electro_Page->Location = System::Drawing::Point(0, 0);
			this->Electro_Page->Name = L"Electro_Page";
			this->Electro_Page->Size = System::Drawing::Size(700, 580);
			this->Electro_Page->TabIndex = 6;
			// 
			// his_ex
			// 
			this->his_ex->Dock = System::Windows::Forms::DockStyle::Fill;
			this->his_ex->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->his_ex->ForeColor = System::Drawing::Color::DodgerBlue;
			this->his_ex->Location = System::Drawing::Point(0, 0);
			this->his_ex->Name = L"his_ex";
			this->his_ex->Size = System::Drawing::Size(700, 580);
			this->his_ex->TabIndex = 1;
			this->his_ex->Text = L"There is No Exams yet";
			this->his_ex->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Calculus_Page
			// 
			this->Calculus_Page->Controls->Add(this->label17);
			this->Calculus_Page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Calculus_Page->Location = System::Drawing::Point(0, 0);
			this->Calculus_Page->Name = L"Calculus_Page";
			this->Calculus_Page->Size = System::Drawing::Size(700, 580);
			this->Calculus_Page->TabIndex = 0;
			// 
			// label17
			// 
			this->label17->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label17->Location = System::Drawing::Point(0, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(700, 580);
			this->label17->TabIndex = 2;
			this->label17->Text = L"There is No Exams yet";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Physics_Page
			// 
			this->Physics_Page->Controls->Add(this->label14);
			this->Physics_Page->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Physics_Page->Location = System::Drawing::Point(0, 0);
			this->Physics_Page->Name = L"Physics_Page";
			this->Physics_Page->Size = System::Drawing::Size(700, 580);
			this->Physics_Page->TabIndex = 7;
			// 
			// label14
			// 
			this->label14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::DodgerBlue;
			this->label14->Location = System::Drawing::Point(0, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(700, 580);
			this->label14->TabIndex = 2;
			this->label14->Text = L"There is No Exams yet";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// all_grades_pn
			// 
			this->all_grades_pn->Controls->Add(this->flowLayoutPanel2);
			this->all_grades_pn->Controls->Add(this->Left);
			this->all_grades_pn->Controls->Add(this->top);
			this->all_grades_pn->Dock = System::Windows::Forms::DockStyle::Fill;
			this->all_grades_pn->Location = System::Drawing::Point(0, 0);
			this->all_grades_pn->Name = L"all_grades_pn";
			this->all_grades_pn->Size = System::Drawing::Size(700, 580);
			this->all_grades_pn->TabIndex = 1;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->sp_grade);
			this->flowLayoutPanel2->Controls->Add(this->label19);
			this->flowLayoutPanel2->Controls->Add(this->label20);
			this->flowLayoutPanel2->Controls->Add(this->label21);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->flowLayoutPanel2->Location = System::Drawing::Point(337, 94);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(363, 486);
			this->flowLayoutPanel2->TabIndex = 6;
			// 
			// sp_grade
			// 
			this->sp_grade->Font = (gcnew System::Drawing::Font(L"Andalus", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sp_grade->ForeColor = System::Drawing::Color::White;
			this->sp_grade->Location = System::Drawing::Point(3, 0);
			this->sp_grade->Name = L"sp_grade";
			this->sp_grade->Size = System::Drawing::Size(356, 121);
			this->sp_grade->TabIndex = 3;
			this->sp_grade->Text = L"You haven\'t answerd\r\nany exams yet!";
			this->sp_grade->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label19->Font = (gcnew System::Drawing::Font(L"Andalus", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(3, 121);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(354, 122);
			this->label19->TabIndex = 2;
			this->label19->Text = L"There\'s No Availabe Exams";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label20->Font = (gcnew System::Drawing::Font(L"Andalus", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(3, 243);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(357, 119);
			this->label20->TabIndex = 4;
			this->label20->Text = L"There\'s No Availabe Exams";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label21->Font = (gcnew System::Drawing::Font(L"Andalus", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(3, 362);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(354, 113);
			this->label21->TabIndex = 5;
			this->label21->Text = L"There\'s No Availabe Exams";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Left
			// 
			this->Left->Controls->Add(this->label);
			this->Left->Controls->Add(this->label13);
			this->Left->Controls->Add(this->label16);
			this->Left->Controls->Add(this->label15);
			this->Left->Dock = System::Windows::Forms::DockStyle::Left;
			this->Left->Location = System::Drawing::Point(0, 94);
			this->Left->Name = L"Left";
			this->Left->Size = System::Drawing::Size(331, 486);
			this->Left->TabIndex = 5;
			// 
			// label
			// 
			this->label->Font = (gcnew System::Drawing::Font(L"Andalus", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label->ForeColor = System::Drawing::Color::White;
			this->label->Location = System::Drawing::Point(3, 0);
			this->label->Name = L"label";
			this->label->Size = System::Drawing::Size(318, 121);
			this->label->TabIndex = 5;
			this->label->Text = L"SP";
			this->label->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Andalus", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(3, 121);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(318, 121);
			this->label13->TabIndex = 4;
			this->label13->Text = L"Calculus";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Andalus", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(3, 242);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(318, 121);
			this->label16->TabIndex = 2;
			this->label16->Text = L"History";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Andalus", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(3, 363);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(318, 121);
			this->label15->TabIndex = 3;
			this->label15->Text = L"Physics";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// top
			// 
			this->top->Controls->Add(this->Grade_label);
			this->top->Controls->Add(this->course_name);
			this->top->Dock = System::Windows::Forms::DockStyle::Top;
			this->top->Location = System::Drawing::Point(0, 0);
			this->top->Name = L"top";
			this->top->Size = System::Drawing::Size(700, 94);
			this->top->TabIndex = 2;
			// 
			// Grade_label
			// 
			this->Grade_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Grade_label->AutoSize = true;
			this->Grade_label->Font = (gcnew System::Drawing::Font(L"SimSun", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Grade_label->ForeColor = System::Drawing::Color::Yellow;
			this->Grade_label->Location = System::Drawing::Point(470, 28);
			this->Grade_label->Name = L"Grade_label";
			this->Grade_label->Size = System::Drawing::Size(117, 40);
			this->Grade_label->TabIndex = 1;
			this->Grade_label->Text = L"Grade";
			// 
			// course_name
			// 
			this->course_name->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->course_name->AutoSize = true;
			this->course_name->Font = (gcnew System::Drawing::Font(L"SimSun", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->course_name->ForeColor = System::Drawing::Color::Yellow;
			this->course_name->Location = System::Drawing::Point(42, 28);
			this->course_name->Name = L"course_name";
			this->course_name->Size = System::Drawing::Size(237, 40);
			this->course_name->TabIndex = 1;
			this->course_name->Text = L"Course Name";
			// 
			// Courses_grades
			// 
			this->Courses_grades->Controls->Add(this->label18);
			this->Courses_grades->Controls->Add(this->button3);
			this->Courses_grades->Controls->Add(this->button4);
			this->Courses_grades->Controls->Add(this->button5);
			this->Courses_grades->Controls->Add(this->button6);
			this->Courses_grades->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Courses_grades->Location = System::Drawing::Point(0, 0);
			this->Courses_grades->Name = L"Courses_grades";
			this->Courses_grades->Size = System::Drawing::Size(700, 580);
			this->Courses_grades->TabIndex = 0;
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label18->Location = System::Drawing::Point(2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(694, 97);
			this->label18->TabIndex = 5;
			this->label18->Text = L"Select Course to View Your Grades";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Sylfaen", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Gold;
			this->button3->Location = System::Drawing::Point(67, 340);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(212, 67);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Electro";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &student::button3_Click);
			// 
			// button4
			// 
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Sylfaen", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Gold;
			this->button4->Location = System::Drawing::Point(67, 174);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(212, 67);
			this->button4->TabIndex = 6;
			this->button4->Text = L"SP";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &student::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->button5->FlatAppearance->BorderSize = 2;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Sylfaen", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Gold;
			this->button5->Location = System::Drawing::Point(419, 174);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(212, 67);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Calculus";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &student::button5_Click);
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Gold;
			this->button6->FlatAppearance->BorderSize = 2;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Blue;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Maroon;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Sylfaen", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Gold;
			this->button6->Location = System::Drawing::Point(419, 340);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(212, 67);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Physics";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &student::button6_Click);
			// 
			// Physics_grades
			// 
			this->Physics_grades->Controls->Add(this->label23);
			this->Physics_grades->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Physics_grades->Location = System::Drawing::Point(0, 0);
			this->Physics_grades->Name = L"Physics_grades";
			this->Physics_grades->Size = System::Drawing::Size(700, 580);
			this->Physics_grades->TabIndex = 12;
			// 
			// label23
			// 
			this->label23->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label23->Font = (gcnew System::Drawing::Font(L"Andalus", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(0, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(700, 580);
			this->label23->TabIndex = 4;
			this->label23->Text = L"There\'s No Availabe Exams";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Electro_grades
			// 
			this->Electro_grades->Controls->Add(this->label24);
			this->Electro_grades->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Electro_grades->Location = System::Drawing::Point(0, 0);
			this->Electro_grades->Name = L"Electro_grades";
			this->Electro_grades->Size = System::Drawing::Size(700, 580);
			this->Electro_grades->TabIndex = 13;
			// 
			// label24
			// 
			this->label24->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label24->Font = (gcnew System::Drawing::Font(L"Andalus", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(0, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(700, 580);
			this->label24->TabIndex = 4;
			this->label24->Text = L"There\'s No Availabe Exams";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// calc_grades
			// 
			this->calc_grades->Controls->Add(this->label22);
			this->calc_grades->Dock = System::Windows::Forms::DockStyle::Fill;
			this->calc_grades->Location = System::Drawing::Point(0, 0);
			this->calc_grades->Name = L"calc_grades";
			this->calc_grades->Size = System::Drawing::Size(700, 580);
			this->calc_grades->TabIndex = 11;
			// 
			// label22
			// 
			this->label22->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label22->Font = (gcnew System::Drawing::Font(L"Andalus", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(0, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(700, 580);
			this->label22->TabIndex = 4;
			this->label22->Text = L"There\'s No Availabe Exams";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// sp_grades
			// 
			this->sp_grades->Controls->Add(this->Spp_grade);
			this->sp_grades->Dock = System::Windows::Forms::DockStyle::Fill;
			this->sp_grades->Location = System::Drawing::Point(0, 0);
			this->sp_grades->Name = L"sp_grades";
			this->sp_grades->Size = System::Drawing::Size(700, 580);
			this->sp_grades->TabIndex = 10;
			// 
			// Spp_grade
			// 
			this->Spp_grade->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Spp_grade->Font = (gcnew System::Drawing::Font(L"Andalus", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Spp_grade->ForeColor = System::Drawing::Color::White;
			this->Spp_grade->Location = System::Drawing::Point(0, 0);
			this->Spp_grade->Name = L"Spp_grade";
			this->Spp_grade->Size = System::Drawing::Size(700, 580);
			this->Spp_grade->TabIndex = 4;
			this->Spp_grade->Text = L"You haven\'t answerd\r\nany exams yet!";
			this->Spp_grade->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &student::timer_Tick);
			// 
			// student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 32);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(910, 580);
			this->Controls->Add(this->panel_container);
			this->Controls->Add(this->pn_nav_bar);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"student";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"student";
			this->pn_nav_bar->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->info->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->profile_photo))->EndInit();
			this->panel_container->ResumeLayout(false);
			this->Home_page->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->Exam1->ResumeLayout(false);
			this->one_question->ResumeLayout(false);
			this->one_question->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->Exam_page->ResumeLayout(false);
			this->Grades_page->ResumeLayout(false);
			this->Sp_Page->ResumeLayout(false);
			this->Electro_Page->ResumeLayout(false);
			this->Calculus_Page->ResumeLayout(false);
			this->Physics_Page->ResumeLayout(false);
			this->all_grades_pn->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			this->Left->ResumeLayout(false);
			this->top->ResumeLayout(false);
			this->top->PerformLayout();
			this->Courses_grades->ResumeLayout(false);
			this->Physics_grades->ResumeLayout(false);
			this->Electro_grades->ResumeLayout(false);
			this->calc_grades->ResumeLayout(false);
			this->sp_grades->ResumeLayout(false);
			this->ResumeLayout(false);

		}


		////// dragging for panel1 as form is hidden behind it
		bool dragging;
		Point offset;
	private: System::Void panel_container_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Enable dragging and get mouse position
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;

	}
	private: System::Void panel_container_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Check whether able to move
		if (dragging)
		{
			Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
		}
	}
	private: System::Void panel_container_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		// Disable dragging
		dragging = false;
	}



		   //logout
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide(); //hide student form
		login_again->Show();  // open login form
	}

	private: System::Void Home_Click(System::Object^ sender, System::EventArgs^ e) {
		Home_page->BringToFront();
		logout->BringToFront();
	}
	private: System::Void Exam_Click(System::Object^ sender, System::EventArgs^ e) {
		Exam_page->BringToFront();
		logout->BringToFront();
	}
	private: System::Void Grades_Click(System::Object^ sender, System::EventArgs^ e) {
		Grades_page->BringToFront();
		logout->BringToFront();
	}
	private: System::Void collapse_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pn_nav_bar->Width == 210)
		{
			pn_nav_bar->Width = 55;
			info->Visible = false;
		}
		else
		{
			pn_nav_bar->Width = 210;
			info->Visible = true;
		}
	}
	private: System::Void SP_Click(System::Object^ sender, System::EventArgs^ e) {
		page = 1;
		Sp_Page->BringToFront();
		back->BringToFront();
		linkLabel_exam1->BringToFront();
		sp_ex->BringToFront();
		logout->Hide();
	}
	private: System::Void Calc_Click(System::Object^ sender, System::EventArgs^ e) {
		page = 1;
		Calculus_Page->BringToFront();
		back->BringToFront();
	}
	private: System::Void History_Click(System::Object^ sender, System::EventArgs^ e) {
		page = 1;
		Electro_Page->BringToFront();
		back->BringToFront();
	}
	private: System::Void Maths_Click(System::Object^ sender, System::EventArgs^ e) {
		page = 1;
		Physics_Page->BringToFront();
		back->BringToFront();
	}

	private: System::Void back_Click(System::Object^ sender, System::EventArgs^ e) {


		if (page == 2)
		{
			Grades_page->BringToFront();
			logout->Visible = true;
			logout->BringToFront();
		}
		else if (page == 3) 
		{
			Courses_grades->BringToFront();
			back->BringToFront();
			if (Courses_grades->Visible) {
				page = 2;
			}
		}
		else
		{
			Exam_page->BringToFront();
			logout->Visible = true;
			logout->BringToFront();
		}
	}
		   
		   //grades buttons
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		page = 2;
		Courses_grades->BringToFront();
		back->BringToFront();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		page = 2;
		all_grades_pn->BringToFront();
		back->BringToFront();
	}


	private: System::Void std_name_Click(System::Object^ sender, System::EventArgs^ e) {
		student_profile^ profile = gcnew student_profile(std_name->Text, pass_password->Text);   //open student page , pass name
		profile->ShowDialog();
	}
		   
		   
		   ////in sp exam

		   void Results() {
			   int grade = 0;
			   if (Ans_1->Text == "b") grade += 1;
			   if (Ans_2->Text == "a") grade += 1;
			   if (Ans_3->Text == "c") grade += 1;

			   sp_grade->Text = grade.ToString() + "/3"; //in all grades
			   Spp_grade->Text = grade.ToString() + "/3"; //in specific grades
		   }

private: System::Void Submit_Click(System::Object^ sender, System::EventArgs^ e) {
	// Display a message box asking the user if they want to submit the exam
	
	// Check if the timer is running
	if (timer->Enabled) 
	{
	System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to submit your Exam?", "", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
		// Check the user's response
		if (result == System::Windows::Forms::DialogResult::Yes) {
			// If user clicks Yes, bring Grades_page and logout controls to the front

			Grades_page->BringToFront();
			logout->Visible = true;
			logout->BringToFront();
			Results();
		}
		// No need for an else statement here, as if the user clicks "No", 
		// they will stay on the same page by default.
	}
	else
	{

		Grades_page->BringToFront();
		logout->Visible = true;
		logout->BringToFront();
		Results();
	}
}

	 
	   //buttons in view grades for specific course
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	page = 3;
	sp_grades->BringToFront();
	back->BringToFront();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	page = 3;
	calc_grades->BringToFront();
	back->BringToFront();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	page = 3;
	Electro_grades->BringToFront();
	back->BringToFront();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	page = 3;
	Physics_grades->BringToFront();
	back->BringToFront();
}

	   void StartTimer() {
		   // Set the total time in seconds 
		   int totalSeconds = 5;

		   // Ensure totalSeconds is positive
		   if (totalSeconds > 0) {
			   // Initialize remainingSeconds with the total time
			   remainingSeconds = totalSeconds;

			   // Set the timer interval to 1 second
			   timer->Interval = 1000;

			   // Start the timer
			   timer->Start();
		   }
	   }

private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	Exam1->BringToFront();
	StartTimer();
	
}
private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
	
	if (remainingSeconds > 0) {
		// Decrease the remaining time by one second
		remainingSeconds--;

		// Update the display label to show the remaining time
		Time->Text = "Remaining Time: " + TimeSpan(0, 0, remainingSeconds).ToString();
	}
	else if (remainingSeconds == 0) {
		timer->Stop();
		MessageBox::Show("Time's up!", "Alert", MessageBoxButtons::OK, MessageBoxIcon::Information);
		Submit->PerformClick();
	}
}
};
}
