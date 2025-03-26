
#include "Stock_CLmapTB.h"

System::String^ NS_Comp_Mappage_Stock::CLmapStock::Select(void)
{
	return "select Article.ID_Article,Article.Designation_Article, Article.Reference_Article, Article.Prix_HT_Article, Article.Taux_TVA_Article, Article.Multiplicateur_Prix_Article, Article.Quantite_Stock, Article.Seuil_Reaprovisionnement, Article.Couleur_Article from Article";
}
System::String^ NS_Comp_Mappage_Stock::CLmapStock::Insert(void)
{
	return "insert into Article values ('" + this->Designation_Article + "','" + this->Reference_Article + "','" + this->Prix_HT_Article + "','" + this->Taux_TVA_Article + "','" + this->Multiplicateur_Prix_Article + "','" + this->Quantite_Stock + "','" + this->Seuil_Reapprovisionnement + "','" + this->Couleur_Article + "')";
}
System::String^ NS_Comp_Mappage_Stock::CLmapStock::Delete(void)
{
	return "delete from Article where Reference_Article =  '" + this->Reference_Article + "'";
}
System::String^ NS_Comp_Mappage_Stock::CLmapStock::Update(void)
{
	return "update Article SET Designation_Article = '" + this->Designation_Article + "', Reference_Article = '" + this->Reference_Article + "', Prix_HT_Article = '" + this->Prix_HT_Article + "', Taux_TVA_Article = '" + this->Taux_TVA_Article + "', Multiplicateur_Prix_Article = '" + this->Multiplicateur_Prix_Article + "', Quantite_Stock = '" + this->Quantite_Stock + "', Seuil_Reaprovisionnement = '" + this->Seuil_Reapprovisionnement + "', Couleur_Article = '" + this->Couleur_Article + "' where ID_Article = '" + this->ID_Article + "'";
}
void NS_Comp_Mappage_Stock::CLmapStock::setID_Article(int Id)
{
	this->ID_Article = Id;
}
void NS_Comp_Mappage_Stock::CLmapStock::setReference_Article(System::String^ reference_article)
{
	this->Reference_Article = reference_article;
}
void NS_Comp_Mappage_Stock::CLmapStock::setDesignation_Article(System::String^ designation_article)
{
	this->Designation_Article = designation_article;
}
void NS_Comp_Mappage_Stock::CLmapStock::setCouleur_Article(System::String^ couleur_article)
{
	this->Couleur_Article = couleur_article;
}
void NS_Comp_Mappage_Stock::CLmapStock::setMultiplicateur_Prix_Article(System::Decimal^ Multiplication_prix_article)
{
	this->Multiplicateur_Prix_Article = Multiplication_prix_article;
}
void NS_Comp_Mappage_Stock::CLmapStock::setTaux_TVA_Article(System::Decimal^ taux_tva_article)
{
	this->Taux_TVA_Article = taux_tva_article;
}
void NS_Comp_Mappage_Stock::CLmapStock::setPrix_HT_Article(System::Decimal^ prix_ht_article)
{
	this->Prix_HT_Article = prix_ht_article;
}
void NS_Comp_Mappage_Stock::CLmapStock::setQuantite_Stock(System::Int16^ quantite_stock)
{
	this->Quantite_Stock = quantite_stock;
}
void NS_Comp_Mappage_Stock::CLmapStock::setSeuil_Reapprovisionnement(System::Int16^ seuil_reapprovisionnement)
{
	this->Seuil_Reapprovisionnement = seuil_reapprovisionnement;
}
int NS_Comp_Mappage_Stock::CLmapStock::getID_Article(void) { return this->ID_Article; }
System::String^ NS_Comp_Mappage_Stock::CLmapStock::getCouleur_Article(void) { return this->Couleur_Article; }
System::String^ NS_Comp_Mappage_Stock::CLmapStock::getDesignation_Article(void) { return this->Designation_Article; }
System::String^ NS_Comp_Mappage_Stock::CLmapStock::getReference_Article(void) { return this->Reference_Article; }
System::Decimal^ NS_Comp_Mappage_Stock::CLmapStock::getMultiplicateur_Prix_Article(void) { return this->Multiplicateur_Prix_Article; }
System::Decimal^ NS_Comp_Mappage_Stock::CLmapStock::getTaux_TVA_Article(void) { return this->Taux_TVA_Article; }
System::Decimal^ NS_Comp_Mappage_Stock::CLmapStock::getPrix_HT_Article(void) { return this->Prix_HT_Article; }
System::Int16^ NS_Comp_Mappage_Stock::CLmapStock::getSeuil_Reapprovisionnement(void) { return this->Seuil_Reapprovisionnement; }
System::Int16^ NS_Comp_Mappage_Stock::CLmapStock::getQuantite_Stock(void) { return this->Quantite_Stock; }