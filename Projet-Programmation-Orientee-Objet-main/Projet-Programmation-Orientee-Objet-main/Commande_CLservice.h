#pragma once
#include "Commande_CLmapTB.h"
#include "CAD.h"

namespace NS_Comp_Svc_Commande
{
	ref class CLservicesCommande
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage_Commande::CLmapCommande^ oMappTB;
	public:
		CLservicesCommande(void);
		System::Data::DataSet^ selectionnerToutesLesCommandes(System::String^);
		System::Data::DataSet^ selectionnerTousLesPaiment(System::String^);
		void AjouterUneCommande(System::String^, System::DateTime^, System::DateTime^);
		void AjouterUnPaiment(System::DateTime^ , System::Decimal^ , int , int );
		void ModifierUneCommande(System::String^, System::DateTime^, System::DateTime^);
		void ModifierUnPaiment(int, System::DateTime^, System::Decimal^, int, int);
		void SupprimerUneCommande(System::String^);
		void SupprimerUnPaiment(int);
	};
}