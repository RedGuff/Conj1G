#include <iostream>
#include <string>

bool accent = false; // Se lever !

using namespace std;
string tolow(string a) // https://stackoverflow.com/questions/11635/case-insensitive-string-comparison-in-c
{
    for(unsigned int i=0; i<a.length(); i++)
    {
        a[i]=tolower(a[i]);
    }
    return a;
}

void errPasPremierGroupe()
{
    cerr << "Votre verbe n\'est pas du premier groupe ! Recommencez !" << endl;
}

int main()
{
    string verb="";
entrer:
    cout << "Entrez votre verbe du premier groupe : " << endl;
    getline(cin, verb);
    verb = tolow(verb);
    if (verb == "aller")
    {
        errPasPremierGroupe();
        goto entrer;
    }
    if (verb.substr(verb.size() - 2,verb.size()) != "er")
    {
        errPasPremierGroupe();
        goto entrer;
    }
    verb = verb.substr(0,verb.size() - 2);
    if ((verb.substr(0,3) == "se "))
    {
        verb = verb.substr(3,verb.size());
        cout<<"Je me "<<verb<<"e."<<endl;
        cout<<"Tu le "<<verb<<"es."<<endl;
        cout<<"Il se "<<verb<<"e."<<endl;
        cout<<"Nous nous "<<verb<<"ons."<<endl;
        cout<<"Vous vous "<<verb<<"ez."<<endl;
        cout<<"Ils se "<<verb<<"ent."<<endl;
    }
    else
    {
        cout<<"Je "<<verb<<"e."<<endl;
        cout<<"Tu "<<verb<<"es."<<endl;
        cout<<"Il "<<verb<<"e."<<endl;
        cout<<"Nous "<<verb<<"ons."<<endl;
        cout<<"Vous "<<verb<<"ez."<<endl;
        cout<<"Ils "<<verb<<"ent."<<endl;
    }
    return 0;
}
