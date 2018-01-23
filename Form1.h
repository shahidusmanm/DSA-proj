#pragma once
//#include "Form2.h"

namespace GUIStacks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
	
		static int top, max, check; 
	
	
	private: System::Windows::Forms::Button^  bubble;
	private: System::Windows::Forms::Button^  insertion;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;

	public: 

	public: 

			 static int *num = new int [7];

		Form1(void)
		{
			InitializeComponent();
			InitializeUserVars ();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  input;
	private: System::Windows::Forms::Button^  push;
	private: System::Windows::Forms::Button^  pop;
	private: System::Windows::Forms::TextBox^  process;




	protected: 




	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  reset;
	private: System::Windows::Forms::TextBox^  stack;
	private: System::Windows::Forms::Label^  label3;








	public:
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->push = (gcnew System::Windows::Forms::Button());
			this->pop = (gcnew System::Windows::Forms::Button());
			this->process = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->stack = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->bubble = (gcnew System::Windows::Forms::Button());
			this->insertion = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"INPUT";
			// 
			// input
			// 
			this->input->Location = System::Drawing::Point(12, 53);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(260, 20);
			this->input->TabIndex = 1;
			// 
			// push
			// 
			this->push->Location = System::Drawing::Point(12, 88);
			this->push->Name = L"push";
			this->push->Size = System::Drawing::Size(75, 23);
			this->push->TabIndex = 2;
			this->push->Text = L"PUSH";
			this->push->UseVisualStyleBackColor = true;
			this->push->Click += gcnew System::EventHandler(this, &Form1::push_Click);
			// 
			// pop
			// 
			this->pop->Location = System::Drawing::Point(102, 88);
			this->pop->Name = L"pop";
			this->pop->Size = System::Drawing::Size(75, 23);
			this->pop->TabIndex = 5;
			this->pop->Text = L"POP";
			this->pop->UseVisualStyleBackColor = true;
			this->pop->Click += gcnew System::EventHandler(this, &Form1::pop_Click);
			// 
			// process
			// 
			this->process->Location = System::Drawing::Point(12, 147);
			this->process->Name = L"process";
			this->process->Size = System::Drawing::Size(260, 20);
			this->process->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"PROCESS";
			// 
			// reset
			// 
			this->reset->Location = System::Drawing::Point(197, 88);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(75, 23);
			this->reset->TabIndex = 6;
			this->reset->Text = L"RESET";
			this->reset->UseVisualStyleBackColor = true;
			this->reset->Click += gcnew System::EventHandler(this, &Form1::reset_Click);
			// 
			// stack
			// 
			this->stack->Location = System::Drawing::Point(12, 195);
			this->stack->Name = L"stack";
			this->stack->Size = System::Drawing::Size(260, 20);
			this->stack->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"STACK";
			// 
			// bubble
			// 
			this->bubble->Location = System::Drawing::Point(12, 226);
			this->bubble->Name = L"bubble";
			this->bubble->Size = System::Drawing::Size(123, 23);
			this->bubble->TabIndex = 9;
			this->bubble->Text = L"Bubble Sort";
			this->bubble->UseVisualStyleBackColor = true;
			this->bubble->Click += gcnew System::EventHandler(this, &Form1::bubble_Click);
			// 
			// insertion
			// 
			this->insertion->Location = System::Drawing::Point(149, 226);
			this->insertion->Name = L"insertion";
			this->insertion->Size = System::Drawing::Size(123, 23);
			this->insertion->TabIndex = 10;
			this->insertion->Text = L"Insertion Sort";
			this->insertion->UseVisualStyleBackColor = true;
			this->insertion->Click += gcnew System::EventHandler(this, &Form1::insertion_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(110, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"STACKS";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(73, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"About";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 288);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->insertion);
			this->Controls->Add(this->bubble);
			this->Controls->Add(this->stack);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->reset);
			this->Controls->Add(this->pop);
			this->Controls->Add(this->process);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->push);
			this->Controls->Add(this->input);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"STACKS - EE1054 - EE1057";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void InitializeUserVars ()
		{
			top = 7;
			max = 7;
			check = 0;

			for (int i = 0; i < 7; ++i)
			{
				num [i] = 0;
			}
			stack -> Text = Convert::ToString (num[0]+",  "+ num [1]+",  " + num [2]+",  "+num [3]+",  "+num [4]+",  "+num [5]+",  "+num [6]);
		}
#pragma endregion

		//static int top = 7, max = 7, check = 0; 
		//static int *num = new int [7];

public: System::Void push_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 if ( top <= 0 )
			 {
					//input->Text = Convert::ToString("ERROR: STACK OVERFLOW");
					process->Text = Convert::ToString("ERROR: STACK OVERFLOW");
			 }
			 else {
					--top;
					num [top] = Convert::ToInt32 ( input -> Text);
					process ->Text = Convert::ToString("YOU PUSHED: " +num [top]);
					
			}
			 stack -> Text = Convert::ToString (num[0]+",  "+ num [1]+",  " + num [2]+",  "+num [3]+",  "+num [4]+",  "+num [5]+",  "+num [6]);
			 check = 1;
			 input -> Text = "";
		 }
public: System::Void reset_Click(System::Object^  sender, System::EventArgs^  e) {

			 top = 7;
			 for (int i = 0; i < 7; ++i)
			 {
				 num [i] = 0;
			 }
			 input -> Text = " ";
			 process ->Text = " ";
			 stack -> Text = Convert::ToString (num[0]+",  "+ num [1]+",  " + num [2]+",  "+num [3]+",  "+num [4]+",  "+num [5]+",  "+num [6]);
			 check = 2;

		 }
public: System::Void pop_Click(System::Object^  sender, System::EventArgs^  e) {
			/* if (check == 1)
				++top;
			 else if (check == 2 )
			 top = top + 2;*/

			 if (top == 7)
			 {
				 //input->Text = Convert::ToString("ERROR: STACK UNDERFLOW");
				 process->Text = Convert::ToString("ERROR: STACK UNDERFLOW");
				 
			 }

			 else 
			 {
				 process ->Text = Convert::ToString("YOU POPPED: " +num [top]);
				 num [top] = 0;
				 ++top;
			 }

			 
		 stack -> Text = Convert::ToString (num[0]+",  "+ num [1]+",  " + num [2]+",  "+num [3]+",  "+num [4]+",  "+num [5]+",  "+num [6]);
		 check = 0;
		 }


public: System::Void bubble_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Form2^ bSort = gcnew Form2 (num, stack);
			 bSort -> Show();
			 stack -> Text = Convert::ToString (num[0]+",  "+ num [1]+",  " + num [2]+",  "+num [3]+",  "+num [4]+",  "+num [5]+",  "+num [6]);
		}


private: System::Void insertion_Click(System::Object^  sender, System::EventArgs^  e) {

			 Form3^ iSort = gcnew Form3 (num, stack);
			 iSort -> Show ();
		 }


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 Form4^ about = gcnew Form4 ();
			 about -> Show ();
		 }
};
}