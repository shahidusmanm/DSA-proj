#pragma once

namespace GUIStacks {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form4
	/// </summary>
	public ref class Form4 : public System::Windows::Forms::Form
	{
	public:
		Form4(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			DisplayAbout ();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  about;
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
			this->about = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// about
			// 
			this->about->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->about->AutoSize = true;
			this->about->Location = System::Drawing::Point(33, 79);
			this->about->Name = L"about";
			this->about->Size = System::Drawing::Size(35, 13);
			this->about->TabIndex = 0;
			this->about->Text = L"label1";
			this->about->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->about);
			this->Name = L"Form4";
			this->Text = L"About";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		void DisplayAbout ()
		{
			about -> Text = "Course: Data Structures and Algorithms CS250 \n Lab 6: Stacks with Graphical Interface (GUI) \n \n \n Designed by: \n Faizan Ali Khan EE-1054 \n Muhammad Usman Shahid EE-1057 \n";
							
		}
	};
}
