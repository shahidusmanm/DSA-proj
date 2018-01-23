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
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		int *numbr;
		static int *iarr = new int [8];
	private: System::Windows::Forms::Button^  save;
	private: System::Windows::Forms::Button^  close;
	private: System::Windows::Forms::Label^  savelabel;
	public: 

	public: 

	public: System::Windows::Forms::TextBox^  stk;
		
		Form3(int *n, System::Windows::Forms::TextBox^ st)
		{
			stk = st;
			numbr = n;
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
		~Form3()
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
			this->save = (gcnew System::Windows::Forms::Button());
			this->close = (gcnew System::Windows::Forms::Button());
			this->savelabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bble
			// 
			this->bble->AutoSize = true;
			this->bble->Location = System::Drawing::Point(60, 63);
			this->bble->Name = L"bble";
			this->bble->Size = System::Drawing::Size(94, 13);
			this->bble->TabIndex = 0;
			this->bble->Text = L"Form3 WELCOME";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Insertion Sorted Stack";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// save
			// 
			this->save->Location = System::Drawing::Point(53, 203);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(75, 23);
			this->save->TabIndex = 2;
			this->save->Text = L"Save";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &Form3::save_Click);
			// 
			// close
			// 
			this->close->Location = System::Drawing::Point(159, 203);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(75, 23);
			this->close->TabIndex = 3;
			this->close->Text = L"Close";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &Form3::close_Click);
			// 
			// savelabel
			// 
			this->savelabel->AutoSize = true;
			this->savelabel->Location = System::Drawing::Point(84, 187);
			this->savelabel->Name = L"savelabel";
			this->savelabel->Size = System::Drawing::Size(0, 13);
			this->savelabel->TabIndex = 4;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->savelabel);
			this->Controls->Add(this->close);
			this->Controls->Add(this->save);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bble);
			this->DoubleBuffered = true;
			this->Name = L"Form3";
			this->Text = L"Insertion Sort";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		void DisplayData (void)
		{
			for (int i = 0; i < 7; ++i)
			{
				iarr [i+1] = numbr [i];
			}

			iarr [0] = -1;
			int temp, ptr;

			for (int k = 1; k < 8; ++k)
			{
				temp = iarr [k];
				ptr = k - 1;

				while (temp < iarr [ptr])
				{
					iarr [ptr + 1] = iarr [ptr];
					ptr = ptr - 1;
				}
				iarr [ptr + 1] = temp;
				//Displaying in Iterations
				String^ s1 = iarr [1]+",     "+ iarr [2]+
							",     "+ iarr [3]+",     "+ iarr [4]+",     "+ iarr [5]+
							",     "+ iarr [6]+",     "+iarr [7]+ "\n";
				String^ s2 = s2 + s1;
				bble -> Text = s2;
		
			}
			//stk -> Text = Convert::ToString (iarr [1]+",  " + iarr [2]+",  "+iarr [3]+",  "+iarr [4]+",  "+iarr [5]+",  "+iarr [6]+",  "+iarr [7]);
			
		}
	

private: System::Void close_Click(System::Object^  sender, System::EventArgs^  e) {

			 this -> Close ();
		 }

private: System::Void save_Click(System::Object^  sender, System::EventArgs^  e) {

			for (int i = 0; i < 7; ++i)
			{
				numbr [i] = iarr [i+1];
			}
			stk -> Text = Convert::ToString (numbr [0]+",  " + numbr [1]+",  "+numbr [2]+",  "+numbr [3]+",  "+numbr [4]+",  "+numbr [5]+",  "+numbr [6]);
			savelabel -> Text = "Sorted STACK saved";

		 }
};
}
