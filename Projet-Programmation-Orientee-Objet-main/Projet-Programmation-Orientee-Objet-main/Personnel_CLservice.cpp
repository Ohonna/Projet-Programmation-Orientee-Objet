
#include "Personnel_CLservice.h"

NS_Comp_Svc_Personnel::CLservicesPersonnel::CLservicesPersonnel(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappPersonnel = gcnew NS_Comp_Mappage_Personnel::CLmapPersonnel();
}
System::Data::DataSet^ NS_Comp_Svc_Personnel::CLservicesPersonnel::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappPersonnel->SelectPersonnel();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc_Personnel::CLservicesPersonnel::selectionnerToutesLesAdresses(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappPersonnel->SelectAdresse();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc_Personnel::CLservicesPersonnel::selectionnerToutesLesVilles(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappPersonnel->SelectVille();
	return this->oCad->getRows(sql, dataTableName);
}
void NS_Comp_Svc_Personnel::CLservicesPersonnel::AjouterUnePersonne(System::String^ nom, System::String^ prenom, System::DateTime^ date_embauche,  int id_supperieur, int id_adresse)
{
	System::String^ sql;

	this->oMappPersonnel->setNom(nom);
	this->oMappPersonnel->setPrenom(prenom);
	this->oMappPersonnel->setDate_Embauche(date_embauche);
	this->oMappPersonnel->setID_Supperieur(id_supperieur);
	this->oMappPersonnel->setID_Personnel_Adresse(id_adresse);

	sql = this->oMappPersonnel->InsertPersonnel();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Personnel::CLservicesPersonnel::AjouterUneAdresse(System::Int16^ numero, System::String^ rue, System::String^ nom_residence, System::String^ nom_immeuble, System::Int16^ etage, System::String^ complement,int id_ville)
{
	System::String^ sql;

	this->oMappPersonnel->setNumero_Adresse(numero);
	this->oMappPersonnel->setEtage_Adresse(etage);
	this->oMappPersonnel->setRue_Adresse(rue);
	this->oMappPersonnel->setNom_Residence_Adresse(nom_residence);
	this->oMappPersonnel->setNom_Immeuble_Adresse(nom_immeuble);
	this->oMappPersonnel->setComplement(complement);
	this->oMappPersonnel->setID_Ville(id_ville);

	sql = this->oMappPersonnel->InsertAdresse();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Personnel::CLservicesPersonnel::AjouterUneVille(System::String^ ville, System::String^ code_postal, System::String^ pays_ville)
{
	System::String^ sql;


	this->oMappPersonnel->setCode_Potal(code_postal);
	this->oMappPersonnel->SetNom_Ville(ville);
	this->oMappPersonnel->setPays_Ville(pays_ville);

	sql = this->oMappPersonnel->InsertVille();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Personnel::CLservicesPersonnel::SupprimerUnePersonne(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;

	this->oMappPersonnel->setNom(nom);
	this->oMappPersonnel->setPrenom(prenom);

	sql = this->oMappPersonnel->DeletePersonnel();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Personnel::CLservicesPersonnel::SupprimerUneVille(System::String^ nom, System::String^ codepostal, System::String^ pays)
{
	System::String^ sql;

	this->oMappPersonnel->SetNom_Ville(nom);
	this->oMappPersonnel->setCode_Potal(codepostal);
	this->oMappPersonnel->setPays_Ville(pays);

	sql = this->oMappPersonnel->DeleteVille();
	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Personnel::CLservicesPersonnel::SupprimerUneAdresse(System::Int16^ numero, System::String^ rue , System::String^nom_residence, System::String^ nom_immeuble, System::Int16^ etage, System::String^ complement, int id_ville)
{
	System::String^ sql;

	this->oMappPersonnel->setNumero_Adresse(numero);
	this->oMappPersonnel->setRue_Adresse(rue);
	this->oMappPersonnel->setNom_Residence_Adresse(nom_residence);
	this->oMappPersonnel->setNom_Immeuble_Adresse(nom_immeuble);
	this->oMappPersonnel->setEtage_Adresse(etage);
	this->oMappPersonnel->setComplement(complement);
	this->oMappPersonnel->setID_Ville(id_ville);

	sql = this->oMappPersonnel->DeleteAdresse();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Personnel::CLservicesPersonnel::ModifierUnePersonne(int id_personnel, System::String^ nom, System::String^ prenom, System::DateTime^ date_embauche,int id_supperieur, int id_adresse)
{
	System::String^ sql;

	this->oMappPersonnel->setID_Personnal(id_personnel);
	this->oMappPersonnel->setNom(nom);
	this->oMappPersonnel->setPrenom(prenom);
	this->oMappPersonnel->setDate_Embauche(date_embauche);
	this->oMappPersonnel->setID_Supperieur(id_supperieur);
	this->oMappPersonnel->setID_Personnel_Adresse(id_adresse);

	sql = this->oMappPersonnel->UpdatePersonnel();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Personnel::CLservicesPersonnel::ModifierUneAdresse(int id_adresse, System::Int16^ numero, System::String^ rue, System::String^ nom_residence, System::String^ nom_immeuble, System::Int16^ etage, System::String^ complement, int id_ville)
{
	System::String^ sql;

	this->oMappPersonnel->setNumero_Adresse(numero);
	this->oMappPersonnel->setEtage_Adresse(etage);
	this->oMappPersonnel->setRue_Adresse(rue);
	this->oMappPersonnel->setNom_Residence_Adresse(nom_residence);
	this->oMappPersonnel->setNom_Immeuble_Adresse(nom_immeuble);
	this->oMappPersonnel->setComplement(complement);
	this->oMappPersonnel->setID_Ville(id_ville);
	this->oMappPersonnel->setID_Personnel_Adresse(id_adresse);

	sql = this->oMappPersonnel->UpdateAdresse();

	this->oCad->actionRows(sql);
}
void NS_Comp_Svc_Personnel::CLservicesPersonnel::ModifierUneVille(int id_ville, System::String^ nom_ville, System::String^ code_postal, System::String^ pays_ville)
{
	System::String^ sql;

	this->oMappPersonnel->setID_Ville(id_ville);
	this->oMappPersonnel->SetNom_Ville(nom_ville);
	this->oMappPersonnel->setCode_Potal(code_postal);
	this->oMappPersonnel->setPays_Ville(pays_ville);
	

	sql = this->oMappPersonnel->UpdateVille();

	this->oCad->actionRows(sql);
}