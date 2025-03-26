
#include "Personnel_CLmapTB.h"

System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::SelectPersonnel(void)
{
	return "select Personnel.ID_Personnel,Personnel.Nom_Personnel,Personnel.Prenom_Personnel,Personnel.Date_Embauche,Personnel.ID_Personnel_Superieur,Adresse.Numero,Adresse.Rue,Adresse.Nom_Residence,Adresse.Nom_Immeuble,Adresse.Etage,Adresse.Complement,Ville.Nom_Ville,Ville.Code_Postal,Ville.Pays_Ville from Personnel inner join Adresse on Personnel.ID_Personnel_Adresse = Adresse.ID_Adresse inner join Ville on Adresse.ID_Ville_Adresse = Ville.ID_Ville";
}
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::SelectAdresse(void)
{
	return "select ID_Adresse, Numero, Rue, Nom_Residence, Nom_Immeuble, Etage, Complement, ID_Ville_Adresse from Adresse inner join Personnel ON ID_Adresse = ID_Personnel_Adresse";
}
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::SelectVille(void)
{
	return "select * from ville";
}
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::InsertPersonnel(void)
{
	return "insert into Personnel values ('" + this->nom + "','" + this->prenom + "','" + this->date_embauche + "','" + this->ID_Supperieur + "','" + this->ID_Personnel_Adresse + "')";
}
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::InsertVille(void)
{
	return "insert into Ville values ('" + this->Nom_Ville + "','" + this->Code_Postal + "','" + this->Pays_Ville + "')";
}
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::InsertAdresse(void)
{
	return "insert into Adresse (Numero,Rue,Nom_Residence,Nom_Immeuble,Etage,Complement,ID_Ville_Adresse) values ('" + this->Numero_Adresse + "','" + this->Rue_Adresse + "','" + this->Nom_Residence_Adresse + "','" + this->Nom_Immeuble_Adresse + "','" + this->Etage_Adresse + "','" + this->Complement + "','" + this->ID_Adresse + "')";
}
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::DeletePersonnel(void)
{
	return "delete from Personnel where Nom_Personnel = '" + this->nom +"' and Prenom_Personnel = '" + this->prenom +"'";
}
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::DeleteAdresse(void)
{
	return "delete from Adresse where Numero = '" + Numero_Adresse + "' and Rue = '" + Rue_Adresse + "' and Nom_Residence = '" + Nom_Residence_Adresse + "' and Nom_Immeuble = '" + Nom_Immeuble_Adresse + "' and Etage = '" + Etage_Adresse + "' and ID_Ville_Adresse ='" + ID_Ville + "'";
}
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::DeleteVille(void)
{
	return "delete from Ville where Nom_Ville = '" + this->Nom_Ville + "' and Code_Postal = '" + Code_Postal + "' and Pays_Ville = '" + Pays_Ville + "' ";
}
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::UpdatePersonnel(void)
{
	return "update Personnel SET Nom_Personnel = '" + this->nom + "', Prenom_Personnel='" + this->prenom + "', Date_Embauche='" + this->date_embauche + "', ID_Personnel_Superieur='" + this->ID_Supperieur + "', ID_Personnel_Adresse='" + this->ID_Personnel_Adresse + "' where ID_Personnel = '" + this->ID_Personnel + "'";
}
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::UpdateAdresse(void)
{
	return "update Adresse SET Numero ='" + this->Numero_Adresse +"' ,Rue = '" + this->Rue_Adresse + "',Nom_Residence = '" + this->Nom_Residence_Adresse + "',Nom_Immeuble = '" + this->Nom_Immeuble_Adresse + "', Etage = '" + this->Etage_Adresse + "', Complement = '" + this->Complement + "',ID_Ville_Adresse = '" + this->ID_Ville + "' where ID_Adresse = '" + ID_Personnel_Adresse + "'";
}
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::UpdateVille(void)
{
	return "update Ville SET Nom_Ville = '" + this->Nom_Ville + "',Code_Postal = '" + this->Code_Postal + "',Pays_Ville = '" + this->Pays_Ville + "'";
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setID_Personnel_Adresse(int Id)
{
	this->ID_Personnel_Adresse = Id;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setID_Personnal(int Id)
{
	this->ID_Personnel = Id;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setID_Ville(int Id)
{
	this->ID_Ville = Id;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setID_Supperieur(int Id)
{
	this->ID_Supperieur = Id;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setDate_Embauche(System::DateTime^ date_embauche)
{
	this->date_embauche = date_embauche;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setNumero_Adresse(System::Int16^ num_adresse)
{
	this->Numero_Adresse = num_adresse;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setEtage_Adresse(System::Int16^ etage_adresse)
{
	this->Etage_Adresse = etage_adresse;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setRue_Adresse(System::String^ rue_adresse)
{
	this->Rue_Adresse = rue_adresse;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setNom_Residence_Adresse(System::String^ nom_residence_adresse)
{
	this->Nom_Residence_Adresse = nom_residence_adresse;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setNom_Immeuble_Adresse(System::String^ nom_immeuble_adresse)
{
	this->Nom_Immeuble_Adresse = nom_immeuble_adresse;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::SetNom_Ville(System::String^ nom_ville)
{
	this->Nom_Ville = nom_ville;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setCode_Potal(System::String^ code_postal)
{
	this->Code_Postal = code_postal;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setPays_Ville(System::String^ pays_ville)
{
	this->Pays_Ville = pays_ville;
}
void NS_Comp_Mappage_Personnel::CLmapPersonnel::setComplement(System::String^ complement)
{
	this->Complement = complement;
}
int NS_Comp_Mappage_Personnel::CLmapPersonnel::getID_Personnel_Adresse(void) { return this->ID_Personnel_Adresse; }
int NS_Comp_Mappage_Personnel::CLmapPersonnel::getID_Personnal(void) { return this->ID_Personnel; }
int NS_Comp_Mappage_Personnel::CLmapPersonnel::getID_Supperieur(void) { return this->ID_Supperieur; }
int NS_Comp_Mappage_Personnel::CLmapPersonnel::getID_Ville(void) { return this->ID_Ville; }
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::getPrenom(void) { return this->prenom; }
System::DateTime^ NS_Comp_Mappage_Personnel::CLmapPersonnel::getDate_Embauche(void) { return this->date_embauche; }
System::Int16^ NS_Comp_Mappage_Personnel::CLmapPersonnel::getNumero_Adresse(void) { return this->Numero_Adresse; }
System::Int16^ NS_Comp_Mappage_Personnel::CLmapPersonnel::getEtage_Adresse(void) { return this->Etage_Adresse; }
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::getRue_Adresse(void) { return this->Rue_Adresse; }
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::getNom_Residence_Adresse(void) { return this->Nom_Residence_Adresse; }
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::getNom_Immeuble_Adresse(void) { return this->Nom_Immeuble_Adresse; }
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::getNom_Ville(void) { return this->Nom_Ville; }
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::getCode_Postal(void) { return this->Code_Postal; }
System::String^ NS_Comp_Mappage_Personnel::CLmapPersonnel::getPays_Ville(void) { return this->Pays_Ville; }
