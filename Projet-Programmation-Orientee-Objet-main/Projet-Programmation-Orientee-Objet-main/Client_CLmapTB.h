#pragma once
namespace NS_Comp_Mappage_Client
{
	ref class CLmapClient
	{
	private:
		System::String^ sSql;
		int ID_Client,ID_Adresse,ID_Ville,ID_Adresse_Facturation,ID_Adresse_Livraison;
		System::String^ Nom;
		System::String^ Prenom;
		System::DateTime^ Date_De_Naissance;
		System::DateTime^ Date_Premier_Achat;
		System::Int16^ Numero_Adresse;
		System::Int16^ Etage_Adresse;
		System::String^ Rue_Adresse;
		System::String^ Nom_Residence_Adresse;
		System::String^ Nom_Immeuble_Adresse;
		System::String^ Nom_Ville;
		System::String^ Code_Postal;
		System::String^ Pays_Ville;
		System::String^ Complement;

	public:
		System::String^ Select(void);
		System::String^ SelectAdresse(void);
		System::String^ SelectVille(void);
		System::String^ Insert(void);
		System::String^ InsertAdresse(void);
		System::String^ InsertVille(void);
		System::String^ Delete(void);
		System::String^ DeleteAdresse(void);
		System::String^ DeleteVille(void);
		System::String^ Update(void);
		System::String^ UpdateAdresse(void);
		System::String^ UpdateVille(void);
		void setID_Client(int);
		void setComplement(System::String^);
		void setID_Adresse(int);
		void setID_Ville(int);
		void setID_Adresse_Facturation(int);
		void setID_Adresse_Livraison(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDate_De_Naissance(System::DateTime^);
		void setDate_Premier_Achat(System::DateTime^);
		void setNumero_Adresse(System::Int16^);
		void setEtage_Adresse(System::Int16^);
		void setRue_Adresse(System::String^);
		void setNom_Residence_Adresse(System::String^);
		void setNom_Immeuble_Adresse(System::String^);
		void SetNom_Ville(System::String^);
		void setCode_Potal(System::String^);
		void setPays_Ville(System::String^);

		int getID_Client(void);
		int getID_Adresse(void);
		int getID_Ville(void);
		int getID_Adresse_Facturation(void);
		int getID_Adresse_Livraison(void);
		System::DateTime^ getDate_De_Naissance(void);
		System::DateTime^ getDate_Premier_Achat(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::Int16^ getNumero_Adresse(void);
		System::Int16^ getEtage_Adresse(void);
		System::String^ getRue_Adresse(void);
		System::String^ getNom_Residence_Adresse(void);
		System::String^ getNom_Immeuble_Adresse(void);
		System::String^ getNom_Ville(void);
		System::String^ getCode_Postal(void);
		System::String^ getPays_Ville(void);
		System::String^ getComplement(void);
	
	};
}