// Включаемые файлы
#include <iostream>
#include <fstream>
#include <string>

#include "MyForm1.h"
#include "network.h"

// Используемые имена
using namespace houses;
using namespace std;

int n = 3; // Количество слоев
int value = 100; // Количество квартир
float alpha = 0.08; // Скорость обучения
float betta = 0.017; // Момент
int layers[3] = { 10,6,1 }; // Состав слоев
float pred[100]; // Эталоны
float examples[100][10]; // Обучающие примеры
int prices[100]; // Цены
float answers[100]; // Ответы сети
int indexes[100]; // Индексы для сортировки

// Получение координат картинки
void MyForm1::changePicturePos(int i, int j)
{
	int x = 0;
	int y = 0;
	int scalar = 0;

	switch (i)
	{
	case 1:
		x = pictureBox1->Location.X;
		y = pictureBox1->Location.Y;
		scalar = j - i;
		pictureBox1->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 2:
		x = pictureBox2->Location.X;
		y = pictureBox2->Location.Y;
		scalar = j - i;
		pictureBox2->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 3:
		x = pictureBox3->Location.X;
		y = pictureBox3->Location.Y;
		scalar = j - i;
		pictureBox3->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 4:
		x = pictureBox4->Location.X;
		y = pictureBox4->Location.Y;
		scalar = j - i;
		pictureBox4->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 5:
		x = pictureBox5->Location.X;
		y = pictureBox5->Location.Y;
		scalar = j - i;
		pictureBox5->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 6:
		x = pictureBox6->Location.X;
		y = pictureBox6->Location.Y;
		scalar = j - i;
		pictureBox6->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 7:
		x = pictureBox7->Location.X;
		y = pictureBox7->Location.Y;
		scalar = j - i;
		pictureBox7->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 8:
		x = pictureBox8->Location.X;
		y = pictureBox8->Location.Y;
		scalar = j - i;
		pictureBox8->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 9:
		x = pictureBox9->Location.X;
		y = pictureBox9->Location.Y;
		scalar = j - i;
		pictureBox9->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 10:
		x = pictureBox10->Location.X;
		y = pictureBox10->Location.Y;
		scalar = j - i;
		pictureBox10->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 11:
		x = pictureBox11->Location.X;
		y = pictureBox11->Location.Y;
		scalar = j - i;
		pictureBox11->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 12:
		x = pictureBox12->Location.X;
		y = pictureBox12->Location.Y;
		scalar = j - i;
		pictureBox12->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 13:
		x = pictureBox13->Location.X;
		y = pictureBox13->Location.Y;
		scalar = j - i;
		pictureBox13->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 14:
		x = pictureBox14->Location.X;
		y = pictureBox14->Location.Y;
		scalar = j - i;
		pictureBox14->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 15:
		x = pictureBox15->Location.X;
		y = pictureBox15->Location.Y;
		scalar = j - i;
		pictureBox15->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 16:
		x = pictureBox16->Location.X;
		y = pictureBox16->Location.Y;
		scalar = j - i;
		pictureBox16->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 17:
		x = pictureBox17->Location.X;
		y = pictureBox17->Location.Y;
		scalar = j - i;
		pictureBox17->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 18:
		x = pictureBox18->Location.X;
		y = pictureBox18->Location.Y;
		scalar = j - i;
		pictureBox18->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 19:
		x = pictureBox19->Location.X;
		y = pictureBox19->Location.Y;
		scalar = j - i;
		pictureBox19->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 20:
		x = pictureBox20->Location.X;
		y = pictureBox20->Location.Y;
		scalar = j - i;
		pictureBox20->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 21:
		x = pictureBox21->Location.X;
		y = pictureBox21->Location.Y;
		scalar = j - i;
		pictureBox21->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 22:
		x = pictureBox22->Location.X;
		y = pictureBox22->Location.Y;
		scalar = j - i;
		pictureBox22->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 23:
		x = pictureBox23->Location.X;
		y = pictureBox23->Location.Y;
		scalar = j - i;
		pictureBox23->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 24:
		x = pictureBox24->Location.X;
		y = pictureBox24->Location.Y;
		scalar = j - i;
		pictureBox24->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 25:
		x = pictureBox25->Location.X;
		y = pictureBox25->Location.Y;
		scalar = j - i;
		pictureBox25->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 26:
		x = pictureBox26->Location.X;
		y = pictureBox26->Location.Y;
		scalar = j - i;
		pictureBox26->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 27:
		x = pictureBox27->Location.X;
		y = pictureBox27->Location.Y;
		scalar = j - i;
		pictureBox27->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 28:
		x = pictureBox28->Location.X;
		y = pictureBox28->Location.Y;
		scalar = j - i;
		pictureBox28->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 29:
		x = pictureBox29->Location.X;
		y = pictureBox29->Location.Y;
		scalar = j - i;
		pictureBox29->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 30:
		x = pictureBox30->Location.X;
		y = pictureBox30->Location.Y;
		scalar = j - i;
		pictureBox30->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 31:
		x = pictureBox31->Location.X;
		y = pictureBox31->Location.Y;
		scalar = j - i;
		pictureBox31->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 32:
		x = pictureBox32->Location.X;
		y = pictureBox32->Location.Y;
		scalar = j - i;
		pictureBox32->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 33:
		x = pictureBox33->Location.X;
		y = pictureBox33->Location.Y;
		scalar = j - i;
		pictureBox33->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 34:
		x = pictureBox34->Location.X;
		y = pictureBox34->Location.Y;
		scalar = j - i;
		pictureBox34->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 35:
		x = pictureBox35->Location.X;
		y = pictureBox35->Location.Y;
		scalar = j - i;
		pictureBox35->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 36:
		x = pictureBox36->Location.X;
		y = pictureBox36->Location.Y;
		scalar = j - i;
		pictureBox36->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 37:
		x = pictureBox37->Location.X;
		y = pictureBox37->Location.Y;
		scalar = j - i;
		pictureBox37->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 38:
		x = pictureBox38->Location.X;
		y = pictureBox38->Location.Y;
		scalar = j - i;
		pictureBox38->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 39:
		x = pictureBox39->Location.X;
		y = pictureBox39->Location.Y;
		scalar = j - i;
		pictureBox39->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 40:
		x = pictureBox40->Location.X;
		y = pictureBox40->Location.Y;
		scalar = j - i;
		pictureBox40->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 41:
		x = pictureBox41->Location.X;
		y = pictureBox41->Location.Y;
		scalar = j - i;
		pictureBox41->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 42:
		x = pictureBox42->Location.X;
		y = pictureBox42->Location.Y;
		scalar = j - i;
		pictureBox42->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 43:
		x = pictureBox43->Location.X;
		y = pictureBox43->Location.Y;
		scalar = j - i;
		pictureBox43->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 44:
		x = pictureBox44->Location.X;
		y = pictureBox44->Location.Y;
		scalar = j - i;
		pictureBox44->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 45:
		x = pictureBox45->Location.X;
		y = pictureBox45->Location.Y;
		scalar = j - i;
		pictureBox45->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 46:
		x = pictureBox46->Location.X;
		y = pictureBox46->Location.Y;
		scalar = j - i;
		pictureBox46->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 47:
		x = pictureBox47->Location.X;
		y = pictureBox47->Location.Y;
		scalar = j - i;
		pictureBox47->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 48:
		x = pictureBox48->Location.X;
		y = pictureBox48->Location.Y;
		scalar = j - i;
		pictureBox48->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 49:
		x = pictureBox49->Location.X;
		y = pictureBox49->Location.Y;
		scalar = j - i;
		pictureBox49->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 50:
		x = pictureBox50->Location.X;
		y = pictureBox50->Location.Y;
		scalar = j - i;
		pictureBox50->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 51:
		x = pictureBox51->Location.X;
		y = pictureBox51->Location.Y;
		scalar = j - i;
		pictureBox51->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 52:
		x = pictureBox52->Location.X;
		y = pictureBox52->Location.Y;
		scalar = j - i;
		pictureBox52->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 53:
		x = pictureBox53->Location.X;
		y = pictureBox53->Location.Y;
		scalar = j - i;
		pictureBox53->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 54:
		x = pictureBox54->Location.X;
		y = pictureBox54->Location.Y;
		scalar = j - i;
		pictureBox54->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 55:
		x = pictureBox55->Location.X;
		y = pictureBox55->Location.Y;
		scalar = j - i;
		pictureBox55->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 56:
		x = pictureBox56->Location.X;
		y = pictureBox56->Location.Y;
		scalar = j - i;
		pictureBox56->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 57:
		x = pictureBox57->Location.X;
		y = pictureBox57->Location.Y;
		scalar = j - i;
		pictureBox57->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 58:
		x = pictureBox58->Location.X;
		y = pictureBox58->Location.Y;
		scalar = j - i;
		pictureBox58->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 59:
		x = pictureBox59->Location.X;
		y = pictureBox59->Location.Y;
		scalar = j - i;
		pictureBox59->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 60:
		x = pictureBox60->Location.X;
		y = pictureBox60->Location.Y;
		scalar = j - i;
		pictureBox60->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 61:
		x = pictureBox61->Location.X;
		y = pictureBox61->Location.Y;
		scalar = j - i;
		pictureBox61->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 62:
		x = pictureBox62->Location.X;
		y = pictureBox62->Location.Y;
		scalar = j - i;
		pictureBox62->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 63:
		x = pictureBox63->Location.X;
		y = pictureBox63->Location.Y;
		scalar = j - i;
		pictureBox63->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 64:
		x = pictureBox64->Location.X;
		y = pictureBox64->Location.Y;
		scalar = j - i;
		pictureBox64->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 65:
		x = pictureBox65->Location.X;
		y = pictureBox65->Location.Y;
		scalar = j - i;
		pictureBox65->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 66:
		x = pictureBox66->Location.X;
		y = pictureBox66->Location.Y;
		scalar = j - i;
		pictureBox66->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 67:
		x = pictureBox67->Location.X;
		y = pictureBox67->Location.Y;
		scalar = j - i;
		pictureBox67->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 68:
		x = pictureBox68->Location.X;
		y = pictureBox68->Location.Y;
		scalar = j - i;
		pictureBox68->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 69:
		x = pictureBox69->Location.X;
		y = pictureBox69->Location.Y;
		scalar = j - i;
		pictureBox69->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 70:
		x = pictureBox70->Location.X;
		y = pictureBox70->Location.Y;
		scalar = j - i;
		pictureBox70->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 71:
		x = pictureBox71->Location.X;
		y = pictureBox71->Location.Y;
		scalar = j - i;
		pictureBox71->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 72:
		x = pictureBox72->Location.X;
		y = pictureBox72->Location.Y;
		scalar = j - i;
		pictureBox72->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 73:
		x = pictureBox73->Location.X;
		y = pictureBox73->Location.Y;
		scalar = j - i;
		pictureBox73->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 74:
		x = pictureBox74->Location.X;
		y = pictureBox74->Location.Y;
		scalar = j - i;
		pictureBox74->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 75:
		x = pictureBox75->Location.X;
		y = pictureBox75->Location.Y;
		scalar = j - i;
		pictureBox75->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 76:
		x = pictureBox76->Location.X;
		y = pictureBox76->Location.Y;
		scalar = j - i;
		pictureBox76->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 77:
		x = pictureBox77->Location.X;
		y = pictureBox77->Location.Y;
		scalar = j - i;
		pictureBox77->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 78:
		x = pictureBox78->Location.X;
		y = pictureBox78->Location.Y;
		scalar = j - i;
		pictureBox78->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 79:
		x = pictureBox79->Location.X;
		y = pictureBox79->Location.Y;
		scalar = j - i;
		pictureBox79->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 80:
		x = pictureBox80->Location.X;
		y = pictureBox80->Location.Y;
		scalar = j - i;
		pictureBox80->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 81:
		x = pictureBox81->Location.X;
		y = pictureBox81->Location.Y;
		scalar = j - i;
		pictureBox81->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 82:
		x = pictureBox82->Location.X;
		y = pictureBox82->Location.Y;
		scalar = j - i;
		pictureBox82->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 83:
		x = pictureBox83->Location.X;
		y = pictureBox83->Location.Y;
		scalar = j - i;
		pictureBox83->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 84:
		x = pictureBox84->Location.X;
		y = pictureBox84->Location.Y;
		scalar = j - i;
		pictureBox84->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 85:
		x = pictureBox85->Location.X;
		y = pictureBox85->Location.Y;
		scalar = j - i;
		pictureBox85->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 86:
		x = pictureBox86->Location.X;
		y = pictureBox86->Location.Y;
		scalar = j - i;
		pictureBox86->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 87:
		x = pictureBox87->Location.X;
		y = pictureBox87->Location.Y;
		scalar = j - i;
		pictureBox87->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 88:
		x = pictureBox88->Location.X;
		y = pictureBox88->Location.Y;
		scalar = j - i;
		pictureBox88->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 89:
		x = pictureBox89->Location.X;
		y = pictureBox89->Location.Y;
		scalar = j - i;
		pictureBox89->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 90:
		x = pictureBox90->Location.X;
		y = pictureBox90->Location.Y;
		scalar = j - i;
		pictureBox90->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 91:
		x = pictureBox91->Location.X;
		y = pictureBox91->Location.Y;
		scalar = j - i;
		pictureBox91->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 92:
		x = pictureBox92->Location.X;
		y = pictureBox92->Location.Y;
		scalar = j - i;
		pictureBox92->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 93:
		x = pictureBox93->Location.X;
		y = pictureBox93->Location.Y;
		scalar = j - i;
		pictureBox93->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 94:
		x = pictureBox94->Location.X;
		y = pictureBox94->Location.Y;
		scalar = j - i;
		pictureBox94->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 95:
		x = pictureBox95->Location.X;
		y = pictureBox95->Location.Y;
		scalar = j - i;
		pictureBox95->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 96:
		x = pictureBox96->Location.X;
		y = pictureBox96->Location.Y;
		scalar = j - i;
		pictureBox96->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 97:
		x = pictureBox97->Location.X;
		y = pictureBox97->Location.Y;
		scalar = j - i;
		pictureBox97->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 98:
		x = pictureBox98->Location.X;
		y = pictureBox98->Location.Y;
		scalar = j - i;
		pictureBox98->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 99:
		x = pictureBox99->Location.X;
		y = pictureBox99->Location.Y;
		scalar = j - i;
		pictureBox99->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	case 100:
		x = pictureBox100->Location.X;
		y = pictureBox100->Location.Y;
		scalar = j - i;
		pictureBox100->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	default:
		x = pictureBox1->Location.X;
		y = pictureBox1->Location.Y;
		scalar = 0;
		pictureBox1->Location = System::Drawing::Point(x, y + scalar * 174);
		break;
	}
}

