#pragma once
#include "CAD.h"
#include "Stock_CLmapTB.h"

namespace NS_Comp_Svc_Stock
{
	ref class CLserviceStock
	{
	private:
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage_Stock::CLmapStock^ oMappTB;
	public:
		CLserviceStock(void);
		System::Data::DataSet^ selectionnerToutesLesProduits(System::String^);
		void AjouterUnProduit(System::String^, System::String^, System::String^, System::Decimal^, System::Decimal^, System::Decimal^, System::Int16^, System::Int16^);
		void ModifierUnProduit(System::String^, System::String^, System::String^, System::Decimal^, System::Decimal^, System::Decimal^, System::Int16^, System::Int16^,int);
		void SupprimerUnProduit(System::String^);
	};
}
