#pragma once
#include "Client_CLservice.h"
#include "Commande_CLservice.h"
#include "Personnel_CLservice.h"
#include "Stock_CLservice.h"


int upd = 0;
int a,b = 0;

namespace ApplicationPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



		
	
		
	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonGP;
	private: System::Windows::Forms::Button^ buttonGClient;
	private: System::Windows::Forms::Button^ buttonGCMD;
	protected:



	private: NS_Comp_Svc_Personnel::CLservicesPersonnel^ oSvcPersonnel;
	private: NS_Comp_Svc_Client::CLservicesClient^ oSvcClient;
	private: NS_Comp_Svc_Commande::CLservicesCommande^ oSvcCommande;
	private: NS_Comp_Svc_Stock::CLserviceStock^ oSvcStock;
	
	private: System::Data::DataSet^ oDs;



	private: System::Windows::Forms::Button^ buttonGStock;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ buttonGStat;


	protected:


	private: System::Windows::Forms::DataGridView^ dgv_enr;

	private: System::Windows::Forms::Button^ btn_insert;
	private: System::Windows::Forms::Button^ btn_update;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ buttonsup1;
	private: System::Windows::Forms::Button^ buttonsup2;






	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ buttonsup3;
	private: System::Windows::Forms::Label^ label81;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::TextBox^ textBox14;

	private: System::Windows::Forms::TextBox^ textBox13;


	private: System::Windows::Forms::TextBox^ textBox12;


	private: System::Windows::Forms::TextBox^ textBox11;


	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;








	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Button^ buttonsup4;