System::Void houses::MyForm1::buttonexit2_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

System::Void houses::MyForm1::buttonclose_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	this->Hide();
	form->Show();
}

System::Void houses::MyForm1::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[0]] = 1;
}
System::Void houses::MyForm1::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[1]] = 1;
}
System::Void houses::MyForm1::checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[2]] = 1;
}
System::Void houses::MyForm1::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[3]] = 1;
}
System::Void houses::MyForm1::checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[4]] = 1;
}
System::Void houses::MyForm1::checkBox6_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[5]] = 1;
}
System::Void houses::MyForm1::checkBox7_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[6]] = 1;
}
System::Void houses::MyForm1::checkBox8_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[7]] = 1;
}
System::Void houses::MyForm1::checkBox9_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[8]] = 1;
}
System::Void houses::MyForm1::checkBox10_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[9]] = 1;
}
System::Void houses::MyForm1::checkBox11_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[10]] = 1;
}
System::Void houses::MyForm1::checkBox12_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[11]] = 1;
}
System::Void houses::MyForm1::checkBox13_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[12]] = 1;
}
System::Void houses::MyForm1::checkBox14_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[13]] = 1;
}
System::Void houses::MyForm1::checkBox15_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[14]] = 1;
}
System::Void houses::MyForm1::checkBox16_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[15]] = 1;
}
System::Void houses::MyForm1::checkBox17_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[16]] = 1;
}
System::Void houses::MyForm1::checkBox18_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[17]] = 1;
}
System::Void houses::MyForm1::checkBox19_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[18]] = 1;
}
System::Void houses::MyForm1::checkBox20_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[19]] = 1;
}
System::Void houses::MyForm1::checkBox21_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[20]] = 1;
}
System::Void houses::MyForm1::checkBox22_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[21]] = 1;
}
System::Void houses::MyForm1::checkBox23_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[22]] = 1;
}
System::Void houses::MyForm1::checkBox24_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[23]] = 1;
}
System::Void houses::MyForm1::checkBox25_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[24]] = 1;
}
System::Void houses::MyForm1::checkBox26_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[25]] = 1;
}
System::Void houses::MyForm1::checkBox27_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[26]] = 1;
}
System::Void houses::MyForm1::checkBox28_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[27]] = 1;
}
System::Void houses::MyForm1::checkBox29_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[28]] = 1;
}
System::Void houses::MyForm1::checkBox30_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[29]] = 1;
}
System::Void houses::MyForm1::checkBox31_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[30]] = 1;
}
System::Void houses::MyForm1::checkBox32_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[31]] = 1;
}
System::Void houses::MyForm1::checkBox33_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[32]] = 1;
}
System::Void houses::MyForm1::checkBox34_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[33]] = 1;
}
System::Void houses::MyForm1::checkBox35_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[34]] = 1;
}
System::Void houses::MyForm1::checkBox36_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[35]] = 1;
}
System::Void houses::MyForm1::checkBox37_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[36]] = 1;
}
System::Void houses::MyForm1::checkBox38_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[37]] = 1;
}
System::Void houses::MyForm1::checkBox39_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[38]] = 1;
}
System::Void houses::MyForm1::checkBox40_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[39]] = 1;
}
System::Void houses::MyForm1::checkBox41_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[40]] = 1;
}
System::Void houses::MyForm1::checkBox42_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[41]] = 1;
}
System::Void houses::MyForm1::checkBox43_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[42]] = 1;
}
System::Void houses::MyForm1::checkBox44_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[43]] = 1;
}
System::Void houses::MyForm1::checkBox45_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[44]] = 1;
}
System::Void houses::MyForm1::checkBox46_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[45]] = 1;
}
System::Void houses::MyForm1::checkBox47_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[46]] = 1;
}
System::Void houses::MyForm1::checkBox48_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[47]] = 1;
}
System::Void houses::MyForm1::checkBox49_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[48]] = 1;
}
System::Void houses::MyForm1::checkBox50_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[49]] = 1;
}
System::Void houses::MyForm1::checkBox51_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[50]] = 1;
}
System::Void houses::MyForm1::checkBox52_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[51]] = 1;
}
System::Void houses::MyForm1::checkBox53_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[52]] = 1;
}
System::Void houses::MyForm1::checkBox54_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[53]] = 1;
}
System::Void houses::MyForm1::checkBox55_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[54]] = 1;
}
System::Void houses::MyForm1::checkBox56_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[55]] = 1;
}
System::Void houses::MyForm1::checkBox57_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[56]] = 1;
}
System::Void houses::MyForm1::checkBox58_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[57]] = 1;
}
System::Void houses::MyForm1::checkBox59_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[58]] = 1;
}
System::Void houses::MyForm1::checkBox60_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[59]] = 1;
}
System::Void houses::MyForm1::checkBox61_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[60]] = 1;
}
System::Void houses::MyForm1::checkBox62_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[61]] = 1;
}
System::Void houses::MyForm1::checkBox63_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[62]] = 1;
}
System::Void houses::MyForm1::checkBox64_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[63]] = 1;
}
System::Void houses::MyForm1::checkBox65_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[64]] = 1;
}
System::Void houses::MyForm1::checkBox66_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[65]] = 1;
}
System::Void houses::MyForm1::checkBox67_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[66]] = 1;
}
System::Void houses::MyForm1::checkBox68_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[67]] = 1;
}
System::Void houses::MyForm1::checkBox69_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[68]] = 1;
}
System::Void houses::MyForm1::checkBox70_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[69]] = 1;
}
System::Void houses::MyForm1::checkBox71_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[70]] = 1;
}
System::Void houses::MyForm1::checkBox72_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[71]] = 1;
}
System::Void houses::MyForm1::checkBox73_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[72]] = 1;
}
System::Void houses::MyForm1::checkBox74_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[73]] = 1;
}
System::Void houses::MyForm1::checkBox75_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[74]] = 1;
}
System::Void houses::MyForm1::checkBox76_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[75]] = 1;
}
System::Void houses::MyForm1::checkBox77_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[76]] = 1;
}
System::Void houses::MyForm1::checkBox78_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[77]] = 1;
}
System::Void houses::MyForm1::checkBox79_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[78]] = 1;
}
System::Void houses::MyForm1::checkBox80_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[79]] = 1;
}
System::Void houses::MyForm1::checkBox81_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[80]] = 1;
}
System::Void houses::MyForm1::checkBox82_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[81]] = 1;
}
System::Void houses::MyForm1::checkBox83_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[82]] = 1;
}
System::Void houses::MyForm1::checkBox84_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[83]] = 1;
}
System::Void houses::MyForm1::checkBox85_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[84]] = 1;
}
System::Void houses::MyForm1::checkBox86_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[85]] = 1;
}
System::Void houses::MyForm1::checkBox87_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[86]] = 1;
}
System::Void houses::MyForm1::checkBox88_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[87]] = 1;
}
System::Void houses::MyForm1::checkBox89_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[88]] = 1;
}
System::Void houses::MyForm1::checkBox90_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[89]] = 1;
}
System::Void houses::MyForm1::checkBox91_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[90]] = 1;
}
System::Void houses::MyForm1::checkBox92_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[91]] = 1;
}
System::Void houses::MyForm1::checkBox93_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[92]] = 1;
}
System::Void houses::MyForm1::checkBox94_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[93]] = 1;
}
System::Void houses::MyForm1::checkBox95_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[94]] = 1;
}
System::Void houses::MyForm1::checkBox96_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[95]] = 1;
}
System::Void houses::MyForm1::checkBox97_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[96]] = 1;
}
System::Void houses::MyForm1::checkBox98_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[97]] = 1;
}
System::Void houses::MyForm1::checkBox99_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[98]] = 1;
}
System::Void houses::MyForm1::checkBox100_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	pred[indexes[99]] = 1;
}

