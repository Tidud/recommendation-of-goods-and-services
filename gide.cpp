#include "gide.h"

System::Void houses::gide::buttonexit2_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void houses::gide::buttonclose2_Click(System::Object^ sender, System::EventArgs^ e)
{
    MyForm^ form = gcnew MyForm();
    this->Hide();
    form->Show();
}
