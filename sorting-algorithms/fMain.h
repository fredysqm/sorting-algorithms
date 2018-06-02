#pragma once

namespace algorithms {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::IO;

	/// <summary>
	/// Summary for fMain
	/// </summary>
	public ref class fMain : public System::Windows::Forms::Form
	{
	public:
		fMain(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:

		array<int>^ ArrayIntegerUnsort;
		array<String^>^ ArrayStringUnsort;
		array<int>^ ArrayIntegerSort;
		array<String^>^ ArrayStringSort;

	private: System::Windows::Forms::CheckBox^  chkSelection;
	protected:

	protected:
	private: System::Windows::Forms::CheckBox^  chkRadix;
	private: System::Windows::Forms::Button^  cmdSaveResults;
	private: System::Windows::Forms::SaveFileDialog^  dlgGuardarResultados;
			 int LongitudArray;

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~fMain()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::GroupBox^  fraAlgoritmos;
	private: System::Windows::Forms::CheckBox^  chkBuble;
	private: System::Windows::Forms::CheckBox^  chkShell;
	private: System::Windows::Forms::CheckBox^  chkInsert;
	private: System::Windows::Forms::CheckBox^  chkHeap;
	private: System::Windows::Forms::CheckBox^  chkQuick;
	private: System::Windows::Forms::CheckBox^  chkMerge;
	private: System::Windows::Forms::Button^  cmdOrdenar;
	private: System::Windows::Forms::Button^  cmdAbrirTest;
	private: System::Windows::Forms::GroupBox^  fraTest;
	private: System::Windows::Forms::GroupBox^  fraResultados;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ charResultados;
	private: System::Windows::Forms::DataGridView^  dgvResultados;
	private: System::Windows::Forms::OpenFileDialog^  dlgAbrirTest;
	private: System::Windows::Forms::Label^  lblCantidad;
	private: System::Windows::Forms::RadioButton^  rdCadena;
	private: System::Windows::Forms::RadioButton^  rdEnteros;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->cmdOrdenar = (gcnew System::Windows::Forms::Button());
			this->fraAlgoritmos = (gcnew System::Windows::Forms::GroupBox());
			this->chkSelection = (gcnew System::Windows::Forms::CheckBox());
			this->chkRadix = (gcnew System::Windows::Forms::CheckBox());
			this->chkHeap = (gcnew System::Windows::Forms::CheckBox());
			this->chkQuick = (gcnew System::Windows::Forms::CheckBox());
			this->chkMerge = (gcnew System::Windows::Forms::CheckBox());
			this->chkBuble = (gcnew System::Windows::Forms::CheckBox());
			this->chkShell = (gcnew System::Windows::Forms::CheckBox());
			this->chkInsert = (gcnew System::Windows::Forms::CheckBox());
			this->cmdAbrirTest = (gcnew System::Windows::Forms::Button());
			this->fraTest = (gcnew System::Windows::Forms::GroupBox());
			this->lblCantidad = (gcnew System::Windows::Forms::Label());
			this->rdCadena = (gcnew System::Windows::Forms::RadioButton());
			this->rdEnteros = (gcnew System::Windows::Forms::RadioButton());
			this->fraResultados = (gcnew System::Windows::Forms::GroupBox());
			this->charResultados = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dgvResultados = (gcnew System::Windows::Forms::DataGridView());
			this->dlgAbrirTest = (gcnew System::Windows::Forms::OpenFileDialog());
			this->cmdSaveResults = (gcnew System::Windows::Forms::Button());
			this->dlgGuardarResultados = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fraAlgoritmos->SuspendLayout();
			this->fraTest->SuspendLayout();
			this->fraResultados->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->charResultados))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvResultados))->BeginInit();
			this->SuspendLayout();
			// 
			// cmdOrdenar
			// 
			this->cmdOrdenar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->cmdOrdenar->Location = System::Drawing::Point(719, 69);
			this->cmdOrdenar->Name = L"cmdOrdenar";
			this->cmdOrdenar->Size = System::Drawing::Size(73, 23);
			this->cmdOrdenar->TabIndex = 3;
			this->cmdOrdenar->Text = L"Sort";
			this->cmdOrdenar->UseVisualStyleBackColor = true;
			this->cmdOrdenar->Click += gcnew System::EventHandler(this, &fMain::cmdOrdenar_Click);
			// 
			// fraAlgoritmos
			// 
			this->fraAlgoritmos->BackColor = System::Drawing::SystemColors::Control;
			this->fraAlgoritmos->Controls->Add(this->chkSelection);
			this->fraAlgoritmos->Controls->Add(this->chkRadix);
			this->fraAlgoritmos->Controls->Add(this->chkHeap);
			this->fraAlgoritmos->Controls->Add(this->chkQuick);
			this->fraAlgoritmos->Controls->Add(this->chkMerge);
			this->fraAlgoritmos->Controls->Add(this->chkBuble);
			this->fraAlgoritmos->Controls->Add(this->chkShell);
			this->fraAlgoritmos->Controls->Add(this->chkInsert);
			this->fraAlgoritmos->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->fraAlgoritmos->Location = System::Drawing::Point(250, 12);
			this->fraAlgoritmos->Name = L"fraAlgoritmos";
			this->fraAlgoritmos->Size = System::Drawing::Size(542, 51);
			this->fraAlgoritmos->TabIndex = 1;
			this->fraAlgoritmos->TabStop = false;
			this->fraAlgoritmos->Text = L"Algorithms";
			// 
			// chkSelection
			// 
			this->chkSelection->AutoSize = true;
			this->chkSelection->Checked = true;
			this->chkSelection->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkSelection->Location = System::Drawing::Point(73, 21);
			this->chkSelection->Name = L"chkSelection";
			this->chkSelection->Size = System::Drawing::Size(70, 17);
			this->chkSelection->TabIndex = 9;
			this->chkSelection->Text = L"Selection";
			this->chkSelection->UseVisualStyleBackColor = true;
			// 
			// chkRadix
			// 
			this->chkRadix->AutoSize = true;
			this->chkRadix->Checked = true;
			this->chkRadix->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkRadix->Location = System::Drawing::Point(442, 21);
			this->chkRadix->Name = L"chkRadix";
			this->chkRadix->Size = System::Drawing::Size(53, 17);
			this->chkRadix->TabIndex = 3;
			this->chkRadix->Text = L"Radix";
			this->chkRadix->UseVisualStyleBackColor = true;
			// 
			// chkHeap
			// 
			this->chkHeap->AutoSize = true;
			this->chkHeap->Checked = true;
			this->chkHeap->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkHeap->Location = System::Drawing::Point(207, 21);
			this->chkHeap->Name = L"chkHeap";
			this->chkHeap->Size = System::Drawing::Size(52, 17);
			this->chkHeap->TabIndex = 8;
			this->chkHeap->Text = L"Heap";
			this->chkHeap->UseVisualStyleBackColor = true;
			// 
			// chkQuick
			// 
			this->chkQuick->AutoSize = true;
			this->chkQuick->Checked = true;
			this->chkQuick->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkQuick->Location = System::Drawing::Point(327, 21);
			this->chkQuick->Name = L"chkQuick";
			this->chkQuick->Size = System::Drawing::Size(54, 17);
			this->chkQuick->TabIndex = 5;
			this->chkQuick->Text = L"Quick";
			this->chkQuick->UseVisualStyleBackColor = true;
			// 
			// chkMerge
			// 
			this->chkMerge->AutoSize = true;
			this->chkMerge->Checked = true;
			this->chkMerge->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkMerge->Location = System::Drawing::Point(265, 21);
			this->chkMerge->Name = L"chkMerge";
			this->chkMerge->Size = System::Drawing::Size(56, 17);
			this->chkMerge->TabIndex = 4;
			this->chkMerge->Text = L"Merge";
			this->chkMerge->UseVisualStyleBackColor = true;
			// 
			// chkBuble
			// 
			this->chkBuble->AutoSize = true;
			this->chkBuble->Checked = true;
			this->chkBuble->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkBuble->Location = System::Drawing::Point(14, 21);
			this->chkBuble->Name = L"chkBuble";
			this->chkBuble->Size = System::Drawing::Size(53, 17);
			this->chkBuble->TabIndex = 2;
			this->chkBuble->Text = L"Buble";
			this->chkBuble->UseVisualStyleBackColor = true;
			// 
			// chkShell
			// 
			this->chkShell->AutoSize = true;
			this->chkShell->Checked = true;
			this->chkShell->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkShell->Location = System::Drawing::Point(387, 21);
			this->chkShell->Name = L"chkShell";
			this->chkShell->Size = System::Drawing::Size(49, 17);
			this->chkShell->TabIndex = 1;
			this->chkShell->Text = L"Shell";
			this->chkShell->UseVisualStyleBackColor = true;
			// 
			// chkInsert
			// 
			this->chkInsert->AutoSize = true;
			this->chkInsert->Checked = true;
			this->chkInsert->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkInsert->Location = System::Drawing::Point(149, 21);
			this->chkInsert->Name = L"chkInsert";
			this->chkInsert->Size = System::Drawing::Size(52, 17);
			this->chkInsert->TabIndex = 0;
			this->chkInsert->Text = L"Insert";
			this->chkInsert->UseVisualStyleBackColor = true;
			// 
			// cmdAbrirTest
			// 
			this->cmdAbrirTest->Location = System::Drawing::Point(14, 19);
			this->cmdAbrirTest->Name = L"cmdAbrirTest";
			this->cmdAbrirTest->Size = System::Drawing::Size(75, 23);
			this->cmdAbrirTest->TabIndex = 6;
			this->cmdAbrirTest->Text = L"Open";
			this->cmdAbrirTest->UseVisualStyleBackColor = true;
			this->cmdAbrirTest->Click += gcnew System::EventHandler(this, &fMain::cmdAbrirTest_Click);
			// 
			// fraTest
			// 
			this->fraTest->Controls->Add(this->lblCantidad);
			this->fraTest->Controls->Add(this->cmdAbrirTest);
			this->fraTest->Location = System::Drawing::Point(12, 12);
			this->fraTest->Name = L"fraTest";
			this->fraTest->Size = System::Drawing::Size(232, 52);
			this->fraTest->TabIndex = 7;
			this->fraTest->TabStop = false;
			this->fraTest->Text = L"Test";
			// 
			// lblCantidad
			// 
			this->lblCantidad->AutoSize = true;
			this->lblCantidad->Location = System::Drawing::Point(105, 24);
			this->lblCantidad->Name = L"lblCantidad";
			this->lblCantidad->Size = System::Drawing::Size(0, 13);
			this->lblCantidad->TabIndex = 9;
			// 
			// rdCadena
			// 
			this->rdCadena->AutoSize = true;
			this->rdCadena->Location = System::Drawing::Point(90, 72);
			this->rdCadena->Name = L"rdCadena";
			this->rdCadena->Size = System::Drawing::Size(52, 17);
			this->rdCadena->TabIndex = 8;
			this->rdCadena->Text = L"String";
			this->rdCadena->UseVisualStyleBackColor = true;
			this->rdCadena->Visible = false;
			// 
			// rdEnteros
			// 
			this->rdEnteros->AutoSize = true;
			this->rdEnteros->Checked = true;
			this->rdEnteros->Location = System::Drawing::Point(26, 72);
			this->rdEnteros->Name = L"rdEnteros";
			this->rdEnteros->Size = System::Drawing::Size(58, 17);
			this->rdEnteros->TabIndex = 7;
			this->rdEnteros->TabStop = true;
			this->rdEnteros->Text = L"Integer";
			this->rdEnteros->UseVisualStyleBackColor = true;
			this->rdEnteros->Visible = false;
			// 
			// fraResultados
			// 
			this->fraResultados->Controls->Add(this->charResultados);
			this->fraResultados->Controls->Add(this->dgvResultados);
			this->fraResultados->Location = System::Drawing::Point(12, 98);
			this->fraResultados->Name = L"fraResultados";
			this->fraResultados->Size = System::Drawing::Size(780, 371);
			this->fraResultados->TabIndex = 8;
			this->fraResultados->TabStop = false;
			this->fraResultados->Text = L"Results";
			// 
			// charResultados
			// 
			this->charResultados->BackColor = System::Drawing::Color::Gainsboro;
			this->charResultados->BorderlineColor = System::Drawing::Color::Maroon;
			this->charResultados->BorderlineWidth = 3;
			chartArea1->Area3DStyle->Enable3D = true;
			chartArea1->Area3DStyle->Inclination = 10;
			chartArea1->Area3DStyle->Rotation = 10;
			chartArea1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			chartArea1->BorderColor = System::Drawing::Color::Maroon;
			chartArea1->Name = L"ChartArea1";
			this->charResultados->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->charResultados->Legends->Add(legend1);
			this->charResultados->Location = System::Drawing::Point(237, 19);
			this->charResultados->Name = L"charResultados";
			this->charResultados->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			this->charResultados->Size = System::Drawing::Size(530, 346);
			this->charResultados->TabIndex = 1;
			this->charResultados->Text = L"Grafico";
			this->charResultados->Visible = false;
			// 
			// dgvResultados
			// 
			this->dgvResultados->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvResultados->Location = System::Drawing::Point(14, 19);
			this->dgvResultados->Name = L"dgvResultados";
			this->dgvResultados->RowHeadersVisible = false;
			this->dgvResultados->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dgvResultados->Size = System::Drawing::Size(217, 346);
			this->dgvResultados->TabIndex = 2;
			// 
			// dlgAbrirTest
			// 
			this->dlgAbrirTest->Filter = L"Archivos de texto|*.txt";
			// 
			// cmdSaveResults
			// 
			this->cmdSaveResults->Location = System::Drawing::Point(638, 69);
			this->cmdSaveResults->Name = L"cmdSaveResults";
			this->cmdSaveResults->Size = System::Drawing::Size(75, 23);
			this->cmdSaveResults->TabIndex = 9;
			this->cmdSaveResults->Text = L"Save results";
			this->cmdSaveResults->UseVisualStyleBackColor = true;
			this->cmdSaveResults->Visible = false;
			this->cmdSaveResults->Click += gcnew System::EventHandler(this, &fMain::cmdSaveResults_Click);
			// 
			// dlgGuardarResultados
			// 
			this->dlgGuardarResultados->Filter = L"Archivos de texto|*.txt";
			this->dlgGuardarResultados->Title = L"Sorting algorithms";
			// 
			// fMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(805, 481);
			this->Controls->Add(this->cmdSaveResults);
			this->Controls->Add(this->fraResultados);
			this->Controls->Add(this->rdCadena);
			this->Controls->Add(this->rdEnteros);
			this->Controls->Add(this->fraTest);
			this->Controls->Add(this->fraAlgoritmos);
			this->Controls->Add(this->cmdOrdenar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"fMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sorting algorithms";
			this->fraAlgoritmos->ResumeLayout(false);
			this->fraAlgoritmos->PerformLayout();
			this->fraTest->ResumeLayout(false);
			this->fraTest->PerformLayout();
			this->fraResultados->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->charResultados))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvResultados))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region Algoritmos de ordenación

	bool estaOrdenado(array<int>^ arr) {
		for (int i = 0; i < (arr->Length)-1; i++) {
			if (arr[i] > arr[i + 1]){
				return false;
			}
		}

		return true;
	}

	void insertSort(array<int>^arreglo) {
		int i;

		for(int j=1; j<arreglo->Length; j++) {
		    int key=arreglo[j];
		    i=j-1;
			while(i>=0 && arreglo[i]>key) {
				arreglo[i+1]=arreglo[i];
				i=i-1;
				arreglo[i+1]=key;
			}
		}
	}

	void insertSortText(array<String^>^arreglo) {
		int i;

		for(int j=1; j<arreglo->Length; j++) {
			String^ key = arreglo[j];
			i=j-1;
			while(i>=0 && (arreglo[i]->CompareTo(key)>0)) {
				arreglo[i+1]=arreglo[i];
				i=i-1;
				arreglo[i+1]=key;
			}
		}
	}

	void shellSort(array<int>^arreglo) {
		int i, j, increment, temp;
		int longitud=arreglo->Length;

		for(increment = longitud/2;increment > 0; increment /= 2) {
			for(i = increment; i<longitud; i++) { 
				temp = arreglo[i];
				for(j = i; j >= increment ;j-=increment) {
					if(temp < arreglo[j-increment]) {
						arreglo[j] = arreglo[j-increment];
					} else {
						break;
					}
				}
				arreglo[j] = temp;
			}
		}
	}

	void shellSortText(array<String^>^arreglo) {  
		int longitud=arreglo->Length;
		int i, j, increment;
		String ^temp;
			    
		for(increment = longitud/2;increment > 0; increment /= 2) {
			for(i = increment; i<longitud; i++) { 
				temp = arreglo[i];
				for(j = i; j >= increment ;j-=increment) {
					if(temp->CompareTo(arreglo[j-increment])<0) {
						arreglo[j] = arreglo[j-increment];
					} else {
						break;
					}
				}
				arreglo[j] = temp;
			}
		}
	}

	void bubleSort(array<int>^arreglo) {
		int temp;

		for(int i=0; i<arreglo->Length; ++i) {
			for(int j=(arreglo->Length)-1; j>i; --j) {
				if(arreglo[j]<arreglo[j-1]) {
					temp=arreglo[j];
					arreglo[j]=arreglo[j-1];
					arreglo[j-1]=temp;
				}
			}
		}
	}

	void bubleSortText(array<String^>^arreglo) {
		String^ temp;

		for(int i=0;i<arreglo->Length;++i) {
			for(int j=((arreglo->Length)-1);j>i;--j) {
				if(arreglo[j]->CompareTo(arreglo[j-1])<0) {
					temp=arreglo[j];
					arreglo[j]=arreglo[j-1];
					arreglo[j-1]=temp;
				}
			}
		}
	}

	void merge(array<int>^ array_of_integers, int p, int q, int r) {
		int n1 = q - p + 1;
		int n2 = r - q; 
		int i, j, k;
		array<int>^ left_array=gcnew array<int>(n1+1);
		array <int>^ right_array=gcnew array<int>(n2+1);
	
		for(i = 0; i <n1; i++)
			left_array[i] = array_of_integers[p + i];
		for(j = 0; j <n2; j++)
			right_array[j] = array_of_integers[q + j + 1];

		left_array[n1]=123456789;
		right_array[n2]=123456789;

		i = 0;
		j = 0;

		for(k = p; k<=r; k++){
			if(left_array[i] <= right_array[j]){
			array_of_integers[k] = left_array[i];
			i++;
			} else {
			array_of_integers[k] = right_array[j];
			j++;
			}
		}
	}

	void mergeSort(array<int>^ array_of_integers, int p, int r)
	{
		if(p < r){
			int q = System::Math::Floor((p+r)/2);
			mergeSort(array_of_integers, p, q);
			mergeSort(array_of_integers, q + 1, r);
			merge(array_of_integers, p, q, r);
		}
	}

	void mergeSortText(array<String^>^ array_of_strings, int p, int q, int r){
		int n1 = q - p +1;
		int n2 = r-q; 
		int i, j, k;
		array<String^>^ left_array=gcnew array<String^>(n1+1);
		array <String^>^ right_array=gcnew array<String^>(n2+1);
		for(i = 0; i < n1; i++)
		
			left_array[i] = array_of_strings[p + i];
		for(j = 0; j < n2; j++)
		
			right_array[j] = array_of_strings[q + j + 1];

		left_array[n1]="zyxwvutsrqponmlk";
		right_array[n2]="zyxwvutsrqponmlk";
		i = 0;
		j = 0;

		for(k = p; k <=r; k++){
			if(left_array[i]->CompareTo(right_array[j])<=0){
			array_of_strings[k] = left_array[i];
			i++;
			} else {
			array_of_strings[k] = right_array[j];
			j++;
			}
		}
	}

	void merge_sorText(array<String^>^ array_of_strings, int p, int r) {
		if(p< r){
		int q = System::Math::Floor((p+r)/2);
			merge_sorText(array_of_strings, p, q);
			merge_sorText(array_of_strings, q + 1, r);
			mergeSortText(array_of_strings, p, q, r);
		}
	}
	
	int heapsize;

	void heapSort(array<int>^arr) {
		int i,len,temp;
		len=arr->Length;
		build_max_heap(arr);

		for(i= len-1;i>=1;i--) {
			temp=arr[0];
			arr[0]=arr[i];
			arr[i]=temp;

			heapsize = heapsize -1;
			max_heapify(arr,0);
		}
	}

	void max_heapify(array<int>^arr,int i) {
		int l,r,largest,temp;
		l=2*i;
		r=2*i+1;
		if(l<heapsize && arr[l]>arr[i])
			largest = l;
		else
			largest = i;
		if(r<heapsize && arr[r]>arr[largest])
			largest = r;

		if(largest != i) {
			temp=arr[i];
			arr[i]=arr[largest];
			arr[largest]=temp;
			max_heapify(arr,largest);
		}
	}

	void build_max_heap(array<int>^arr) {   
		int len=arr->Length;
		heapsize = len;
		int i;
		for(i =len/2;i>=0;i--){
			max_heapify(arr,i);
		}
	}
	
	void heapSortText(array<String^>^arr) {
		int i,len;
		String^ temp;
		len=arr->Length;
		build_max_heapText(arr);
		for(i= len-1;i>=1;i--) {
			temp=arr[0];
			arr[0]=arr[i];
			arr[i]=temp;

			heapsize = heapsize -1;
			max_heapifyText(arr,0);
		}
	}

	void max_heapifyText(array<String^>^arr,int i) {
		int l,r,largest;
		String^ temp;
		l=2*i;
		r=2*i+1;

		if(l<heapsize && arr[l]->CompareTo(arr[i])>0)
			largest = l;
		else
			largest = i;
		if(r<heapsize && arr[r]->CompareTo(arr[largest])>0)
			largest = r;

		if(largest != i) {
			temp=arr[i];
			arr[i]=arr[largest];
			arr[largest]=temp;
			max_heapifyText(arr,largest);
		}
	}

	void build_max_heapText(array<String^>^arr) {   
		int len=arr->Length;
		heapsize = len;
		int i;
		for(i =len/2;i>=0;i--) {
			max_heapifyText(arr,i);
		}
	}

	void countingSort(array<int>^ arr) {
		int max=arr[0];
		int n=arr->Length;
		for (int i=1;i<n;i++) {
			if (arr[i]>max) { 
				max=arr[i];
			}
		}
		int min=arr[0];
		
		for (int i=1;i<n;i++) {
			if (arr[i]<min) { 
				min=arr[i];
			}
		}

		array<int>^B=gcnew array<int>(n);

		array<int>^C=gcnew array<int>(max+1);
		for (int i=0;i<max+1;i++) {
			C[i]=0;
		}
		for (int i=0;i<n;i++){
			C[arr[i]]=C[arr[i]]+1;
		}

		for (int i=1;i<max;i++) {
			C[i]=C[i]+C[i-1];
		}
					
		for (int  i=n-1;i>=0;i--) {
			B[C[arr[i]]-1]=arr[i];
			C[arr[i]]=C[arr[i]]-1;
		}
	}

	String^ Max(array<String^>^arr) {
		String ^ k = arr[0];
			for(int i=1; i<arr->Length;i++)
			{
				if(arr[i]->CompareTo(k)>0)
				{
				k=arr[i];
				
				}
	
			}
	    
		return k;
	}

    void quickSort(array<int>^arr, int p,int r) {
		int q;
		if(p<r)
		{
			q=partition(arr,p,r);
			quickSort(arr,p,q-1);  
			quickSort(arr,q+1,r);
		}
	}

	int partition(array<int>^ arr, int p,int r) {
		int x= arr[p];
		int first=p;
		int temp;

		for(int j=p+1; j<=r; j++) {
			if(arr[j]<=x) {
				first++;
				temp=arr[j];
				arr[j]=arr[first];
				arr[first]=temp;
			}

		}
		temp=arr[first];
		arr[first]=arr[p];
	    arr[p]=temp;
		return first;
	}

	void quickSortText(array<String^>^arr, int p,int r) {
		int q;
		if(p<r) {
			q=partitionText(arr,p,r);
			quickSortText(arr,p,q-1);  
			quickSortText(arr,q+1,r);
		}
	}

	int partitionText(array<String^>^arr,int p,int r) {
		String^ x= arr[p];
		int first=p;
		String^ temp;

		for(int j=p+1; j<=r; j++) {
			if(arr[j]->CompareTo(x)<=0)
			{
				first++;
				temp=arr[j];
				arr[j]=arr[first];
				arr[first]=temp;
			}
		}
		temp=arr[first];
		arr[first]=arr[p];
	    arr[p]=temp;
		return first;
	}

	int getMax(array<int>^ arr, int n)
	{
		int mx = arr[0];
		for (int i = 1; i < n; i++)
			if (arr[i] > mx)
				mx = arr[i];
		return mx;
	}

	void countSort(array<int>^ arr, int n, int exp)
	{

		array<int>^ output = gcnew array<int>(n);
		int i, count[10] = { 0 };

		for (i = 0; i < n; i++)
			count[(arr[i] / exp) % 10]++;

		for (i = 1; i < 10; i++)
			count[i] += count[i - 1];

		for (i = n - 1; i >= 0; i--)
		{
			output[count[(arr[i] / exp) % 10] - 1] = arr[i];
			count[(arr[i] / exp) % 10]--;
		}

		for (i = 0; i < n; i++)
			arr[i] = output[i];
	}

	void radixSort(array<int>^ arr, int n)
	{
		int m = getMax(arr, n);

		for (int exp = 1; m / exp > 0; exp *= 10)
			countSort(arr, n, exp);
	}

	void selectionSort(array<int>^ arr, int n)
	{
		int i, j, min_idx;

		// One by one move boundary of unsorted subarray
		for (i = 0; i < n - 1; i++)
		{
			// Find the minimum element in unsorted array
			min_idx = i;
			for (j = i + 1; j < n; j++)
				if (arr[j] < arr[min_idx])
					min_idx = j;

			// Swap the found minimum element with the first element
			int temp = arr[min_idx];
			arr[min_idx] = arr[i];
			arr[i] = temp;
		}
	}

