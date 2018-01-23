#pragma once
//#include "Form1.h"
#include <string>

namespace GUIStacks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		int *numz;
		static int *number = new int [7];
	private: System::Windows::Forms::Button^  close;
	public: 
	private: System::Windows::Forms::Button^  save;
	private: System::Windows::Forms::Label^  slabel;
	public: System::Windows::Forms::TextBox^  stck;
		
		Form2(int *n, System::Windows::Forms::TextBox^ s)
		{
			stck = s;
			numz = n;
			InitializeComponent();
			DisplayData ();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  bble;
	private: System::Windows::Forms::Label^  label1;
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
			this->bble = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->close = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			this->slabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bble
			// 
			this->bble->AutoSize = true;
			this->bble->Location = System::Drawing::Point(56, 65);
			this->bble->Name = L"bble";
			this->bble->Size = System::Drawing::Size(102, 13);
			this->bble->TabIndex = 0;
			this->bble->Text = L"FORM2 WELCOME";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(84, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bubble Sorted Stack";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// close
			// 
			this->close->Location = System::Drawing::Point(159, 203);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(75, 23);
			this->close->TabIndex = 5;
			this->close->Text = L"Close";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &Form2::close_Click);
			// 
			// save
			// 
			this->save->Location = System::Drawing::Point(53, 203);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(75, 23);
			this->save->TabIndex = 4;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &Form2::save_Click);
			// 
			// slabel
			// 
			this->slabel->AutoSize = true;
			this->slabel->Location = System::Drawing::Point(84, 187);
			this->slabel->Name = L"slabel";
			this->slabel->Size = System::Drawing::Size(0, 13);
			this->slabel->TabIndex = 6;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->slabel);
			this->Controls->Add(this->close);
			this->Controls->Add(this->save);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bble);
			this->Name = L"Form2";
			this->Text = L"Bubble Sort";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		void DisplayData (void)
		{
			//int number [7];
			for (int i = 0; i < 7; ++i)
			{
				number [i] = numz [i];
			}
			int n = 6;
			int ptr = 0, temp = 0;

				for ( int k = 0; k <= 6; ++k )
				{
					ptr = 0;

					while ( ptr < (n - k) )
					{
						if ( number [ptr] > number [ptr + 1] )
						{
							temp = number [ptr];
							number [ptr] = number [ptr + 1];
							number [ptr + 1] = temp;

						}
						++ptr;
					}
					
					
					String^ s1 = number [0]+",     "+ number [1]+",     "+ number [2]+
				",     "+ number [3]+",     "+ number [4]+",     "+ number [5]+
				",     "+ number [6]+ "\n";

					String^ s2 = s2 + s1;

				bble -> Text = s2;
				}
				//stck -> Text = Convert::ToString (number[0]+",  "+ number [1]+",  " + number [2]+",  "+number [3]+",  "+number [4]+",  "+number [5]+",  "+number [6]);
		}
	
private: System::Void close_Click(System::Object^  sender, System::EventArgs^  e) {

			 this -> Close ();
		 }
private: System::Void save_Click(System::Object^  sender, System::EventArgs^  e) {

			 for (int i = 0; i < 7; ++i)
			 {
				 numz [i] = number [i];
			 }
			 slabel -> Text = "Sorted STACK saved";
			 stck -> Text = Convert::ToString (numz[0]+",  "+ numz [1]+",  " + numz [2]+",  "+numz [3]+",  "+numz [4]+",  "+numz [5]+",  "+numz [6]);

		 }
};
}
