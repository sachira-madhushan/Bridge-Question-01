#include <iostream>
#include <fstream>
#include <unordered_set>
#include <list>
#include <map>
using namespace std;

void intro();
void math();
void viewDataBio();
void viewDataMath();
void viewRankMath();
void viewAllMath();
void viewAllBio();
void viewRankBio();
void bioScience();
void selectStream();





//main function
int main()
{
    selectStream();
    return 0;
}
//main end

//view all bio students details
void viewAllBio(){
    int id,b,p,c,total,option,counter=1;
    unordered_set<int> removeRepeatedMarks;
    list<int> ranks;
    map<int,int> rankWithMarks;
    char name[20];
    cout<<"\n-------- View Data ---------\n\n";
    cout<<"---All Bio Students Details---";
    cout<<"\n-----------------------------\n";
    ifstream file,files;


    files.open("Data/AllBio.txt");

    cout<<"                 Name Bio Phy Chem Total Rank\n";
    cout<<"                 ---- --- --- ---- ----- ----\n";
    while(files>>id>>name>>b>>p>>c){

        removeRepeatedMarks.insert(b+p+c);

    }
    files.close();

    for(int x:removeRepeatedMarks){
        for(int y:removeRepeatedMarks){
            if(x<y){
                counter++;
            }
        }
        rankWithMarks.insert(pair<int,int>(x,counter));
        counter=1;
    }


    int coun=0;
    file.open("Data/AllBio.txt");
    while(file>>id>>name>>b>>p>>c){
        printf("%20s %4d %3d %3d %5d %2d",name,b,p,c,b+p+c,rankWithMarks.find(b+p+c)->second);
        cout<<"\n";
    }

    cout<<"\n\n\t[1]Go Back\n\n";
    cout<<"[?] Enter Your Option :";
    cin>>option;
    if(option==1){
        bioScience();
    }
}
//viewAllBioio end


//view all maths students details
void viewAllMath(){
    int id,m,p,c,total,option,counter=1;
    unordered_set<int> removeRepeatedMarks;
    list<int> ranks;
    map<int,int> rankWithMarks;
    char name[20];
    cout<<"\n-------- View Data ---------\n\n";
    cout<<"------All Maths Students------";
    cout<<"\n-----------------------------\n";
    ifstream file,files;


    files.open("Data/AllMaths.txt");

    cout<<"                 Name Math Phy Chem Total Rank\n";
    cout<<"                 ---- ---- --- ---- ----- ----\n";
    while(files>>id>>name>>m>>p>>c){

        removeRepeatedMarks.insert(m+p+c);

    }
    files.close();

    for(int x:removeRepeatedMarks){
        for(int y:removeRepeatedMarks){
            if(x<y){
                counter++;
            }
        }
        rankWithMarks.insert(pair<int,int>(x,counter));
        counter=1;
    }


    int coun=0;
    file.open("Data/AllMaths.txt");
    while(file>>id>>name>>m>>p>>c){
        printf("%20s %4d %3d %3d %5d %2d",name,m,p,c,m+p+c,rankWithMarks.find(m+p+c)->second);
        cout<<"\n";
    }
    file.close();

    cout<<"\n\n\t[1]Go Back\n\n";
    cout<<"[?] Enter Your Option :";
    cin>>option;
    if(option==1){
        math();
    }

}
//viewAllMath End



//this function will show the rank of bio students
void viewRankBio(string className){
   int id,b,p,c,total,option,counter=1;
    unordered_set<int> removeRepeatedMarks;
    list<int> ranks;
    map<int,int> rankWithMarks;
    char name[20];
    cout<<"\n-------- View Data ---------\n\n";
    cout<<"[:] Class Name Is :"<<className;
    cout<<"\n-----------------------------\n";
    ifstream file,files;


    files.open("Data/"+className+".txt");

    cout<<" Id                 Name Bio Phy Chem Total Rank\n";
    cout<<"---                 ---- --- --- ---- ----- ----\n";
    while(files>>id>>name>>b>>p>>c){

        removeRepeatedMarks.insert(b+p+c);

    }
    files.close();

    for(int x:removeRepeatedMarks){
        for(int y:removeRepeatedMarks){
            if(x<y){
                counter++;
            }
        }
        rankWithMarks.insert(pair<int,int>(x,counter));
        counter=1;
    }


    int coun=0;
    file.open("Data/"+className+".txt");
    while(file>>id>>name>>b>>p>>c){
        printf("%3d %20s %4d %3d %3d %5d %2d",id,name,b,p,c,b+p+c,rankWithMarks.find(b+p+c)->second);
        cout<<"\n";
    }

    cout<<"\n\n\t[1]Go Back\n\n";
    cout<<"[?] Enter Your Option :";
    cin>>option;
    if(option==1){
        bioScience();
    }
}
//viewRankBio end


//this function will show the rank of math students
void viewRankMath(string className){

    int id,m,p,c,total,option,counter=1;
    unordered_set<int> removeRepeatedMarks;
    list<int> ranks;
    map<int,int> rankWithMarks;
    char name[20];
    cout<<"\n-------- View Data ---------\n\n";
    cout<<"[:] Class Name Is :"<<className;
    cout<<"\n-----------------------------\n";
    ifstream file,files;


    files.open("Data/"+className+".txt");

    cout<<" Id                 Name Bio Phy Chem Total Rank\n";
    cout<<"---                 ---- --- --- ---- ----- ----\n";
    while(files>>id>>name>>m >>p>>c){

        removeRepeatedMarks.insert(m+p+c);

    }
    files.close();

    for(int x:removeRepeatedMarks){
        for(int y:removeRepeatedMarks){
            if(x<y){
                counter++;
            }
        }
        rankWithMarks.insert(pair<int,int>(x,counter));
        counter=1;
    }


    int coun=0;
    file.open("Data/"+className+".txt");
    while(file>>id>>name>>m>>p>>c){
        printf("%3d %20s %4d %3d %3d %5d %2d",id,name,m,p,c,m+p+c,rankWithMarks.find(m+p+c)->second);
        cout<<"\n";
    }

    cout<<"\n\n\t[1]Go Back\n\n";
    cout<<"[?] Enter Your Option :";
    cin>>option;
    if(option==1){
        math();
    }
}
//viewRankMath end