System::Void houses::MyForm1::MyForm1_Load(System::Object^ sender, System::EventArgs^ e)
{
	// Изначальное заполнение индексов и эталонов
	for (int i = 0; i < 100; i++)
	{
		indexes[i] = i;
		pred[i] = 0.5;
	}

	// Загрузка данных из файла
	ifstream data_file;
	data_file.open("data.txt");
	for (int i = 0; i < value; i++)
	{
		for (int j = 0; j < layers[0]; j++)
			data_file >> examples[i][j];
	}

	// Загрузка цен из файла
	ifstream price_file;
	price_file.open("price.txt");
	for (int i = 0; i < 100; i++)
	{
		price_file >> prices[i];
	}
}

System::Void houses::MyForm1::button1_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	// Инициализация сети
	nueral_network net;
	net.init(layers, n, alpha, betta);

	// Переобучение сети
	for (int i = 0; i < value; i++)
	{
		net.backPropagetion(examples[indexes[i]], &pred[indexes[i]]);
		net.learn();
	}

	// Получение соотношения цена / качества
	for (int i = 0; i < value; i++)
	{
		net.forwordPropagetion(answers[i], examples[indexes[i]]);
		answers[i] /= prices[indexes[i]];
	}

	// Сортировка индексов на основе ответов
	// Метод "Простой Вставки"
	for (int i = value - 1; i >= 0; i--)
	{
		for (int j = i + 1; j < value; j++)
		{
			// Проверка
			if (answers[i] <= answers[j])
				break;

			// Замена
			float answer_cur = answers[j];
			int index_cur = indexes[j];

			answers[j] = answers[i];
			indexes[j] = indexes[i];

			answers[i] = answer_cur;
			indexes[i] = index_cur;
		}
	}
	// Перестановки в форме
	for (int i = 0; i < value; i++)
	{
		String^ data_label = Convert::ToString(Controls["label" + Convert::ToString(i * 2 + 1)]->Text);
		String^ price_label = Convert::ToString(Controls["label" + Convert::ToString((i + 1) * 2)]->Text);

		Controls["label" + Convert::ToString(i * 2 + 1)]->Text = Controls["label" + Convert::ToString(indexes[i] * 2 + 1)]->Text;
		Controls["label" + Convert::ToString((i + 1) * 2)]->Text = Controls["label" + Convert::ToString((indexes[i] + 1) * 2)]->Text;

		Controls["label" + Convert::ToString(indexes[i] * 2 + 1)]->Text = data_label;
		Controls["label" + Convert::ToString((indexes[i] + 1) * 2)]->Text = price_label;
		changePicturePos(i+1, indexes[i]+1);
	}

	// Очистка чекбоксов
	checkBox1->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox2->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox3->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox4->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox5->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox6->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox7->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox8->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox9->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox10->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox11->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox12->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox13->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox14->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox15->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox16->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox17->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox18->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox19->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox20->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox21->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox22->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox23->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox24->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox25->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox26->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox27->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox28->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox29->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox30->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox31->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox32->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox33->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox34->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox35->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox36->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox37->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox38->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox39->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox40->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox41->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox42->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox43->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox44->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox45->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox46->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox47->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox48->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox49->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox50->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox51->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox52->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox53->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox54->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox55->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox56->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox57->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox58->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox59->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox60->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox61->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox62->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox63->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox64->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox65->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox66->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox67->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox68->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox69->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox70->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox71->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox72->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox73->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox74->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox75->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox76->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox77->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox78->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox79->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox80->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox81->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox82->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox83->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox84->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox85->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox86->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox87->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox88->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox89->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox90->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox91->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox92->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox93->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox94->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox95->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox96->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox97->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox98->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox99->CheckState = System::Windows::Forms::CheckState::Unchecked;
	checkBox100->CheckState = System::Windows::Forms::CheckState::Unchecked;
}