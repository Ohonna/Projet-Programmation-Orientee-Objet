
#include "Commande_CLmapTB.h"

System::String^ NS_Comp_Mappage_Commande::CLmapCommande::Select(void)
{
	return "Select ID_Commande_Client,Reference_Commande,Date_Livraison,Date_Emission,Designation_Article,Quantite_Article,Prix_Article from Commande inner join Link ON ID_Commande = ID_Liaison_Commande inner join Article on Link.ID_Liaison_Article = Article.ID_Article";
}
System::String^ NS_Comp_Mappage_Commande::CLmapCommande::SelectPaiment(void)
{
	return "select * from Paiement";
}
System::String^ NS_Comp_Mappage_Commande::CLmapCommande::Insert(void)
{
	return "";
}
System::String^ NS_Comp_Mappage_Commande::CLmapCommande::InsertPaiment(void)
{
	return "insert into Paiement values ('" + Date_Paiment +"','" + Montant + "','" + ID_Commande + "','" + id_paiment_moyen + "')";
}
System::String^ NS_Comp_Mappage_Commande::CLmapCommande::Delete(void)
{
	return "delete from Commande where Reference_Commande = '"+ this->Reference_Commande +"'";
}
System::String^ NS_Comp_Mappage_Commande::CLmapCommande::DeletePaiment(void)
{
	return "delete from Paiement where ID_Paiement_Commande = '" + this->ID_Commande + "'";
}
System::String^ NS_Comp_Mappage_Commande::CLmapCommande::Update(void)
{
	return "";
}
System::String^ NS_Comp_Mappage_Commande::CLmapCommande::UpdatePaiment(void)
{
	return "update Paiement SET Date_Paiement = '" + Date_Paiment + "', Montant_Paiement = '" + Montant + "', ID_Paiement_Commande = '" + ID_Commande + "', ID_Paiement_MoyPaiement = '" + id_paiment_moyen + "' where ID_Paiement = '" + id_paiment + "'";
}
void NS_Comp_Mappage_Commande::CLmapCommande::setID_Client(int Id)
{
	this->ID_Client = Id;
}
void NS_Comp_Mappage_Commande::CLmapCommande::setID_Paiment(int Id)
{
	this->id_paiment = Id;
}
void NS_Comp_Mappage_Commande::CLmapCommande::setID_Paiment_Moyen(int Id)
{
	this->id_paiment_moyen = Id;
}
void NS_Comp_Mappage_Commande::CLmapCommande::setID_Commande(int Id)
{
	this->ID_Commande = Id;
}
void NS_Comp_Mappage_Commande::CLmapCommande::setID_Facture(int Id)
{
	this->ID_Facture = Id;
}
void NS_Comp_Mappage_Commande::CLmapCommande::setReference_Commande(System::String^ reference_commande)
{
	this->Reference_Commande = reference_commande;
}
void NS_Comp_Mappage_Commande::CLmapCommande::setMontant(System::Decimal^ montant)
{
	this->Montant = montant;
}
void NS_Comp_Mappage_Commande::CLmapCommande::setDate_Paiment(System::DateTime^ date_paiment)	
{
	this->Date_Paiment = date_paiment;
}
void NS_Comp_Mappage_Commande::CLmapCommande::setDateEmission(System::DateTime^ date_emission)
{
	this->Date_Emission = date_emission;
}
void NS_Comp_Mappage_Commande::CLmapCommande::setDate_Livraison(System::DateTime^ date_livraison)
{
	this->Date_Livraison = date_livraison;
}
int NS_Comp_Mappage_Commande::CLmapCommande::getID_Client(void) { return this->ID_Client; }
int NS_Comp_Mappage_Commande::CLmapCommande::getID_Commande(void) { return this->ID_Commande; }
int NS_Comp_Mappage_Commande::CLmapCommande::getID_Facture(void) { return this->ID_Facture; }
System::String^ NS_Comp_Mappage_Commande::CLmapCommande::getReference_Commande(void) { return this->Reference_Commande; }
System::DateTime^ NS_Comp_Mappage_Commande::CLmapCommande::getDate_Emission(void) { return this->Date_Emission; }
System::DateTime^ NS_Comp_Mappage_Commande::CLmapCommande::getDate_Livraison(void) { return this->Date_Livraison; }
