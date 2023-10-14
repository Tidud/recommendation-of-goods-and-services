#pragma once
#include "MyForm.h"
namespace houses {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для gide
	/// </summary>
	public ref class gide : public System::Windows::Forms::Form
	{
	public:
		gide(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~gide()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelgide;
	private: System::Windows::Forms::Button^ buttonclose2;
	private: System::Windows::Forms::Button^ buttonexit2;



	protected:

	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gide::typeid));
			this->labelgide = (gcnew System::Windows::Forms::Label());
			this->buttonclose2 = (gcnew System::Windows::Forms::Button());
			this->buttonexit2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelgide
			// 
			this->labelgide->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelgide->ForeColor = System::Drawing::Color::White;
			this->labelgide->Location = System::Drawing::Point(89, 91);
			this->labelgide->Name = L"labelgide";
			this->labelgide->Size = System::Drawing::Size(660, 241);
			this->labelgide->TabIndex = 0;
			this->labelgide->Text = resources->GetString(L"labelgide.Text");
			// 
			// buttonclose2
			// 
			this->buttonclose2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonclose2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->buttonclose2->Location = System::Drawing::Point(3, 2);
			this->buttonclose2->Name = L"buttonclose2";
			this->buttonclose2->Size = System::Drawing::Size(75, 23);
			this->buttonclose2->TabIndex = 1;
			this->buttonclose2->Text = L"Назад";
			this->buttonclose2->UseVisualStyleBackColor = false;
			this->buttonclose2->Click += gcnew System::EventHandler(this, &gide::buttonclose2_Click);
			// 
			// buttonexit2
			// 
			this->buttonexit2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->buttonexit2->ForeColor = System::Drawing::Color::White;
			this->buttonexit2->Location = System::Drawing::Point(84, 2);
			this->buttonexit2->Name = L"buttonexit2";
			this->buttonexit2->Size = System::Drawing::Size(125, 23);
			this->buttonexit2->TabIndex = 2;
			this->buttonexit2->Text = L"Выйти из программы";
			this->buttonexit2->UseVisualStyleBackColor = false;
			this->buttonexit2->Click += gcnew System::EventHandler(this, &gide::buttonexit2_Click);
			// 
			// gide
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(872, 407);
			this->Controls->Add(this->buttonexit2);
			this->Controls->Add(this->buttonclose2);
			this->Controls->Add(this->labelgide);
			this->Name = L"gide";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Инструкция";
			this->ResumeLayout(false);

		}
#pragma endregion




	private: System::Void buttonexit2_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void buttonclose2_Click(System::Object^ sender, System::EventArgs^ e);

	};
}