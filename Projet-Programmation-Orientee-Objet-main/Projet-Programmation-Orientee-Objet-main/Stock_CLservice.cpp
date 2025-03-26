
#include "Stock_CLservice.h"

NS_Comp_Svc_Stock::CLserviceStock::CLserviceStock(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage_Stock::CLmapStock();
}
System::Data::DataSet^ NS_Comp_Svc_Stock::CLserviceStock::selectionnerToutesLesProduits(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc_Stock::CLserviceStock::AjouterUnProduit(System::String^ couleur_article, System::String^ designation_article, System::String^ reference_article, System::Decimal^ multiplicateur_prix_article, System::Decimal^ prix_ht_article, System::Decimal^ taux_tva_article, System::Int16^ seuil_reapprovisionnement, System::Int16^ quantitie_stock)
{
	System::String^ sql;

	this->oMappTB->setCouleur_Article(couleur_article);
	this->oMappTB->setDesignation_Article(designation_article);
	this->oMappTB->setMultiplicateur_Prix_Article(multiplicateur_prix_article);
	this->oMappTB->setPrix_HT_Article(prix_ht_article);
	this->oMappTB->setQuantite_Stock(quantitie_stock);
	this->oMappTB->setSeuil_Reapprovisionnement(seuil_reapprovisionnement);
	this->oMappTB->setReference_Article(reference_article);
	this->oMappTB->setTaux_TVA_Article(taux_tva_article);
	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Stock::CLserviceStock::SupprimerUnProduit(System::String^ reference_article)
{
	System::String^ sql;

	this->oMappTB->setReference_Article(reference_article);


	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Stock::CLserviceStock::ModifierUnProduit(System::String^ couleur_article, System::String^ designation_article, System::String^ reference_article, System::Decimal^ multiplicateur_prix_article, System::Decimal^ prix_ht_article, System::Decimal^ taux_tva_article, System::Int16^ seuil_reapprovisionnement, System::Int16^ quantitie_stock, int id_produit)
{
	System::String^ sql;

	this->oMappTB->setID_Article(id_produit);
	this->oMappTB->setCouleur_Article(couleur_article);
	this->oMappTB->setDesignation_Article(designation_article);
	this->oMappTB->setMultiplicateur_Prix_Article(multiplicateur_prix_article);
	this->oMappTB->setPrix_HT_Article(prix_ht_article);
	this->oMappTB->setQuantite_Stock(quantitie_stock);
	this->oMappTB->setSeuil_Reapprovisionnement(seuil_reapprovisionnement);
	this->oMappTB->setReference_Article(reference_article);
	this->oMappTB->setTaux_TVA_Article(taux_tva_article);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}