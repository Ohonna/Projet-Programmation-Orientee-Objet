#pragma once
namespace NS_Comp_Mappage_Stock
{
	ref class CLmapStock
	{
	private:
		System::String^ sSql;
		int ID_Article;
		System::String^ Designation_Article;
		System::String^ Reference_Article;
		System::String^ Couleur_Article;
		System::Int16^ Quantite_Stock;
		System::Int16^ Seuil_Reapprovisionnement;
		System::Decimal^ Taux_TVA_Article;
		System::Decimal^ Multiplicateur_Prix_Article;
		System::Decimal^ Prix_HT_Article;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setID_Article(int);
		void setDesignation_Article(System::String^);
		void setReference_Article(System::String^);
		void setCouleur_Article(System::String^);
		void setQuantite_Stock(System::Int16^);
		void setSeuil_Reapprovisionnement(System::Int16^);
		void setTaux_TVA_Article(System::Decimal^);
		void setMultiplicateur_Prix_Article(System::Decimal^);
		void setPrix_HT_Article(System::Decimal^);

		int getID_Article(void);
		System::String^ getDesignation_Article(void);
		System::String^ getReference_Article(void);
		System::String^ getCouleur_Article(void);
		System::Int16^ getQuantite_Stock(void);
		System::Int16^ getSeuil_Reapprovisionnement(void);
		System::Decimal^ getTaux_TVA_Article(void);
		System::Decimal^ getMultiplicateur_Prix_Article(void);
		System::Decimal^ getPrix_HT_Article(void);
	};
}
