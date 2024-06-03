#pragma once
#include"TeachersCRUD.h"
#include"CoursesCRUD.h"
#include"makeTimeTableForm.h"
#include"DiaplayAvailableTimeslots.h"
namespace TimeTableC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentAdvisorForm
	/// </summary>
	public ref class StudentAdvisorForm : public System::Windows::Forms::Form
	{
	public:
		StudentAdvisorForm(void)
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
		~StudentAdvisorForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ btnTSAvailability;
	private: System::Windows::Forms::Button^ btnMakeTimetable;

	private: System::Windows::Forms::Button^ btnHandleCourse;
	private: System::Windows::Forms::Button^ teachersbtn;


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
			this->btnTSAvailability = (gcnew System::Windows::Forms::Button());
			this->btnMakeTimetable = (gcnew System::Windows::Forms::Button());
			this->btnHandleCourse = (gcnew System::Windows::Forms::Button());
			this->teachersbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnTSAvailability
			// 
			this->btnTSAvailability->BackColor = System::Drawing::Color::Beige;
			this->btnTSAvailability->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnTSAvailability->Location = System::Drawing::Point(426, 81);
			this->btnTSAvailability->Name = L"btnTSAvailability";
			this->btnTSAvailability->Size = System::Drawing::Size(197, 97);
			this->btnTSAvailability->TabIndex = 30;
			this->btnTSAvailability->Text = L"Display Available Time Slots";
			this->btnTSAvailability->UseVisualStyleBackColor = false;
			this->btnTSAvailability->Click += gcnew System::EventHandler(this, &StudentAdvisorForm::btnTSAvailability_Click);
			// 
			// btnMakeTimetable
			// 
			this->btnMakeTimetable->BackColor = System::Drawing::Color::Beige;
			this->btnMakeTimetable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->btnMakeTimetable->Location = System::Drawing::Point(426, 263);
			this->btnMakeTimetable->Name = L"btnMakeTimetable";
			this->btnMakeTimetable->Size = System::Drawing::Size(197, 98);
			this->btnMakeTimetable->TabIndex = 29;
			this->btnMakeTimetable->Text = L"Make Timetable";
			this->btnMakeTimetable->UseVisualStyleBackColor = false;
			this->btnMakeTimetable->Click += gcnew System::EventHandler(this, &StudentAdvisorForm::btnMakeTimetable_Click);
			// 
			// btnHandleCourse
			// 
			this->btnHandleCourse->BackColor = System::Drawing::Color::Beige;
			this->btnHandleCourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHandleCourse->Location = System::Drawing::Point(130, 263);
			this->btnHandleCourse->Name = L"btnHandleCourse";
			this->btnHandleCourse->Size = System::Drawing::Size(193, 98);
			this->btnHandleCourse->TabIndex = 27;
			this->btnHandleCourse->Text = L"Handle Courses";
			this->btnHandleCourse->UseVisualStyleBackColor = false;
			this->btnHandleCourse->Click += gcnew System::EventHandler(this, &StudentAdvisorForm::btnHandleCourse_Click);
			// 
			// teachersbtn
			// 
			this->teachersbtn->BackColor = System::Drawing::Color::Beige;
			this->teachersbtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold));
			this->teachersbtn->Location = System::Drawing::Point(130, 82);
			this->teachersbtn->Name = L"teachersbtn";
			this->teachersbtn->Size = System::Drawing::Size(193, 96);
			this->teachersbtn->TabIndex = 31;
			this->teachersbtn->Text = L"Handle Teachers";
			this->teachersbtn->UseVisualStyleBackColor = false;
			this->teachersbtn->Click += gcnew System::EventHandler(this, &StudentAdvisorForm::teachersbtn_Click);
			// 
			// StudentAdvisorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::NavajoWhite;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->teachersbtn);
			this->Controls->Add(this->btnTSAvailability);
			this->Controls->Add(this->btnMakeTimetable);
			this->Controls->Add(this->btnHandleCourse);
			this->Name = L"StudentAdvisorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentAdvisorForm";
			this->Load += gcnew System::EventHandler(this, &StudentAdvisorForm::StudentAdvisorForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void StudentAdvisorForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void btnHandleCourse_Click(System::Object^ sender, System::EventArgs^ e) {
	CoursesCRUD^ cc = gcnew CoursesCRUD();
	cc->Show();

}
private: System::Void teachersbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	TeachersCRUD^ tc = gcnew TeachersCRUD();
	tc->Show();
}
private: System::Void btnMakeTimetable_Click(System::Object^ sender, System::EventArgs^ e) {


	makeTimeTableForm^ mt = gcnew makeTimeTableForm();
	mt->Show();
}
private: System::Void btnTSAvailability_Click(System::Object^ sender, System::EventArgs^ e) {
	DiaplayAvailableTimeslots^ dis = gcnew DiaplayAvailableTimeslots();
	dis->Show();
}
};
}
