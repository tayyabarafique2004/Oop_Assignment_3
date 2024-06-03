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
	/// Summary for DiaplayAvailableTimeslots
	/// </summary>
	public ref class DiaplayAvailableTimeslots : public System::Windows::Forms::Form
	{
	public:
		String^ ConnectionString = "Data Source=DESKTOP-TCESE68;Initial Catalog=dbmsProj2;Integrated Security=True;Connect Timeout=30;Encrypt=False";

		DiaplayAvailableTimeslots(void)
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
		~DiaplayAvailableTimeslots()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ availTimetable;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ timmeslotcb;
	private: System::Windows::Forms::ComboBox^ roomcb;
	private: System::Windows::Forms::Button^ dashboardbtn;
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
			this->availTimetable = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timmeslotcb = (gcnew System::Windows::Forms::ComboBox());
			this->roomcb = (gcnew System::Windows::Forms::ComboBox());
			this->dashboardbtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// availTimetable
			// 
			this->availTimetable->BackColor = System::Drawing::Color::Beige;
			this->availTimetable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->availTimetable->Location = System::Drawing::Point(128, 198);
			this->availTimetable->Name = L"availTimetable";
			this->availTimetable->Size = System::Drawing::Size(153, 46);
			this->availTimetable->TabIndex = 0;
			this->availTimetable->Text = L"Is Timeslot Available\?";
			this->availTimetable->UseVisualStyleBackColor = false;
			this->availTimetable->Click += gcnew System::EventHandler(this, &DiaplayAvailableTimeslots::availTimetable_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(98, 250);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(569, 199);
			this->dataGridView1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(95, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Day";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Monday", L"Tuesday", L"Wednesday", L"Thursday" });
			this->comboBox1->Location = System::Drawing::Point(160, 74);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(85, 142);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"TimeSlot";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(489, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Room";
			// 
			// timmeslotcb
			// 
			this->timmeslotcb->FormattingEnabled = true;
			this->timmeslotcb->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"8:00 - 10:00", L"10:00 - 11:00", L"11:00 - 1:00" });
			this->timmeslotcb->Location = System::Drawing::Point(160, 141);
			this->timmeslotcb->Name = L"timmeslotcb";
			this->timmeslotcb->Size = System::Drawing::Size(121, 21);
			this->timmeslotcb->TabIndex = 6;
			// 
			// roomcb
			// 
			this->roomcb->FormattingEnabled = true;
			this->roomcb->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Monday", L"Tuesday", L"Wednesday", L"Thursday" });
			this->roomcb->Location = System::Drawing::Point(558, 73);
			this->roomcb->Name = L"roomcb";
			this->roomcb->Size = System::Drawing::Size(121, 21);
			this->roomcb->TabIndex = 7;
			// 
			// dashboardbtn
			// 
			this->dashboardbtn->BackColor = System::Drawing::Color::Beige;
			this->dashboardbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold));
			this->dashboardbtn->Location = System::Drawing::Point(492, 198);
			this->dashboardbtn->Name = L"dashboardbtn";
			this->dashboardbtn->Size = System::Drawing::Size(153, 46);
			this->dashboardbtn->TabIndex = 8;
			this->dashboardbtn->Text = L"Dashboard";
			this->dashboardbtn->UseVisualStyleBackColor = false;
			this->dashboardbtn->Click += gcnew System::EventHandler(this, &DiaplayAvailableTimeslots::dashboardbtn_Click);
			// 
			// DiaplayAvailableTimeslots
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->dashboardbtn);
			this->Controls->Add(this->roomcb);
			this->Controls->Add(this->timmeslotcb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->availTimetable);
			this->Name = L"DiaplayAvailableTimeslots";
			this->Text = L"DiaplayAvailableTimeslots";
			this->Load += gcnew System::EventHandler(this, &DiaplayAvailableTimeslots::DiaplayAvailableTimeslots_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DiaplayAvailableTimeslots_Load(System::Object^ sender, System::EventArgs^ e) {
		populateRoom();
		getTimeslotInfo();
	
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

		  private: void checkavailablity() {
			  try {
				  SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
				  sqlconn->Open();

				  String^ RoomNumber = roomcb->Text->ToString();
				  String^ Day = comboBox1->Text->ToString();
				\
				  String^ Timeslot = timmeslotcb->Text->ToString();

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

					  MessageBox::Show(" Timeslot on the chosen day is already booked."," ",  MessageBoxButtons::OK, MessageBoxIcon::Information);



					  return;
				  }
				  else {
					  MessageBox::Show("Timeslot is available! Go to make Timetable to book!", " ", MessageBoxButtons::OK, MessageBoxIcon::Information);

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
				 private: System::Void getTimeslotInfo() {
					 try {

						 SqlConnection^ sqlconn = gcnew SqlConnection(ConnectionString);
						 String^ query = "SELECT * FROM [TimeSlot]";
						 SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(query, sqlconn);
						 DataTable^ dataTable = gcnew DataTable();
						 dataAdapter->Fill(dataTable);

						 dataGridView1->DataSource = dataTable;




					 }
					 catch (Exception^ ex) {
						 MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 }
				 }
	private: System::Void availTimetable_Click(System::Object^ sender, System::EventArgs^ e) {
		checkavailablity();
	}
private: System::Void dashboardbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
};
}