private: System::Windows::Forms::Button^ buttonsup5;
private: System::Windows::Forms::Button^ buttonsup6;
private: System::Windows::Forms::Button^ buttonsup7;
private: System::Windows::Forms::Button^ buttonsup8;
private: System::Windows::Forms::Button^ buttonsup9;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label51;
private: System::Windows::Forms::Button^ btn_calculer;
private: System::Windows::Forms::Label^ label71;











	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonGP = (gcnew System::Windows::Forms::Button());
			this->buttonGClient = (gcnew System::Windows::Forms::Button());
			this->buttonGCMD = (gcnew System::Windows::Forms::Button());
			this->buttonGStock = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonGStat = (gcnew System::Windows::Forms::Button());
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_insert = (gcnew System::Windows::Forms::Button());
			this->btn_update = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->buttonsup1 = (gcnew System::Windows::Forms::Button());
			this->buttonsup2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->buttonsup3 = (gcnew System::Windows::Forms::Button());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->buttonsup4 = (gcnew System::Windows::Forms::Button());
			this->buttonsup5 = (gcnew System::Windows::Forms::Button());
			this->buttonsup6 = (gcnew System::Windows::Forms::Button());
			this->buttonsup7 = (gcnew System::Windows::Forms::Button());
			this->buttonsup8 = (gcnew System::Windows::Forms::Button());
			this->buttonsup9 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->btn_calculer = (gcnew System::Windows::Forms::Button());
			this->label71 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonGP
			// 
			this->buttonGP->Location = System::Drawing::Point(5, 145);
			this->buttonGP->Name = L"buttonGP";
			this->buttonGP->Size = System::Drawing::Size(229, 34);
			this->buttonGP->TabIndex = 1;
			this->buttonGP->Text = L"Gestion du personnel";
			this->buttonGP->UseVisualStyleBackColor = true;
			this->buttonGP->Click += gcnew System::EventHandler(this, &MyForm::buttonGP_Click);
			// 
			// buttonGClient
			// 
			this->buttonGClient->Location = System::Drawing::Point(5, 199);
			this->buttonGClient->Name = L"buttonGClient";
			this->buttonGClient->Size = System::Drawing::Size(229, 34);
			this->buttonGClient->TabIndex = 2;
			this->buttonGClient->Text = L"Gestion des clients";
			this->buttonGClient->UseVisualStyleBackColor = true;
			this->buttonGClient->Click += gcnew System::EventHandler(this, &MyForm::buttonGClient_Click);
			// 
			// buttonGCMD
			// 
			this->buttonGCMD->Location = System::Drawing::Point(5, 301);
			this->buttonGCMD->Name = L"buttonGCMD";
			this->buttonGCMD->Size = System::Drawing::Size(229, 34);
			this->buttonGCMD->TabIndex = 4;
			this->buttonGCMD->Text = L"Gestion des commandes";
			this->buttonGCMD->UseVisualStyleBackColor = true;
			this->buttonGCMD->Click += gcnew System::EventHandler(this, &MyForm::buttonGCMD_Click);
			// 
			// buttonGStock
			// 
			this->buttonGStock->Location = System::Drawing::Point(5, 250);
			this->buttonGStock->Name = L"buttonGStock";
			this->buttonGStock->Size = System::Drawing::Size(229, 34);
			this->buttonGStock->TabIndex = 5;
			this->buttonGStock->Text = L"Gestion du stock";
			this->buttonGStock->UseVisualStyleBackColor = true;
			this->buttonGStock->Click += gcnew System::EventHandler(this, &MyForm::buttonGStock_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Que souhaitez-vous faire \?";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"C:/Users/axelm/Downloads/logo_CESIpetit.png";
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(75, 36);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// buttonGStat
			// 
			this->buttonGStat->Location = System::Drawing::Point(5, 355);
			this->buttonGStat->Name = L"buttonGStat";
			this->buttonGStat->Size = System::Drawing::Size(229, 34);
			this->buttonGStat->TabIndex = 8;
			this->buttonGStat->Text = L"Gsetion des statistiques";
			this->buttonGStat->UseVisualStyleBackColor = true;
			this->buttonGStat->Click += gcnew System::EventHandler(this, &MyForm::buttonGStat_Click);
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(326, 7);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(776, 212);
			this->dgv_enr->TabIndex = 9;
			// 
			// btn_insert
			// 
			this->btn_insert->Location = System::Drawing::Point(326, 227);
			this->btn_insert->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn_insert->Name = L"btn_insert";
			this->btn_insert->Size = System::Drawing::Size(114, 53);
			this->btn_insert->TabIndex = 11;
			this->btn_insert->Text = L"INS";
			this->btn_insert->UseVisualStyleBackColor = true;
			this->btn_insert->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// btn_update
			// 
			this->btn_update->Location = System::Drawing::Point(326, 298);
			this->btn_update->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn_update->Name = L"btn_update";
			this->btn_update->Size = System::Drawing::Size(114, 53);
			this->btn_update->TabIndex = 12;
			this->btn_update->Text = L"UPD";
			this->btn_update->UseVisualStyleBackColor = true;
			this->btn_update->Click += gcnew System::EventHandler(this, &MyForm::btn_update_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(326, 382);
			this->btn_delete->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(114, 53);
			this->btn_delete->TabIndex = 13;
			this->btn_delete->Text = L"DEL";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(636, 595);
			this->textBox9->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(466, 22);
			this->textBox9->TabIndex = 16;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(636, 545);
			this->textBox8->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(466, 22);
			this->textBox8->TabIndex = 15;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(636, 499);
			this->textBox7->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(466, 22);
			this->textBox7->TabIndex = 14;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(636, 230);
			this->textBox1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(466, 22);
			this->textBox1->TabIndex = 17;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(636, 273);
			this->textBox2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(466, 22);
			this->textBox2->TabIndex = 18;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(636, 323);
			this->textBox3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(466, 22);
			this->textBox3->TabIndex = 19;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(636, 363);
			this->textBox4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(466, 22);
			this->textBox4->TabIndex = 20;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(636, 405);
			this->textBox5->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(466, 22);
			this->textBox5->TabIndex = 21;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(636, 453);
			this->textBox6->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(466, 22);
			this->textBox6->TabIndex = 22;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// buttonsup1
			// 
			this->buttonsup1->Location = System::Drawing::Point(14, 409);
			this->buttonsup1->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->buttonsup1->Name = L"buttonsup1";
			this->buttonsup1->Size = System::Drawing::Size(120, 87);
			this->buttonsup1->TabIndex = 23;
			this->buttonsup1->UseVisualStyleBackColor = true;
			this->buttonsup1->Click += gcnew System::EventHandler(this, &MyForm::buttonsup1_Click);
			// 
			// buttonsup2
			// 
			this->buttonsup2->Location = System::Drawing::Point(162, 409);
			this->buttonsup2->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->buttonsup2->Name = L"buttonsup2";
			this->buttonsup2->Size = System::Drawing::Size(121, 87);
			this->buttonsup2->TabIndex = 24;
			this->buttonsup2->UseVisualStyleBackColor = true;
			this->buttonsup2->Click += gcnew System::EventHandler(this, &MyForm::buttonsup2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(461, 233);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 25;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(461, 274);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 26;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(461, 326);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 27;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(461, 368);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 28;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(461, 409);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 29;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(461, 458);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 30;
			this->label7->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(461, 503);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 31;
			this->label8->Text = L"label8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(461, 549);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 17);
			this->label9->TabIndex = 32;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(457, 598);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 17);
			this->label10->TabIndex = 33;
			this->label10->Text = L"label10";
			// 
			// buttonsup3
			// 
			this->buttonsup3->Location = System::Drawing::Point(14, 513);
			this->buttonsup3->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->buttonsup3->Name = L"buttonsup3";
			this->buttonsup3->Size = System::Drawing::Size(120, 87);
			this->buttonsup3->TabIndex = 35;
			this->buttonsup3->UseVisualStyleBackColor = true;
			this->buttonsup3->Click += gcnew System::EventHandler(this, &MyForm::buttonsup3_Click);
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(461, 522);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(54, 17);
			this->label81->TabIndex = 36;
			this->label81->Text = L"label81";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(461, 294);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(54, 17);
			this->label31->TabIndex = 37;
			this->label31->Text = L"label31";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(461, 427);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(54, 17);
			this->label61->TabIndex = 38;
			this->label61->Text = L"label61";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(636, 818);
			this->textBox14->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(466, 22);
			this->textBox14->TabIndex = 47;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(636, 771);
			this->textBox13->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(466, 22);
			this->textBox13->TabIndex = 46;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(636, 728);
			this->textBox12->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(466, 22);
			this->textBox12->TabIndex = 45;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(636, 688);
			this->textBox11->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(466, 22);
			this->textBox11->TabIndex = 44;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(636, 638);
			this->textBox10->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(466, 22);
			this->textBox10->TabIndex = 43;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(636, 862);
			this->textBox15->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(466, 22);
			this->textBox15->TabIndex = 39;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(636, 904);
			this->textBox16->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(466, 22);
			this->textBox16->TabIndex = 40;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(457, 641);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 17);
			this->label11->TabIndex = 48;
			this->label11->Text = L"label11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(457, 691);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 17);
			this->label12->TabIndex = 49;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(457, 731);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(54, 17);
			this->label13->TabIndex = 50;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(457, 774);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(54, 17);
			this->label14->TabIndex = 51;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(457, 821);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 17);
			this->label15->TabIndex = 52;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(457, 867);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(54, 17);
			this->label16->TabIndex = 53;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(457, 907);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(54, 17);
			this->label17->TabIndex = 54;
			this->label17->Text = L"label17";
			// 
			// buttonsup4
			// 
			this->buttonsup4->Location = System::Drawing::Point(162, 514);
			this->buttonsup4->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->buttonsup4->Name = L"buttonsup4";
			this->buttonsup4->Size = System::Drawing::Size(120, 87);
			this->buttonsup4->TabIndex = 55;
			this->buttonsup4->UseVisualStyleBackColor = true;
			this->buttonsup4->Click += gcnew System::EventHandler(this, &MyForm::buttonsup4_Click);
			// 
			// buttonsup5
			// 
			this->buttonsup5->Location = System::Drawing::Point(14, 623);
			this->buttonsup5->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->buttonsup5->Name = L"buttonsup5";
			this->buttonsup5->Size = System::Drawing::Size(120, 87);
			this->buttonsup5->TabIndex = 56;
			this->buttonsup5->UseVisualStyleBackColor = true;
			this->buttonsup5->Click += gcnew System::EventHandler(this, &MyForm::buttonsup5_Click);
			// 
			// buttonsup6
			// 
			this->buttonsup6->Location = System::Drawing::Point(162, 623);
			this->buttonsup6->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->buttonsup6->Name = L"buttonsup6";
			this->buttonsup6->Size = System::Drawing::Size(120, 87);
			this->buttonsup6->TabIndex = 57;
			this->buttonsup6->UseVisualStyleBackColor = true;
			this->buttonsup6->Click += gcnew System::EventHandler(this, &MyForm::buttonsup6_Click);
			// 
			// buttonsup7
			// 
			this->buttonsup7->Location = System::Drawing::Point(17, 739);
			this->buttonsup7->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->buttonsup7->Name = L"buttonsup7";
			this->buttonsup7->Size = System::Drawing::Size(120, 87);
			this->buttonsup7->TabIndex = 58;
			this->buttonsup7->UseVisualStyleBackColor = true;
			this->buttonsup7->Click += gcnew System::EventHandler(this, &MyForm::buttonsup7_Click);
			// 
			// buttonsup8
			// 
			this->buttonsup8->Location = System::Drawing::Point(162, 739);
			this->buttonsup8->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->buttonsup8->Name = L"buttonsup8";
			this->buttonsup8->Size = System::Drawing::Size(120, 87);
			this->buttonsup8->TabIndex = 59;
			this->buttonsup8->UseVisualStyleBackColor = true;
			this->buttonsup8->Click += gcnew System::EventHandler(this, &MyForm::buttonsup8_Click);
			// 
			// buttonsup9
			// 
			this->buttonsup9->Location = System::Drawing::Point(17, 850);
			this->buttonsup9->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->buttonsup9->Name = L"buttonsup9";
			this->buttonsup9->Size = System::Drawing::Size(120, 87);
			this->buttonsup9->TabIndex = 60;
			this->buttonsup9->UseVisualStyleBackColor = true;
			this->buttonsup9->Click += gcnew System::EventHandler(this, &MyForm::buttonsup9_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(461, 254);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(54, 17);
			this->label21->TabIndex = 61;
			this->label21->Text = L"label21";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(461, 343);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(54, 17);
			this->label41->TabIndex = 62;
			this->label41->Text = L"label41";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(461, 382);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(54, 17);
			this->label51->TabIndex = 63;
			this->label51->Text = L"label51";
			// 
			// btn_calculer
			// 
			this->btn_calculer->Location = System::Drawing::Point(326, 453);
			this->btn_calculer->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->btn_calculer->Name = L"btn_calculer";
			this->btn_calculer->Size = System::Drawing::Size(114, 53);
			this->btn_calculer->TabIndex = 64;
			this->btn_calculer->Text = L"Calculer";
			this->btn_calculer->UseVisualStyleBackColor = true;
			this->btn_calculer->Click += gcnew System::EventHandler(this, &MyForm::btn_calculer_Click);
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(461, 475);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(54, 17);
			this->label71->TabIndex = 65;
			this->label71->Text = L"label71";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1179, 961);
			this->Controls->Add(this->label71);
			this->Controls->Add(this->btn_calculer);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->buttonsup9);
			this->Controls->Add(this->buttonsup8);
			this->Controls->Add(this->buttonsup7);
			this->Controls->Add(this->buttonsup6);
			this->Controls->Add(this->buttonsup5);
			this->Controls->Add(this->buttonsup4);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label81);
			this->Controls->Add(this->buttonsup3);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonsup2);
			this->Controls->Add(this->buttonsup1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_update);
			this->Controls->Add(this->btn_insert);
			this->Controls->Add(this->dgv_enr);
			this->Controls->Add(this->buttonGStat);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonGStock);
			this->Controls->Add(this->buttonGCMD);
			this->Controls->Add(this->buttonGClient);
			this->Controls->Add(this->buttonGP);
			this->Name = L"MyForm";
			this->Text = L"Application";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Hide();
		this->btn_delete->Hide();
		this->btn_insert->Hide();
		this->btn_update->Hide();
		this->btn_calculer->Hide();
		this->textBox1->Hide();
		this->textBox2->Hide();
		this->textBox3->Hide();
		this->textBox4->Hide();
		this->textBox5->Hide();
		this->textBox6->Hide();
		this->textBox7->Hide();
		this->textBox8->Hide();
		this->textBox9->Hide();
		this->textBox10->Hide();
		this->textBox11->Hide();
		this->textBox12->Hide();
		this->textBox13->Hide();
		this->textBox14->Hide();
		this->textBox15->Hide();
		this->textBox16->Hide();
		this->buttonsup1->Hide();
		this->buttonsup2->Hide();
		this->buttonsup3->Hide();
		this->buttonsup4->Hide();
		this->buttonsup5->Hide();
		this->buttonsup6->Hide();
		this->buttonsup7->Hide();
		this->buttonsup8->Hide();
		this->buttonsup9->Hide();
		this->label2->Hide();
		this->label21->Hide();
		this->label3->Hide();
		this->label31->Hide();
		this->label4->Hide();
		this->label41->Hide();
		this->label5->Hide();
		this->label51->Hide();
		this->label6->Hide();
		this->label61->Hide();
		this->label7->Hide();
		this->label71->Hide();
		this->label8->Hide();
		this->label81->Hide();
		this->label9->Hide();
		this->label10->Hide();
		this->label11->Hide();
		this->label12->Hide();
		this->label13->Hide();
		this->label14->Hide();
		this->label15->Hide();
		this->label16->Hide();
		this->label17->Hide();
	}


