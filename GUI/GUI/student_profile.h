#pragma once
namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for teacher_profile
	/// </summary>
	public ref class student_profile : public System::Windows::Forms::Form
	{
	public:
		Form^ stud_profile;

		student_profile(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		student_profile(Form^ profile)
		{
			InitializeComponent();
			profile = stud_profile;

		}

		student_profile(String^ std_name, String^ password)
		{
			InitializeComponent();
			teacher_name->Text = std_name;
			pass->Text = password;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~student_profile()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ name;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Label^ teacher_name;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ pass;


	private: System::Windows::Forms::Label^ label5;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(student_profile::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->title = (gcnew System::Windows::Forms::Label());
			this->teacher_name = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pass = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 22, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Tomato;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label1->Size = System::Drawing::Size(498, 261);
			this->label1->TabIndex = 7;
			this->label1->Text = L"My profile :)";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// name
			// 
			this->name->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->name->BackColor = System::Drawing::Color::Transparent;
			this->name->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->name->ForeColor = System::Drawing::Color::Tomato;
			this->name->Location = System::Drawing::Point(4, 37);
			this->name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->name->Name = L"name";
			this->name->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->name->Size = System::Drawing::Size(149, 51);
			this->name->TabIndex = 5;
			this->name->Text = L"Name:";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->name);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->title);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 261);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(197, 263);
			this->panel1->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Tomato;
			this->label4->Location = System::Drawing::Point(-1, 157);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label4->Size = System::Drawing::Size(198, 51);
			this->label4->TabIndex = 12;
			this->label4->Text = L"ID:";
			// 
			// title
			// 
			this->title->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->title->BackColor = System::Drawing::Color::Transparent;
			this->title->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->title->ForeColor = System::Drawing::Color::Tomato;
			this->title->Location = System::Drawing::Point(4, 93);
			this->title->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->title->Name = L"title";
			this->title->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->title->Size = System::Drawing::Size(170, 59);
			this->title->TabIndex = 10;
			this->title->Text = L"Password :";
			// 
			// teacher_name
			// 
			this->teacher_name->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->teacher_name->BackColor = System::Drawing::Color::Transparent;
			this->teacher_name->Font = (gcnew System::Drawing::Font(L"Perpetua", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->teacher_name->ForeColor = System::Drawing::Color::White;
			this->teacher_name->Location = System::Drawing::Point(226, 299);
			this->teacher_name->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->teacher_name->Name = L"teacher_name";
			this->teacher_name->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->teacher_name->Size = System::Drawing::Size(197, 38);
			this->teacher_name->TabIndex = 11;
			this->teacher_name->Text = L"Lina";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-11, 80);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(517, 205);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pass
			// 
			this->pass->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->pass->BackColor = System::Drawing::Color::Transparent;
			this->pass->Font = (gcnew System::Drawing::Font(L"Perpetua", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::Color::White;
			this->pass->Location = System::Drawing::Point(226, 355);
			this->pass->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->pass->Name = L"pass";
			this->pass->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->pass->Size = System::Drawing::Size(197, 38);
			this->pass->TabIndex = 11;
			this->pass->Text = L"123";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Perpetua", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(226, 419);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->label5->Size = System::Drawing::Size(197, 38);
			this->label5->TabIndex = 11;
			this->label5->Text = L"2023170459";
			// 
			// teacher_profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(498, 524);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pass);
			this->Controls->Add(this->teacher_name);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"teacher_profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	};
}