#pragma once
#include <string>
#include <iostream>
#include <cmath>

using std::endl;

namespace CarSimulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	double RPM;
	double BHP;
	double Torque;
	double Weight = 0;
	double VehicalHeight = 0;
	double VehicalWidth;
	double DragCoefficent = 0.36;
	double AirDensity = 1.225;
	double Watts;
	double TopSpeed;
	double DragArea;
	double coefficientOfRollingResistance = 0.01;
	double rollingResistance;
	double totalResistance;
	double normalForce;
	double PowerToWeight;
	double Acceleration;
	double ZeroToSixty;
	double TireGripCoefficient = 1;
	double fuelEnergyContent;
	double sfc;
	double MPG;
	double WheelBase;
	double SteeringAngle = 35;
	double Velocity;
	double LateralG;
	double BrakingForce = 14;
	double Decleration;
	double TimeToStop;
	double DistanceToStop;
	bool Summer = true;
	double Gravity = 9.80665;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class CarSimulator : public System::Windows::Forms::Form
	{
	public:
		CarSimulator(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CarSimulator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ BHP_Label;
	protected:
	private: System::Windows::Forms::TextBox^ BHP_TextBox;
	private: System::Windows::Forms::Label^ Torque_Label;
	private: System::Windows::Forms::TextBox^ Torque_TextBox;
	private: System::Windows::Forms::TextBox^ RPM_TextBox;
	private: System::Windows::Forms::Label^ RPM_Label;
	private: System::Windows::Forms::Button^ Calculate_Button;
	private: System::Windows::Forms::Label^ VehicalWeight_Label;
	private: System::Windows::Forms::TextBox^ VehicalWeight_TextBox;
	private: System::Windows::Forms::Label^ VehicalHeight_Label;
	private: System::Windows::Forms::TextBox^ VehicalHeight_TextBox;
	private: System::Windows::Forms::Label^ VehicalWidth_Label;
	private: System::Windows::Forms::TextBox^ VehicalWidth_TextBox;
	private: System::Windows::Forms::Panel^ AssumedInformation_Panel;
	private: System::Windows::Forms::Panel^ Results_Panel;
	private: System::Windows::Forms::RichTextBox^ Results_RichTextBox;
	private: System::Windows::Forms::TextBox^ RollingResistance_TextBox;
	private: System::Windows::Forms::Label^ RollingResistance_Label;
	private: System::Windows::Forms::Label^ Slash_label;
	private: System::Windows::Forms::Label^ DragCoefficient_Label;
	private: System::Windows::Forms::TextBox^ AirDensity_TextBox;
	private: System::Windows::Forms::Label^ AirDensity_Label;
	private: System::Windows::Forms::TextBox^ TopSpeed_TextBox;
	private: System::Windows::Forms::TextBox^ DragCoefficient_TextBox;
	private: System::Windows::Forms::Label^ TopSpeed_Label;
	private: System::Windows::Forms::Label^ Slash_Label2;
	private: System::Windows::Forms::Label^ FrontalArea_Label;
	private: System::Windows::Forms::TextBox^ FrontalArea_TextBox;
	private: System::Windows::Forms::Panel^ TireGripInfo_Panel;
	private: System::Windows::Forms::Label^ TireGripInfo_Label;
	private: System::Windows::Forms::TextBox^ TireGrip_TextBox;
	private: System::Windows::Forms::Label^ TireGrip_Label;
	private: System::Windows::Forms::Label^ TireGripInfo_Label2;
	private: System::Windows::Forms::Label^ WheelBase_Label;
	private: System::Windows::Forms::TextBox^ WheelBase_TextBox;
	private: System::Windows::Forms::Label^ TireGripInfo_Label3;
	private: System::Windows::Forms::TextBox^ MPG_TextBox;
	private: System::Windows::Forms::Label^ MPG_Label;
	private: System::Windows::Forms::Label^ ZeroToSixty_Label;
	private: System::Windows::Forms::TextBox^ ZeroToSixity_TextBox;
	private: System::Windows::Forms::TextBox^ LateralG_TextBox;
	private: System::Windows::Forms::Label^ LateralG_Label;
	private: System::Windows::Forms::Panel^ BrakingForce_Panel;

	private: System::Windows::Forms::TextBox^ BrakingForce_TextBox;
	private: System::Windows::Forms::Label^ BrakingForce_Label;
	private: System::Windows::Forms::Label^ BrakingForceInfo_Label2;

	private: System::Windows::Forms::Label^ BrakingForceInfo_Label;
	private: System::Windows::Forms::Label^ StoppingDistance_Label;

	private: System::Windows::Forms::TextBox^ StoppingTime_TextBox;
	private: System::Windows::Forms::Label^ TimeToStop_Label;
	private: System::Windows::Forms::TextBox^ StoppingDistance_TextBox;

	private: System::Windows::Forms::Label^ Credit_Label;
	private: System::Windows::Forms::Label^ Notice_Label;
	private: System::Windows::Forms::Label^ Notice_label2;
	private: System::Windows::Forms::PictureBox^ Logo_PictureBox;
	private: System::Windows::Forms::PictureBox^ SummerMode_PictureBox;
	private: System::Windows::Forms::PictureBox^ WinterMode_PictureBox;
	private: System::Windows::Forms::Panel^ Conditions_Panel;
	private: System::Windows::Forms::Label^ WinterMode_Label;
	private: System::Windows::Forms::Label^ SummerMode_Label;
	private: System::Windows::Forms::Label^ Condition_Label;
	private: System::Windows::Forms::Label^ Enviroment_Label;
	private: System::Windows::Forms::TextBox^ Gravity_TextBox;
	private: System::Windows::Forms::Label^ Gravity_Label;
	private: System::Windows::Forms::Button^ RestDragCo_Button;
	private: System::Windows::Forms::Button^ ResetRollingRes_Button;

	private: System::Windows::Forms::Button^ ResetGravity_Button;
	private: System::Windows::Forms::Button^ ResetAirDen_Button;
	private: System::Windows::Forms::Button^ ResetBrakingForce_Button;
	private: System::Windows::Forms::Button^ ResetTireGrip_Button;









	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CarSimulator::typeid));
			this->BHP_Label = (gcnew System::Windows::Forms::Label());
			this->BHP_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Torque_Label = (gcnew System::Windows::Forms::Label());
			this->Torque_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->RPM_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->RPM_Label = (gcnew System::Windows::Forms::Label());
			this->Calculate_Button = (gcnew System::Windows::Forms::Button());
			this->VehicalWeight_Label = (gcnew System::Windows::Forms::Label());
			this->VehicalWeight_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->VehicalHeight_Label = (gcnew System::Windows::Forms::Label());
			this->VehicalHeight_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->VehicalWidth_Label = (gcnew System::Windows::Forms::Label());
			this->VehicalWidth_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->AssumedInformation_Panel = (gcnew System::Windows::Forms::Panel());
			this->ResetBrakingForce_Button = (gcnew System::Windows::Forms::Button());
			this->ResetTireGrip_Button = (gcnew System::Windows::Forms::Button());
			this->ResetRollingRes_Button = (gcnew System::Windows::Forms::Button());
			this->ResetGravity_Button = (gcnew System::Windows::Forms::Button());
			this->ResetAirDen_Button = (gcnew System::Windows::Forms::Button());
			this->RestDragCo_Button = (gcnew System::Windows::Forms::Button());
			this->Gravity_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Gravity_Label = (gcnew System::Windows::Forms::Label());
			this->Enviroment_Label = (gcnew System::Windows::Forms::Label());
			this->BrakingForce_Panel = (gcnew System::Windows::Forms::Panel());
			this->BrakingForceInfo_Label2 = (gcnew System::Windows::Forms::Label());
			this->BrakingForceInfo_Label = (gcnew System::Windows::Forms::Label());
			this->BrakingForce_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->BrakingForce_Label = (gcnew System::Windows::Forms::Label());
			this->TireGripInfo_Panel = (gcnew System::Windows::Forms::Panel());
			this->TireGripInfo_Label3 = (gcnew System::Windows::Forms::Label());
			this->TireGripInfo_Label2 = (gcnew System::Windows::Forms::Label());
			this->TireGripInfo_Label = (gcnew System::Windows::Forms::Label());
			this->TireGrip_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->TireGrip_Label = (gcnew System::Windows::Forms::Label());
			this->RollingResistance_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->RollingResistance_Label = (gcnew System::Windows::Forms::Label());
			this->AirDensity_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->AirDensity_Label = (gcnew System::Windows::Forms::Label());
			this->DragCoefficient_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->DragCoefficient_Label = (gcnew System::Windows::Forms::Label());
			this->TopSpeed_Label = (gcnew System::Windows::Forms::Label());
			this->TopSpeed_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Results_Panel = (gcnew System::Windows::Forms::Panel());
			this->StoppingDistance_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->StoppingDistance_Label = (gcnew System::Windows::Forms::Label());
			this->StoppingTime_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->TimeToStop_Label = (gcnew System::Windows::Forms::Label());
			this->LateralG_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->LateralG_Label = (gcnew System::Windows::Forms::Label());
			this->MPG_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->MPG_Label = (gcnew System::Windows::Forms::Label());
			this->ZeroToSixity_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->ZeroToSixty_Label = (gcnew System::Windows::Forms::Label());
			this->Results_RichTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->Slash_label = (gcnew System::Windows::Forms::Label());
			this->Slash_Label2 = (gcnew System::Windows::Forms::Label());
			this->FrontalArea_Label = (gcnew System::Windows::Forms::Label());
			this->FrontalArea_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->WheelBase_Label = (gcnew System::Windows::Forms::Label());
			this->WheelBase_TextBox = (gcnew System::Windows::Forms::TextBox());
			this->Credit_Label = (gcnew System::Windows::Forms::Label());
			this->Notice_Label = (gcnew System::Windows::Forms::Label());
			this->Notice_label2 = (gcnew System::Windows::Forms::Label());
			this->Logo_PictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->SummerMode_PictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->WinterMode_PictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->Conditions_Panel = (gcnew System::Windows::Forms::Panel());
			this->WinterMode_Label = (gcnew System::Windows::Forms::Label());
			this->SummerMode_Label = (gcnew System::Windows::Forms::Label());
			this->Condition_Label = (gcnew System::Windows::Forms::Label());
			this->AssumedInformation_Panel->SuspendLayout();
			this->BrakingForce_Panel->SuspendLayout();
			this->TireGripInfo_Panel->SuspendLayout();
			this->Results_Panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo_PictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SummerMode_PictureBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WinterMode_PictureBox))->BeginInit();
			this->Conditions_Panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// BHP_Label
			// 
			this->BHP_Label->AutoSize = true;
			this->BHP_Label->Location = System::Drawing::Point(31, 104);
			this->BHP_Label->Name = L"BHP_Label";
			this->BHP_Label->Size = System::Drawing::Size(29, 13);
			this->BHP_Label->TabIndex = 0;
			this->BHP_Label->Text = L"BHP";
			// 
			// BHP_TextBox
			// 
			this->BHP_TextBox->Location = System::Drawing::Point(34, 120);
			this->BHP_TextBox->Name = L"BHP_TextBox";
			this->BHP_TextBox->Size = System::Drawing::Size(100, 20);
			this->BHP_TextBox->TabIndex = 1;
			this->BHP_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::BHP_TextBox_TextChanged);
			// 
			// Torque_Label
			// 
			this->Torque_Label->AutoSize = true;
			this->Torque_Label->Location = System::Drawing::Point(193, 104);
			this->Torque_Label->Name = L"Torque_Label";
			this->Torque_Label->Size = System::Drawing::Size(41, 13);
			this->Torque_Label->TabIndex = 2;
			this->Torque_Label->Text = L"Torque";
			// 
			// Torque_TextBox
			// 
			this->Torque_TextBox->Location = System::Drawing::Point(196, 120);
			this->Torque_TextBox->Name = L"Torque_TextBox";
			this->Torque_TextBox->Size = System::Drawing::Size(100, 20);
			this->Torque_TextBox->TabIndex = 3;
			this->Torque_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::Torque_TextBox_TextChanged);
			// 
			// RPM_TextBox
			// 
			this->RPM_TextBox->Location = System::Drawing::Point(34, 174);
			this->RPM_TextBox->Name = L"RPM_TextBox";
			this->RPM_TextBox->Size = System::Drawing::Size(100, 20);
			this->RPM_TextBox->TabIndex = 4;
			this->RPM_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::RPM_TextBox_TextChanged);
			// 
			// RPM_Label
			// 
			this->RPM_Label->AutoSize = true;
			this->RPM_Label->Location = System::Drawing::Point(31, 158);
			this->RPM_Label->Name = L"RPM_Label";
			this->RPM_Label->Size = System::Drawing::Size(31, 13);
			this->RPM_Label->TabIndex = 5;
			this->RPM_Label->Text = L"RPM";
			// 
			// Calculate_Button
			// 
			this->Calculate_Button->Cursor = System::Windows::Forms::Cursors::Default;
			this->Calculate_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Calculate_Button->Location = System::Drawing::Point(420, 434);
			this->Calculate_Button->Name = L"Calculate_Button";
			this->Calculate_Button->Size = System::Drawing::Size(200, 191);
			this->Calculate_Button->TabIndex = 6;
			this->Calculate_Button->Text = L"Calculate";
			this->Calculate_Button->UseVisualStyleBackColor = true;
			this->Calculate_Button->Click += gcnew System::EventHandler(this, &CarSimulator::Calculate_Button_Click);
			// 
			// VehicalWeight_Label
			// 
			this->VehicalWeight_Label->AutoSize = true;
			this->VehicalWeight_Label->Location = System::Drawing::Point(31, 208);
			this->VehicalWeight_Label->Name = L"VehicalWeight_Label";
			this->VehicalWeight_Label->Size = System::Drawing::Size(101, 13);
			this->VehicalWeight_Label->TabIndex = 7;
			this->VehicalWeight_Label->Text = L"Vehical Weight (Kg)";
			// 
			// VehicalWeight_TextBox
			// 
			this->VehicalWeight_TextBox->Location = System::Drawing::Point(34, 225);
			this->VehicalWeight_TextBox->Name = L"VehicalWeight_TextBox";
			this->VehicalWeight_TextBox->Size = System::Drawing::Size(100, 20);
			this->VehicalWeight_TextBox->TabIndex = 8;
			this->VehicalWeight_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::VehicalWeight_TextBox_TextChanged);
			// 
			// VehicalHeight_Label
			// 
			this->VehicalHeight_Label->AutoSize = true;
			this->VehicalHeight_Label->Location = System::Drawing::Point(31, 259);
			this->VehicalHeight_Label->Name = L"VehicalHeight_Label";
			this->VehicalHeight_Label->Size = System::Drawing::Size(93, 13);
			this->VehicalHeight_Label->TabIndex = 9;
			this->VehicalHeight_Label->Text = L"Vehical Height (m)";
			// 
			// VehicalHeight_TextBox
			// 
			this->VehicalHeight_TextBox->Location = System::Drawing::Point(34, 276);
			this->VehicalHeight_TextBox->Name = L"VehicalHeight_TextBox";
			this->VehicalHeight_TextBox->Size = System::Drawing::Size(100, 20);
			this->VehicalHeight_TextBox->TabIndex = 10;
			this->VehicalHeight_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::VehicalHeight_TextBox_TextChanged);
			// 
			// VehicalWidth_Label
			// 
			this->VehicalWidth_Label->AutoSize = true;
			this->VehicalWidth_Label->Location = System::Drawing::Point(31, 308);
			this->VehicalWidth_Label->Name = L"VehicalWidth_Label";
			this->VehicalWidth_Label->Size = System::Drawing::Size(90, 13);
			this->VehicalWidth_Label->TabIndex = 11;
			this->VehicalWidth_Label->Text = L"Vehical Width (m)";
			// 
			// VehicalWidth_TextBox
			// 
			this->VehicalWidth_TextBox->Location = System::Drawing::Point(34, 324);
			this->VehicalWidth_TextBox->Name = L"VehicalWidth_TextBox";
			this->VehicalWidth_TextBox->Size = System::Drawing::Size(100, 20);
			this->VehicalWidth_TextBox->TabIndex = 12;
			this->VehicalWidth_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::VehicalWidth_TextBox_TextChanged);
			// 
			// AssumedInformation_Panel
			// 
			this->AssumedInformation_Panel->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->AssumedInformation_Panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AssumedInformation_Panel->Controls->Add(this->ResetBrakingForce_Button);
			this->AssumedInformation_Panel->Controls->Add(this->ResetTireGrip_Button);
			this->AssumedInformation_Panel->Controls->Add(this->ResetRollingRes_Button);
			this->AssumedInformation_Panel->Controls->Add(this->ResetGravity_Button);
			this->AssumedInformation_Panel->Controls->Add(this->ResetAirDen_Button);
			this->AssumedInformation_Panel->Controls->Add(this->RestDragCo_Button);
			this->AssumedInformation_Panel->Controls->Add(this->Gravity_TextBox);
			this->AssumedInformation_Panel->Controls->Add(this->Gravity_Label);
			this->AssumedInformation_Panel->Controls->Add(this->Enviroment_Label);
			this->AssumedInformation_Panel->Controls->Add(this->BrakingForce_Panel);
			this->AssumedInformation_Panel->Controls->Add(this->BrakingForce_TextBox);
			this->AssumedInformation_Panel->Controls->Add(this->BrakingForce_Label);
			this->AssumedInformation_Panel->Controls->Add(this->TireGripInfo_Panel);
			this->AssumedInformation_Panel->Controls->Add(this->TireGrip_TextBox);
			this->AssumedInformation_Panel->Controls->Add(this->TireGrip_Label);
			this->AssumedInformation_Panel->Controls->Add(this->RollingResistance_TextBox);
			this->AssumedInformation_Panel->Controls->Add(this->RollingResistance_Label);
			this->AssumedInformation_Panel->Controls->Add(this->AirDensity_TextBox);
			this->AssumedInformation_Panel->Controls->Add(this->AirDensity_Label);
			this->AssumedInformation_Panel->Controls->Add(this->DragCoefficient_TextBox);
			this->AssumedInformation_Panel->Controls->Add(this->DragCoefficient_Label);
			this->AssumedInformation_Panel->Location = System::Drawing::Point(4, 435);
			this->AssumedInformation_Panel->Name = L"AssumedInformation_Panel";
			this->AssumedInformation_Panel->Size = System::Drawing::Size(414, 189);
			this->AssumedInformation_Panel->TabIndex = 13;
			// 
			// ResetBrakingForce_Button
			// 
			this->ResetBrakingForce_Button->BackColor = System::Drawing::Color::Transparent;
			this->ResetBrakingForce_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ResetBrakingForce_Button.Image")));
			this->ResetBrakingForce_Button->Location = System::Drawing::Point(254, 146);
			this->ResetBrakingForce_Button->Name = L"ResetBrakingForce_Button";
			this->ResetBrakingForce_Button->Size = System::Drawing::Size(35, 35);
			this->ResetBrakingForce_Button->TabIndex = 20;
			this->ResetBrakingForce_Button->UseVisualStyleBackColor = false;
			this->ResetBrakingForce_Button->Click += gcnew System::EventHandler(this, &CarSimulator::ResetBrakingForce_Button_Click);
			// 
			// ResetTireGrip_Button
			// 
			this->ResetTireGrip_Button->BackColor = System::Drawing::Color::Transparent;
			this->ResetTireGrip_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ResetTireGrip_Button.Image")));
			this->ResetTireGrip_Button->Location = System::Drawing::Point(254, 103);
			this->ResetTireGrip_Button->Name = L"ResetTireGrip_Button";
			this->ResetTireGrip_Button->Size = System::Drawing::Size(35, 35);
			this->ResetTireGrip_Button->TabIndex = 19;
			this->ResetTireGrip_Button->UseVisualStyleBackColor = false;
			this->ResetTireGrip_Button->Click += gcnew System::EventHandler(this, &CarSimulator::ResetTireGrip_Button_Click);
			// 
			// ResetRollingRes_Button
			// 
			this->ResetRollingRes_Button->BackColor = System::Drawing::Color::Transparent;
			this->ResetRollingRes_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ResetRollingRes_Button.Image")));
			this->ResetRollingRes_Button->Location = System::Drawing::Point(254, 60);
			this->ResetRollingRes_Button->Name = L"ResetRollingRes_Button";
			this->ResetRollingRes_Button->Size = System::Drawing::Size(35, 35);
			this->ResetRollingRes_Button->TabIndex = 18;
			this->ResetRollingRes_Button->UseVisualStyleBackColor = false;
			this->ResetRollingRes_Button->Click += gcnew System::EventHandler(this, &CarSimulator::ResetRollingRes_Button_Click);
			// 
			// ResetGravity_Button
			// 
			this->ResetGravity_Button->BackColor = System::Drawing::Color::Transparent;
			this->ResetGravity_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ResetGravity_Button.Image")));
			this->ResetGravity_Button->Location = System::Drawing::Point(107, 146);
			this->ResetGravity_Button->Name = L"ResetGravity_Button";
			this->ResetGravity_Button->Size = System::Drawing::Size(35, 35);
			this->ResetGravity_Button->TabIndex = 17;
			this->ResetGravity_Button->UseVisualStyleBackColor = false;
			this->ResetGravity_Button->Click += gcnew System::EventHandler(this, &CarSimulator::ResetGravity_Button_Click);
			// 
			// ResetAirDen_Button
			// 
			this->ResetAirDen_Button->BackColor = System::Drawing::Color::Transparent;
			this->ResetAirDen_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ResetAirDen_Button.Image")));
			this->ResetAirDen_Button->Location = System::Drawing::Point(107, 103);
			this->ResetAirDen_Button->Name = L"ResetAirDen_Button";
			this->ResetAirDen_Button->Size = System::Drawing::Size(35, 35);
			this->ResetAirDen_Button->TabIndex = 16;
			this->ResetAirDen_Button->UseVisualStyleBackColor = false;
			this->ResetAirDen_Button->Click += gcnew System::EventHandler(this, &CarSimulator::ResetAirDen_Button_Click);
			// 
			// RestDragCo_Button
			// 
			this->RestDragCo_Button->BackColor = System::Drawing::Color::Transparent;
			this->RestDragCo_Button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RestDragCo_Button.Image")));
			this->RestDragCo_Button->Location = System::Drawing::Point(107, 60);
			this->RestDragCo_Button->Name = L"RestDragCo_Button";
			this->RestDragCo_Button->Size = System::Drawing::Size(35, 35);
			this->RestDragCo_Button->TabIndex = 15;
			this->RestDragCo_Button->UseVisualStyleBackColor = false;
			this->RestDragCo_Button->Click += gcnew System::EventHandler(this, &CarSimulator::RestDragCo_Button_Click);
			// 
			// Gravity_TextBox
			// 
			this->Gravity_TextBox->Location = System::Drawing::Point(3, 154);
			this->Gravity_TextBox->Name = L"Gravity_TextBox";
			this->Gravity_TextBox->Size = System::Drawing::Size(100, 20);
			this->Gravity_TextBox->TabIndex = 14;
			this->Gravity_TextBox->Text = L"9.80665";
			this->Gravity_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::Gravity_TextBox_TextChanged);
			// 
			// Gravity_Label
			// 
			this->Gravity_Label->AutoSize = true;
			this->Gravity_Label->Location = System::Drawing::Point(3, 139);
			this->Gravity_Label->Name = L"Gravity_Label";
			this->Gravity_Label->Size = System::Drawing::Size(79, 13);
			this->Gravity_Label->TabIndex = 13;
			this->Gravity_Label->Text = L"Gravity (m/s^2)";
			// 
			// Enviroment_Label
			// 
			this->Enviroment_Label->AutoSize = true;
			this->Enviroment_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Enviroment_Label->Location = System::Drawing::Point(117, 10);
			this->Enviroment_Label->Name = L"Enviroment_Label";
			this->Enviroment_Label->Size = System::Drawing::Size(155, 18);
			this->Enviroment_Label->TabIndex = 12;
			this->Enviroment_Label->Text = L"Independent Variables:";
			// 
			// BrakingForce_Panel
			// 
			this->BrakingForce_Panel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BrakingForce_Panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->BrakingForce_Panel->Controls->Add(this->BrakingForceInfo_Label2);
			this->BrakingForce_Panel->Controls->Add(this->BrakingForceInfo_Label);
			this->BrakingForce_Panel->Location = System::Drawing::Point(290, 139);
			this->BrakingForce_Panel->Name = L"BrakingForce_Panel";
			this->BrakingForce_Panel->Size = System::Drawing::Size(119, 46);
			this->BrakingForce_Panel->TabIndex = 11;
			// 
			// BrakingForceInfo_Label2
			// 
			this->BrakingForceInfo_Label2->AutoSize = true;
			this->BrakingForceInfo_Label2->Location = System::Drawing::Point(3, 22);
			this->BrakingForceInfo_Label2->Name = L"BrakingForceInfo_Label2";
			this->BrakingForceInfo_Label2->Size = System::Drawing::Size(111, 13);
			this->BrakingForceInfo_Label2->TabIndex = 2;
			this->BrakingForceInfo_Label2->Text = L"20 = High End Brakes";
			// 
			// BrakingForceInfo_Label
			// 
			this->BrakingForceInfo_Label->AutoSize = true;
			this->BrakingForceInfo_Label->Location = System::Drawing::Point(4, 4);
			this->BrakingForceInfo_Label->Name = L"BrakingForceInfo_Label";
			this->BrakingForceInfo_Label->Size = System::Drawing::Size(106, 13);
			this->BrakingForceInfo_Label->TabIndex = 0;
			this->BrakingForceInfo_Label->Text = L"8 = Low End Brakes ";
			// 
			// BrakingForce_TextBox
			// 
			this->BrakingForce_TextBox->Location = System::Drawing::Point(148, 154);
			this->BrakingForce_TextBox->Name = L"BrakingForce_TextBox";
			this->BrakingForce_TextBox->Size = System::Drawing::Size(100, 20);
			this->BrakingForce_TextBox->TabIndex = 10;
			this->BrakingForce_TextBox->Text = L"14";
			this->BrakingForce_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::BrakingForce_TextBox_TextChanged);
			// 
			// BrakingForce_Label
			// 
			this->BrakingForce_Label->AutoSize = true;
			this->BrakingForce_Label->Location = System::Drawing::Point(148, 138);
			this->BrakingForce_Label->Name = L"BrakingForce_Label";
			this->BrakingForce_Label->Size = System::Drawing::Size(96, 13);
			this->BrakingForce_Label->TabIndex = 9;
			this->BrakingForce_Label->Text = L"Braking Force (kN)";
			// 
			// TireGripInfo_Panel
			// 
			this->TireGripInfo_Panel->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->TireGripInfo_Panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TireGripInfo_Panel->Controls->Add(this->TireGripInfo_Label3);
			this->TireGripInfo_Panel->Controls->Add(this->TireGripInfo_Label2);
			this->TireGripInfo_Panel->Controls->Add(this->TireGripInfo_Label);
			this->TireGripInfo_Panel->Location = System::Drawing::Point(290, 86);
			this->TireGripInfo_Panel->Name = L"TireGripInfo_Panel";
			this->TireGripInfo_Panel->Size = System::Drawing::Size(119, 52);
			this->TireGripInfo_Panel->TabIndex = 8;
			// 
			// TireGripInfo_Label3
			// 
			this->TireGripInfo_Label3->AutoSize = true;
			this->TireGripInfo_Label3->Location = System::Drawing::Point(3, 32);
			this->TireGripInfo_Label3->Name = L"TireGripInfo_Label3";
			this->TireGripInfo_Label3->Size = System::Drawing::Size(30, 13);
			this->TireGripInfo_Label3->TabIndex = 2;
			this->TireGripInfo_Label3->Text = L"Tires";
			// 
			// TireGripInfo_Label2
			// 
			this->TireGripInfo_Label2->AutoSize = true;
			this->TireGripInfo_Label2->Location = System::Drawing::Point(3, 19);
			this->TireGripInfo_Label2->Name = L"TireGripInfo_Label2";
			this->TireGripInfo_Label2->Size = System::Drawing::Size(113, 13);
			this->TireGripInfo_Label2->TabIndex = 1;
			this->TireGripInfo_Label2->Text = L"1.1 = High Preformace";
			// 
			// TireGripInfo_Label
			// 
			this->TireGripInfo_Label->AutoSize = true;
			this->TireGripInfo_Label->Location = System::Drawing::Point(5, 6);
			this->TireGripInfo_Label->Name = L"TireGripInfo_Label";
			this->TireGripInfo_Label->Size = System::Drawing::Size(80, 13);
			this->TireGripInfo_Label->TabIndex = 0;
			this->TireGripInfo_Label->Text = L"0.4 = Wet Tires";
			// 
			// TireGrip_TextBox
			// 
			this->TireGrip_TextBox->Location = System::Drawing::Point(148, 111);
			this->TireGrip_TextBox->Name = L"TireGrip_TextBox";
			this->TireGrip_TextBox->Size = System::Drawing::Size(100, 20);
			this->TireGrip_TextBox->TabIndex = 7;
			this->TireGrip_TextBox->Text = L"1";
			this->TireGrip_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::TireGrip_TextBox_TextChanged);
			// 
			// TireGrip_Label
			// 
			this->TireGrip_Label->AutoSize = true;
			this->TireGrip_Label->Location = System::Drawing::Point(145, 95);
			this->TireGrip_Label->Name = L"TireGrip_Label";
			this->TireGrip_Label->Size = System::Drawing::Size(100, 13);
			this->TireGrip_Label->TabIndex = 6;
			this->TireGrip_Label->Text = L"Tire Grip Coefficient";
			// 
			// RollingResistance_TextBox
			// 
			this->RollingResistance_TextBox->Location = System::Drawing::Point(148, 68);
			this->RollingResistance_TextBox->Name = L"RollingResistance_TextBox";
			this->RollingResistance_TextBox->Size = System::Drawing::Size(100, 20);
			this->RollingResistance_TextBox->TabIndex = 5;
			this->RollingResistance_TextBox->Text = L"0.01";
			this->RollingResistance_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::RollingResistance_TextBox_TextChanged);
			// 
			// RollingResistance_Label
			// 
			this->RollingResistance_Label->AutoSize = true;
			this->RollingResistance_Label->Location = System::Drawing::Point(146, 39);
			this->RollingResistance_Label->Name = L"RollingResistance_Label";
			this->RollingResistance_Label->Size = System::Drawing::Size(98, 26);
			this->RollingResistance_Label->TabIndex = 4;
			this->RollingResistance_Label->Text = L"Rolling Resistance \r\nCoefficient";
			// 
			// AirDensity_TextBox
			// 
			this->AirDensity_TextBox->Location = System::Drawing::Point(3, 111);
			this->AirDensity_TextBox->Name = L"AirDensity_TextBox";
			this->AirDensity_TextBox->Size = System::Drawing::Size(100, 20);
			this->AirDensity_TextBox->TabIndex = 3;
			this->AirDensity_TextBox->Text = L"1.225";
			// 
			// AirDensity_Label
			// 
			this->AirDensity_Label->AutoSize = true;
			this->AirDensity_Label->Location = System::Drawing::Point(3, 95);
			this->AirDensity_Label->Name = L"AirDensity_Label";
			this->AirDensity_Label->Size = System::Drawing::Size(104, 13);
			this->AirDensity_Label->TabIndex = 2;
			this->AirDensity_Label->Text = L"Air Density (Kg/m^3)";
			// 
			// DragCoefficient_TextBox
			// 
			this->DragCoefficient_TextBox->Location = System::Drawing::Point(6, 68);
			this->DragCoefficient_TextBox->Name = L"DragCoefficient_TextBox";
			this->DragCoefficient_TextBox->Size = System::Drawing::Size(100, 20);
			this->DragCoefficient_TextBox->TabIndex = 1;
			this->DragCoefficient_TextBox->Text = L"0.36";
			this->DragCoefficient_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::DragCoefficient_TextBox_TextChanged);
			// 
			// DragCoefficient_Label
			// 
			this->DragCoefficient_Label->AutoSize = true;
			this->DragCoefficient_Label->Location = System::Drawing::Point(3, 52);
			this->DragCoefficient_Label->Name = L"DragCoefficient_Label";
			this->DragCoefficient_Label->Size = System::Drawing::Size(83, 13);
			this->DragCoefficient_Label->TabIndex = 0;
			this->DragCoefficient_Label->Text = L"Drag Coefficient";
			// 
			// TopSpeed_Label
			// 
			this->TopSpeed_Label->AutoSize = true;
			this->TopSpeed_Label->Location = System::Drawing::Point(6, 84);
			this->TopSpeed_Label->Name = L"TopSpeed_Label";
			this->TopSpeed_Label->Size = System::Drawing::Size(90, 13);
			this->TopSpeed_Label->TabIndex = 14;
			this->TopSpeed_Label->Text = L"Top Speed MPH:";
			// 
			// TopSpeed_TextBox
			// 
			this->TopSpeed_TextBox->Location = System::Drawing::Point(9, 100);
			this->TopSpeed_TextBox->Name = L"TopSpeed_TextBox";
			this->TopSpeed_TextBox->Size = System::Drawing::Size(100, 20);
			this->TopSpeed_TextBox->TabIndex = 15;
			// 
			// Results_Panel
			// 
			this->Results_Panel->BackColor = System::Drawing::SystemColors::Info;
			this->Results_Panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Results_Panel->Controls->Add(this->StoppingDistance_TextBox);
			this->Results_Panel->Controls->Add(this->StoppingDistance_Label);
			this->Results_Panel->Controls->Add(this->StoppingTime_TextBox);
			this->Results_Panel->Controls->Add(this->TimeToStop_Label);
			this->Results_Panel->Controls->Add(this->LateralG_TextBox);
			this->Results_Panel->Controls->Add(this->LateralG_Label);
			this->Results_Panel->Controls->Add(this->MPG_TextBox);
			this->Results_Panel->Controls->Add(this->MPG_Label);
			this->Results_Panel->Controls->Add(this->ZeroToSixity_TextBox);
			this->Results_Panel->Controls->Add(this->ZeroToSixty_Label);
			this->Results_Panel->Controls->Add(this->Results_RichTextBox);
			this->Results_Panel->Controls->Add(this->TopSpeed_TextBox);
			this->Results_Panel->Controls->Add(this->TopSpeed_Label);
			this->Results_Panel->Location = System::Drawing::Point(374, 5);
			this->Results_Panel->Name = L"Results_Panel";
			this->Results_Panel->Size = System::Drawing::Size(244, 273);
			this->Results_Panel->TabIndex = 17;
			// 
			// StoppingDistance_TextBox
			// 
			this->StoppingDistance_TextBox->Location = System::Drawing::Point(127, 23);
			this->StoppingDistance_TextBox->Name = L"StoppingDistance_TextBox";
			this->StoppingDistance_TextBox->Size = System::Drawing::Size(100, 20);
			this->StoppingDistance_TextBox->TabIndex = 26;
			// 
			// StoppingDistance_Label
			// 
			this->StoppingDistance_Label->AutoSize = true;
			this->StoppingDistance_Label->Location = System::Drawing::Point(124, 8);
			this->StoppingDistance_Label->Name = L"StoppingDistance_Label";
			this->StoppingDistance_Label->Size = System::Drawing::Size(111, 13);
			this->StoppingDistance_Label->TabIndex = 25;
			this->StoppingDistance_Label->Text = L"Stopping Distance (m)";
			// 
			// StoppingTime_TextBox
			// 
			this->StoppingTime_TextBox->Location = System::Drawing::Point(9, 24);
			this->StoppingTime_TextBox->Name = L"StoppingTime_TextBox";
			this->StoppingTime_TextBox->Size = System::Drawing::Size(100, 20);
			this->StoppingTime_TextBox->TabIndex = 24;
			// 
			// TimeToStop_Label
			// 
			this->TimeToStop_Label->AutoSize = true;
			this->TimeToStop_Label->Location = System::Drawing::Point(9, 8);
			this->TimeToStop_Label->Name = L"TimeToStop_Label";
			this->TimeToStop_Label->Size = System::Drawing::Size(89, 13);
			this->TimeToStop_Label->TabIndex = 23;
			this->TimeToStop_Label->Text = L"Stopping Time (s)";
			// 
			// LateralG_TextBox
			// 
			this->LateralG_TextBox->Location = System::Drawing::Point(124, 61);
			this->LateralG_TextBox->Name = L"LateralG_TextBox";
			this->LateralG_TextBox->Size = System::Drawing::Size(100, 20);
			this->LateralG_TextBox->TabIndex = 22;
			// 
			// LateralG_Label
			// 
			this->LateralG_Label->AutoSize = true;
			this->LateralG_Label->Location = System::Drawing::Point(121, 46);
			this->LateralG_Label->Name = L"LateralG_Label";
			this->LateralG_Label->Size = System::Drawing::Size(80, 13);
			this->LateralG_Label->TabIndex = 21;
			this->LateralG_Label->Text = L"Lateral Geforce";
			// 
			// MPG_TextBox
			// 
			this->MPG_TextBox->Location = System::Drawing::Point(9, 61);
			this->MPG_TextBox->Name = L"MPG_TextBox";
			this->MPG_TextBox->Size = System::Drawing::Size(100, 20);
			this->MPG_TextBox->TabIndex = 20;
			// 
			// MPG_Label
			// 
			this->MPG_Label->AutoSize = true;
			this->MPG_Label->Location = System::Drawing::Point(9, 46);
			this->MPG_Label->Name = L"MPG_Label";
			this->MPG_Label->Size = System::Drawing::Size(34, 13);
			this->MPG_Label->TabIndex = 19;
			this->MPG_Label->Text = L"MPG:";
			// 
			// ZeroToSixity_TextBox
			// 
			this->ZeroToSixity_TextBox->Location = System::Drawing::Point(124, 100);
			this->ZeroToSixity_TextBox->Name = L"ZeroToSixity_TextBox";
			this->ZeroToSixity_TextBox->Size = System::Drawing::Size(100, 20);
			this->ZeroToSixity_TextBox->TabIndex = 18;
			// 
			// ZeroToSixty_Label
			// 
			this->ZeroToSixty_Label->AutoSize = true;
			this->ZeroToSixty_Label->Location = System::Drawing::Point(121, 84);
			this->ZeroToSixty_Label->Name = L"ZeroToSixty_Label";
			this->ZeroToSixty_Label->Size = System::Drawing::Size(49, 13);
			this->ZeroToSixty_Label->TabIndex = 17;
			this->ZeroToSixty_Label->Text = L"0-60Mph";
			// 
			// Results_RichTextBox
			// 
			this->Results_RichTextBox->Location = System::Drawing::Point(3, 127);
			this->Results_RichTextBox->Name = L"Results_RichTextBox";
			this->Results_RichTextBox->Size = System::Drawing::Size(236, 142);
			this->Results_RichTextBox->TabIndex = 16;
			this->Results_RichTextBox->Text = L"";
			// 
			// Slash_label
			// 
			this->Slash_label->AutoSize = true;
			this->Slash_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Slash_label->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Slash_label->Location = System::Drawing::Point(140, 97);
			this->Slash_label->Name = L"Slash_label";
			this->Slash_label->Size = System::Drawing::Size(50, 73);
			this->Slash_label->TabIndex = 18;
			this->Slash_label->Text = L"/";
			// 
			// Slash_Label2
			// 
			this->Slash_Label2->AutoSize = true;
			this->Slash_Label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Slash_Label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->Slash_Label2->Location = System::Drawing::Point(140, 271);
			this->Slash_Label2->Name = L"Slash_Label2";
			this->Slash_Label2->Size = System::Drawing::Size(50, 73);
			this->Slash_Label2->TabIndex = 19;
			this->Slash_Label2->Text = L"/";
			this->Slash_Label2->Click += gcnew System::EventHandler(this, &CarSimulator::Slash_Label2_Click);
			// 
			// FrontalArea_Label
			// 
			this->FrontalArea_Label->AutoSize = true;
			this->FrontalArea_Label->Location = System::Drawing::Point(193, 289);
			this->FrontalArea_Label->Name = L"FrontalArea_Label";
			this->FrontalArea_Label->Size = System::Drawing::Size(93, 13);
			this->FrontalArea_Label->TabIndex = 20;
			this->FrontalArea_Label->Text = L"Frontal Area (m^2)";
			// 
			// FrontalArea_TextBox
			// 
			this->FrontalArea_TextBox->Location = System::Drawing::Point(196, 305);
			this->FrontalArea_TextBox->Name = L"FrontalArea_TextBox";
			this->FrontalArea_TextBox->Size = System::Drawing::Size(100, 20);
			this->FrontalArea_TextBox->TabIndex = 21;
			this->FrontalArea_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::FrontalArea_TextBox_TextChanged);
			// 
			// WheelBase_Label
			// 
			this->WheelBase_Label->AutoSize = true;
			this->WheelBase_Label->Location = System::Drawing::Point(31, 359);
			this->WheelBase_Label->Name = L"WheelBase_Label";
			this->WheelBase_Label->Size = System::Drawing::Size(82, 13);
			this->WheelBase_Label->TabIndex = 22;
			this->WheelBase_Label->Text = L"Wheel Base (m)";
			// 
			// WheelBase_TextBox
			// 
			this->WheelBase_TextBox->Location = System::Drawing::Point(34, 375);
			this->WheelBase_TextBox->Name = L"WheelBase_TextBox";
			this->WheelBase_TextBox->Size = System::Drawing::Size(100, 20);
			this->WheelBase_TextBox->TabIndex = 23;
			this->WheelBase_TextBox->TextChanged += gcnew System::EventHandler(this, &CarSimulator::WheelBase_TextBox_TextChanged);
			// 
			// Credit_Label
			// 
			this->Credit_Label->AutoSize = true;
			this->Credit_Label->Location = System::Drawing::Point(71, 67);
			this->Credit_Label->Name = L"Credit_Label";
			this->Credit_Label->Size = System::Drawing::Size(95, 13);
			this->Credit_Label->TabIndex = 25;
			this->Credit_Label->Text = L"By Daniel Johnson";
			// 
			// Notice_Label
			// 
			this->Notice_Label->AutoSize = true;
			this->Notice_Label->Location = System::Drawing::Point(154, 629);
			this->Notice_Label->Name = L"Notice_Label";
			this->Notice_Label->Size = System::Drawing::Size(251, 13);
			this->Notice_Label->TabIndex = 26;
			this->Notice_Label->Text = L"*Not all information is required, the program will work";
			// 
			// Notice_label2
			// 
			this->Notice_label2->AutoSize = true;
			this->Notice_label2->Location = System::Drawing::Point(399, 629);
			this->Notice_label2->Name = L"Notice_label2";
			this->Notice_label2->Size = System::Drawing::Size(189, 13);
			this->Notice_label2->TabIndex = 27;
			this->Notice_label2->Text = L"out what it can with the data provided*";
			// 
			// Logo_PictureBox
			// 
			this->Logo_PictureBox->BackColor = System::Drawing::Color::Transparent;
			this->Logo_PictureBox->ErrorImage = nullptr;
			this->Logo_PictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Logo_PictureBox.Image")));
			this->Logo_PictureBox->Location = System::Drawing::Point(12, 5);
			this->Logo_PictureBox->Name = L"Logo_PictureBox";
			this->Logo_PictureBox->Size = System::Drawing::Size(323, 89);
			this->Logo_PictureBox->TabIndex = 24;
			this->Logo_PictureBox->TabStop = false;
			this->Logo_PictureBox->Click += gcnew System::EventHandler(this, &CarSimulator::Logo_PictureBox_Click);
			// 
			// SummerMode_PictureBox
			// 
			this->SummerMode_PictureBox->BackColor = System::Drawing::Color::AliceBlue;
			this->SummerMode_PictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SummerMode_PictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SummerMode_PictureBox.Image")));
			this->SummerMode_PictureBox->Location = System::Drawing::Point(4, 46);
			this->SummerMode_PictureBox->Name = L"SummerMode_PictureBox";
			this->SummerMode_PictureBox->Size = System::Drawing::Size(100, 100);
			this->SummerMode_PictureBox->TabIndex = 28;
			this->SummerMode_PictureBox->TabStop = false;
			this->SummerMode_PictureBox->Click += gcnew System::EventHandler(this, &CarSimulator::SummerMode_PictureBox_Click);
			// 
			// WinterMode_PictureBox
			// 
			this->WinterMode_PictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->WinterMode_PictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"WinterMode_PictureBox.Image")));
			this->WinterMode_PictureBox->Location = System::Drawing::Point(139, 46);
			this->WinterMode_PictureBox->Name = L"WinterMode_PictureBox";
			this->WinterMode_PictureBox->Size = System::Drawing::Size(100, 100);
			this->WinterMode_PictureBox->TabIndex = 29;
			this->WinterMode_PictureBox->TabStop = false;
			this->WinterMode_PictureBox->Click += gcnew System::EventHandler(this, &CarSimulator::WinterMode_PictureBox_Click);
			// 
			// Conditions_Panel
			// 
			this->Conditions_Panel->BackColor = System::Drawing::Color::PeachPuff;
			this->Conditions_Panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Conditions_Panel->Controls->Add(this->WinterMode_Label);
			this->Conditions_Panel->Controls->Add(this->SummerMode_Label);
			this->Conditions_Panel->Controls->Add(this->Condition_Label);
			this->Conditions_Panel->Controls->Add(this->WinterMode_PictureBox);
			this->Conditions_Panel->Controls->Add(this->SummerMode_PictureBox);
			this->Conditions_Panel->Location = System::Drawing::Point(374, 281);
			this->Conditions_Panel->Name = L"Conditions_Panel";
			this->Conditions_Panel->Size = System::Drawing::Size(244, 150);
			this->Conditions_Panel->TabIndex = 3;
			// 
			// WinterMode_Label
			// 
			this->WinterMode_Label->AutoSize = true;
			this->WinterMode_Label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->WinterMode_Label->Location = System::Drawing::Point(171, 28);
			this->WinterMode_Label->Name = L"WinterMode_Label";
			this->WinterMode_Label->Size = System::Drawing::Size(40, 15);
			this->WinterMode_Label->TabIndex = 32;
			this->WinterMode_Label->Text = L"Winter";
			// 
			// SummerMode_Label
			// 
			this->SummerMode_Label->AutoSize = true;
			this->SummerMode_Label->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->SummerMode_Label->Location = System::Drawing::Point(26, 28);
			this->SummerMode_Label->Name = L"SummerMode_Label";
			this->SummerMode_Label->Size = System::Drawing::Size(47, 15);
			this->SummerMode_Label->TabIndex = 31;
			this->SummerMode_Label->Text = L"Summer";
			// 
			// Condition_Label
			// 
			this->Condition_Label->AutoSize = true;
			this->Condition_Label->BackColor = System::Drawing::Color::PeachPuff;
			this->Condition_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Condition_Label->Location = System::Drawing::Point(83, 4);
			this->Condition_Label->Name = L"Condition_Label";
			this->Condition_Label->Size = System::Drawing::Size(83, 18);
			this->Condition_Label->TabIndex = 30;
			this->Condition_Label->Text = L"Conditions:";
			// 
			// CarSimulator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 651);
			this->Controls->Add(this->Notice_label2);
			this->Controls->Add(this->Notice_Label);
			this->Controls->Add(this->Credit_Label);
			this->Controls->Add(this->Logo_PictureBox);
			this->Controls->Add(this->WheelBase_TextBox);
			this->Controls->Add(this->WheelBase_Label);
			this->Controls->Add(this->FrontalArea_TextBox);
			this->Controls->Add(this->FrontalArea_Label);
			this->Controls->Add(this->Slash_Label2);
			this->Controls->Add(this->Slash_label);
			this->Controls->Add(this->Torque_TextBox);
			this->Controls->Add(this->Torque_Label);
			this->Controls->Add(this->Results_Panel);
			this->Controls->Add(this->AssumedInformation_Panel);
			this->Controls->Add(this->VehicalWidth_TextBox);
			this->Controls->Add(this->VehicalWidth_Label);
			this->Controls->Add(this->VehicalHeight_TextBox);
			this->Controls->Add(this->VehicalHeight_Label);
			this->Controls->Add(this->VehicalWeight_TextBox);
			this->Controls->Add(this->VehicalWeight_Label);
			this->Controls->Add(this->Calculate_Button);
			this->Controls->Add(this->RPM_Label);
			this->Controls->Add(this->RPM_TextBox);
			this->Controls->Add(this->BHP_TextBox);
			this->Controls->Add(this->BHP_Label);
			this->Controls->Add(this->Conditions_Panel);
			this->Name = L"CarSimulator";
			this->Text = L"Car Simulator";
			this->Load += gcnew System::EventHandler(this, &CarSimulator::CarSimulator_Load);
			this->AssumedInformation_Panel->ResumeLayout(false);
			this->AssumedInformation_Panel->PerformLayout();
			this->BrakingForce_Panel->ResumeLayout(false);
			this->BrakingForce_Panel->PerformLayout();
			this->TireGripInfo_Panel->ResumeLayout(false);
			this->TireGripInfo_Panel->PerformLayout();
			this->Results_Panel->ResumeLayout(false);
			this->Results_Panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Logo_PictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SummerMode_PictureBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->WinterMode_PictureBox))->EndInit();
			this->Conditions_Panel->ResumeLayout(false);
			this->Conditions_Panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void BHP_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			BHP = System::Convert::ToDouble(BHP_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void Torque_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			Torque = System::Convert::ToDouble(Torque_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void RPM_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			RPM = System::Convert::ToDouble(RPM_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void VehicalWeight_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			Weight = System::Convert::ToDouble(VehicalWeight_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void VehicalHeight_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			VehicalHeight = System::Convert::ToDouble(VehicalHeight_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void VehicalWidth_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			VehicalWidth = System::Convert::ToDouble(VehicalWidth_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void DragCoefficient_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			DragCoefficent = System::Convert::ToDouble(DragCoefficient_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void RollingResistance_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			coefficientOfRollingResistance = System::Convert::ToDouble(RollingResistance_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void FrontalArea_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			DragArea = System::Convert::ToDouble(FrontalArea_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void TireGrip_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			TireGripCoefficient = System::Convert::ToDouble(TireGrip_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void WheelBase_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			WheelBase = System::Convert::ToDouble(WheelBase_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void BrakingForce_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			BrakingForce = System::Convert::ToDouble(BrakingForce_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void SummerMode_PictureBox_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Summer = true;
		SummerMode_PictureBox->BackColor = BackColor.AliceBlue;
		WinterMode_PictureBox->BackColor = BackColor.PeachPuff;
	}
	private: System::Void WinterMode_PictureBox_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Summer = false;
		WinterMode_PictureBox->BackColor = BackColor.AliceBlue;
		SummerMode_PictureBox->BackColor = BackColor.PeachPuff;
	}
	private: System::Void Gravity_TextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		try
		{
			Gravity = System::Convert::ToDouble(Gravity_TextBox->Text);
		}
		catch (...) {}
	}
	private: System::Void RestDragCo_Button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		DragCoefficent = 0.36;
		DragCoefficient_TextBox->Text = System::Convert::ToString(DragCoefficent);
	}
	private: System::Void ResetAirDen_Button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		AirDensity = 1.225;
		AirDensity_TextBox->Text = System::Convert::ToString(AirDensity);
	}
	private: System::Void ResetGravity_Button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Gravity = 9.80665;
		Gravity_TextBox->Text = System::Convert::ToString(Gravity);
	}
	private: System::Void ResetRollingRes_Button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		rollingResistance = 0.01;
		RollingResistance_TextBox->Text = System::Convert::ToString(rollingResistance);
	}
	private: System::Void ResetTireGrip_Button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		TireGripCoefficient = 1;
		TireGrip_TextBox->Text = System::Convert::ToString(TireGripCoefficient);
	}
	private: System::Void ResetBrakingForce_Button_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		BrakingForce = 14;
		BrakingForce_TextBox->Text = System::Convert::ToString(BrakingForce);
	}


	private: System::Void Calculate_Button_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (BHP == NULL)
		{
			BHP = (Torque * RPM) / 5252.f;
			BHP = round(BHP * 100) / 100;
			BHP_TextBox->Text = System::Convert::ToString(BHP);
		}

		if (Torque == NULL)
		{
			Torque = (BHP * 5252.f) / RPM;
			Torque = round(Torque * 100) / 100;
			Torque_TextBox->Text = System::Convert::ToString(Torque);
		}

		if (Torque != NULL && BHP != NULL) //Assumes BHP is priority over torque
		{
			Torque = (BHP * 5252.f) / RPM;
			Torque = round(Torque * 100) / 100;
			Torque_TextBox->Text = System::Convert::ToString(Torque);
		}

		if (DragArea == NULL)
		{
			DragArea = (VehicalHeight * VehicalWidth);
			DragArea = round(DragArea * 100) / 100;
			FrontalArea_TextBox->Text = System::Convert::ToString(DragArea);
		}

		try
		{
			normalForce = Weight * Gravity;
			rollingResistance = coefficientOfRollingResistance * normalForce;
			Watts = BHP * 745.7;

			//0-60
			PowerToWeight = ((Watts * 0.90) / Weight) * TireGripCoefficient;
			Acceleration = PowerToWeight / (Weight + (AirDensity * DragCoefficent * DragArea) + rollingResistance);
			ZeroToSixty = sqrt((2 * 0.0254 * 60) / Acceleration) - TireGripCoefficient;
			if (ZeroToSixty == -TireGripCoefficient || ZeroToSixty < 0) 
			{
				ZeroToSixty = NULL;
			}
			ZeroToSixty = round(ZeroToSixty * 100) / 100;
			ZeroToSixity_TextBox->Text = System::Convert::ToString(ZeroToSixty);

			//Top Speed
			Velocity = std::pow((2 * Watts) / (AirDensity * DragCoefficent * DragArea) + rollingResistance, 1.0 / 3.0);
			TopSpeed = (Velocity * 2.23694);
			TopSpeed = round(TopSpeed * 100) / 100;
			TopSpeed_TextBox->Text = System::Convert::ToString(TopSpeed);

			//Stopping distance/time
			Decleration = (BrakingForce * 1000) / Weight;
			TimeToStop = -((0 - Velocity) / Decleration);
			TimeToStop = round(TimeToStop * 100) / 100;
			DistanceToStop = (pow(-Velocity, 2) / (2 * Decleration));
			DistanceToStop = round(DistanceToStop * 100) / 100;
			if (Summer == false) 
			{
				DistanceToStop = DistanceToStop * 3; //3 is the minimum effect winetr conditions will have
				TimeToStop = TimeToStop * 3;
			}
			StoppingTime_TextBox->Text = System::Convert::ToString(TimeToStop);
			StoppingDistance_TextBox->Text = System::Convert::ToString(DistanceToStop);

			//MPG
			fuelEnergyContent = 33.7;
			sfc = 1.0 / ((fuelEnergyContent * 36000) / Watts);
			MPG = ((1.0 / sfc) * (TireGripCoefficient * 4)) + 4;
			MPG = round(MPG * 100) / 100;
			MPG_TextBox->Text = System::Convert::ToString(MPG);

			//Lateral G
			LateralG = ((Velocity / (WheelBase / tan(SteeringAngle))) / Gravity) + (TireGripCoefficient / 2) - 1.1;
			LateralG = round(LateralG * 100) / 100;
			LateralG_TextBox->Text = System::Convert::ToString(LateralG);

			Results_RichTextBox->Text = "";
			if (TopSpeed == INFINITY)
			{
				Results_RichTextBox->Text = Results_RichTextBox->Text + "Either the car is in a vacum and will accelerate to infinity or more data is needed\n";
				return;
			}
			if (Summer == false) 
			{
				Results_RichTextBox->Text = Results_RichTextBox->Text + "Minimum stopping distance = " + DistanceToStop + "m for " + TimeToStop + "s, Maximum stopping distance = " + (DistanceToStop / 3) * 10 + "m for " + (TimeToStop / 3) * 10 + "s \n";
			
			}

			if (TopSpeed > 250)
			{
				Results_RichTextBox->Text = Results_RichTextBox->Text + "At this speed most manufactured tyres would explode\n";
			}
			if (TopSpeed > 760.343)
			{
				Results_RichTextBox->Text = Results_RichTextBox->Text + "You would have set a new land speed record\n";
			}
			if (TopSpeed > 767.269)
			{
				Results_RichTextBox->Text = Results_RichTextBox->Text + "You would have broken the sound barrier\n";
			}



		}
		catch (...) {}
	}
	private: System::Void CarSimulator_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Logo_PictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	





private: System::Void Slash_Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

