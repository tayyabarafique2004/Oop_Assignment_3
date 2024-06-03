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
	/// Summary for makeTimeTableForm
	/// </summary>
	public ref class makeTimeTableForm : public System::Windows::Forms::Form
	{
		String^ ConnectionString = "Data Source=DESKTOP-TCESE68;Initial Catalog=dbmsProj2;Integrated Security=True;Connect Timeout=30;Encrypt=False";

	private:
		System::Void timeslotcb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
		{
			// Your event handler code here
		}
	public:
		makeTimeTableForm(void)
		{
			InitializeComponent();
			populateTeacher();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~makeTimeTableForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Confirmbtn;
	protected:

	protected:

	private: System::Windows::Forms::ComboBox^ teachercb;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ComboBox^ coursecb;
	private: System::Windows::Forms::ComboBox^ timeslotcb;






	private: System::Windows::Forms::ComboBox^ roomcb;
	private: System::Windows::Forms::DataGridView^ timetablegrid;
	private: System::Windows::Forms::ComboBox^ weekdayscb;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ timeID;
	private: System::Windows::Forms::Button^ Deletebtn;




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
			this->Confirmbtn = (gcnew System::Windows::Forms::Button());
			this->teachercb = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->coursecb = (gcnew System::Windows::Forms::ComboBox());
			this->timeslotcb = (gcnew System::Windows::Forms::ComboBox());
			this->roomcb = (gcnew System::Windows::Forms::ComboBox());
			this->timetablegrid = (gcnew System::Windows::Forms::DataGridView());
			this->weekdayscb = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timeID = (gcnew System::Windows::Forms::TextBox());
			this->Deletebtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timetablegrid))->BeginInit();
			this->SuspendLayout();
			// 
			// Confirmbtn
			// 
			this->Confirmbtn->BackColor = System::Drawing::Color::Beige;
			this->Confirmbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->Confirmbtn->Location = System::Drawing::Point(152, 245);
			this->Confirmbtn->Name = L"Confirmbtn";
			this->Confirmbtn->Size = System::Drawing::Size(115, 37);
			this->Confirmbtn->TabIndex = 0;
			this->Confirmbtn->Text = L"Confirm";
			this->Confirmbtn->UseVisualStyleBackColor = false;
			this->Confirmbtn->Click += gcnew System::EventHandler(this, &makeTimeTableForm::Confirmbtn_Click);
			// 
			// teachercb
			// 
			this->teachercb->FormattingEnabled = true;
			this->teachercb->Location = System::Drawing::Point(599, 70);
			this->teachercb->Name = L"teachercb";
			this->teachercb->Size = System::Drawing::Size(121, 21);
			this->teachercb->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(453, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Teacher Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(58, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 16);
			this->label2->TabIndex = 53;
			this->label2->Text = L"Course Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(58, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 16);
			this->label3->TabIndex = 54;
			this->label3->Text = L"Timeslot";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(58, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 16);
			this->label4->TabIndex = 55;
			this->label4->Text = L"Day";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(453, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(106, 16);
			this->label6->TabIndex = 57;
			this->label6->Text = L"Room Number";
			// 
			// coursecb
			// 
			this->coursecb->FormattingEnabled = true;
			this->coursecb->Location = System::Drawing::Point(210, 75);
			this->coursecb->Name = L"coursecb";
			this->coursecb->Size = System::Drawing::Size(121, 21);
			this->coursecb->TabIndex = 58;
			this->coursecb->SelectedIndexChanged += gcnew System::EventHandler(this, &makeTimeTableForm::coursecb_SelectedIndexChanged);
			// 
			// timeslotcb
			// 
			this->timeslotcb->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"8:00 - 10:00", L"10:00 - 11:00", L"11:00 - 1:00" });
			this->timeslotcb->Location = System::Drawing::Point(210, 180);
			this->timeslotcb->Name = L"timeslotcb";
			this->timeslotcb->Size = System::Drawing::Size(121, 21);
			this->timeslotcb->TabIndex = 65;
			// 
			// roomcb
			// 
			this->roomcb->FormattingEnabled = true;
			this->roomcb->Location = System::Drawing::Point(599, 138);
			this->roomcb->Name = L"roomcb";
			this->roomcb->Size = System::Drawing::Size(121, 21);
			this->roomcb->TabIndex = 62;
			// 
			// timetablegrid
			// 
			this->timetablegrid->AllowDrop = true;
			this->timetablegrid->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->timetablegrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->timetablegrid->Location = System::Drawing::Point(152, 299);
			this->timetablegrid->Name = L"timetablegrid";
			this->timetablegrid->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->timetablegrid->Size = System::Drawing::Size(589, 150);
			this->timetablegrid->TabIndex = 63;
			this->timetablegrid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &makeTimeTableForm::timetablegrid_CellClick);
			// 
			// weekdayscb
			// 
			this->weekdayscb->FormattingEnabled = true;
			this->weekdayscb->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Monday", L"Tuesday", L"Wednesday", L"Thursday" });
			this->weekdayscb->Location = System::Drawing::Point(210, 131);
			this->weekdayscb->Name = L"weekdayscb";
			this->weekdayscb->Size = System::Drawing::Size(121, 21);
			this->weekdayscb->TabIndex = 64;
			this->weekdayscb->SelectedIndexChanged += gcnew System::EventHandler(this, &makeTimeTableForm::weekdayscb_SelectedIndexChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(453, 187);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 16);
			this->label5->TabIndex = 66;
			this->label5->Text = L"Timeslot ID";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Beige;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(599, 245);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 37);
			this->button1->TabIndex = 67;
			this->button1->Text = L"Dashboard";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &makeTimeTableForm::button1_Click);
			// 
			// timeID
			// 
			this->timeID->Location = System::Drawing::Point(599, 185);
			this->timeID->Name = L"timeID";
			this->timeID->Size = System::Drawing::Size(121, 20);
			this->timeID->TabIndex = 68;
			// 
			// Deletebtn
			// 
			this->Deletebtn->BackColor = System::Drawing::Color::Beige;
			this->Deletebtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->Deletebtn->Location = System::Drawing::Point(378, 245);
			this->Deletebtn->Name = L"Deletebtn";
			this->Deletebtn->Size = System::Drawing::Size(120, 37);
			this->Deletebtn->TabIndex = 69;
			this->Deletebtn->Text = L"Delete";
			this->Deletebtn->UseVisualStyleBackColor = false;
			this->Deletebtn->Click += gcnew System::EventHandler(this, &makeTimeTableForm::Deletebtn_Click);
			// 
			// makeTimeTableForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->Deletebtn);
			this->Controls->Add(this->timeID);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->weekdayscb);
			this->Controls->Add(this->timetablegrid);
			this->Controls->Add(this->roomcb);
			this->Controls->Add(this->timeslotcb);
			this->Controls->Add(this->coursecb);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->teachercb);
			this->Controls->Add(this->Confirmbtn);
			this->Name = L"makeTimeTableForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"makeTimeTableForm";
			this->Load += gcnew System::EventHandler(this, &makeTimeTableForm::makeTimeTableForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timetablegrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
			
		private :void populateCoursesCombo() {
			try
			{
				SqlConnection^ conn = gcnew SqlConnection(ConnectionString);
				
				String^ query = "SELECT DISTINCT CourseName FROM Course"; 
				SqlCommand^ cmd = gcnew SqlCommand(query, conn);
				conn->Open();
				SqlDataReader^ reader = cmd->ExecuteReader();
			
				coursecb->Items->Clear(); 
				while (reader->Read())
				{
					coursecb->Items->Add(reader["CourseName"]->ToString());
				}
				
				reader->Close();
				conn->Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
	}
				private: void populateTeacher() {

					try
					{
						SqlConnection^ conn = gcnew SqlConnection(ConnectionString);
						String^ query = "SELECT DISTINCT TeacherName FROM Teacher "; 
						
						SqlCommand^ cmd = gcnew SqlCommand(query, conn);
						conn->Open();


						SqlDataReader^ reader = cmd->ExecuteReader();
						teachercb->Items->Clear();

						while (reader->Read())

						{
							teachercb->Items->Add(reader["TeacherName"]->ToString());
						}
						reader->Close();
						conn->Close();
					}
					catch (Exception^ ex)
					{
						MessageBox::Show(ex->Message);
					}


				}
						
private: void populateRoom() {

	try
	{
		SqlConnection^ conn = gcnew SqlConnection(ConnectionString);
		String^ query = "SELECT DISTINCT RoomNumber FROM Room "; 
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);
		conn->Open();
		SqlDataReader^ reader = cmd->ExecuteReader();
		roomcb->Items->Clear(); 
		while (reader->Read())
		{
			roomcb->Items->Add(reader["RoomNumber"]->ToString());
		}
		reader->Close();
		conn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}


}
	private: System::Void getTimeslotInfo() {
		try {
			
				SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
				String^ query = "SELECT * FROM [TimeSlot]";
				SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, sqlconn);
				DataTable^ dataTable = gcnew DataTable();
				dataAdapter->Fill(dataTable);

				timetablegrid->DataSource = dataTable;
			
		
			
			
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

			  private: void ClearFields() {
				  roomcb->SelectedIndex= -1;
				  coursecb->SelectedIndex = -1;
				  teachercb->SelectedIndex = -1;
				  timeslotcb->SelectedIndex = -1; 
				  weekdayscb->SelectedIndex = -1;
			  }
private: System::Void makeTimeTableForm_Load(System::Object^ sender, System::EventArgs^ e) {
	getTimeslotInfo();
	populateCoursesCombo();

	populateRoom();
	populateTeacher();


	
}

private: System::Void weekdayscb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timetablegrid_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		if (timetablegrid->SelectedRows->Count > 0) {
			DataGridViewRow^ selectedRow = timetablegrid->SelectedRows[0];

			teachercb->Text = selectedRow->Cells["TeacherName"]->Value->ToString();
			coursecb->Text = selectedRow->Cells["CourseName"]->Value->ToString();
			weekdayscb->Text = selectedRow->Cells["Day"]->Value->ToString();
			roomcb->Text = selectedRow->Cells["RoomNumber"]->Value->ToString();

			timeslotcb->Text = selectedRow->Cells["Timeslot"]->Value->ToString();
			timeID->Text = selectedRow->Cells["TimeSlotID"]->Value->ToString();

		}
		else {
			MessageBox::Show("Please select a valid row.", "Selection Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void coursecb_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Confirmbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
		sqlconn->Open();

		String^ RoomNumber = roomcb->Text->ToString();
		String^ Day = weekdayscb->Text->ToString();
		String^ TeacherName = teachercb->Text->ToString();
		String^ CourseName = coursecb->Text->ToString();
		String^ Timeslot = timeslotcb->Text->ToString();
		int TimeSlotID = System::Convert::ToInt32(timeID->Text); 

		if (String::IsNullOrEmpty(RoomNumber)) 
		{ 
			
			MessageBox::Show("Room is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			  return;
		}

		if (String::IsNullOrEmpty(Day))
		{
			
			MessageBox::Show("Weekday is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		
			return;
		}

		if (String::IsNullOrEmpty(TeacherName)) 
		{
			MessageBox::Show("Teacher is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			
			
			return;
		}

		if (String::IsNullOrEmpty(CourseName))
		{
			MessageBox::Show("Course is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (String::IsNullOrEmpty(Timeslot)) {
			MessageBox::Show("Timeslot is empty", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// query to check availability

		String^ checkQuery = "SELECT COUNT(*) FROM [TimeSlot] WHERE Day = @Day AND Timeslot = @Timeslot AND RoomNumber = @RoomNumber";
		SqlCommand^ checkCommand = gcnew SqlCommand(checkQuery, sqlconn);
		checkCommand->Parameters->AddWithValue("@Day", Day);
		checkCommand->Parameters->AddWithValue("@Timeslot", Timeslot);

		checkCommand->Parameters->AddWithValue("@RoomNumber", RoomNumber); 

		int count = (int)checkCommand->ExecuteScalar();
		if (count > 0) {
			MessageBox::Show("Timeslot on the chosen day is already booked.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		String^ query = "INSERT INTO [TimeSlot] (TeacherName, RoomNumber, Timeslot, Day, CourseName, TimeSlotID) VALUES (@TeacherName, @RoomNumber, @Timeslot, @Day, @CourseName, @TimeSlotID)";

		SqlCommand^ command = gcnew SqlCommand(query, sqlconn);

		command->Parameters->AddWithValue("@TeacherName", TeacherName);
		command->Parameters->AddWithValue("@RoomNumber", RoomNumber);
		command->Parameters->AddWithValue("@CourseName", CourseName);
		command->Parameters->AddWithValue("@Timeslot", Timeslot);
		command->Parameters->AddWithValue("@Day", Day);
		command->Parameters->AddWithValue("@TimeSlotID", TimeSlotID);

	
		int rowsAffected = command->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Slot inserted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			// Refresh the DataGridView
			getTimeslotInfo();
		}
		else {
			MessageBox::Show("Failed to insert Timeslot!", "Error", MessageBoxButtons::OK);
		}

		sqlconn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (...) {
		MessageBox::Show("An unexpected error occurred", "Error", MessageBoxButtons::OK);
	}
}


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

}
private: System::Void Deletebtn_Click(System::Object^ sender, System::EventArgs^ e) {


	try {
		if (timeID->Text == "") {
			MessageBox::Show("Please select a Timeslot to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int TimeSlotID = Convert::ToInt32(timeID->Text);

		SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
		String^ query = "DELETE FROM [TimeSlot] WHERE TimeSlotID = @TimeSlotID";

		SqlCommand^ command = gcnew SqlCommand(query, sqlconn);
		command->Parameters->AddWithValue("@TimeSlotID", TimeSlotID);

		sqlconn->Open();

		int rowsAffected = command->ExecuteNonQuery();
		if (rowsAffected > 0) {
			MessageBox::Show("Timeslot deleted successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			getTimeslotInfo(); 
			ClearFields(); 
		}
		else {
			MessageBox::Show("Failed to delete Timeslot!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		sqlconn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}







}
};
}