//this function will show the details about maths students
void viewDataMath(string className){
    int id,m,p,c,option;
    char name[20];
    cout<<"\n-------- View Data ---------\n\n";
   // cout<<"[:] Class Name Is :"<<classNam;
    cout<<"\n-----------------------------\n";
    ifstream file;

    file.open("Data/"+className+".txt");

    cout<<" Id                 Name Math Phy Chem\n";
    cout<<"---                 ---- ---- --- ----\n";
    while(file>>id>>name>>m>>p>>c){
        printf("%3d %20s %3d %3d %3d",id,name,m,p,c);
        cout<<"\n";

    }

    cout<<"\n--------------------------------\n";
    cout<<"\t[1] View Ranks And Total Mark Of Each Student\n";
    cout<<"\t[2] Go Back\n";
    cout<<"\n[?] Enter your Option :";
    cin>>option;
    if(option==1){
        viewRankMath(className);
    }
    else{
        math();
    }
}
//viewDataMath end


//this function will show the details about bio students
void viewDataBio(string className){
    int id,b,p,c,option;
    char name[20];
    cout<<"\n-------- View Data ---------\n\n";
   // cout<<"[:] Class Name Is :"<<classNam;
    cout<<"\n-----------------------------\n";
    ifstream file;

    file.open("Data/"+className+".txt");

    cout<<" Id                 Name Bio Phy Chem\n";
    cout<<"---                 ---- --- --- ----\n";
    while(file>>id>>name>>b>>p>>c){
        printf("%3d %20s %3d %3d %3d",id,name,b,p,c);
        cout<<"\n";

    }
        cout<<"\n-------------------------\n";
    cout<<"\t[1] View Ranks And Total Mark Of Each Student\n";
    cout<<"\t[2] Go Back\n";
    cout<<"\n[?] Enter your Option :";
    cin>>option;
    if(option==1){
        viewRankBio(className);
    }
    else{
        bioScience();
    }

}
//viewDataBio end



//math function
void math(){
    int option;
    system("cls");
    cout<<"  ----Math stream----\n\n\n";
    cout<<"[+]There Are Five Classes In Math Stream\n\n";
    cout<<"\t[1] Math-01\n";
    cout<<"\t[2] Math-02\n";
    cout<<"\t[3] Math-03\n";
    cout<<"\t[4] Math-04\n";
    cout<<"\t[5] Math-05\n";
    cout<<"\t[6] View Ranks According To The All Math Stream Students.\n";
    cout<<"\t[7] Go Back\n";
    cout<<"[?] Enter Your Option :";
    try{

        cin>>option;
        if(option==1){
            viewDataMath("Math-01");
        }
        else if(option==2){
            viewDataMath("Math-02");
        }
        else if(option==3){
            viewDataMath("Math-03");
        }
        else if(option==4){
            viewDataMath("Math-04");
        }
        else if(option==5){
            viewDataMath("Math-05");
        }
        else if(option==6){
            viewAllMath();
        }
        else if(option==7){
            selectStream();
        }
        else{
            cout<<"[*] Invalid Input !";
        }
    }
    catch(int option){


    }

}
//math end


//bioscience function
void bioScience(){
    int option;
    system("cls");
    intro();
    cout<<"  ----Bioscience stream----\n\n\n";
    cout<<"[+]There Are Three Classes In Bioscience Stream\n\n";
    cout<<"\t[1] Bio-01\n";
    cout<<"\t[2] Bio-02\n";
    cout<<"\t[3] Bio-03\n";
    cout<<"\t[4] View Ranks According To The All Bio Stream Students.\n";
    cout<<"\t[5] Go Back\n";
    cout<<"[?] Enter Your Option :";
    try{

        cin>>option;
        if(option==1){
            viewDataBio("Bio-01");
        }
        else if(option==2){
            viewDataBio("Bio-02");
        }
        else if(option==3){
            viewDataBio("Bio-03");
        }
        else if(option==4){
            viewAllBio();
        }
        else if(option==5){
            selectStream();
        }
        else{
            cout<<"[*] Invalid Input !";
        }
    }
    catch(int option){


    }


}
//bioScience end


//selectStream function
void selectStream(){
    system("cls");
    intro();
    int option;
    cout<<"[1] Bioscience stream\n";
    cout<<"[2] Math stream\n\n\n";
    cout<<"[?] Enter your Option :";

    try{
        cin>>option;
        if(option==1){
            bioScience();
        }
        else if(option==2){
            math();
        }
        else{
            cout<<"Wrong Input !";
        }
    }
    catch(int option){
        cout<<"Invalid Input !";
    }

}
//selectStream end

//intro function
void intro(){
    system("color 02");
    cout<<"---Score Management System---\n";
    cout<<"Developed By Sachira Madhushan\n";
    cout<<"------------------------------\n";
}
//intro end