#pragma endregion

private: System::Void cmdAbrirTest_Click(System::Object^  sender, System::EventArgs^  e) {
	if (dlgAbrirTest->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

		this->Enabled = false;
		this->Cursor = System::Windows::Forms::Cursors::WaitCursor;

		try {
			StreamReader ^reader = gcnew StreamReader(dlgAbrirTest->FileName);

			this->LongitudArray = System::Convert::ToInt32(reader->ReadLine());
			this->ArrayIntegerUnsort = gcnew array<int>(LongitudArray);
			this->ArrayIntegerSort = gcnew array<int>(LongitudArray);

			this->cmdSaveResults->Visible = false;
			this->charResultados->Visible = false;

			for (int i = 0; i < this->LongitudArray; i++) {
				this->ArrayIntegerUnsort[i] = System::Convert::ToInt32(reader->ReadLine());
			}
			lblCantidad->Text = "Count: " + this->LongitudArray + " Rows";
			
		}
		catch (System::Exception ^e) {
		}

		dgvResultados->Rows->Clear();

		this->Cursor = System::Windows::Forms::Cursors::Default;
		this->Enabled = true;
	}
}

private: System::Void cmdOrdenar_Click(System::Object^  senrOder, System::EventArgs^  e) {

	this->Enabled = false;
	this->Cursor = System::Windows::Forms::Cursors::WaitCursor;

	dgvResultados->ColumnCount = 3;
	dgvResultados->ColumnHeadersVisible = true;
	dgvResultados->Columns[0]->Name = "Algorithms";
	dgvResultados->Columns[0]->Width = 60;
	dgvResultados->Columns[1]->Name = "Time (ms)";
	dgvResultados->Columns[1]->Width = 80;
	dgvResultados->Columns[2]->Name = "Sorted?";
	dgvResultados->Columns[2]->Width = 50;
	dgvResultados->Rows->Clear();

	Stopwatch ^ Tproceso;
	String^ Stiempo1;
	String^ Stiempo2;
	String^ Stiempo3;
	String^ Stiempo4;
	String^ Stiempo5;
	String^ Stiempo6;
	String^ Stiempo7;
	String^ Stiempo8;
	Int64 frequency;
	double tiempo1, tiempo2, tiempo3, tiempo4, tiempo5, tiempo6, tiempo7, tiempo8, ticks;
	tiempo1 = 0.0;
	tiempo2 = 0.0;
	tiempo3 = 0.0;
	tiempo4 = 0.0;
	tiempo5 = 0.0;
	tiempo6 = 0.0;
	tiempo7 = 0.0;
	tiempo8 = 0.0;
	Stiempo1 = "ns", Stiempo2 = "ns", Stiempo3 = "ns", Stiempo4 = "ns", Stiempo5 = "ns", Stiempo6 = "ns", Stiempo7 = "ns"; Stiempo8 = "ns";
	frequency = Stopwatch::Frequency;

	if (chkBuble->Checked == true)
	{
		array<int>^ arreglo = gcnew array<int>(this->LongitudArray);

		for (int i = 0; i < this->LongitudArray; i++) {
			arreglo[i] = this->ArrayIntegerUnsort[i];
		}

		tiempo3 = 0;

		Tproceso = Stopwatch::StartNew();
		bubleSort(arreglo);
		Tproceso->Stop();
		ticks = System::Convert::ToDouble(Tproceso->ElapsedTicks);
		tiempo3 = (ticks / frequency) * 1000;
		tiempo3 = Math::Round(tiempo3, 2);
		Stiempo3 = System::Convert::ToString(tiempo3);


		bool isOrdered = estaOrdenado(arreglo);
		dgvResultados->Rows->Add( gcnew array<String^>{"Bubble", Stiempo3, System::Convert::ToString(isOrdered)} );

		for (int i = 0; i < this->LongitudArray; i++) {
			this->ArrayIntegerSort[i] = arreglo[i];
		}
	}

	if (chkInsert->Checked == true)
	{
		array<int>^ arreglo = gcnew array<int>(this->LongitudArray);

		for (int i = 0; i < this->LongitudArray; i++) {
			arreglo[i] = this->ArrayIntegerUnsort[i];
		}

		tiempo1 = 0;
		Tproceso = Stopwatch::StartNew();
		insertSort(arreglo);
		Tproceso->Stop();
		ticks = System::Convert::ToDouble(Tproceso->ElapsedTicks);
		tiempo1 = (ticks / frequency) * 1000;
		tiempo1 = Math::Round(tiempo1, 2);
		Stiempo1 = System::Convert::ToString(tiempo1);

		bool isOrdered = estaOrdenado(arreglo);
		dgvResultados->Rows->Add(gcnew array<String^>{"Insert", Stiempo1, System::Convert::ToString(isOrdered)});

		for (int i = 0; i < this->LongitudArray; i++) {
			this->ArrayIntegerSort[i] = arreglo[i];
		}
	}

	if (chkSelection->Checked == true)
	{
		array<int>^ arreglo = gcnew array<int>(this->LongitudArray);

		for (int i = 0; i < this->LongitudArray; i++) {
			arreglo[i] = this->ArrayIntegerUnsort[i];
		}

		tiempo7 = 0;
		Tproceso = Stopwatch::StartNew();
		selectionSort(arreglo, arreglo->Length);
		Tproceso->Stop();
		ticks = System::Convert::ToDouble(Tproceso->ElapsedTicks);
		tiempo7 = (ticks / frequency) * 1000;
		tiempo7 = Math::Round(tiempo7, 2);
		Stiempo7 = System::Convert::ToString(tiempo7);

		bool isOrdered = estaOrdenado(arreglo);
		dgvResultados->Rows->Add(gcnew array<String^>{"Selection", Stiempo7, System::Convert::ToString(isOrdered)});

		for (int i = 0; i < this->LongitudArray; i++) {
			this->ArrayIntegerSort[i] = arreglo[i];
		}
	}

	if (chkShell->Checked == true)
	{
		array<int>^ arreglo = gcnew array<int>(this->LongitudArray);

		for (int i = 0; i < this->LongitudArray; i++) {
			arreglo[i] = this->ArrayIntegerUnsort[i];
		}

		tiempo2 = 0;
		Tproceso = Stopwatch::StartNew();
		shellSort(arreglo);
		Tproceso->Stop();
		ticks = System::Convert::ToDouble(Tproceso->ElapsedTicks);
		tiempo2 = (ticks / frequency) * 1000;
		tiempo2 = Math::Round(tiempo2, 2);
		Stiempo2 = System::Convert::ToString(tiempo2);

		bool isOrdered = estaOrdenado(arreglo);
		dgvResultados->Rows->Add(gcnew array<String^>{"Shell", Stiempo2, System::Convert::ToString(isOrdered)});

		for (int i = 0; i < this->LongitudArray; i++) {
			this->ArrayIntegerSort[i] = arreglo[i];
		}
	}

	if (chkMerge->Checked == true)
	{
		array<int>^ arreglo = gcnew array<int>(this->LongitudArray);

		for (int i = 0; i < this->LongitudArray; i++) {
			arreglo[i] = this->ArrayIntegerUnsort[i];
		}

		tiempo4 = 0;
		Tproceso = Stopwatch::StartNew();
		mergeSort(arreglo, 0, arreglo->Length - 1);
		Tproceso->Stop();
		ticks = System::Convert::ToDouble(Tproceso->ElapsedTicks);
		tiempo4 = (ticks / frequency) * 1000;
		tiempo4 = Math::Round(tiempo4, 2);
		Stiempo4 = System::Convert::ToString(tiempo4);

		bool isOrdered = estaOrdenado(arreglo);
		dgvResultados->Rows->Add(gcnew array<String^>{"Merge", Stiempo4, System::Convert::ToString(isOrdered)});

		for (int i = 0; i < this->LongitudArray; i++) {
			this->ArrayIntegerSort[i] = arreglo[i];
		}
	}
	if (chkQuick->Checked == true)
	{
		array<int>^ arreglo = gcnew array<int>(this->LongitudArray);

		for (int i = 0; i < this->LongitudArray; i++) {
			arreglo[i] = this->ArrayIntegerUnsort[i];
		}

		tiempo5 = 0;
		Tproceso = Stopwatch::StartNew();
		quickSort(arreglo, 0, arreglo->Length - 1);

		Tproceso->Stop();
		ticks = System::Convert::ToDouble(Tproceso->ElapsedTicks);
		tiempo5 = (ticks / frequency) * 1000;
		tiempo5 = Math::Round(tiempo5, 2);
		Stiempo5 = System::Convert::ToString(tiempo5);

		bool isOrdered = estaOrdenado(arreglo);
		dgvResultados->Rows->Add(gcnew array<String^>{"Quick", Stiempo5, System::Convert::ToString(isOrdered)});

		for (int i = 0; i < this->LongitudArray; i++) {
			this->ArrayIntegerSort[i] = arreglo[i];
		}
	}

	if (chkHeap->Checked == true)
	{
		array<int>^ arreglo = gcnew array<int>(this->LongitudArray);

		for (int i = 0; i < this->LongitudArray; i++) {
			arreglo[i] = this->ArrayIntegerUnsort[i];
		}

		tiempo6 = 0;
		Tproceso = Stopwatch::StartNew();
		heapSort(arreglo);
		Tproceso->Stop();
		ticks = System::Convert::ToDouble(Tproceso->ElapsedTicks);
		tiempo6 = (ticks / frequency) * 1000;
		tiempo6 = Math::Round(tiempo6, 2);
		Stiempo6 = System::Convert::ToString(tiempo6);

		bool isOrdered = estaOrdenado(arreglo);
		dgvResultados->Rows->Add(gcnew array<String^>{"Heap", Stiempo6, System::Convert::ToString(isOrdered)});

		for (int i = 0; i < this->LongitudArray; i++) {
			this->ArrayIntegerSort[i] = arreglo[i];
		}
	}

	if (chkRadix->Checked == true)
	{
		array<int>^ arreglo = gcnew array<int>(this->LongitudArray);

		for (int i = 0; i < this->LongitudArray; i++) {
			arreglo[i] = this->ArrayIntegerUnsort[i];
		}

		tiempo8 = 0;
		Tproceso = Stopwatch::StartNew();
		radixSort(arreglo, arreglo->Length);
		Tproceso->Stop();
		ticks = System::Convert::ToDouble(Tproceso->ElapsedTicks);
		tiempo8 = (ticks / frequency) * 1000;
		tiempo8 = Math::Round(tiempo8, 2);
		Stiempo8 = System::Convert::ToString(tiempo8);

		bool isOrdered = estaOrdenado(arreglo);
		dgvResultados->Rows->Add(gcnew array<String^>{"Radix", Stiempo8, System::Convert::ToString(isOrdered)});

		for (int i = 0; i < this->LongitudArray; i++) {
			this->ArrayIntegerSort[i] = arreglo[i];
		}
	}

	this->cmdSaveResults->Visible = true;

	//Graf
	charResultados->Series->Clear();
	charResultados->Titles->Clear();
	this->charResultados->Visible = true;

	array<String^>^series = gcnew array<String^>{"Insert", "Shell", "Buble", "Merge", "Quicksort", "Heap", "Selection", "Radix"};
	array<double>^ puntos = gcnew array<double>{tiempo1, tiempo2, tiempo3, tiempo4, tiempo5, tiempo6, tiempo7, tiempo8};
	double tiempo;

	for (int i = 0; i<series->Length; i++)
	{
		Series^ serie = gcnew Series();
		
		tiempo = System::Convert::ToDouble(puntos[i]);
		DataPoint^ dataPoint = gcnew DataPoint((i + 1), tiempo);
		serie->Points->Add(dataPoint);
		serie->LegendText = series[i];
		serie->Label = System::Convert::ToString(puntos[i]);
		serie->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
		
		charResultados->Series->Add(serie);
	}

	charResultados->Titles->Add("Tiempos");

	this->Cursor = System::Windows::Forms::Cursors::Default;
	this->Enabled = true;
}


private: System::Void cmdSaveResults_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (dlgGuardarResultados->ShowDialog() == System::Windows::Forms::DialogResult::OK) {

		this->Cursor = System::Windows::Forms::Cursors::WaitCursor;
		this->Enabled = false;

		try {
			int cont = 0;

			StreamWriter^ Writer = gcnew StreamWriter(dlgGuardarResultados->FileName);
			for (int i = 0; i < this->LongitudArray; i++)
			{
				Writer->WriteLine(this->ArrayIntegerSort[i]);
			}
			Writer->Flush();
			Writer->Close();
		} catch (System::Exception ^e) {
			//
		}

		this->Cursor = System::Windows::Forms::Cursors::Default;
		this->Enabled = true;
	}
}

};
}
