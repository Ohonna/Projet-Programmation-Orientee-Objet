#pragma once
namespace NS_Comp_Mappage_Commande
{
	ref class CLmapCommande
	{
	private:
		System::String^ sSql;
		int ID_Client,ID_Facture,ID_Commande,id_paiment,id_paiment_moyen;
		System::String^ Reference_Commande;
		System::Decimal^ Montant;
		System::DateTime^ Date_Livraison;
		System::DateTime^ Date_Emission;
		System::DateTime^ Date_Paiment;

	public:
		System::String^ Select(void);
		System::String^ SelectPaiment(void);
		System::String^ Insert(void);
		System::String^ InsertPaiment(void);
		System::String^ Delete(void);
		System::String^ DeletePaiment(void);
		System::String^ Update(void);
		System::String^ UpdatePaiment(void);
		void setID_Client(int);
		void setID_Facture(int);
		void setID_Commande(int);
		void setID_Paiment(int);
		void setID_Paiment_Moyen(int);
		void setMontant(System::Decimal^);
		void setDate_Paiment(System::DateTime^);
		void setReference_Commande(System::String^);
		void setDate_Livraison(System::DateTime^);
		void setDateEmission(System::DateTime^);

		int getID_Client(void);
		int getID_Facture(void);
		int getID_Commande(void);
		System::DateTime^ getDate_Livraison(void);
		System::DateTime^ getDate_Emission(void);
		System::String^ getReference_Commande(void);

	};
}