#pragma once
#include"StudentAdvisorForm.h"
#include"StudentReport.h"
namespace TimeTableC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for myLoginForm
	/// </summary>
	public ref class myLoginForm : public System::Windows::Forms::Form
	{
	public:
		myLoginForm(void)
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
		~myLoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ exitbtn;
	protected:
	private: System::Windows::Forms::TextBox^ usernametxt;
	private: System::Windows::Forms::Label^ role;
	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::Button^ Loginbtn;
	private: System::Windows::Forms::ComboBox^ comboRole;
	private: System::Windows::Forms::TextBox^ passwordtxt;
	private: System::Windows::Forms::Label^ username;
	private: System::Windows::Forms::Label^ label1;

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
			this->exitbtn = (gcnew System::Windows::Forms::Button());
			this->usernametxt = (gcnew System::Windows::Forms::TextBox());
			this->role = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::Label());
			this->Loginbtn = (gcnew System::Windows::Forms::Button());
			this->comboRole = (gcnew System::Windows::Forms::ComboBox());
			this->passwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// exitbtn
			// 
			this->exitbtn->BackColor = System::Drawing::Color::Beige;
			this->exitbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitbtn->Location = System::Drawing::Point(433, 345);
			this->exitbtn->Name = L"exitbtn";
			this->exitbtn->Size = System::Drawing::Size(110, 39);
			this->exitbtn->TabIndex = 31;
			this->exitbtn->Text = L"Exit";
			this->exitbtn->UseVisualStyleBackColor = false;
			this->exitbtn->Click += gcnew System::EventHandler(this, &myLoginForm::exitbtn_Click);
			// 
			// usernametxt
			// 
			this->usernametxt->Location = System::Drawing::Point(356, 112);
			this->usernametxt->Name = L"usernametxt";
			this->usernametxt->Size = System::Drawing::Size(121, 20);
			this->usernametxt->TabIndex = 30;
			this->usernametxt->UseWaitCursor = true;
			// 
			// role
			// 
			this->role->AutoSize = true;
			this->role->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->role->Location = System::Drawing::Point(183, 261);
			this->role->Name = L"role";
			this->role->Size = System::Drawing::Size(88, 16);
			this->role->TabIndex = 29;
			this->role->Text = L"Select Role";
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(183, 184);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(75, 16);
			this->password->TabIndex = 28;
			this->password->Text = L"Password";
			// 
			// Loginbtn
			// 
			this->Loginbtn->BackColor = System::Drawing::Color::Beige;
			this->Loginbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Loginbtn->Location = System::Drawing::Point(229, 345);
			this->Loginbtn->Name = L"Loginbtn";
			this->Loginbtn->Size = System::Drawing::Size(118, 39);
			this->Loginbtn->TabIndex = 27;
			this->Loginbtn->Text = L"Login";
			this->Loginbtn->UseVisualStyleBackColor = false;
			this->Loginbtn->Click += gcnew System::EventHandler(this, &myLoginForm::Loginbtn_Click);
			// 
			// comboRole
			// 
			this->comboRole->FormattingEnabled = true;
			this->comboRole->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Student Advisor", L"Teacher", L"Student" });
			this->comboRole->Location = System::Drawing::Point(356, 255);
			this->comboRole->Name = L"comboRole";
			this->comboRole->Size = System::Drawing::Size(121, 21);
			this->comboRole->TabIndex = 26;
			this->comboRole->SelectedIndexChanged += gcnew System::EventHandler(this, &myLoginForm::comboRole_SelectedIndexChanged);
			// 
			// passwordtxt
			// 
			this->passwordtxt->Location = System::Drawing::Point(356, 179);
			this->passwordtxt->Name = L"passwordtxt";
			this->passwordtxt->Size = System::Drawing::Size(121, 20);
			this->passwordtxt->TabIndex = 25;
			// 
			// username
			// 
			this->username->AutoSize = true;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(179, 117);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(78, 16);
			this->username->TabIndex = 24;
			this->username->Text = L"Username";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(237, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(316, 24);
			this->label1->TabIndex = 32;
			this->label1->Text = L"TimeTable Management System ";
			// 
			// myLoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exitbtn);
			this->Controls->Add(this->usernametxt);
			this->Controls->Add(this->role);
			this->Controls->Add(this->password);
			this->Controls->Add(this->Loginbtn);
			this->Controls->Add(this->comboRole);
			this->Controls->Add(this->passwordtxt);
			this->Controls->Add(this->username);
			this->Name = L"myLoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"myLoginForm";
			this->Load += gcnew System::EventHandler(this, &myLoginForm::myLoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void myLoginForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void comboRole_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Loginbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Username = usernametxt->Text;
	String^ Password = passwordtxt->Text;
	String^ ConnectionString = "Data Source=DESKTOP-TCESE68;Initial Catalog=dbmsProj2;Integrated Security=True;Connect Timeout=30;Encrypt=False";
	String^ query;
	try {
		if (comboRole->SelectedItem != nullptr) {
			String^ selectedRole = comboRole->SelectedItem->ToString();

			if (selectedRole == "Student Advisor") {
				query = "SELECT * FROM [Admin] WHERE AdminUsername=@Username AND AdminPassword=@Password";
				SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
				sqlconn->Open();
				SqlCommand^ command = gcnew SqlCommand(query, sqlconn);
				command->Parameters->AddWithValue("@Username", Username);
				command->Parameters->AddWithValue("@Password", Password);

				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->Read()) {
					MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					StudentAdvisorForm^ sa = gcnew StudentAdvisorForm();
					sa->Show();
					this->Hide();
				}
				else {
					MessageBox::Show("Invalid username or password!", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				reader->Close();
				sqlconn->Close();
			}
			else if (selectedRole == "Teacher") {
				query = "SELECT * FROM [Teacher] WHERE TeacherName=@Username AND TeacherPassword=@Password";
				SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
				sqlconn->Open();
				SqlCommand^ command = gcnew SqlCommand(query, sqlconn);
				command->Parameters->AddWithValue("@Username", Username);
				command->Parameters->AddWithValue("@Password", Password);
				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->Read()) {
					MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					StudentReport^ sr = gcnew StudentReport();
					sr->Show();
					this->Hide();
				}
				else {
					MessageBox::Show("Invalid username or password!", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				reader->Close();
				sqlconn->Close();
			}
			else if (selectedRole == "Student") {
				query = "SELECT * FROM [Student] WHERE Enrollment=@Username AND Studentpassord=@Password";
				SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
				sqlconn->Open();
				SqlCommand^ command = gcnew SqlCommand(query, sqlconn);
				command->Parameters->AddWithValue("@Username", Username);
				command->Parameters->AddWithValue("@Password", Password);
				SqlDataReader^ reader = command->ExecuteReader();
				if (reader->Read()) {
					MessageBox::Show("Login successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					StudentReport^ sr = gcnew StudentReport();
					sr->Show();
					this->Hide();

				}
				else {
					MessageBox::Show("Invalid username or password!", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}

				reader->Close();
				sqlconn->Close();
			}
			else {
				MessageBox::Show("Invalid role selected!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}
		else {
			MessageBox::Show("Please select a role!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (SqlException^ ex) {
		MessageBox::Show("An SQL error occurred: " + ex->Message, "SQL Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void exitbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();

}
};
}
