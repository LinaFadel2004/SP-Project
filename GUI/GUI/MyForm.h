#pragma once
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>
#include "teacher.h"
#include "student.h"
#include "Data.h"
#include <winsqlite/winsqlite3.h>



namespace GUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ background_image;
	protected:

	protected:
	private: System::Windows::Forms::Button^ login;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::TextBox^ username_textBox;
	private: System::Windows::Forms::TextBox^ password_textbox;
	private: System::Windows::Forms::Label^ username_label;
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Panel^ panel_main;
	private: System::Windows::Forms::Button^ open_eye;

	private: System::Windows::Forms::Button^ closed_eye;








	protected:

	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->background_image = (gcnew System::Windows::Forms::PictureBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->username_textBox = (gcnew System::Windows::Forms::TextBox());
			this->password_textbox = (gcnew System::Windows::Forms::TextBox());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->title = (gcnew System::Windows::Forms::Label());
			this->panel_main = (gcnew System::Windows::Forms::Panel());
			this->closed_eye = (gcnew System::Windows::Forms::Button());
			this->open_eye = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background_image))->BeginInit();
			this->panel_main->SuspendLayout();
			this->SuspendLayout();
			// 
			// background_image
			// 
			this->background_image->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"background_image.Image")));
			this->background_image->Location = System::Drawing::Point(438, -17);
			this->background_image->Name = L"background_image";
			this->background_image->Size = System::Drawing::Size(595, 671);
			this->background_image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->background_image->TabIndex = 5;
			this->background_image->TabStop = false;
			// 
			// login
			// 
			this->login->BackColor = System::Drawing::Color::Maroon;
			this->login->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->login->FlatAppearance->BorderSize = 3;
			this->login->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->ForeColor = System::Drawing::Color::White;
			this->login->Location = System::Drawing::Point(59, 484);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(183, 70);
			this->login->TabIndex = 3;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = false;
			this->login->Click += gcnew System::EventHandler(this, &MyForm::login_Click);
			// 
			// Exit
			// 
			this->Exit->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->Exit->FlatAppearance->BorderSize = 3;
			this->Exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit->ForeColor = System::Drawing::Color::Maroon;
			this->Exit->Location = System::Drawing::Point(270, 484);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(183, 70);
			this->Exit->TabIndex = 4;
			this->Exit->Text = L"Exit";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// username_textBox
			// 
			this->username_textBox->BackColor = System::Drawing::Color::Black;
			this->username_textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username_textBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_textBox->ForeColor = System::Drawing::Color::White;
			this->username_textBox->Location = System::Drawing::Point(53, 252);
			this->username_textBox->Name = L"username_textBox";
			this->username_textBox->Size = System::Drawing::Size(400, 41);
			this->username_textBox->TabIndex = 1;
			this->username_textBox->Tag = L"";
			this->username_textBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::username_textBox_KeyDown);
			// 
			// password_textbox
			// 
			this->password_textbox->BackColor = System::Drawing::Color::Black;
			this->password_textbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_textbox->ForeColor = System::Drawing::Color::White;
			this->password_textbox->Location = System::Drawing::Point(53, 374);
			this->password_textbox->Name = L"password_textbox";
			this->password_textbox->Size = System::Drawing::Size(427, 41);
			this->password_textbox->TabIndex = 2;
			this->password_textbox->Tag = L"";
			this->password_textbox->UseSystemPasswordChar = true;
			this->password_textbox->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->password_textbox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::password_textbox_KeyDown);
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->username_label->Location = System::Drawing::Point(53, 206);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(291, 34);
			this->username_label->TabIndex = 0;
			this->username_label->Text = L"Enter your username:";
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->password_label->Location = System::Drawing::Point(53, 328);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(289, 34);
			this->password_label->TabIndex = 0;
			this->password_label->Text = L"Enter your password:";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(53, 294);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(400, 2);
			this->panel4->TabIndex = 4;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(53, 415);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(400, 2);
			this->panel5->TabIndex = 4;
			// 
			// title
			// 
			this->title->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->title->BackColor = System::Drawing::Color::Transparent;
			this->title->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(44, 41);
			this->title->Name = L"title";
			this->title->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->title->Size = System::Drawing::Size(468, 50);
			this->title->TabIndex = 0;
			this->title->Text = L"Online Exam Platform";
			// 
			// panel_main
			// 
			this->panel_main->BackColor = System::Drawing::Color::Black;
			this->panel_main->Controls->Add(this->title);
			this->panel_main->Controls->Add(this->closed_eye);
			this->panel_main->Controls->Add(this->open_eye);
			this->panel_main->Controls->Add(this->panel5);
			this->panel_main->Controls->Add(this->panel4);
			this->panel_main->Controls->Add(this->password_label);
			this->panel_main->Controls->Add(this->username_label);
			this->panel_main->Controls->Add(this->password_textbox);
			this->panel_main->Controls->Add(this->username_textBox);
			this->panel_main->Controls->Add(this->Exit);
			this->panel_main->Controls->Add(this->login);
			this->panel_main->Controls->Add(this->background_image);
			this->panel_main->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_main->Location = System::Drawing::Point(0, 0);
			this->panel_main->Name = L"panel_main";
			this->panel_main->Size = System::Drawing::Size(910, 580);
			this->panel_main->TabIndex = 2;
			this->panel_main->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel_main_MouseDown);
			this->panel_main->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel_main_MouseMove);
			this->panel_main->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::panel_main_MouseUp);
			// 
			// closed_eye
			// 
			this->closed_eye->Cursor = System::Windows::Forms::Cursors::Hand;
			this->closed_eye->FlatAppearance->BorderSize = 0;
			this->closed_eye->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->closed_eye->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->closed_eye->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"closed_eye.Image")));
			this->closed_eye->Location = System::Drawing::Point(416, 374);
			this->closed_eye->Name = L"closed_eye";
			this->closed_eye->Size = System::Drawing::Size(37, 35);
			this->closed_eye->TabIndex = 6;
			this->closed_eye->UseVisualStyleBackColor = true;
			this->closed_eye->Click += gcnew System::EventHandler(this, &MyForm::closed_eye_Click);
			// 
			// open_eye
			// 
			this->open_eye->Cursor = System::Windows::Forms::Cursors::Hand;
			this->open_eye->FlatAppearance->BorderSize = 0;
			this->open_eye->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->open_eye->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->open_eye->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"open_eye.Image")));
			this->open_eye->Location = System::Drawing::Point(416, 374);
			this->open_eye->Name = L"open_eye";
			this->open_eye->Size = System::Drawing::Size(37, 35);
			this->open_eye->TabIndex = 6;
			this->open_eye->UseVisualStyleBackColor = true;
			this->open_eye->Click += gcnew System::EventHandler(this, &MyForm::open_eye_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 32);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(910, 580);
			this->Controls->Add(this->panel_main);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->background_image))->EndInit();
			this->panel_main->ResumeLayout(false);
			this->panel_main->PerformLayout();
			this->ResumeLayout(false);

		}






