#pragma once
#include "MyForm1.h"

#include "gide.h"
namespace houses
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ оѕрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ textboxreliz;
	private: System::Windows::Forms::ToolStripTextBox^ textboxowners;
	private: System::Windows::Forms::ToolStripMenuItem^ выход»зѕрограммыToolStripMenuItem;
	private: System::Windows::Forms::Label^ labelname;
	private: System::Windows::Forms::Button^ buttonchange;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;














	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->оѕрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textboxreliz = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->textboxowners = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->выход»зѕрограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->labelname = (gcnew System::Windows::Forms::Label());
			this->buttonchange = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оѕрограммеToolStripMenuItem,
					this->выход»зѕрограммыToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(659, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// оѕрограммеToolStripMenuItem
			// 
			this->оѕрограммеToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->textboxreliz,
					this->textboxowners
			});
			this->оѕрограммеToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->оѕрограммеToolStripMenuItem->Name = L"оѕрограммеToolStripMenuItem";
			this->оѕрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оѕрограммеToolStripMenuItem->Text = L"ќ программе";
			// 
			// textboxreliz
			// 
			this->textboxreliz->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->textboxreliz->Name = L"textboxreliz";
			this->textboxreliz->ReadOnly = true;
			this->textboxreliz->Size = System::Drawing::Size(100, 23);
			this->textboxreliz->Text = L"√од релиза : 2023";
			// 
			// textboxowners
			// 
			this->textboxowners->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->textboxowners->Name = L"textboxowners";
			this->textboxowners->ReadOnly = true;
			this->textboxowners->Size = System::Drawing::Size(100, 23);
			this->textboxowners->Text = L"—оздатели.";
			this->textboxowners->ToolTipText = L"Ѕалдов  ирилл";
			// 
			// выход»зѕрограммыToolStripMenuItem
			// 
			this->выход»зѕрограммыToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->выход»зѕрограммыToolStripMenuItem->Name = L"выход»зѕрограммыToolStripMenuItem";
			this->выход»зѕрограммыToolStripMenuItem->Size = System::Drawing::Size(138, 20);
			this->выход»зѕрограммыToolStripMenuItem->Text = L"¬ыход из программы";
			this->выход»зѕрограммыToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выход»зѕрограммыToolStripMenuItem_Click);
			// 
			// labelname
			// 
			this->labelname->AutoSize = true;
			this->labelname->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelname->ForeColor = System::Drawing::Color::White;
			this->labelname->Location = System::Drawing::Point(93, 33);
			this->labelname->Name = L"labelname";
			this->labelname->Size = System::Drawing::Size(447, 36);
			this->labelname->TabIndex = 1;
			this->labelname->Text = L"ѕриложение подбора квартир";
			// 
			// buttonchange
			// 
			this->buttonchange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonchange->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonchange->ForeColor = System::Drawing::Color::White;
			this->buttonchange->Location = System::Drawing::Point(159, 177);
			this->buttonchange->Name = L"buttonchange";
			this->buttonchange->Size = System::Drawing::Size(321, 73);
			this->buttonchange->TabIndex = 2;
			this->buttonchange->Text = L"ѕерейти к выбору квартир";
			this->buttonchange->UseMnemonic = false;
			this->buttonchange->UseVisualStyleBackColor = false;
			this->buttonchange->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 269);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(259, 238);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(388, 269);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(271, 238);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(159, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(321, 65);
			this->button1->TabIndex = 5;
			this->button1->Text = L"»нструкци€ по использованию программы";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::buttonchange_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(659, 551);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->buttonchange);
			this->Controls->Add(this->labelname);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"»нтерфейс";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void выход»зѕрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonchange_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
