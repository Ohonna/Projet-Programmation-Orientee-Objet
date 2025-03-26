#pragma once
namespace NS_Comp_Mappage_Personnel
{
	ref class CLmapPersonnel
	{
	private:
		System::String^ sSql;
		int ID_Personnel, ID_Adresse, ID_Ville, ID_Supperieur, ID_Personnel_Adresse;
		System::String^ nom;
		System::String^ prenom;
		System::DateTime^ date_embauche;
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
		System::String^ SelectPersonnel(void);
		System::String^ SelectAdresse(void);
		System::String^ SelectVille(void);
		System::String^ InsertPersonnel(void);
		System::String^ InsertAdresse(void);
		System::String^ InsertVille(void);
		System::String^ DeletePersonnel(void);
		System::String^ DeleteAdresse(void);
		System::String^ DeleteVille(void);
		System::String^ UpdatePersonnel(void);
		System::String^ UpdateAdresse(void);
		System::String^ UpdateVille(void);
		void setComplement(System::String^);
		void setID_Personnal(int);
		void setID_Personnel_Adresse(int);
		void setID_Ville(int);
		void setID_Supperieur(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDate_Embauche(System::DateTime^);
		void setNumero_Adresse(System::Int16^);
		void setEtage_Adresse(System::Int16^);
		void setRue_Adresse(System::String^);
		void setNom_Residence_Adresse(System::String^);
		void setNom_Immeuble_Adresse(System::String^);
		void SetNom_Ville(System::String^);
		void setCode_Potal(System::String^);
		void setPays_Ville(System::String^);

		int getID_Supperieur(void);
		int getID_Personnal(void);
		int getID_Personnel_Adresse(void);
		int getID_Ville(void);
		System::DateTime^ getDate_Embauche(void);
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
	};
}