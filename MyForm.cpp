#include "MyForm.h"

System::Void houses::MyForm::âûõîäÈçÏðîãðàììûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void houses::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
		MyForm1^ form = gcnew MyForm1();
		this->Hide();
		form->Show();	
}

System::Void houses::MyForm::buttonchange_Click(System::Object^ sender, System::EventArgs^ e)
{
	gide^ form = gcnew gide();
	this->Hide();
	form->Show();

	

}