#pragma endregion

		   //close button
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

	   


	   //login button
private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	
	String^ enteredUsername = username_textBox->Text;
	String^ enteredPassword = password_textbox->Text;
	std::string Entered_Username = msclr::interop::marshal_as<std::string>(enteredUsername);
	std::string Entered_Password = msclr::interop::marshal_as<std::string>(enteredPassword);

	
	bool username_correct = false;
	bool password_correct = false;



	//to check empty username and password
	if (String::IsNullOrEmpty(username_textBox->Text))
	{
		MessageBox::Show("Username is empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (String::IsNullOrEmpty(password_textbox->Text))
	{
		MessageBox::Show("Password is empty!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}


	//check username and password
	else
	{

		/////intialized values
		teachers[0] = { "Gehad","abc" };
		teachers[1] = { "Maha","0000" };
		stud[0] = { "Aya","2004" };
		stud[1] = { "Lina" , "123" };


		for (int i = 0; i < NUM_OF_TEACH; ++i)
		{
			if (Entered_Username == teachers[i].Username)
			{
				username_correct = true;
				
				if (Entered_Password == teachers[i].correctpassword)
				{
					user = i;
					password_correct = true;
					this->Hide();  //hide login form
					teacher^ teach_page = gcnew teacher(this,username_textBox->Text,password_textbox->Text);    //open teacher page, pass name
					teacher^ check_user = gcnew teacher(user);
					teach_page->ShowDialog();
					break;
				}
			
			}
		}

		for (int i = 0; i < NUM_OF_STUD; ++i)
		{
			if (Entered_Username == stud[i].Username)
			{
				username_correct = true;
				
				if (Entered_Password == stud[i].correctpassword)
				{
					user = NUM_OF_TEACH + 1;
					password_correct = true;
					this->Hide();  //hide login form
					student^ st_page = gcnew student(this,username_textBox->Text,password_textbox->Text);   //open student page , pass name
					st_page->ShowDialog();
					break;
				}

			}
		}

		if (!username_correct)
		{
			MessageBox::Show("Incorrect Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (!password_correct)
		{
			MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	//previous code
	/* else if (username_textBox->Text == "Lina")
	{                                             /////student login
		if (password_textbox->Text == "123")
		{
			this->Hide();  //hide login form
			student^ st_page = gcnew student(this);   //open student page
			st_page->ShowDialog();
		}
		else
		{
			MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	 else if (username_textBox->Text == "Gehad")
	{                                             ////////teacher login
		if (password_textbox->Text == "abc")
		{
			this->Hide();
			teacher^ teach_page = gcnew teacher(this);    //open teacher page
			teach_page->ShowDialog();
		}
		else
		{
			MessageBox::Show("Incorrect Password", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	else 
	{
		MessageBox::Show("Incorrect Username", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}*/
}
	   



	   /////to go to next text box by enter and then login
private: System::Void username_textBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
		password_textbox->Focus();
}
private: System::Void password_textbox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

	if (e->KeyValue == (int)Keys::Enter)
		login->PerformClick();
}




	   ////// dragging for panel1 as form is hidden behind it
	   bool dragging;
	   Point offset;

private: System::Void panel_main_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Enable dragging and get mouse position
	dragging = true;
	offset.X = e->X;
	offset.Y = e->Y;
}
private: System::Void panel_main_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Check whether able to move
	if (dragging)
	{
		Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
		Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
	}
}
private: System::Void panel_main_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	// Disable dragging
	dragging = false;
}



private: System::Void closed_eye_Click(System::Object^ sender, System::EventArgs^ e) {

	//if pass is hidden (true) --> its value will be ""false"" --> go else --> closed eye appears 
	//if pass is visible (false) --> its value will be ""true"" --> go if --> open eye appears
	password_textbox->UseSystemPasswordChar = !password_textbox->UseSystemPasswordChar;

	if (password_textbox->UseSystemPasswordChar)
	{
		closed_eye->Visible = true;
		open_eye->Visible = false;
	}
	else
	{
		closed_eye->Visible = false;
		open_eye->Visible = true;
	}
}
private: System::Void open_eye_Click(System::Object^ sender, System::EventArgs^ e) {
	password_textbox->UseSystemPasswordChar = !password_textbox->UseSystemPasswordChar;

	if (password_textbox->UseSystemPasswordChar)
	{
		closed_eye->Visible = true;
		open_eye->Visible = false;
	}
	else
	{
		closed_eye->Visible = false;
		open_eye->Visible = true;
	}
}
};
}
