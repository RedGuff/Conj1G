#include <iostream>
#include <string>

bool accent = false; // Se lever !

using namespace std;
string toUp ( string a ) { // https://stackoverflow.com/questions/11635/case-insensitive-string-comparison-in-c
    for ( unsigned int i=0; i<a.length(); i++ ) {
        a[i]=toupper ( a[i] );
        }

    return a;
    }

void errPasPremierGroupe() {
    cerr << "Votre verbe n\'est pas du premier groupe ! Recommencez !" << endl;
    }

int main() {
    string verb="";
entrer:
    cout << "Les accents et autres diacritiques ne sont pas rendus." << endl;
    cout << "C\'est pour cela que j\'affiche la conjugaison en lettres capitales." << endl;
    cout << "https://fr.wikipedia.org/wiki/Capitale_et_majuscule#Diff%C3%A9rence_entre_les_capitales_et_les_majuscules" << endl;
    cout << "Entrez votre verbe du premier groupe, dont je vous confie le respect de l\'orthographe : " << endl;
    getline ( cin, verb );
    verb = toUp ( verb );
    if ( verb == "ALLER" ) {
        errPasPremierGroupe();
        goto entrer;
        }
    if ( verb.substr ( verb.size() - 2,verb.size() ) != "ER" ) {
        errPasPremierGroupe();
        goto entrer;
        }
    verb = verb.substr ( 0,verb.size() - 2 );

    if ( ( verb.substr ( 0,3 ) == "SE " ) ) {
        verb = verb.substr ( 3,verb.size() );
        cout<<"JE ME "<<verb<<"E."<<endl;
        cout<<"TU TE "<<verb<<"ES."<<endl;
        cout<<"IL/ELLE/IEL/IELLE/ON SE "<<verb<<"E."<<endl;
        cout<<"NOUS NOUS "<<verb<<"ONS."<<endl;
        cout<<"VOUS VOUS "<<verb<<"EZ."<<endl;
        cout<<"ILS/ELLES/IELS/IELLES SE "<<verb<<"ENT."<<endl;
        }
    else if ( ( verb.substr ( 0,2 ) == "S'" ) ) {
        verb = verb.substr ( 2,verb.size() );
        cout<<"JE M'"<<verb<<"E."<<endl;
        cout<<"TU T'"<<verb<<"ES."<<endl;
        cout<<"IL/ELLE/IEL/IELLE/ON S'"<<verb<<"E."<<endl;
        cout<<"NOUS NOUS "<<verb<<"ONS."<<endl;
        cout<<"VOUS VOUS "<<verb<<"EZ."<<endl;
        cout<<"ILS/ELLES/IELS/IELLES S'"<<verb<<"ENT."<<endl;
        }
    else {
        cout<<"JE "<<verb<<"E."<<endl;
        cout<<"TU "<<verb<<"ES."<<endl;
        cout<<"IL/ELLE/IEL/IELLE "<<verb<<"E."<<endl;
        cout<<"NOUS "<<verb<<"ONS."<<endl;
        cout<<"VOUS "<<verb<<"EZ."<<endl;
        cout<<"ILS/ELLES/IELS/IELLES "<<verb<<"ENT."<<endl;
        }
    return 0;
    }
