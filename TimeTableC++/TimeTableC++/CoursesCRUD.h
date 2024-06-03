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
	/// Summary for CoursesCRUD
	/// </summary>
	public ref class CoursesCRUD : public System::Windows::Forms::Form
	{
	public:
		String^ ConnectionString = "Data Source=DESKTOP-TCESE68;Initial Catalog=dbmsProj2;Integrated Security=True;Connect Timeout=30;Encrypt=False";

		CoursesCRUD(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			getCoursesInfo();
			PopulateDeptIDcombobox1();
			PopulateRoomIDcombobox1();
			PopulateTeacherIDcombobox1();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CoursesCRUD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Dashboardbtn;
	protected:
	private: System::Windows::Forms::Button^ CourseDeletion;
	private: System::Windows::Forms::ComboBox^ deptID;

	private: System::Windows::Forms::TextBox^ courseCode;
	private: System::Windows::Forms::TextBox^ courseName;
	private: System::Windows::Forms::TextBox^ courseID;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridViewCourse;
	private: System::Windows::Forms::ComboBox^ roomID;
	private: System::Windows::Forms::Button^ InsertCourse;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ teachercb;


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
			this->Dashboardbtn = (gcnew System::Windows::Forms::Button());
			this->CourseDeletion = (gcnew System::Windows::Forms::Button());
			this->deptID = (gcnew System::Windows::Forms::ComboBox());
			this->courseCode = (gcnew System::Windows::Forms::TextBox());
			this->courseName = (gcnew System::Windows::Forms::TextBox());
			this->courseID = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewCourse = (gcnew System::Windows::Forms::DataGridView());
			this->roomID = (gcnew System::Windows::Forms::ComboBox());
			this->InsertCourse = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->teachercb = (gcnew System::Windows::Forms::ComboBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCourse))->BeginInit();
			this->SuspendLayout();
			// 
			// Dashboardbtn
			// 
			this->Dashboardbtn->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Dashboardbtn->BackColor = System::Drawing::Color::Beige;
			this->Dashboardbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Dashboardbtn->Location = System::Drawing::Point(559, 228);
			this->Dashboardbtn->Name = L"Dashboardbtn";
			this->Dashboardbtn->Size = System::Drawing::Size(99, 33);
			this->Dashboardbtn->TabIndex = 63;
			this->Dashboardbtn->Text = L"Dashboard";
			this->Dashboardbtn->UseVisualStyleBackColor = false;
			this->Dashboardbtn->Click += gcnew System::EventHandler(this, &CoursesCRUD::Dashboardbtn_Click);
			// 
			// CourseDeletion
			// 
			this->CourseDeletion->BackColor = System::Drawing::Color::Beige;
			this->CourseDeletion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CourseDeletion->Location = System::Drawing::Point(335, 228);
			this->CourseDeletion->Name = L"CourseDeletion";
			this->CourseDeletion->Size = System::Drawing::Size(100, 33);
			this->CourseDeletion->TabIndex = 62;
			this->CourseDeletion->Text = L"Delete";
			this->CourseDeletion->UseVisualStyleBackColor = false;
			this->CourseDeletion->Click += gcnew System::EventHandler(this, &CoursesCRUD::CourseDeletion_Click);
			// 
			// deptID
			// 
			this->deptID->FormattingEnabled = true;
			this->deptID->Location = System::Drawing::Point(619, 158);
			this->deptID->Name = L"deptID";
			this->deptID->Size = System::Drawing::Size(121, 21);
			this->deptID->TabIndex = 61;
			// 
			// courseCode
			// 
			this->courseCode->Location = System::Drawing::Point(235, 162);
			this->courseCode->Name = L"courseCode";
			this->courseCode->Size = System::Drawing::Size(100, 20);
			this->courseCode->TabIndex = 59;
			// 
			// courseName
			// 
			this->courseName->Location = System::Drawing::Point(235, 106);
			this->courseName->Name = L"courseName";
			this->courseName->Size = System::Drawing::Size(100, 20);
			this->courseName->TabIndex = 58;
			// 
			// courseID
			// 
			this->courseID->Location = System::Drawing::Point(235, 47);
			this->courseID->Name = L"courseID";
			this->courseID->Size = System::Drawing::Size(100, 20);
			this->courseID->TabIndex = 57;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(464, 163);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 16);
			this->label6->TabIndex = 56;
			this->label6->Text = L"Department ID";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(464, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 16);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Room ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(127, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 16);
			this->label3->TabIndex = 53;
			this->label3->Text = L"Course Code";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(123, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 16);
			this->label2->TabIndex = 52;
			this->label2->Text = L"Course Name";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(123, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 16);
			this->label1->TabIndex = 51;
			this->label1->Text = L"Course ID";
			// 
			// dataGridViewCourse
			// 
			this->dataGridViewCourse->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridViewCourse->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCourse->Location = System::Drawing::Point(126, 267);
			this->dataGridViewCourse->Name = L"dataGridViewCourse";
			this->dataGridViewCourse->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewCourse->Size = System::Drawing::Size(532, 182);
			this->dataGridViewCourse->TabIndex = 50;
			// 
			// roomID
			// 
			this->roomID->FormattingEnabled = true;
			this->roomID->Location = System::Drawing::Point(619, 101);
			this->roomID->Name = L"roomID";
			this->roomID->Size = System::Drawing::Size(121, 21);
			this->roomID->TabIndex = 49;
			// 
			// InsertCourse
			// 
			this->InsertCourse->BackColor = System::Drawing::Color::Beige;
			this->InsertCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsertCourse->Location = System::Drawing::Point(130, 228);
			this->InsertCourse->Name = L"InsertCourse";
			this->InsertCourse->Size = System::Drawing::Size(97, 33);
			this->InsertCourse->TabIndex = 48;
			this->InsertCourse->Text = L"Insert";
			this->InsertCourse->UseVisualStyleBackColor = false;
			this->InsertCourse->Click += gcnew System::EventHandler(this, &CoursesCRUD::InsertCourse_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(464, 47);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 16);
			this->label5->TabIndex = 64;
			this->label5->Text = L"Teacher ID";
			// 
			// teachercb
			// 
			this->teachercb->FormattingEnabled = true;
			this->teachercb->Location = System::Drawing::Point(619, 42);
			this->teachercb->Name = L"teachercb";
			this->teachercb->Size = System::Drawing::Size(121, 21);
			this->teachercb->TabIndex = 65;
			// 
			// CoursesCRUD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->teachercb);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Dashboardbtn);
			this->Controls->Add(this->CourseDeletion);
			this->Controls->Add(this->deptID);
			this->Controls->Add(this->courseCode);
			this->Controls->Add(this->courseName);
			this->Controls->Add(this->courseID);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridViewCourse);
			this->Controls->Add(this->roomID);
			this->Controls->Add(this->InsertCourse);
			this->Name = L"CoursesCRUD";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CoursesCRUD";
			this->Load += gcnew System::EventHandler(this, &CoursesCRUD::CoursesCRUD_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCourse))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		 private: void ClearFields() {
			 courseID->Clear();
			 courseName->Clear();
			 courseCode->Clear();
			 deptID->SelectedIndex = -1; // Clear the combobox selection
			 roomID->SelectedIndex = -1;
			 teachercb->SelectedIndex = -1;
		//	 teacherID->SelectedIndex = -1;
		 }
				void PopulateDeptIDcombobox1()
				{
					try
					{
						SqlConnection^ conn = gcnew SqlConnection(ConnectionString);
						String^ query = "SELECT DISTINCT DepartmentID FROM Department";
						SqlCommand^ cmd = gcnew SqlCommand(query, conn);
						conn->Open();
						SqlDataReader^ reader = cmd->ExecuteReader();
						deptID->Items->Clear(); // Clear existing items

						while (reader->Read())
						{
							deptID->Items->Add(reader["DepartmentID"]->ToString());
						}
						reader->Close();
						conn->Close();
					}
					catch (SqlException^ sqlEx)
					{
						MessageBox::Show("SQL Error: " + sqlEx->Message);
					}
					catch (Exception^ ex)
					{
						MessageBox::Show("Error: " + ex->Message);
					}
				}

				void PopulateRoomIDcombobox1()
				{
					try
					{
						SqlConnection^ conn = gcnew SqlConnection(ConnectionString);
						String^ query = "SELECT DISTINCT RoomID FROM Room";
						SqlCommand^ cmd = gcnew SqlCommand(query, conn);
						conn->Open();
						SqlDataReader^ reader = cmd->ExecuteReader();
						roomID->Items->Clear(); // Clear existing items

						while (reader->Read())
						{
							roomID->Items->Add(reader["RoomID"]->ToString());
						}
						reader->Close();
						conn->Close();
					}
					catch (SqlException^ sqlEx)
					{
						MessageBox::Show("SQL Error: " + sqlEx->Message);
					}
					catch (Exception^ ex)
					{
						MessageBox::Show("Error: " + ex->Message);
					}
				}
				void PopulateTeacherIDcombobox1()
				{
					try
					{
						SqlConnection^ conn = gcnew SqlConnection(ConnectionString);
						String^ query = "SELECT DISTINCT TeacherID FROM Teacher";
						SqlCommand^ cmd = gcnew SqlCommand(query, conn);
						conn->Open();
						SqlDataReader^ reader = cmd->ExecuteReader();
						teachercb->Items->Clear(); // Clear existing items

						while (reader->Read())
						{
							teachercb->Items->Add(reader["TeacherID"]->ToString());
						}
						reader->Close();
						conn->Close();
					}
					catch (SqlException^ sqlEx)
					{
						MessageBox::Show("SQL Error: " + sqlEx->Message);
					}
					catch (Exception^ ex)
					{
						MessageBox::Show("Error: " + ex->Message);
					}
				}


			
				 private:Void getCoursesInfo() {
					 try {
						 SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
						 String^ query = "SELECT * FROM [Course]";
						 //reader used for execute reader but adapter can have parameters
						 SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, sqlconn);
						 //first fill data table then bind data grid to it
						 DataTable^ dataTable = gcnew DataTable();
						 dataAdapter->Fill(dataTable);

						 dataGridViewCourse->DataSource = dataTable;
					 }
					 catch (Exception^ ex) {
						 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }


				 }
	private: System::Void CoursesCRUD_Load(System::Object^ sender, System::EventArgs^ e) {
		getCoursesInfo();
		PopulateDeptIDcombobox1();
		PopulateRoomIDcombobox1();
		PopulateTeacherIDcombobox1();
	//	PopulateTeacherIDcombobox1();
	}
