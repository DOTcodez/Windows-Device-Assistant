#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>

using namespace std;

int main()
{
     cout << "\n THIS IS A DEVICE ASSISTANT TO RECIEVE AN INSTRUCTION IN TEXT AND EXECUTE IT\n\n" << endl;
     char each, Q_name[35] = "\"", pst[3] = "\"", name[25];
     int opt = 0, i = 0;

     while(true){
     string reader;
     cout << " SELECT WHAT YOU WANT TO DO \n 1. Watch movie\n 2. Run an app \n 3. Play music\n 4. Open Document\n 0. Exit\n";
     cout<< "\nEnter 1/2/3/4 :";
     getline(cin,reader);
     stringstream(reader)>>opt;
     reader.clear();
     for (i=0; i<=strlen(name); i++){
            name[i] = '\0';
     }

     switch(opt){
         case 0 :
             exit(0);
         case 1 :{
             char Mpath[30] = "c:\\users\\/*Enter Username of OS account here*/\\videos\\";
             cout <<"\nEnter the full name of the movie :";
             getline(cin,reader);
             for(i = 0; i<=reader.size(); i++){
                    each = reader[i];
                    name[i] = each;
             }
            reader.clear();
            strcat(name,pst);
            strcat(Q_name,name);
            system(strcat(Mpath,Q_name));
            system("cls");
            cout << "\n THIS IS A DEVICE ASSISTANT TO RECIEVE AN INSTRUCTION IN TEXT AND EXECUTE IT\n\n" << endl;

            for (i=1; i<=strlen(Q_name); i++){
                Q_name[i] = '\0';
            }
         }
            break;
         case 2 :{
             char Dpath[30] = "c:\\users\\/*Enter Username of OS account here*/\\desktop\\";
             cout <<"\nEnter the full name of the app :";
             getline(cin,reader);
             for(i = 0; i<=reader.size();i++){
                    each = reader[i];
                    name[i] = each;
             }
            reader.clear();
            strcat(name,pst);
            strcat(Q_name,name);
            system(strcat(Dpath,Q_name));
            system("cls");
            cout << "\n THIS IS A DEVICE ASSISTANT TO RECIEVE AN INSTRUCTION IN TEXT AND EXECUTE IT\n\n" << endl;

            for (i=1; i<=strlen(Q_name); i++){
                Q_name[i] = '\0';
            }
         }
            break;
         case 3:{
             char MUpath[30] = "c:\\users\\/*Enter Username of OS account here*/\\music\\";
             cout <<"\nEnter the full name of the song :";
             getline(cin,reader);
             for(i = 0; i<=reader.size();i++){
                    each = reader[i];
                    name[i] = each;
             }
            reader.clear();
            strcat(name,pst);
            strcat(Q_name,name);
            system(strcat(MUpath,Q_name));
            system("cls");
            cout << "\n THIS IS A DEVICE ASSISTANT TO RECIEVE AN INSTRUCTION IN TEXT AND EXECUTE IT\n\n" << endl;

            for (i=1; i<=strlen(Q_name); i++){
                Q_name[i] = '\0';
            }
         }
            break;
         case 4:{
             char Dcpath[30] = "c:\\users\\/*Enter Username of OS account here*/\\documents\\";
             cout <<"\nEnter the full name of the document :";
             getline(cin,reader);
             for(i = 0; i<=reader.size();i++){
                    each = reader[i];
                    name[i] = each;
             }
            reader.clear();
            strcat(name,pst);
            strcat(Q_name,name);
            system(strcat(Dcpath,Q_name));
            system("cls");
            cout << "\n THIS IS A DEVICE ASSISTANT TO RECIEVE AN INSTRUCTION IN TEXT AND EXECUTE IT\n\n" << endl;

            for (i=1; i<=strlen(Q_name); i++){
                Q_name[i] = '\0';
            }
         }
            break;

         default :
            cout << "Invalid option...";
    }
}

    return 0;
}
