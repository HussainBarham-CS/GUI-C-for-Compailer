#pragma once
#include<iostream>
namespace TEACOMPILER {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ newFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ compailerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ rUNToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ getTokenToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ playToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::TreeView^ treeView1;




	private: System::Windows::Forms::TreeNode^ treeNode1;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			treeNode1 = (gcnew System::Windows::Forms::TreeNode(L"NONE"));
			System::Windows::Forms::TreeNode^ treeNode2 = (gcnew System::Windows::Forms::TreeNode(L"File Name", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode1 }));
			System::Windows::Forms::TreeNode^ treeNode3 = (gcnew System::Windows::Forms::TreeNode(L"Compailer"));
			System::Windows::Forms::TreeNode^ treeNode4 = (gcnew System::Windows::Forms::TreeNode(L"Project", gcnew cli::array< System::Windows::Forms::TreeNode^  >(1) { treeNode3 }));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->compailerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rUNToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->getTokenToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fileToolStripMenuItem,
					this->toolStripMenuItem1, this->compailerToolStripMenuItem, this->getTokenToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1100, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newFileToolStripMenuItem,
					this->openFileToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fileToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newFileToolStripMenuItem
			// 
			this->newFileToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newFileToolStripMenuItem.Image")));
			this->newFileToolStripMenuItem->Name = L"newFileToolStripMenuItem";
			this->newFileToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->newFileToolStripMenuItem->Text = L"- new file";
			this->newFileToolStripMenuItem->ToolTipText = L"new file";
			this->newFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newFileToolStripMenuItem_Click);
			// 
			// openFileToolStripMenuItem
			// 
			this->openFileToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openFileToolStripMenuItem.Image")));
			this->openFileToolStripMenuItem->Name = L"openFileToolStripMenuItem";
			this->openFileToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openFileToolStripMenuItem->Text = L"- open file";
			this->openFileToolStripMenuItem->ToolTipText = L"open file";
			this->openFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFileToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitToolStripMenuItem.Image")));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"- Exit";
			this->exitToolStripMenuItem->ToolTipText = L"exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolStripMenuItem1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(59, 20);
			this->toolStripMenuItem1->Text = L"Project";
			// 
			// compailerToolStripMenuItem
			// 
			this->compailerToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->rUNToolStripMenuItem });
			this->compailerToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->compailerToolStripMenuItem->Name = L"compailerToolStripMenuItem";
			this->compailerToolStripMenuItem->Size = System::Drawing::Size(75, 20);
			this->compailerToolStripMenuItem->Text = L"Compailer";
			// 
			// rUNToolStripMenuItem
			// 
			this->rUNToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"rUNToolStripMenuItem.Image")));
			this->rUNToolStripMenuItem->Name = L"rUNToolStripMenuItem";
			this->rUNToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->rUNToolStripMenuItem->Text = L"RUN";
			// 
			// getTokenToolStripMenuItem
			// 
			this->getTokenToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->playToolStripMenuItem });
			this->getTokenToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->getTokenToolStripMenuItem->Name = L"getTokenToolStripMenuItem";
			this->getTokenToolStripMenuItem->Size = System::Drawing::Size(77, 20);
			this->getTokenToolStripMenuItem->Text = L"Get Token";
			// 
			// playToolStripMenuItem
			// 
			this->playToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"playToolStripMenuItem.Image")));
			this->playToolStripMenuItem->Name = L"playToolStripMenuItem";
			this->playToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->playToolStripMenuItem->Text = L"Play";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(45, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox1->Location = System::Drawing::Point(0, 27);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";


			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(562, 395);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->ForeColor = System::Drawing::Color::Red;
			this->textBox2->Location = System::Drawing::Point(0, 428);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(562, 171);
			this->textBox2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox3->Location = System::Drawing::Point(568, 27);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox3->Size = System::Drawing::Size(353, 572);
			this->textBox3->TabIndex = 3;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox4->Location = System::Drawing::Point(927, 329);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(161, 270);
			this->textBox4->TabIndex = 4;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// treeView1
			// 
			this->treeView1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->treeView1->Location = System::Drawing::Point(927, 27);
			this->treeView1->Name = L"treeView1";
			this->treeNode1->ForeColor = System::Drawing::Color::RoyalBlue;
			this->treeNode1->Name = L"Node0";
			this->treeNode1->Text = L"NONE";
			treeNode2->ForeColor = System::Drawing::Color::Red;
			treeNode2->Name = L"Node0";
			treeNode2->Text = L"File Name";
			treeNode3->ForeColor = System::Drawing::Color::RoyalBlue;
			treeNode3->Name = L"Node2";
			treeNode3->Text = L"Compailer";
			treeNode4->ForeColor = System::Drawing::Color::Red;
			treeNode4->Name = L"Node1";
			treeNode4->Text = L"Project";
			this->treeView1->Nodes->AddRange(gcnew cli::array< System::Windows::Forms::TreeNode^  >(2) { treeNode2, treeNode4 });
			this->treeView1->Size = System::Drawing::Size(161, 296);
			this->treeView1->TabIndex = 5;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(1100, 600);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tea Compiler";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			ResumeLayout(false);
			PerformLayout();

		}




	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}




		   String^ file_Name;
		   String^ read_file;
		   String^ new_name_file;


	private: System::Void openFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		openFileDialog1->ShowDialog();
		file_Name = openFileDialog1->FileName;
		read_file = File::ReadAllText(file_Name);
		textBox1->Text = read_file;

		int x;
		for (int i = 0; i < file_Name->Length; i++)
		{
			if (file_Name[i].Equals('\\'))
			{
				x = i;
			}
		}
		for (int i = x + 1; i < file_Name->Length; i++)
		{
			new_name_file += file_Name[i];
		}


		treeNode1->Text = new_name_file;
		new_name_file = "";


		// OK button was pressed.



	}

	private: System::Void newFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = L"";
		treeNode1->Text = "New File";

	}



	};

}