//--------------------------------------------------------------------------------------------------------------------------------------------------------------
//Gestion des boutons niveau 1 
//--------------------------------------------------------------------------------------------------------------------------------------------------------------


	private: System::Void buttonGP_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dgv_enr->Hide();
		this->buttonsup4->Hide();
		this->buttonsup5->Hide();
		this->buttonsup6->Hide();
		this->buttonsup7->Hide();
		this->buttonsup8->Hide();
		this->buttonsup9->Hide();
		this->btn_delete->Hide();
		this->btn_insert->Hide();
		this->btn_update->Hide();
		this->btn_calculer->Hide();
		this->textBox1->Hide();
		this->textBox2->Hide();
		this->textBox3->Hide();
		this->textBox4->Hide();
		this->textBox5->Hide();
		this->textBox6->Hide();
		this->textBox7->Hide();
		this->textBox8->Hide();
		this->textBox9->Hide();
		this->textBox10->Hide();
		this->textBox11->Hide();
		this->textBox12->Hide();
		this->textBox13->Hide();
		this->textBox14->Hide();
		this->textBox15->Hide();
		this->textBox16->Hide();
		this->label2->Hide();
		this->label3->Hide();
		this->label4->Hide();
		this->label5->Hide();
		this->label6->Hide();
		this->label7->Hide();
		this->label8->Hide();
		this->label9->Hide();
		this->label10->Hide();
		this->label11->Hide();
		this->label12->Hide();
		this->label13->Hide();
		this->label14->Hide();
		this->label15->Hide();
		this->label16->Hide();
		this->label17->Hide();
		this->label21->Hide();
		this->label31->Hide();
		this->label41->Hide();
		this->label51->Hide();
		this->label61->Hide();
		this->label71->Hide();
		this->label81->Hide();
	

		this->buttonsup1->Show();
		this->buttonsup2->Show();
		this->buttonsup3->Show();
		this->buttonsup1->Text = "Modifier information(s) Personnel";
		this->buttonsup2->Text = "Modifier adresse Personnel";
		this->buttonsup3->Text = "Modifier ville Personnel";

		a = 1;
	}

	private: System::Void buttonGClient_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->dgv_enr->Hide();
		this->buttonsup4->Hide();
		this->buttonsup5->Hide();
		this->buttonsup6->Hide();
		this->buttonsup7->Hide();
		this->buttonsup8->Hide();
		this->buttonsup9->Hide();
		this->btn_delete->Hide();
		this->btn_insert->Hide();
		this->btn_update->Hide();
		this->btn_calculer->Hide();
		this->textBox1->Hide();
		this->textBox2->Hide();
		this->textBox3->Hide();
		this->textBox4->Hide();
		this->textBox5->Hide();
		this->textBox6->Hide();
		this->textBox7->Hide();
		this->textBox8->Hide();
		this->textBox9->Hide();
		this->textBox10->Hide();
		this->textBox11->Hide();
		this->textBox12->Hide();
		this->textBox13->Hide();
		this->textBox14->Hide();
		this->textBox15->Hide();
		this->textBox16->Hide();
		this->label2->Hide();
		this->label3->Hide();
		this->label4->Hide();
		this->label5->Hide();
		this->label6->Hide();
		this->label7->Hide();
		this->label8->Hide();
		this->label9->Hide();
		this->label10->Hide();
		this->label11->Hide();
		this->label12->Hide();
		this->label13->Hide();
		this->label14->Hide();
		this->label15->Hide();
		this->label16->Hide();
		this->label17->Hide();
		this->label21->Hide();
		this->label31->Hide();
		this->label41->Hide();
		this->label51->Hide();
		this->label61->Hide();
		this->label71->Hide();
		this->label81->Hide();


		this->buttonsup1->Show();
		this->buttonsup2->Show();
		this->buttonsup3->Show();
		this->buttonsup1->Text = "Modifier information(s) Client";
		this->buttonsup2->Text = "Modifier adresse Client";
		this->buttonsup3->Text = "Modifier ville Client";

		a = 2;


	}

	private: System::Void buttonGStock_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->buttonsup1->Hide();
		this->buttonsup2->Hide();
		this->buttonsup3->Hide();
		this->buttonsup4->Hide();
		this->buttonsup5->Hide();
		this->buttonsup6->Hide();
		this->buttonsup7->Hide();
		this->buttonsup8->Hide();
		this->buttonsup9->Hide();
		this->btn_calculer->Hide();
		this->textBox9->Hide();
		this->textBox10->Hide();
		this->textBox11->Hide();
		this->textBox12->Hide();
		this->textBox13->Hide();
		this->textBox14->Hide();
		this->textBox15->Hide();
		this->textBox16->Hide();
		this->label21->Hide();
		this->label31->Hide();
		this->label41->Hide();
		this->label51->Hide();
		this->label61->Hide();
		this->label71->Hide();
		this->label10->Hide();
		this->label11->Hide();
		this->label12->Hide();
		this->label13->Hide();
		this->label14->Hide();
		this->label15->Hide();
		this->label16->Hide();
		this->label17->Hide();

		this->dgv_enr->Show();
		this->btn_delete->Show();
		this->btn_insert->Show();
		this->btn_update->Show();
		this->textBox1->Show();
		this->textBox2->Show();
		this->textBox3->Show();
		this->textBox4->Show();
		this->textBox5->Show();
		this->textBox6->Show();
		this->textBox7->Show();
		this->textBox8->Show();
		this->label2->Show();
		this->label3->Show();
		this->label4->Show();
		this->label5->Show();
		this->label6->Show();
		this->label7->Show();
		this->label8->Show();
		this->label81->Show();
		this->label9->Show();


		this->label2->Text = "ID de l'arcticle";
		this->label3->Text = "Désignation de l'article";
		this->label4->Text = "Référence de l'article";
		this->label5->Text = "Prix Hors Taxe de l'article";
		this->label6->Text = "Taux de TVA de l'article";
		this->label7->Text = "Quantité en stock";
		this->label8->Text = "Seuil de";
		this->label81->Text = "réapprovisionnement";
		this->label9->Text = "Couleur de l'article";

		this->dgv_enr->Refresh();
		this->oSvcStock = gcnew NS_Comp_Svc_Stock::CLserviceStock();
		this->oDs = this->oSvcStock->selectionnerToutesLesProduits("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";

		a = 3;

	}

	private: System::Void buttonGCMD_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dgv_enr->Hide();
		this->buttonsup4->Hide();
		this->buttonsup5->Hide();
		this->buttonsup6->Hide();
		this->buttonsup7->Hide();
		this->buttonsup8->Hide();
		this->buttonsup9->Hide();
		this->btn_delete->Hide();
		this->btn_insert->Hide();
		this->btn_update->Hide();
		this->btn_calculer->Hide();
		this->textBox1->Hide();
		this->textBox2->Hide();
		this->textBox3->Hide();
		this->textBox4->Hide();
		this->textBox5->Hide();
		this->textBox6->Hide();
		this->textBox7->Hide();
		this->textBox8->Hide();
		this->textBox9->Hide();
		this->textBox10->Hide();
		this->textBox11->Hide();
		this->textBox12->Hide();
		this->textBox13->Hide();
		this->textBox14->Hide();
		this->textBox15->Hide();
		this->textBox16->Hide();
		this->label2->Hide();
		this->label3->Hide();
		this->label4->Hide();
		this->label5->Hide();
		this->label6->Hide();
		this->label7->Hide();
		this->label8->Hide();
		this->label9->Hide();
		this->label10->Hide();
		this->label11->Hide();
		this->label12->Hide();
		this->label13->Hide();
		this->label14->Hide();
		this->label15->Hide();
		this->label16->Hide();
		this->label17->Hide();
		this->label21->Hide();
		this->label31->Hide();
		this->label41->Hide();
		this->label51->Hide();
		this->label61->Hide();
		this->label71->Hide();
		this->label81->Hide();


		this->buttonsup1->Show();
		this->buttonsup2->Show();
		this->buttonsup3->Show();
		this->buttonsup1->Text = "Modifier information(s) Commande";
		this->buttonsup2->Text = "Modifier information(s) Article de la commande";
		this->buttonsup3->Text = "Modifier information(s) paiement";

		a = 4;
	}

	private: System::Void buttonGStat_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dgv_enr->Hide();
		this->btn_delete->Hide();
		this->btn_insert->Hide();
		this->btn_update->Hide();
		this->btn_calculer->Hide();
		this->textBox1->Hide();
		this->textBox2->Hide();
		this->textBox3->Hide();
		this->textBox4->Hide();
		this->textBox5->Hide();
		this->textBox6->Hide();
		this->textBox7->Hide();
		this->textBox8->Hide();
		this->textBox9->Hide();
		this->textBox10->Hide();
		this->textBox11->Hide();
		this->textBox12->Hide();
		this->textBox13->Hide();
		this->textBox14->Hide();
		this->textBox15->Hide();
		this->textBox16->Hide();
		this->label2->Hide();
		this->label21->Hide();
		this->label3->Hide();
		this->label31->Hide();
		this->label4->Hide();
		this->label41->Hide();
		this->label5->Hide();
		this->label51->Hide();
		this->label6->Hide();
		this->label61->Hide();
		this->label7->Hide();
		this->label71->Hide();
		this->label8->Hide();
		this->label81->Hide();
		this->label9->Hide();
		this->label10->Hide();
		this->label11->Hide();
		this->label12->Hide();
		this->label13->Hide();
		this->label14->Hide();
		this->label15->Hide();
		this->label16->Hide();
		this->label17->Hide();

		this->buttonsup1->Show();
		this->buttonsup2->Show();
		this->buttonsup3->Show();
		this->buttonsup4->Show();
		this->buttonsup5->Show();
		this->buttonsup6->Show();
		this->buttonsup7->Show();
		this->buttonsup8->Show();
		this->buttonsup9->Show();
		this->buttonsup1->Text = "Panier moyen après remise";
		this->buttonsup2->Text = "Chiffre d'affaire sur un mois en particulier";
		this->buttonsup3->Text = "Produit(s) sous le seuil de réapprovisionnement";
		this->buttonsup4->Text = "Montant total des achats pour un client";
		this->buttonsup5->Text = "10 meilleures ventes";
		this->buttonsup6->Text = "10 plus mauvaises ventes";
		this->buttonsup7->Text = "Valeur commerciale du stock";
		this->buttonsup8->Text = "Valeur d'achat du stock";
		this->buttonsup9->Text = "Valeur du stock selon variations de valeurs commerciales";
		
		a = 5;
	}