private: System::Void InsertCourse_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
		sqlconn->Open();

		String^ CourseName = courseName->Text->ToString();
		String^ CourseCode = courseCode->Text->ToString();
		int TeacherID ;
		int DepartmentID;
		int CourseID;
		int RoomID;
		// Input validation
		if (String::IsNullOrEmpty(CourseName) || String::IsNullOrEmpty(CourseCode)) {
			MessageBox::Show("Fields are empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (String::IsNullOrEmpty(courseID->Text) || courseID->Text == " ") {
			MessageBox::Show("courseID is empty or contains space!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Try to parse courseID
		try {
			TeacherID = Convert::ToInt32(teachercb->Text);
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
		if (deptID->SelectedItem == nullptr) {
			MessageBox::Show("Department ID is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		try {
			CourseID = Convert::ToInt32(courseID->Text);
		}
		catch (FormatException^) {
			MessageBox::Show("Course ID must be an integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (ArgumentNullException^) {
			MessageBox::Show("Course ID cannot be null", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Check if DepartmentID is empty
		if (deptID->SelectedItem == nullptr) {
			MessageBox::Show("Department ID is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Try to parse DepartmentID
		try {
			DepartmentID = Convert::ToInt32(deptID->SelectedItem);
		}
		catch (FormatException^) {
			MessageBox::Show("Department ID must be an integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (ArgumentNullException^) {
			MessageBox::Show("Department ID cannot be null", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (deptID->SelectedItem == nullptr) {
			MessageBox::Show("Teacher ID is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		try {
			RoomID = Convert::ToInt32(roomID->SelectedItem);
		}
		catch (FormatException^) {
			MessageBox::Show("Room ID must be an integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		catch (ArgumentNullException^) {
			MessageBox::Show("Room ID cannot be null", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (roomID->SelectedItem == nullptr) {
			MessageBox::Show("Room ID is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}


		
		String^ query = "INSERT INTO [Course] (CourseName, CourseID, CourseCode, DepartmentID,RoomID,TeacherID) VALUES (@CourseName, @CourseID, @CourseCode, @DepartmentID,@RoomID,@TeacherID)";

		SqlCommand^ command = gcnew SqlCommand(query, sqlconn);

		// Add parameters
		command->Parameters->AddWithValue("@CourseName", CourseName);
		command->Parameters->AddWithValue("@CourseID", CourseID);
		command->Parameters->AddWithValue("@CourseCode", CourseCode);
		command->Parameters->AddWithValue("@DepartmentID", DepartmentID);
		command->Parameters->AddWithValue("@RoomID", RoomID);
		command->Parameters->AddWithValue("@TeacherID", TeacherID);


		// Execute the command
		int rowsAffected = command->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Course inserted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			// Refresh the DataGridView
			getCoursesInfo();
		}
		else {
			MessageBox::Show("Failed to insert Course!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
private: System::Void CourseDeletion_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (courseID->Text == "") {
			MessageBox::Show("Please select a Course to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int CourseID = Convert::ToInt32(courseID->Text);

		SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
		String^ query = "DELETE FROM [Course] WHERE CourseID = @CourseID";

		SqlCommand^ command = gcnew SqlCommand(query, sqlconn);
		command->Parameters->AddWithValue("@CourseID", CourseID);

		sqlconn->Open();

		int rowsAffected = command->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Course deleted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			getCoursesInfo(); // Refresh the DataGridView
			ClearFields(); // Clear the input fields
		}
		else {
			MessageBox::Show("Failed to delete Course!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		sqlconn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void Dashboardbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void teachercb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
