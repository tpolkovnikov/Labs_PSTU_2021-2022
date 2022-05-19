#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[MTAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	calculator::MyForm form;
	Application::Run(% form);
}

// =
System::Void calculator::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	double first_x = 0, second_x = 0;
	double first_y = 0, second_y = 0;
	double first_z = 0, second_z = 0;
	double first_a = 0, second_a = 0;
	double first_b = 0, second_b = 0;
	double first_c = 0, second_c = 0;
	double first_d = 0, second_d = 0;
	double first_k = 0, second_k = 0;

	// x
	if (textBox26->Text != "") {
		first_x = (Convert::ToDouble(textBox26->Text));
	}
	else {
		first_x = 0;
	}
	if (textBox16->Text != "") {
		second_x = (Convert::ToDouble(textBox16->Text));
	}
	else {
		second_x = 0;
	}
	// y
	if (textBox25->Text != "") {
		first_y = (Convert::ToDouble(textBox25->Text));
	}
	else {
		first_y = 0;
	}
	if (textBox15->Text != "") {
		second_y = (Convert::ToDouble(textBox15->Text));
	}
	else {
		second_y = 0;
	}
	// z
	if (textBox4->Text != "") {
		first_z = (Convert::ToDouble(textBox4->Text));
	}
	else {
		first_z = 0;
	}
	if (textBox13->Text != "") {
		second_z = (Convert::ToDouble(textBox13->Text));
	}
	else {
		second_z = 0;
	}
	// a
	if (textBox14->Text != "") {
		first_a = (Convert::ToDouble(textBox14->Text));
	}
	else {
		first_a = 0;
	}
	if (textBox3->Text != "" ) {
		second_a = (Convert::ToDouble(textBox3->Text));
	}
	else {
		second_a = 0;
	}
	// b
	if (textBox5->Text != "") {
		first_b = (Convert::ToDouble(textBox5->Text));
	}
	else {
		first_b = 0;
	}
	if (textBox12->Text != "") {
		second_b = (Convert::ToDouble(textBox12->Text));
	}
	else {
		second_b = 0;
	}
	// c
	if (textBox7->Text != "") {
		first_c = (Convert::ToDouble(textBox7->Text));
	}
	else {
		first_c = 0;
	}
	if (textBox10->Text != "") {
		second_c = (Convert::ToDouble(textBox10->Text));
	}
	else {
		second_c = 0;
	}
	// d
	if (textBox8->Text != "") {
		first_d = (Convert::ToDouble(textBox8->Text));
	}
	else {
		first_d = 0;
	}
	if (textBox9->Text != "") {
		second_d = (Convert::ToDouble(textBox9->Text));
	}
	else {
		second_d = 0;
	}
	// k
	if (textBox6->Text != "") {
		first_k = (Convert::ToDouble(textBox6->Text));
	}
	else {
		first_k = 0;
	}
	if (textBox11->Text != "") {
		second_k = (Convert::ToDouble(textBox11->Text));
	}
	else {
		second_k = 0;
	}

	switch (Convert::ToChar(comboBox1->Text)){
	case '+':
		textBox24->Text = Convert::ToString(first_x + second_x);
		textBox23->Text = Convert::ToString(first_y + second_y);
		textBox21->Text = Convert::ToString(first_z + second_z);
		textBox22->Text = Convert::ToString(first_a + second_a);
		textBox20->Text = Convert::ToString(first_b + second_b);
		textBox18->Text = Convert::ToString(first_c + second_c);
		textBox17->Text = Convert::ToString(first_d + second_d);
		textBox19->Text = Convert::ToString(first_k + second_k);
		break;
	case '-':
		textBox24->Text = Convert::ToString(first_x - second_x);
		textBox23->Text = Convert::ToString(first_y - second_y);
		textBox21->Text = Convert::ToString(first_z - second_z);
		textBox22->Text = Convert::ToString(first_a - second_a);
		textBox20->Text = Convert::ToString(first_b - second_b);
		textBox18->Text = Convert::ToString(first_c - second_c);
		textBox17->Text = Convert::ToString(first_d - second_d);
		textBox19->Text = Convert::ToString(first_k - second_k);
		break;
	case '*':
		textBox24->Text = Convert::ToString(first_x * second_x);
		textBox23->Text = Convert::ToString(first_y * second_y);
		textBox21->Text = Convert::ToString(first_z * second_z);
		textBox22->Text = Convert::ToString(first_a * second_a);
		textBox20->Text = Convert::ToString(first_b * second_b);
		textBox18->Text = Convert::ToString(first_c * second_c);
		textBox17->Text = Convert::ToString(first_d * second_d);
		textBox19->Text = Convert::ToString(first_k * second_k);
		break;
	case '/':
		textBox24->Text = Convert::ToString(first_x / second_x);
		textBox23->Text = Convert::ToString(first_y / second_y);
		textBox21->Text = Convert::ToString(first_z / second_z);
		textBox22->Text = Convert::ToString(first_a / second_a);
		textBox20->Text = Convert::ToString(first_b / second_b);
		textBox18->Text = Convert::ToString(first_c / second_c);
		textBox17->Text = Convert::ToString(first_d / second_d);
		textBox19->Text = Convert::ToString(first_k / second_k);
		break;
	}
	return System::Void();
}
// Clear
System::Void calculator::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	textBox10->Clear();
	textBox11->Clear();
	textBox12->Clear();
	textBox13->Clear();
	textBox14->Clear();
	textBox15->Clear();
	textBox16->Clear();
	textBox17->Clear();
	textBox18->Clear();
	textBox19->Clear();
	textBox20->Clear();
	textBox21->Clear();
	textBox22->Clear();
	textBox23->Clear();
	textBox24->Clear();
	textBox25->Clear();
	textBox26->Clear();
	textBox3->Clear();
	textBox4->Clear();
	textBox5->Clear();
	textBox6->Clear();
	textBox7->Clear();
	textBox8->Clear();
	textBox9->Clear();
	return System::Void();
}
