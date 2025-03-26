#pragma once
#include "Personnel_CLmapTB.h"
#include "CAD.h"

namespace NS_Comp_Svc_Personnel
{
	ref class CLservicesPersonnel
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage_Personnel::CLmapPersonnel^ oMappPersonnel;
	public:
		CLservicesPersonnel(void);
		System::Data::DataSet^ selectionnerToutesLesPersonnes(System::String^);
		System::Data::DataSet^ selectionnerToutesLesAdresses(System::String^);
		System::Data::DataSet^ selectionnerToutesLesVilles(System::String^);
		void AjouterUnePersonne(System::String^ , System::String^ , System::DateTime^ , int , int );
		void AjouterUneAdresse(System::Int16^ , System::String^ , System::String^ , System::String^ , System::Int16^ , System::String^ , int);
		void AjouterUneVille(System::String^ , System::String^ , System::String^ );
		void ModifierUnePersonne(int, System::String^ , System::String^ , System::DateTime^ , int, int);
		void ModifierUneAdresse(int, System::Int16^, System::String^, System::String^, System::String^, System::Int16^, System::String^, int);
		void ModifierUneVille(int, System::String^, System::String^, System::String^);
		void SupprimerUnePersonne(System::String^, System::String^);
		void SupprimerUneAdresse(System::Int16^, System::String^, System::String^, System::String^, System::Int16^, System::String^,int);
		void SupprimerUneVille(System::String^, System::String^, System::String^);
	};
}