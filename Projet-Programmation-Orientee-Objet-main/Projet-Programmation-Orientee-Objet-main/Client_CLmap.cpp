
#include "Client_CLmapTB.h"

System::String^ NS_Comp_Mappage_Client::CLmapClient::Select(void)
{
	return "select Client.ID_Client,Client.Nom_Client, Client.Prenom_Client, Client.Date_De_Naissance, Client.Date_Premier_Achat,Client.ID_Adresse_Facturation,'Numéro'=(select Adresse.Numero from Adresse where ID_Adresse_Facturation = ID_Adresse),'Rue'=(select Adresse.Rue from Adresse where ID_Adresse_Facturation = ID_Adresse),'Nom_Residence'=(select Adresse.Nom_Residence from Adresse where ID_Adresse_Facturation = ID_Adresse),'Nom_Immeuble'=(select Adresse.Nom_Immeuble from Adresse where ID_Adresse_Facturation = ID_Adresse),'Etage'=(select Adresse.Etage from Adresse where ID_Adresse_Facturation = ID_Adresse),'Complément'=(select Adresse.Complement from Adresse where ID_Adresse_Facturation = ID_Adresse), Client.ID_Adresse_Livraison,'Numéro'=(select Adresse.Numero from Adresse where ID_Adresse_Facturation = ID_Adresse),'Rue'=(select Adresse.Rue from Adresse where ID_Adresse_Facturation = ID_Adresse),'Nom_Residence'=(select Adresse.Nom_Residence from Adresse where ID_Adresse_Facturation = ID_Adresse),'Nom_Immeuble'=(select Adresse.Nom_Immeuble from Adresse where ID_Adresse_Facturation = ID_Adresse),'Etage'=(select Adresse.Etage from Adresse where ID_Adresse_Facturation = ID_Adresse),'Complément'=(select Adresse.Complement from Adresse where ID_Adresse_Facturation = ID_Adresse)  from Client inner join Adresse on ID_Adresse_Facturation=ID_Adresse";
}
System::String^ NS_Comp_Mappage_Client::CLmapClient::SelectAdresse(void)
{
	return "select ID_Adresse, Numero, Rue, Nom_Residence, Nom_Immeuble, Etage, Complement, ID_Ville_Adresse from Adresse inner join Client ON ID_Adresse = ID_Adresse_Livraison";
}
System::String^ NS_Comp_Mappage_Client::CLmapClient::SelectVille(void)
{
	return "select * from Ville";
}
System::String^ NS_Comp_Mappage_Client::CLmapClient::Insert(void)
{
	return "insert into Client values ('" + this->Nom + "','" + this->Prenom + "','" + this->Date_De_Naissance + "','" + this->Date_Premier_Achat + "','" + this->ID_Adresse_Facturation + "','" + this->ID_Adresse_Livraison + "');";
}
System::String^ NS_Comp_Mappage_Client::CLmapClient::InsertAdresse(void)
{
	return "insert into Adresse (Numero,Rue,Nom_Residence,Nom_Immeuble,Etage,Complement,ID_Ville_Adresse) values ('" + Numero_Adresse + "','" + Rue_Adresse + "','" + Nom_Residence_Adresse + "','" + Nom_Immeuble_Adresse + "','" + Etage_Adresse + "','" + Complement + "','" + ID_Ville + "')";
}
System::String^ NS_Comp_Mappage_Client::CLmapClient::InsertVille(void)
{
	return "insert into Ville values('" + this->Nom_Ville + "','" + this->Code_Postal + "','" + this->Pays_Ville + "')";
}
System::String^ NS_Comp_Mappage_Client::CLmapClient::Delete(void)
{
	return "delete from Client where Nom_Client = '" + this->Nom + "' and Prenom_Client = '" + this->Prenom + "'";
}
System::String^ NS_Comp_Mappage_Client::CLmapClient::DeleteAdresse(void)
{
	return "delete from Adresse where Numero = '" + Numero_Adresse +"' and Rue = '" + Rue_Adresse + "' and Nom_Residence = '" + Nom_Residence_Adresse + "' and Nom_Immeuble = '" + Nom_Immeuble_Adresse + "' and Etage = '" + Etage_Adresse + "' and ID_Ville_Adresse ='" + ID_Ville + "'";
}
System::String^ NS_Comp_Mappage_Client::CLmapClient::DeleteVille(void)
{
	return "delete from Ville where Nom_Ville = '" + Nom_Ville +"' and Code_Postal = '" + Code_Postal + "' and Pays_Ville = '" + Pays_Ville + "'";
}
System::String^ NS_Comp_Mappage_Client::CLmapClient::Update(void)
{
	return "update Client SET Nom_Client = '" + this->Nom + "', Prenom_Client = '" + this->Prenom + "', Date_De_Naissance = '" + this->Date_De_Naissance + "', Date_Premier_Achat = '" + this->Date_Premier_Achat + "', ID_Adresse_Facturation = '" + this->ID_Adresse_Facturation + "', ID_Adresse_Livraison = '" + this->ID_Adresse_Livraison + "' where ID_Client = '" + this->ID_Client + "'";
}
System::String^ NS_Comp_Mappage_Client::CLmapClient::UpdateAdresse(void)
{
	return "update Adresse SET Numero = '" + Numero_Adresse + "', Rue = '" + Rue_Adresse + "', Nom_Residence = '" + Nom_Residence_Adresse + "', Nom_Immeuble = '" + Nom_Immeuble_Adresse + "', Etage = '" + Etage_Adresse + "', Complement = '" + Complement + "', ID_Ville_Adresse ='" + ID_Ville + "' where ID_Adresse = '" + ID_Adresse + "'";
}
System::String^ NS_Comp_Mappage_Client::CLmapClient::UpdateVille(void)
{
	return "update Ville SET Nom_Ville = '" + Nom_Ville +"',Code_Postal = '" + Code_Postal + "',Pays_Ville = '" + Pays_Ville + "'";
}
void NS_Comp_Mappage_Client::CLmapClient::setID_Client(int Id)
{
	this->ID_Client = Id;
}
void NS_Comp_Mappage_Client::CLmapClient::setID_Adresse_Facturation(int Id)
{
	this->ID_Adresse_Facturation = Id;
}
void NS_Comp_Mappage_Client::CLmapClient::setID_Adresse_Livraison(int Id)
{
	this->ID_Adresse_Livraison = Id;
}
void NS_Comp_Mappage_Client::CLmapClient::setID_Adresse(int Id)
{
	this->ID_Adresse = Id;
}
void NS_Comp_Mappage_Client::CLmapClient::setID_Ville(int Id)
{
	this->ID_Ville = Id;
}
void NS_Comp_Mappage_Client::CLmapClient::setNom(System::String^ nom)
{
	this->Nom = nom;
}
void NS_Comp_Mappage_Client::CLmapClient::setPrenom(System::String^ prenom)
{
	this->Prenom = prenom;
}
void NS_Comp_Mappage_Client::CLmapClient::setDate_De_Naissance(System::DateTime^ date_de_naissance)
{
	this->Date_De_Naissance = date_de_naissance;
}
void NS_Comp_Mappage_Client::CLmapClient::setDate_Premier_Achat(System::DateTime^ date_premier_achat)
{
	this->Date_Premier_Achat = date_premier_achat;
}
void NS_Comp_Mappage_Client::CLmapClient::setNumero_Adresse(System::Int16^ num_adresse)
{
	this->Numero_Adresse = num_adresse;
}
void NS_Comp_Mappage_Client::CLmapClient::setEtage_Adresse(System::Int16^ etage_adresse)
{
	this->Etage_Adresse = etage_adresse;
}
void NS_Comp_Mappage_Client::CLmapClient::setRue_Adresse(System::String^ rue_adresse)
{
	this->Rue_Adresse = rue_adresse;
}
void NS_Comp_Mappage_Client::CLmapClient::setNom_Residence_Adresse(System::String^ nom_residence_adresse)
{
	this->Nom_Residence_Adresse = nom_residence_adresse;
}
void NS_Comp_Mappage_Client::CLmapClient::setNom_Immeuble_Adresse(System::String^ nom_immeuble_adresse)
{
	this->Nom_Immeuble_Adresse = nom_immeuble_adresse;
}
void NS_Comp_Mappage_Client::CLmapClient::SetNom_Ville(System::String^ nom_ville)
{
	this->Nom_Ville = nom_ville;
}
void NS_Comp_Mappage_Client::CLmapClient::setCode_Potal(System::String^ code_postal)
{
	this->Code_Postal = code_postal;
}
void NS_Comp_Mappage_Client::CLmapClient::setPays_Ville(System::String^ pays_ville)
{
	this->Pays_Ville = pays_ville;
}
void NS_Comp_Mappage_Client::CLmapClient::setComplement(System::String^ complement)
{
	this->Complement = complement;
}
int NS_Comp_Mappage_Client::CLmapClient::getID_Adresse(void) { return this->ID_Adresse; }
int NS_Comp_Mappage_Client::CLmapClient::getID_Client(void) { return this->ID_Client; }
int NS_Comp_Mappage_Client::CLmapClient::getID_Ville(void) { return this->ID_Ville; }
int NS_Comp_Mappage_Client::CLmapClient::getID_Adresse_Facturation(void) { return this->ID_Adresse_Facturation; }
int NS_Comp_Mappage_Client::CLmapClient::getID_Adresse_Livraison(void) { return this->ID_Adresse_Livraison; }
System::String^ NS_Comp_Mappage_Client::CLmapClient::getNom(void) { return this->Nom; }
System::String^ NS_Comp_Mappage_Client::CLmapClient::getPrenom(void) { return this->Prenom; }
System::DateTime^ NS_Comp_Mappage_Client::CLmapClient::getDate_De_Naissance(void) { return this->Date_De_Naissance; }
System::DateTime^ NS_Comp_Mappage_Client::CLmapClient::getDate_Premier_Achat(void) { return this->Date_Premier_Achat; }
System::Int16^ NS_Comp_Mappage_Client::CLmapClient::getNumero_Adresse(void) { return this->Numero_Adresse; }
System::Int16^ NS_Comp_Mappage_Client::CLmapClient::getEtage_Adresse(void) { return this->Etage_Adresse; }
System::String^ NS_Comp_Mappage_Client::CLmapClient::getRue_Adresse(void) { return this->Rue_Adresse; }
System::String^ NS_Comp_Mappage_Client::CLmapClient::getNom_Residence_Adresse(void) { return this->Nom_Residence_Adresse; }
System::String^ NS_Comp_Mappage_Client::CLmapClient::getNom_Immeuble_Adresse(void) { return this->Nom_Immeuble_Adresse; }
System::String^ NS_Comp_Mappage_Client::CLmapClient::getNom_Ville(void) { return this->Nom_Ville; }
System::String^ NS_Comp_Mappage_Client::CLmapClient::getCode_Postal(void) { return this->Code_Postal; }
System::String^ NS_Comp_Mappage_Client::CLmapClient::getPays_Ville(void) { return this->Pays_Ville; }
System::String^ NS_Comp_Mappage_Client::CLmapClient::getComplement(void) { return this->Complement; }

