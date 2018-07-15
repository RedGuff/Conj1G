#include <iostream>
#include <string>

using namespace std;
string tolow(string a) // https://stackoverflow.com/questions/11635/case-insensitive-string-comparison-in-c
{
    for(unsigned int i=0; i<a.length(); i++)
    {
        a[i]=tolower(a[i]);
    }
    return a;
}

int main()
{
    string verb="";
entrer:
    cout << "Entrez votre verbe du premier groupe : " << endl;
    getline(cin, verb);
    verb = tolow(verb);

if (verb == "aller"){
    goto entrer;
}
if (verb.substr(verb.size() - 2,verb.size()) != "er"){
    goto entrer;
}

    verb = verb.substr(0,verb.size() - 2);

cout<<"je "<<verb<<"e"<<endl;
cout<<"tu "<<verb<<"es"<<endl;
cout<<"il "<<verb<<"e"<<endl;
cout<<"nous "<<verb<<"ons"<<endl;
cout<<"vous "<<verb<<"ez"<<endl;
cout<<"ils "<<verb<<"ent"<<endl;
    return 0;
}
