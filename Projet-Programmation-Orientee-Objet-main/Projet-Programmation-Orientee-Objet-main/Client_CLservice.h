#pragma once
#include "Client_CLmapTB.h"
#include "CAD.h"

namespace NS_Comp_Svc_Client
{
	ref class CLservicesClient
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage_Client::CLmapClient^ oMappTB;
	public:
		CLservicesClient(void);
		System::Data::DataSet^ selectionnerToutesLesClients(System::String^);
		System::Data::DataSet^ selectionnerToutesLesAdresses(System::String^);
		System::Data::DataSet^ selectionnerToutesLesVilles(System::String^);
		void AjouterUnClient(System::String^, System::String^, System::DateTime^, System::DateTime^, int,int);
		void AjouterUneAdresse(System::Int16^, System::String^, System::String^, System::String^, System::Int16^, System::String^, int);
		void AjouterUneVille(System::String^, System::String^, System::String^);
		void ModifierUnClient(System::String^, System::String^, System::DateTime^, System::DateTime^,int,int,int);
		void ModifierUneAdresse(int, System::Int16^, System::String^, System::String^, System::String^, System::Int16^, System::String^, int);
		void ModifierUneVille(int, System::String^, System::String^, System::String^);
		void SupprimerUnClient(System::String^, System::String^);
		void SupprimerUneAdresse(System::Int16^, System::String^, System::String^, System::String^, System::Int16^, int);
		void SupprimerUneVille(System::String^, System::String^, System::String^);
	};
}