#pragma once

namespace TimeTableC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for TeachersCRUD
	/// </summary>
	public ref class TeachersCRUD : public System::Windows::Forms::Form
	{
		String^ ConnectionString = "Data Source=DESKTOP-TCESE68;Initial Catalog=dbmsProj2;Integrated Security=True;Connect Timeout=30;Encrypt=False";

	public:
		TeachersCRUD(void)
		{
			InitializeComponent();
			PopulateDeptIDcombobox();
			ClearFields();
			//
			//TODO: Add the constructor code here
			//
		}

		
	      TeachersCRUD(System::Windows::Forms::Form^ StudentAdvisorForm) {
			InitializeComponent(); PopulateDeptIDcombobox(); ClearFields();

	//		this->parentForm = StudentAdvisorForm;
		  }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TeachersCRUD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ DashboardBack;
	protected:
	private: System::Windows::Forms::TextBox^ teacherID;
	private: System::Windows::Forms::Button^ DeleteTeacher;
	private: System::Windows::Forms::Button^ UpdateTeacher;
	private: System::Windows::Forms::ComboBox^ teacherdept;
	private: System::Windows::Forms::TextBox^ teacherPassword;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ teacherName;
	private: System::Windows::Forms::DataGridView^ TeacherdataGridView1;
	private: System::Windows::Forms::Button^ InsertTeacher;
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
			this->DashboardBack = (gcnew System::Windows::Forms::Button());
			this->teacherID = (gcnew System::Windows::Forms::TextBox());
			this->DeleteTeacher = (gcnew System::Windows::Forms::Button());
			this->UpdateTeacher = (gcnew System::Windows::Forms::Button());
			this->teacherdept = (gcnew System::Windows::Forms::ComboBox());
			this->teacherPassword = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->teacherName = (gcnew System::Windows::Forms::TextBox());
			this->TeacherdataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->InsertTeacher = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TeacherdataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// DashboardBack
			// 
			this->DashboardBack->BackColor = System::Drawing::Color::Beige;
			this->DashboardBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->DashboardBack->Location = System::Drawing::Point(596, 203);
			this->DashboardBack->Name = L"DashboardBack";
			this->DashboardBack->Size = System::Drawing::Size(104, 32);
			this->DashboardBack->TabIndex = 40;
			this->DashboardBack->Text = L"Dashboard";
			this->DashboardBack->UseVisualStyleBackColor = false;
			this->DashboardBack->Click += gcnew System::EventHandler(this, &TeachersCRUD::DashboardBack_Click);
			// 
			// teacherID
			// 
			this->teacherID->Location = System::Drawing::Point(547, 55);
			this->teacherID->Name = L"teacherID";
			this->teacherID->Size = System::Drawing::Size(121, 20);
			this->teacherID->TabIndex = 39;
			// 
			// DeleteTeacher
			// 
			this->DeleteTeacher->BackColor = System::Drawing::Color::Beige;
			this->DeleteTeacher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->DeleteTeacher->Location = System::Drawing::Point(458, 203);
			this->DeleteTeacher->Name = L"DeleteTeacher";
			this->DeleteTeacher->Size = System::Drawing::Size(102, 32);
			this->DeleteTeacher->TabIndex = 38;
			this->DeleteTeacher->Text = L"Delete";
			this->DeleteTeacher->UseVisualStyleBackColor = false;
			this->DeleteTeacher->Click += gcnew System::EventHandler(this, &TeachersCRUD::DeleteTeacher_Click_1);
			// 
			// UpdateTeacher
			// 
			this->UpdateTeacher->BackColor = System::Drawing::Color::Beige;
			this->UpdateTeacher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->UpdateTeacher->Location = System::Drawing::Point(305, 203);
			this->UpdateTeacher->Name = L"UpdateTeacher";
			this->UpdateTeacher->Size = System::Drawing::Size(101, 32);
			this->UpdateTeacher->TabIndex = 37;
			this->UpdateTeacher->Text = L"Update";
			this->UpdateTeacher->UseVisualStyleBackColor = false;
			this->UpdateTeacher->Click += gcnew System::EventHandler(this, &TeachersCRUD::UpdateTeacher_Click_1);
			// 
			// teacherdept
			// 
			this->teacherdept->FormattingEnabled = true;
			this->teacherdept->Location = System::Drawing::Point(547, 136);
			this->teacherdept->Name = L"teacherdept";
			this->teacherdept->Size = System::Drawing::Size(121, 21);
			this->teacherdept->TabIndex = 36;
			// 
			// teacherPassword
			// 
			this->teacherPassword->Location = System::Drawing::Point(240, 141);
			this->teacherPassword->Name = L"teacherPassword";
			this->teacherPassword->Size = System::Drawing::Size(100, 20);
			this->teacherPassword->TabIndex = 35;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(418, 142);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 15);
			this->label4->TabIndex = 34;
			this->label4->Text = L"Department ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(96, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 15);
			this->label3->TabIndex = 33;
			this->label3->Text = L"Teacher Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(418, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 15);
			this->label2->TabIndex = 32;
			this->label2->Text = L"Teacher ID";
			// 
			// teacherName
			// 
			this->teacherName->Location = System::Drawing::Point(240, 60);
			this->teacherName->Name = L"teacherName";
			this->teacherName->Size = System::Drawing::Size(100, 20);
			this->teacherName->TabIndex = 31;
			// 
			// TeacherdataGridView1
			// 
			this->TeacherdataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->TeacherdataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TeacherdataGridView1->Location = System::Drawing::Point(240, 256);
			this->TeacherdataGridView1->Name = L"TeacherdataGridView1";
			this->TeacherdataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->TeacherdataGridView1->Size = System::Drawing::Size(434, 193);
			this->TeacherdataGridView1->TabIndex = 30;
			this->TeacherdataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TeachersCRUD::TeacherdataGridView1_CellClick_1);
			this->TeacherdataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &TeachersCRUD::TeacherdataGridView1_CellContentClick);
			// 
			// InsertTeacher
			// 
			this->InsertTeacher->BackColor = System::Drawing::Color::Beige;
			this->InsertTeacher->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->InsertTeacher->Location = System::Drawing::Point(176, 203);
			this->InsertTeacher->Name = L"InsertTeacher";
			this->InsertTeacher->Size = System::Drawing::Size(102, 32);
			this->InsertTeacher->TabIndex = 29;
			this->InsertTeacher->Text = L"Insert";
			this->InsertTeacher->UseVisualStyleBackColor = false;
			this->InsertTeacher->Click += gcnew System::EventHandler(this, &TeachersCRUD::InsertTeacher_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(96, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 15);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Teacher Name";
			// 
			// TeachersCRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->DashboardBack);
			this->Controls->Add(this->teacherID);
			this->Controls->Add(this->DeleteTeacher);
			this->Controls->Add(this->UpdateTeacher);
			this->Controls->Add(this->teacherdept);
			this->Controls->Add(this->teacherPassword);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->teacherName);
			this->Controls->Add(this->TeacherdataGridView1);
			this->Controls->Add(this->InsertTeacher);
			this->Controls->Add(this->label1);
			this->Name = L"TeachersCRUD";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TeachersCRUD";
			this->Load += gcnew System::EventHandler(this, &TeachersCRUD::TeachersCRUD_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TeacherdataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: void ClearFields() {
			teacherID->Clear();
			teacherName->Clear();
			teacherPassword->Clear();
			teacherdept->SelectedIndex = -1; // Clear the combobox selection
		}
			   void PopulateDeptIDcombobox()
			   {
				   try
				   {
					   SqlConnection^ conn = gcnew SqlConnection(ConnectionString);
					   String^ query = "SELECT DISTINCT DepartmentID FROM Department"; // Use a table with unique department IDs
					   SqlCommand^ cmd = gcnew SqlCommand(query, conn);
					   conn->Open();
					   SqlDataReader^ reader = cmd->ExecuteReader();
					   teacherdept->Items->Clear(); // Clear existing items
					   while (reader->Read())
					   {
						   teacherdept->Items->Add(reader["DepartmentID"]->ToString());
					   }
					   reader->Close();
					   conn->Close();
				   }
				   catch (Exception^ ex)
				   {
					   MessageBox::Show(ex->Message);
				   }
			   }
	private: System::Void getTeachersInfo() {

		try {
			SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
			String^ query = "SELECT * FROM [Teacher]";
			//reader used for execute reader but adapter can have parameters
			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, sqlconn);
			//first fill data table then bind data grid to it
			DataTable^ dataTable = gcnew DataTable();
			dataAdapter->Fill(dataTable);

			TeacherdataGridView1->DataSource = dataTable;
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void TeachersCRUD_Load(System::Object^ sender, System::EventArgs^ e) {
		getTeachersInfo();
	}
		 
		  


	
	
private: System::Void InsertTeacher_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try {
		SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
		sqlconn->Open();

		String^ Teachername = teacherName->Text->ToString();
		String^ Teacherpassword = teacherPassword->Text->ToString();

		// Input validation
		if (String::IsNullOrEmpty(Teachername) || String::IsNullOrEmpty(Teacherpassword)) {
			MessageBox::Show("Fields are empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int TeacherID;
		int DepartmentID;

		if (String::IsNullOrEmpty(teacherID->Text) || teacherID->Text == " ") {
			MessageBox::Show("Teacher ID is empty or contains space!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Try to parse TeacherID
		try {
			TeacherID = Convert::ToInt32(teacherID->Text);
		}
		catch (FormatException^) {
			MessageBox::Show("Teacher ID must be an integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (ArgumentNullException^) {
			MessageBox::Show("Teacher ID cannot be null", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Check if DepartmentID is empty
		if (teacherdept->SelectedItem == nullptr) {
			MessageBox::Show("Department ID is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Try to parse DepartmentID
		try {
			DepartmentID = Convert::ToInt32(teacherdept->SelectedItem);
		}
		catch (FormatException^) {
			MessageBox::Show("Department ID must be an integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (ArgumentNullException^) {
			MessageBox::Show("Department ID cannot be null", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ query = "INSERT INTO [Teacher] (TeacherName, TeacherID, TeacherPassword, DepartmentID) VALUES (@Teachername, @TeacherID, @Teacherpassword, @DepartmentID)";

		SqlCommand^ command = gcnew SqlCommand(query, sqlconn);

		// Add parameters
		command->Parameters->AddWithValue("@Teachername", Teachername);
		command->Parameters->AddWithValue("@TeacherID", TeacherID);
		command->Parameters->AddWithValue("@Teacherpassword", Teacherpassword);
		command->Parameters->AddWithValue("@DepartmentID", DepartmentID);

		// Execute the command
		int rowsAffected = command->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Teacher inserted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			// Refresh the DataGridView
			getTeachersInfo();
		}
		else {
			MessageBox::Show("Failed to insert teacher!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		sqlconn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (...) {
		MessageBox::Show("An unexpected error occurred", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void UpdateTeacher_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try {
		SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);

		String^ Teachername = teacherName->Text->ToString();
		int^ TeacherID = Convert::ToInt32(teacherID->Text->ToString());
		String^ Teacherpassword = teacherPassword->Text->ToString();
		int DepartmentID = Convert::ToInt32(teacherdept->Text->ToString());

		String^ query = "UPDATE [Teacher] SET TeacherName = @Teachername, TeacherPassword = @Teacherpassword, DepartmentID = @DepartmentID WHERE TeacherID = @TeacherID";

		SqlCommand^ command = gcnew SqlCommand(query, sqlconn);

		// Add parameters
		command->Parameters->AddWithValue("@Teachername", Teachername);
		command->Parameters->AddWithValue("@Teacherpassword", Teacherpassword);
		command->Parameters->AddWithValue("@DepartmentID", DepartmentID);
		command->Parameters->AddWithValue("@TeacherID", TeacherID);

		sqlconn->Open();

		// Execute the command
		int rowsAffected = command->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Teacher info updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			getTeachersInfo(); // Refresh the DataGridView
		}
		else {
			MessageBox::Show("Failed to update teacher info!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			getTeachersInfo();
		}

		sqlconn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void TeacherdataGridView1_CellClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		if (TeacherdataGridView1->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = TeacherdataGridView1->SelectedRows[0];

			teacherID->Text = selectedRow->Cells["TeacherID"]->Value->ToString();
			teacherName->Text = selectedRow->Cells["TeacherName"]->Value->ToString();
			teacherPassword->Text = selectedRow->Cells["TeacherPassword"]->Value->ToString();
			teacherdept->Text = selectedRow->Cells["DepartmentID"]->Value->ToString();
		}
		else {
			MessageBox::Show("Please select a valid row.", "Selection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void DeleteTeacher_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (teacherID->Text == "") {
			MessageBox::Show("Please select a teacher to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int TeacherID = Convert::ToInt32(teacherID->Text);

		SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
		String^ query = "DELETE FROM [Teacher] WHERE TeacherID = @TeacherID";

		SqlCommand^ command = gcnew SqlCommand(query, sqlconn);
		command->Parameters->AddWithValue("@TeacherID", TeacherID);

		sqlconn->Open();

		int rowsAffected = command->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Teacher deleted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			getTeachersInfo(); // Refresh the DataGridView
			ClearFields(); // Clear the input fields
		}
		else {
			MessageBox::Show("Failed to delete teacher!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		sqlconn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void TeacherdataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void DashboardBack_Click(System::Object^ sender, System::EventArgs^ e) {
	//StudentAdvisorForm^ sa = gcnew StudentAdvisorForm();
	//sa->Show();
	this->Hide();
}
};
}