//--------------------------------------------------------------------------------------------------------------------------------------------------------------
//Gestion des boutons niveau 1 
//--------------------------------------------------------------------------------------------------------------------------------------------------------------






	private: System::Void buttonsup1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (a==1)
		{
			this->buttonsup4->Hide();
			this->buttonsup5->Hide();
			this->buttonsup6->Hide();
			this->buttonsup7->Hide();
			this->buttonsup8->Hide();
			this->buttonsup9->Hide();
			this->btn_calculer->Hide();
			this->textBox7->Hide();
			this->textBox8->Hide();
			this->textBox9->Hide();
			this->textBox10->Hide();
			this->textBox11->Hide();
			this->textBox12->Hide();
			this->textBox13->Hide();
			this->textBox14->Hide();
			this->textBox15->Hide();
			this->textBox16->Hide();
			this->label8->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->label11->Hide();
			this->label12->Hide();
			this->label13->Hide();
			this->label14->Hide();
			this->label15->Hide();
			this->label16->Hide();
			this->label17->Hide();
			this->label21->Hide();
			this->label31->Hide();
			this->label41->Hide();
			this->label51->Hide();
			this->label61->Hide();
			this->label71->Hide();
			this->label81->Hide();


			this->dgv_enr->Show();
			this->btn_delete->Show();
			this->btn_insert->Show();
			this->btn_update->Show();
			this->textBox1->Show();
			this->textBox2->Show();
			this->textBox3->Show();
			this->textBox4->Show();
			this->textBox5->Show();
			this->textBox6->Show();
			this->label2->Show();
			this->label3->Show();
			this->label4->Show();
			this->label5->Show();
			this->label6->Show();
			this->label7->Show();
			this->label2->Text = "ID du Personnel";
			this->label3->Text = "Nom";
			this->label4->Text = "Prénom";
			this->label5->Text = "Date d'embauche";
			this->label6->Text = "ID du supérieur";
			this->label7->Text = "ID de l'adresse";

			b = 1;


			this->dgv_enr->Refresh();
			this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
			this->oDs = this->oSvcPersonnel->selectionnerToutesLesPersonnes("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";

		}
		if (a == 2)
		{
			this->buttonsup4->Hide();
			this->buttonsup5->Hide();
			this->buttonsup6->Hide();
			this->buttonsup7->Hide();
			this->buttonsup8->Hide();
			this->buttonsup9->Hide();
			this->btn_calculer->Hide();
			this->textBox7->Hide();
			this->textBox8->Hide();
			this->textBox9->Hide();
			this->textBox10->Hide();
			this->textBox11->Hide();
			this->textBox12->Hide();
			this->textBox13->Hide();
			this->textBox14->Hide();
			this->textBox15->Hide();
			this->textBox16->Hide();
			this->label8->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->label11->Hide();
			this->label12->Hide();
			this->label13->Hide();
			this->label14->Hide();
			this->label15->Hide();
			this->label16->Hide();
			this->label17->Hide();
			this->label21->Hide();
			this->label31->Hide();
			this->label41->Hide();
			this->label51->Hide();
			this->label61->Hide();
			this->label71->Hide();
			this->label81->Hide();


			this->dgv_enr->Show();
			this->btn_delete->Show();
			this->btn_insert->Show();
			this->btn_update->Show();
			this->textBox1->Show();
			this->textBox2->Show();
			this->textBox3->Show();
			this->textBox4->Show();
			this->textBox5->Show();
			this->textBox6->Show();
			this->textBox7->Show();
			this->label2->Show();
			this->label3->Show();
			this->label4->Show();
			this->label5->Show();
			this->label6->Show();
			this->label7->Show();
			this->label8->Show();
			this->label2->Text = "ID du Client";
			this->label3->Text = "Nom";
			this->label4->Text = "Prénom";
			this->label5->Text = "Date de naissance";
			this->label6->Text = "Date du premier Achat";
			this->label7->Text = "ID de l'adresse de livraison";
			this->label8->Text = "ID de l'adresse de facturation";

			this->dgv_enr->Refresh();
			this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
			this->oDs = this->oSvcClient->selectionnerToutesLesClients("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";

		}

		if (a == 4)
		{
			this->buttonsup4->Hide();
			this->buttonsup5->Hide();
			this->buttonsup6->Hide();
			this->buttonsup7->Hide();
			this->buttonsup8->Hide();
			this->buttonsup9->Hide();
			this->btn_calculer->Hide();
			this->textBox6->Hide();
			this->textBox7->Hide();
			this->textBox8->Hide();
			this->textBox9->Hide();
			this->textBox10->Hide();
			this->textBox11->Hide();
			this->textBox12->Hide();
			this->textBox13->Hide();
			this->textBox14->Hide();
			this->textBox15->Hide();
			this->textBox16->Hide();
			this->label7->Hide();
			this->label8->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->label11->Hide();
			this->label12->Hide();
			this->label13->Hide();
			this->label14->Hide();
			this->label15->Hide();
			this->label16->Hide();
			this->label17->Hide();
			this->label21->Hide();
			this->label41->Hide();
			this->label61->Hide();
			this->label71->Hide();
			this->label81->Hide();


			this->dgv_enr->Show();
			this->btn_delete->Show();
			this->btn_insert->Show();
			this->btn_update->Show();
			this->textBox1->Show();
			this->textBox2->Show();
			this->textBox3->Show();
			this->textBox4->Show();
			this->textBox5->Show();
			this->label2->Show();
			this->label3->Show();
			this->label31->Show();
			this->label4->Show();
			this->label5->Show();
			this->label51->Show();
			this->label6->Show();
			this->label2->Text = "ID de la commande";
			this->label3->Text = "Référence de la";
			this->label31->Text = "commande";
			this->label4->Text = "Date de livraison";
			this->label5->Text = "Date d'émission de";
			this->label51->Text = "la commande";
			this->label6->Text = "ID du client";

			this->dgv_enr->Refresh();
			this->oSvcCommande = gcnew NS_Comp_Svc_Commande::CLservicesCommande();
			this->oDs = this->oSvcCommande->selectionnerToutesLesCommandes("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";

		}

		if (a == 5)
		{
			this->dgv_enr->Hide();
			this->btn_delete->Hide();
			this->btn_insert->Hide();
			this->btn_update->Hide();
			this->btn_calculer->Hide();
			this->textBox1->Hide();
			this->textBox2->Hide();
			this->textBox3->Hide();
			this->textBox4->Hide();
			this->textBox5->Hide();
			this->textBox6->Hide();
			this->textBox7->Hide();
			this->textBox8->Hide();
			this->textBox9->Hide();
			this->textBox10->Hide();
			this->textBox11->Hide();
			this->textBox12->Hide();
			this->textBox13->Hide();
			this->textBox14->Hide();
			this->textBox15->Hide();
			this->textBox16->Hide();
			this->label21->Hide();
			this->label3->Hide();
			this->label31->Hide();
			this->label4->Hide();
			this->label41->Hide();
			this->label5->Hide();
			this->label51->Hide();
			this->label6->Hide();
			this->label61->Hide();
			this->label7->Hide();
			this->label71->Hide();
			this->label8->Hide();
			this->label81->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->label11->Hide();
			this->label12->Hide();
			this->label13->Hide();
			this->label14->Hide();
			this->label15->Hide();
			this->label16->Hide();
			this->label17->Hide();

			this->label2->Show();
			this->label21->Show();
			this->label2->Text = "La valeur du panier moyen après remise est de :";
			this->label21->Text = "1";
		}
	}


	private: System::Void buttonsup2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (a == 1 || a == 2)
		{
			this->buttonsup4->Hide();
			this->buttonsup5->Hide();
			this->buttonsup6->Hide();
			this->buttonsup7->Hide();
			this->buttonsup8->Hide();
			this->buttonsup9->Hide();
			this->btn_calculer->Hide();
			this->textBox9->Hide();
			this->textBox10->Hide();
			this->textBox11->Hide();
			this->textBox12->Hide();
			this->textBox13->Hide();
			this->textBox14->Hide();
			this->textBox15->Hide();
			this->textBox16->Hide();
			this->label10->Hide();
			this->label11->Hide();
			this->label12->Hide();
			this->label13->Hide();
			this->label14->Hide();
			this->label15->Hide();
			this->label16->Hide();
			this->label17->Hide();
			this->label21->Hide();
			this->label31->Hide();
			this->label41->Hide();
			this->label51->Hide();
			this->label61->Hide();
			this->label71->Hide();
			this->label81->Hide();


			this->dgv_enr->Show();
			this->btn_delete->Show();
			this->btn_insert->Show();
			this->btn_update->Show();
			this->textBox1->Show();
			this->textBox2->Show();
			this->textBox3->Show();
			this->textBox4->Show();
			this->textBox5->Show();
			this->textBox6->Show();
			this->textBox7->Show();
			this->textBox8->Show();
			this->label2->Show();
			this->label3->Show();
			this->label4->Show();
			this->label5->Show();
			this->label6->Show();
			this->label7->Show();
			this->label8->Show();
			this->label9->Show();
			this->label2->Text = "ID de l'adresse";
			this->label3->Text = "Numero";
			this->label4->Text = "Rue";
			this->label5->Text = "Nom de la résidence";
			this->label6->Text = "Nom de l'immeuble";
			this->label7->Text = "Etage";
			this->label8->Text = "Complément";
			this->label9->Text = "ID de la ville";

			b = 2;

			if (a == 1) {
				this->dgv_enr->Refresh();
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oDs = this->oSvcPersonnel->selectionnerToutesLesAdresses("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			else {
				this->dgv_enr->Refresh();
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oDs = this->oSvcClient->selectionnerToutesLesAdresses("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			
		}

		if (a == 4)
		{
			this->buttonsup4->Hide();
			this->buttonsup5->Hide();
			this->buttonsup6->Hide();
			this->buttonsup7->Hide();
			this->buttonsup8->Hide();
			this->buttonsup9->Hide();
			this->btn_calculer->Hide();
			this->textBox5->Hide();
			this->textBox6->Hide();
			this->textBox7->Hide();
			this->textBox8->Hide();
			this->textBox9->Hide();
			this->textBox10->Hide();
			this->textBox11->Hide();
			this->textBox12->Hide();
			this->textBox13->Hide();
			this->textBox14->Hide();
			this->textBox15->Hide();
			this->textBox16->Hide();
			this->label6->Hide();
			this->label7->Hide();
			this->label8->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->label11->Hide();
			this->label12->Hide();
			this->label13->Hide();
			this->label14->Hide();
			this->label15->Hide();
			this->label16->Hide();
			this->label17->Hide();
			this->label21->Hide();
			this->label31->Hide();
			this->label41->Hide();
			this->label51->Hide();
			this->label61->Hide();
			this->label71->Hide();
			this->label81->Hide();


			this->dgv_enr->Show();
			this->btn_delete->Show();
			this->btn_insert->Show();
			this->btn_update->Show();
			this->textBox1->Show();
			this->textBox2->Show();
			this->textBox3->Show();
			this->textBox4->Show();
			this->label2->Show();
			this->label3->Show();
			this->label4->Show();
			this->label5->Show();
			this->label2->Text = "ID de l'article";
			this->label3->Text = "Désignation de l'article";
			this->label4->Text = "Prix hors taxe";
			this->label5->Text = "Taux de TVA";
		}

		if (a == 5)
		{
			this->dgv_enr->Hide();
			this->btn_delete->Hide();
			this->btn_insert->Hide();
			this->btn_update->Hide();
			this->btn_calculer->Hide();
			this->textBox1->Hide();
			this->textBox2->Hide();
			this->textBox3->Hide();
			this->textBox4->Hide();
			this->textBox5->Hide();
			this->textBox6->Hide();
			this->textBox7->Hide();
			this->textBox8->Hide();
			this->textBox9->Hide();
			this->textBox10->Hide();
			this->textBox11->Hide();
			this->textBox12->Hide();
			this->textBox13->Hide();
			this->textBox14->Hide();
			this->textBox15->Hide();
			this->textBox16->Hide();
			this->label3->Hide();
			this->label31->Hide();
			this->label4->Hide();
			this->label41->Hide();
			this->label5->Hide();
			this->label51->Hide();
			this->label6->Hide();
			this->label61->Hide();
			this->label7->Hide();
			this->label71->Hide();
			this->label8->Hide();
			this->label81->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->label11->Hide();
			this->label12->Hide();
			this->label13->Hide();
			this->label14->Hide();
			this->label15->Hide();
			this->label16->Hide();
			this->label17->Hide();

			this->textBox1->Show();
			this->label2->Show();
			this->label21->Show();
			this->label3->Show();
			this->label31->Show();
			this->label2->Text = "De quel mois souhaitez";
			this->label21->Text = "vous voir le chiffre d'affaire";
			this->label3->Text = "Le chiffre d'affaire de ce mois-ci est de :";
			this->label31->Text = "2";
		}
	}

	private: System::Void buttonsup3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (a == 1 || a == 2)
		{
			this->buttonsup4->Hide();
			this->buttonsup5->Hide();
			this->buttonsup6->Hide();
			this->buttonsup7->Hide();
			this->buttonsup8->Hide();
			this->buttonsup9->Hide();
			this->btn_calculer->Hide();
			this->textBox5->Hide();
			this->textBox6->Hide();
			this->textBox7->Hide();
			this->textBox8->Hide();
			this->textBox9->Hide();
			this->textBox10->Hide();
			this->textBox11->Hide();
			this->textBox12->Hide();
			this->textBox13->Hide();
			this->textBox14->Hide();
			this->textBox15->Hide();
			this->textBox16->Hide();
			this->label6->Hide();
			this->label7->Hide();
			this->label8->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->label11->Hide();
			this->label12->Hide();
			this->label13->Hide();
			this->label14->Hide();
			this->label15->Hide();
			this->label16->Hide();
			this->label17->Hide();
			this->label21->Hide();
			this->label31->Hide();
			this->label41->Hide();
			this->label51->Hide();
			this->label61->Hide();
			this->label71->Hide();
			this->label81->Hide();


			this->dgv_enr->Show();
			this->btn_delete->Show();
			this->btn_insert->Show();
			this->btn_update->Show();
			this->textBox1->Show();
			this->textBox2->Show();
			this->textBox3->Show();
			this->textBox4->Show();
			this->label2->Show();
			this->label3->Show();
			this->label4->Show();
			this->label5->Show();
			this->label2->Text = "ID de la ville";
			this->label3->Text = "Nom de la ville";
			this->label4->Text = "Code Postal";
			this->label5->Text = "Pays";

			
			this->dgv_enr->Refresh();
			this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
			this->oDs = this->oSvcPersonnel->selectionnerToutesLesVilles("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";

			b = 3;
			
		}

		if (a == 4)
		{
			this->buttonsup4->Hide();
			this->buttonsup5->Hide();
			this->buttonsup6->Hide();
			this->buttonsup7->Hide();
			this->buttonsup8->Hide();
			this->buttonsup9->Hide();
			this->btn_calculer->Hide();
			this->textBox5->Hide();
			this->textBox6->Hide();
			this->textBox7->Hide();
			this->textBox8->Hide();
			this->textBox9->Hide();
			this->textBox10->Hide();
			this->textBox11->Hide();
			this->textBox12->Hide();
			this->textBox13->Hide();
			this->textBox14->Hide();
			this->textBox15->Hide();
			this->textBox16->Hide();
			this->label6->Hide();
			this->label7->Hide();
			this->label8->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->label11->Hide();
			this->label12->Hide();
			this->label13->Hide();
			this->label14->Hide();
			this->label15->Hide();
			this->label16->Hide();
			this->label17->Hide();
			this->label21->Hide();
			this->label31->Hide();
			this->label41->Hide();
			this->label51->Hide();
			this->label61->Hide();
			this->label71->Hide();
			this->label81->Hide();


			this->dgv_enr->Show();
			this->btn_delete->Show();
			this->btn_insert->Show();
			this->btn_update->Show();
			this->textBox1->Show();
			this->textBox2->Show();
			this->textBox3->Show();
			this->textBox4->Show();
			this->textBox5->Show();
			this->label2->Show();
			this->label3->Show();
			this->label4->Show();
			this->label5->Show();
			this->label6->Show();
			this->label2->Text = "ID du paiement";
			this->label3->Text = "Date du paiement";
			this->label4->Text = "Montant";
			this->label5->Text = "ID du moyen de paiement";
			this->label6->Text = "ID de la commande";

			b = 3;

			this->dgv_enr->Refresh();
			this->oSvcCommande = gcnew NS_Comp_Svc_Commande::CLservicesCommande();
			this->oDs = this->oSvcCommande->selectionnerTousLesPaiment("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}

		if(a==5)
		{
			this->btn_delete->Hide();
			this->btn_insert->Hide();
			this->btn_update->Hide();
			this->btn_calculer->Hide();
			this->textBox1->Hide();
			this->textBox2->Hide();
			this->textBox3->Hide();
			this->textBox4->Hide();
			this->textBox5->Hide();
			this->textBox6->Hide();
			this->textBox7->Hide();
			this->textBox8->Hide();
			this->textBox9->Hide();
			this->textBox10->Hide();
			this->textBox11->Hide();
			this->textBox12->Hide();
			this->textBox13->Hide();
			this->textBox14->Hide();
			this->textBox15->Hide();
			this->textBox16->Hide();
			this->label2->Hide();
			this->label21->Hide();
			this->label3->Hide();
			this->label31->Hide();
			this->label4->Hide();
			this->label41->Hide();
			this->label5->Hide();
			this->label51->Hide();
			this->label6->Hide();
			this->label61->Hide();
			this->label7->Hide();
			this->label71->Hide();
			this->label8->Hide();
			this->label81->Hide();
			this->label9->Hide();
			this->label10->Hide();
			this->label11->Hide();
			this->label12->Hide();
			this->label13->Hide();
			this->label14->Hide();
			this->label15->Hide();
			this->label16->Hide();
			this->label17->Hide();

			this->dgv_enr->Show();
		}
	}

	private: System::Void buttonsup4_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dgv_enr->Hide();
		this->btn_delete->Hide();
		this->btn_insert->Hide();
		this->btn_update->Hide();
		this->btn_calculer->Hide();
		this->textBox3->Hide();
		this->textBox4->Hide();
		this->textBox5->Hide();
		this->textBox6->Hide();
		this->textBox7->Hide();
		this->textBox8->Hide();
		this->textBox9->Hide();
		this->textBox10->Hide();
		this->textBox11->Hide();
		this->textBox12->Hide();
		this->textBox13->Hide();
		this->textBox14->Hide();
		this->textBox15->Hide();
		this->textBox16->Hide();
		this->label21->Hide();
		this->label31->Hide();
		this->label5->Hide();
		this->label51->Hide();
		this->label6->Hide();
		this->label61->Hide();
		this->label7->Hide();
		this->label71->Hide();
		this->label8->Hide();
		this->label81->Hide();
		this->label9->Hide();
		this->label10->Hide();
		this->label11->Hide();
		this->label12->Hide();
		this->label13->Hide();
		this->label14->Hide();
		this->label15->Hide();
		this->label16->Hide();
		this->label17->Hide();

		this->textBox1->Show();
		this->textBox2->Show();
		this->label2->Show();
		this->label3->Show();
		this->label4->Show();
		this->label41->Show();

		this->label2->Text = "ID du client";
		this->label3->Text = "Nom du client";
		this->label4->Text = "Le montant total des achats pour ce client est de :";
		this->label41->Text = "4";
	}


	private: System::Void buttonsup5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->btn_delete->Hide();
		this->btn_insert->Hide();
		this->btn_update->Hide();
		this->btn_calculer->Hide();
		this->textBox1->Hide();
		this->textBox2->Hide();
		this->textBox3->Hide();
		this->textBox4->Hide();
		this->textBox5->Hide();
		this->textBox6->Hide();
		this->textBox7->Hide();
		this->textBox8->Hide();
		this->textBox9->Hide();
		this->textBox10->Hide();
		this->textBox11->Hide();
		this->textBox12->Hide();
		this->textBox13->Hide();
		this->textBox14->Hide();
		this->textBox15->Hide();
		this->textBox16->Hide();
		this->label2->Hide();
		this->label21->Hide();
		this->label3->Hide();
		this->label31->Hide();
		this->label4->Hide();
		this->label41->Hide();
		this->label5->Hide();
		this->label51->Hide();
		this->label6->Hide();
		this->label61->Hide();
		this->label7->Hide();
		this->label71->Hide();
		this->label8->Hide();
		this->label81->Hide();
		this->label9->Hide();
		this->label10->Hide();
		this->label11->Hide();
		this->label12->Hide();
		this->label13->Hide();
		this->label14->Hide();
		this->label15->Hide();
		this->label16->Hide();
		this->label17->Hide();

		this->dgv_enr->Show();
	}


	private: System::Void buttonsup6_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->btn_delete->Hide();
		this->btn_insert->Hide();
		this->btn_update->Hide();
		this->btn_calculer->Hide();
		this->textBox1->Hide();
		this->textBox2->Hide();
		this->textBox3->Hide();
		this->textBox4->Hide();
		this->textBox5->Hide();
		this->textBox6->Hide();
		this->textBox7->Hide();
		this->textBox8->Hide();
		this->textBox9->Hide();
		this->textBox10->Hide();
		this->textBox11->Hide();
		this->textBox12->Hide();
		this->textBox13->Hide();
		this->textBox14->Hide();
		this->textBox15->Hide();
		this->textBox16->Hide();
		this->label2->Hide();
		this->label21->Hide();
		this->label3->Hide();
		this->label31->Hide();
		this->label4->Hide();
		this->label41->Hide();
		this->label5->Hide();
		this->label51->Hide();
		this->label6->Hide();
		this->label61->Hide();
		this->label7->Hide();
		this->label71->Hide();
		this->label8->Hide();
		this->label81->Hide();
		this->label9->Hide();
		this->label10->Hide();
		this->label11->Hide();
		this->label12->Hide();
		this->label13->Hide();
		this->label14->Hide();
		this->label15->Hide();
		this->label16->Hide();
		this->label17->Hide();

		this->dgv_enr->Show();
	}
	private: System::Void buttonsup7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dgv_enr->Hide();
		this->btn_delete->Hide();
		this->btn_insert->Hide();
		this->btn_update->Hide();
		this->btn_calculer->Hide();
		this->textBox1->Hide();
		this->textBox2->Hide();
		this->textBox3->Hide();
		this->textBox4->Hide();
		this->textBox5->Hide();
		this->textBox6->Hide();
		this->textBox7->Hide();
		this->textBox8->Hide();
		this->textBox9->Hide();
		this->textBox10->Hide();
		this->textBox11->Hide();
		this->textBox12->Hide();
		this->textBox13->Hide();
		this->textBox14->Hide();
		this->textBox15->Hide();
		this->textBox16->Hide();
		this->label3->Hide();
		this->label31->Hide();
		this->label4->Hide();
		this->label41->Hide();
		this->label5->Hide();
		this->label51->Hide();
		this->label6->Hide();
		this->label61->Hide();
		this->label7->Hide();
		this->label71->Hide();
		this->label8->Hide();
		this->label81->Hide();
		this->label9->Hide();
		this->label10->Hide();
		this->label11->Hide();
		this->label12->Hide();
		this->label13->Hide();
		this->label14->Hide();
		this->label15->Hide();
		this->label16->Hide();
		this->label17->Hide();

		this->label2->Show();
		this->label21->Show();
		this->label2->Text = "La valeur commerciale du stock est de :";
		this->label21->Text = "7";
	}


	private: System::Void buttonsup8_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dgv_enr->Hide();
		this->btn_delete->Hide();
		this->btn_insert->Hide();
		this->btn_update->Hide();
		this->btn_calculer->Hide();
		this->textBox1->Hide();
		this->textBox2->Hide();
		this->textBox3->Hide();
		this->textBox4->Hide();
		this->textBox5->Hide();
		this->textBox6->Hide();
		this->textBox7->Hide();
		this->textBox8->Hide();
		this->textBox9->Hide();
		this->textBox10->Hide();
		this->textBox11->Hide();
		this->textBox12->Hide();
		this->textBox13->Hide();
		this->textBox14->Hide();
		this->textBox15->Hide();
		this->textBox16->Hide();
		this->label3->Hide();
		this->label31->Hide();
		this->label4->Hide();
		this->label41->Hide();
		this->label5->Hide();
		this->label51->Hide();
		this->label6->Hide();
		this->label61->Hide();
		this->label7->Hide();
		this->label71->Hide();
		this->label8->Hide();
		this->label81->Hide();
		this->label9->Hide();
		this->label10->Hide();
		this->label11->Hide();
		this->label12->Hide();
		this->label13->Hide();
		this->label14->Hide();
		this->label15->Hide();
		this->label16->Hide();
		this->label17->Hide();

		this->label2->Show();
		this->label21->Show();
		this->label2->Text = "La valeur d'achat du stock est de :";
		this->label21->Text = "8";
	}




	private: System::Void buttonsup9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dgv_enr->Hide();
		this->btn_delete->Hide();
		this->btn_insert->Hide();
		this->btn_update->Hide();
		this->textBox4->Hide();
		this->textBox5->Hide();
		this->textBox6->Hide();
		this->textBox7->Hide();
		this->textBox8->Hide();
		this->textBox9->Hide();
		this->textBox10->Hide();
		this->textBox11->Hide();
		this->textBox12->Hide();
		this->textBox13->Hide();
		this->textBox14->Hide();
		this->textBox15->Hide();
		this->textBox16->Hide();
		this->label31->Hide();
		this->label5->Hide();
		this->label6->Hide();
		this->label61->Hide();
		this->label7->Hide();
		this->label71->Hide();
		this->label8->Hide();
		this->label81->Hide();
		this->label9->Hide();
		this->label10->Hide();
		this->label11->Hide();
		this->label12->Hide();
		this->label13->Hide();
		this->label14->Hide();
		this->label15->Hide();
		this->label16->Hide();
		this->label17->Hide();

		this->btn_calculer->Show();
		this->textBox1->Show();
		this->textBox2->Show();
		this->textBox3->Show();
		this->label2->Show();
		this->label21->Show();
		this->label3->Show();
		this->label31->Show();
		this->label4->Show();
		this->label41->Show();

		this->label2->Text = "Rentrez la marge";
		this->label21->Text = "commerciale";
		this->label3->Text = "Rentrez la remise";
		this->label31->Text = "commerciale";
		this->label4->Text = "Rentrez la démarque";
		this->label41->Text = "inconnue";
		
		upd = 5;


	}

	private: System::Void btn_calculer_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (upd == 5)
		{
			this->label7->Show();
			this->label71->Show();
			this->label7->Text = "La valeur du stock serait de :";
			this->label71->Text = "9";
		}
	}

	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e) {

		if (a == 1) {
			if (b == 1) {
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oSvcPersonnel->AjouterUnePersonne(textBox2->Text, textBox3->Text, Convert::ToDateTime(textBox4->Text), Convert::ToInt16(textBox5->Text), Convert::ToInt16(textBox6->Text));
				this->dgv_enr->Refresh();
				this->oDs = this->oSvcPersonnel->selectionnerToutesLesPersonnes("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}else if (b == 2) {
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oSvcPersonnel->AjouterUneAdresse(Convert::ToInt16(textBox2->Text), textBox3->Text, textBox4->Text, textBox5->Text, Convert::ToInt16(textBox6->Text), textBox7->Text, Convert::ToInt16(textBox8->Text));
				this->dgv_enr->Refresh();
				this->oDs = this->oSvcPersonnel->selectionnerToutesLesAdresses("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			else if (b == 3) {
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oSvcPersonnel->AjouterUneVille(textBox2->Text, textBox3->Text,textBox4->Text);
				this->dgv_enr->Refresh();
				this->oDs = this->oSvcPersonnel->selectionnerToutesLesVilles("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
		}else if(a == 2){
			if (b == 1) {
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oSvcClient->AjouterUnClient(textBox2->Text, textBox3->Text, Convert::ToDateTime(textBox4->Text), Convert::ToDateTime(textBox5->Text), Convert::ToInt16(textBox6->Text), Convert::ToInt16(textBox6->Text));
				this->dgv_enr->Refresh();
				this->oDs = this->oSvcClient->selectionnerToutesLesClients("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			else if (b == 2) {
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oSvcClient->AjouterUneAdresse(Convert::ToInt16(textBox2->Text), textBox3->Text, textBox4->Text, textBox5->Text, Convert::ToInt16(textBox6->Text), textBox7->Text, Convert::ToInt16(textBox8->Text));
				this->dgv_enr->Refresh();
				this->oDs = this->oSvcClient->selectionnerToutesLesAdresses("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			else if (b == 3) {
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oSvcClient->AjouterUneVille(textBox2->Text, textBox3->Text, textBox4->Text);
				this->dgv_enr->Refresh();
				this->oDs = this->oSvcClient->selectionnerToutesLesVilles("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
		}
		else if(a == 3){
			this->oSvcStock = gcnew NS_Comp_Svc_Stock::CLserviceStock();
			this->oSvcStock->AjouterUnProduit(textBox8->Text, textBox2->Text, textBox3->Text, Convert::ToDecimal(1),Convert::ToDecimal(textBox4->Text)/10, Convert::ToDecimal(textBox5->Text), Convert::ToInt16(textBox7->Text), Convert::ToInt16(textBox6->Text));
			this->dgv_enr->Refresh();
			this->oSvcStock = gcnew NS_Comp_Svc_Stock::CLserviceStock();
			this->oDs = this->oSvcStock->selectionnerToutesLesProduits("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}
		else if (a == 4) {
			if(b == 1){}
			else if (b == 2){}
			else if (b == 3) {
				this->oSvcCommande = gcnew NS_Comp_Svc_Commande::CLservicesCommande();
				this->oSvcCommande->AjouterUnPaiment(Convert::ToDateTime(textBox2->Text), Convert::ToDecimal(textBox3->Text), Convert::ToInt16(textBox4->Text), Convert::ToInt16(textBox5->Text));
				this->dgv_enr->Refresh();
				this->oSvcCommande = gcnew NS_Comp_Svc_Commande::CLservicesCommande();
				this->oDs = this->oSvcCommande->selectionnerTousLesPaiment("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
		}

	}
	private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {

		if (a == 1) {
			if (b == 1) {
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oSvcPersonnel->SupprimerUnePersonne(textBox2->Text, textBox3->Text);
				this->dgv_enr->Refresh();
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oDs = this->oSvcPersonnel->selectionnerToutesLesPersonnes("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			else if (b == 2) {
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oSvcPersonnel->SupprimerUneAdresse(Convert::ToInt16(textBox2->Text), textBox3->Text, textBox4->Text, textBox5->Text, Convert::ToInt16(textBox6->Text), textBox7->Text, Convert::ToInt16(textBox8->Text));
				this->dgv_enr->Refresh();
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oDs = this->oSvcPersonnel->selectionnerToutesLesAdresses("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			else if (b == 3) {
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oSvcPersonnel->SupprimerUneVille(textBox2->Text, textBox3->Text, textBox4->Text);
				this->dgv_enr->Refresh();
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oDs = this->oSvcPersonnel->selectionnerToutesLesVilles("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
		}
		else if (a == 2) {
			if (b == 1) {
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oSvcClient->SupprimerUnClient(textBox2->Text, textBox3->Text);
				this->dgv_enr->Refresh();
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oDs = this->oSvcClient->selectionnerToutesLesClients("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			else if (b == 2) {
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oSvcClient->SupprimerUneAdresse(Convert::ToInt16(textBox2->Text), textBox3->Text, textBox4->Text, textBox5->Text, Convert::ToInt16(textBox6->Text), Convert::ToInt16(textBox8->Text));
				this->dgv_enr->Refresh();
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oDs = this->oSvcClient->selectionnerToutesLesAdresses("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			else if (b == 3) {
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oSvcClient->SupprimerUneVille(textBox2->Text, textBox3->Text, textBox4->Text);
				this->dgv_enr->Refresh();
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oDs = this->oSvcClient->selectionnerToutesLesVilles("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
		}
		else if (a == 3) {
			this->oSvcStock->SupprimerUnProduit(textBox3->Text);
			this->dgv_enr->Refresh();
			this->oSvcStock = gcnew NS_Comp_Svc_Stock::CLserviceStock();
			this->oDs = this->oSvcStock->selectionnerToutesLesProduits("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}
		else if (a == 4) {
			if (b == 1) {}
			else if (b == 2) {}
			else if (b == 3) {
				this->oSvcCommande = gcnew NS_Comp_Svc_Commande::CLservicesCommande();
				this->oSvcCommande->SupprimerUnPaiment(Convert::ToInt16(textBox5->Text));
				this->dgv_enr->Refresh();
				this->oSvcCommande = gcnew NS_Comp_Svc_Commande::CLservicesCommande();
				this->oDs = this->oSvcCommande->selectionnerTousLesPaiment("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
		}
	}
	private: System::Void btn_update_Click(System::Object^ sender, System::EventArgs^ e) {

		if (a == 1) {
			if (b == 1) {
				this->oSvcPersonnel->ModifierUnePersonne(Convert::ToInt16(textBox1->Text), textBox2->Text, textBox3->Text, Convert::ToDateTime(textBox4->Text), Convert::ToInt16(textBox5->Text), Convert::ToInt16(textBox6->Text));
				this->dgv_enr->Refresh();
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oDs = this->oSvcPersonnel->selectionnerToutesLesPersonnes("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			else if (b == 2) {
				this->oSvcPersonnel->ModifierUneAdresse(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), textBox3->Text, textBox4->Text, textBox5->Text, Convert::ToInt16(textBox6->Text),textBox7->Text,Convert::ToInt16(textBox8->Text));
				this->dgv_enr->Refresh();
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oDs = this->oSvcPersonnel->selectionnerToutesLesAdresses("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			else if (b == 3) {
				this->oSvcPersonnel->ModifierUneVille(Convert::ToInt16(textBox1->Text), textBox2->Text, textBox3->Text, textBox4->Text);
				this->dgv_enr->Refresh();
				this->oSvcPersonnel = gcnew NS_Comp_Svc_Personnel::CLservicesPersonnel();
				this->oDs = this->oSvcPersonnel->selectionnerToutesLesVilles("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
		}
		else if (a == 2) {
			if (b == 1) {
				this->oSvcClient->ModifierUnClient(textBox2->Text, textBox3->Text, Convert::ToDateTime(textBox4->Text), Convert::ToDateTime(textBox5->Text), Convert::ToInt16(textBox6->Text), Convert::ToInt16(textBox6->Text), Convert::ToInt16(textBox1->Text));
				this->dgv_enr->Refresh();
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oDs = this->oSvcClient->selectionnerToutesLesClients("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			else if (b == 2) {
				this->oSvcClient->ModifierUneAdresse(Convert::ToInt16(textBox1->Text), Convert::ToInt16(textBox2->Text), textBox3->Text, textBox4->Text, textBox5->Text, Convert::ToInt16(textBox6->Text), textBox7->Text, Convert::ToInt16(textBox8->Text));
				this->dgv_enr->Refresh();
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oDs = this->oSvcClient->selectionnerToutesLesAdresses("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
			else if (b == 3) {
				this->oSvcClient->ModifierUneVille(Convert::ToInt16(textBox1->Text), textBox2->Text, textBox3->Text, textBox4->Text);
				this->dgv_enr->Refresh();
				this->oSvcClient = gcnew NS_Comp_Svc_Client::CLservicesClient();
				this->oDs = this->oSvcClient->selectionnerToutesLesVilles("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
		}
		else if (a == 3) {
			this->oSvcStock->ModifierUnProduit(textBox8->Text, textBox2->Text, textBox3->Text, Convert::ToDecimal(1.0), Convert::ToDecimal(textBox4->Text), Convert::ToDecimal(textBox5->Text), Convert::ToInt16(textBox7->Text), Convert::ToInt16(textBox6->Text),Convert::ToInt16(textBox1->Text));
			this->dgv_enr->Refresh();
			this->oSvcStock = gcnew NS_Comp_Svc_Stock::CLserviceStock();
			this->oDs = this->oSvcStock->selectionnerToutesLesProduits("Rsl");
			this->dgv_enr->DataSource = this->oDs;
			this->dgv_enr->DataMember = "Rsl";
		}
		else if (a == 4) {
			if (b == 1) {}
			else if (b == 2) {}
			else if (b == 3) {
				this->oSvcCommande = gcnew NS_Comp_Svc_Commande::CLservicesCommande();
				this->oSvcCommande->ModifierUnPaiment(Convert::ToInt16(textBox1->Text),Convert::ToDateTime(textBox2->Text),Convert::ToDecimal(textBox3->Text), Convert::ToInt16(textBox4->Text), Convert::ToInt16(textBox5->Text));
				this->dgv_enr->Refresh();
				this->oSvcCommande = gcnew NS_Comp_Svc_Commande::CLservicesCommande();
				this->oDs = this->oSvcCommande->selectionnerTousLesPaiment("Rsl");
				this->dgv_enr->DataSource = this->oDs;
				this->dgv_enr->DataMember = "Rsl";
			}
		}

	}


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

