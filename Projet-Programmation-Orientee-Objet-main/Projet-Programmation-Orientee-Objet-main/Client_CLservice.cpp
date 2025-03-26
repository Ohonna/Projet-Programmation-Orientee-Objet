
#include "Client_CLservice.h"

NS_Comp_Svc_Client::CLservicesClient::CLservicesClient(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage_Client::CLmapClient();
}
System::Data::DataSet^ NS_Comp_Svc_Client::CLservicesClient::selectionnerToutesLesClients(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc_Client::CLservicesClient::selectionnerToutesLesAdresses(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectAdresse();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc_Client::CLservicesClient::selectionnerToutesLesVilles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectVille();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc_Client::CLservicesClient::AjouterUnClient(System::String^ nom, System::String^ prenom, System::DateTime^ date_de_naissance, System::DateTime^ date_premier_achat,int id_adresse_facturation,int id_adresse_livraison)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setDate_De_Naissance(date_de_naissance);
	this->oMappTB->setDate_Premier_Achat(date_premier_achat);
	this->oMappTB->setID_Adresse_Facturation(id_adresse_facturation);
	this->oMappTB->setID_Adresse_Livraison(id_adresse_livraison);

	sql = this->oMappTB->Insert();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Client::CLservicesClient::AjouterUneAdresse(System::Int16^ numero, System::String^ rue, System::String^ nom_residence, System::String^ nom_immeuble, System::Int16^ etage, System::String^ complement, int id_ville)
{
	System::String^ sql;

	this->oMappTB->setNumero_Adresse(numero);
	this->oMappTB->setRue_Adresse(rue);
	this->oMappTB->setNom_Residence_Adresse(nom_residence);
	this->oMappTB->setNom_Immeuble_Adresse(nom_immeuble);
	this->oMappTB->setEtage_Adresse(etage);
	this->oMappTB->setComplement(complement);
	this->oMappTB->setID_Ville(id_ville);

	sql = this->oMappTB->InsertAdresse();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Client::CLservicesClient::AjouterUneVille(System::String^ ville, System::String^ code_postal, System::String^ pays_ville)
{
	System::String^ sql;

	this->oMappTB->SetNom_Ville(ville);
	this->oMappTB->setCode_Potal(code_postal);
	this->oMappTB->setPays_Ville(pays_ville);
	
	sql = this->oMappTB->InsertVille();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Client::CLservicesClient::SupprimerUnClient(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);

	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Client::CLservicesClient::SupprimerUneAdresse(System::Int16^ numero, System::String^ rue, System::String^ nom_residence, System::String^ nom_immeuble, System::Int16^ etage, int id_ville_adresse)
{
	System::String^ sql;

	this->oMappTB->setNumero_Adresse(numero);
	this->oMappTB->setRue_Adresse(rue);
	this->oMappTB->setNom_Residence_Adresse(nom_residence);
	this->oMappTB->setNom_Immeuble_Adresse(nom_immeuble);
	this->oMappTB->setEtage_Adresse(etage);
	this->oMappTB->setID_Ville(id_ville_adresse);

	sql = this->oMappTB->DeleteAdresse();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Client::CLservicesClient::SupprimerUneVille(System::String^ nom, System::String^ codepostal, System::String^ pays)
{
	System::String^ sql;

	this->oMappTB->SetNom_Ville(nom);
	this->oMappTB->setCode_Potal(codepostal);
	this->oMappTB->setPays_Ville(pays);


	sql = this->oMappTB->DeleteVille();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Client::CLservicesClient::ModifierUnClient(System::String^ nom, System::String^ prenom, System::DateTime^ date_de_naissance, System::DateTime^ date_premier_achat,int id_adresse_facturation,int id_adresse_livraison,int id_client)
{
	System::String^ sql;

	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	this->oMappTB->setDate_De_Naissance(date_de_naissance);
	this->oMappTB->setDate_Premier_Achat(date_premier_achat);
	this->oMappTB->setID_Adresse_Facturation(id_adresse_facturation);
	this->oMappTB->setID_Adresse_Livraison(id_adresse_livraison);
	this->oMappTB->setID_Client(id_client);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Client::CLservicesClient::ModifierUneAdresse(int id_adresse, System::Int16^ numero, System::String^ rue, System::String^ nom_residence, System::String^ nom_immeuble, System::Int16^ etage, System::String^ complement, int id_ville)
{
	System::String^ sql;

	this->oMappTB->setNumero_Adresse(numero);
	this->oMappTB->setRue_Adresse(rue);
	this->oMappTB->setNom_Residence_Adresse(nom_residence);
	this->oMappTB->setNom_Immeuble_Adresse(nom_immeuble);
	this->oMappTB->setEtage_Adresse(etage);
	this->oMappTB->setComplement(complement);
	this->oMappTB->setID_Ville(id_ville);
	this->oMappTB->setID_Adresse(id_adresse);

	sql = this->oMappTB->UpdateAdresse();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Client::CLservicesClient::ModifierUneVille(int id_ville, System::String^ nom_ville, System::String^ code_postal, System::String^ pays_ville)
{
	System::String^ sql;

	this->oMappTB->SetNom_Ville(nom_ville);
	this->oMappTB->setCode_Potal(code_postal);
	this->oMappTB->setPays_Ville(pays_ville);
	this->oMappTB->setID_Ville(id_ville);


	sql = this->oMappTB->UpdateVille();

	this->oCad->actionRows(sql);
}