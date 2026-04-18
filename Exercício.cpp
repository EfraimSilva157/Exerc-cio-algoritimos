#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

/*Eu registrei várias classes novas para que fosse possível fazer a tabela. 
Registrei para cada aluno uma classe de notas, média, situação (se irá reprovar ou não), e nome.*/

////////////////////////Aluno 1
template<class N1>
void Nt1 (N1 Nota1[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Nota1[all] <<" ";
    }
}
template<class T1>
void Nm1 (T1 Nome1[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Nome1[all] <<" ";
    }
}
template<class P1>
void Pss1 (P1 Passou1[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Passou1[all] <<" ";
    }
}
template<class M1>
void Md1 (M1 Media1[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Media1[all] <<" ";
    }
}

///////////////////////////////Aluno 2
template<class N2>
void Nt2 (N2 Nota2[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Nota2[all] <<" ";
    }
}
template<class T2>
void Nm2 (T2 Nome2[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Nome2[all] <<" ";
    }
}
template<class P2>
void Pss2 (P2 Passou2[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Passou2[all] <<" ";
    }
}
template<class M2>
void Md2 (M2 Media2[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Media2[all] <<" ";
    }
}

///////////////////////////////Aluno 3
template<class N3>
void Nt3 (N3 Nota3[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Nota3[all] <<" ";
    }
}
template<class T3>
void Nm3 (T3 Nome3[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Nome3[all] <<" ";
    }
}
template<class P3>
void Pss3 (P3 Passou3[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Passou3[all] <<" ";
    }
}
template<class M3>
void Md3 (M3 Media3[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Media3[all] <<" ";
    }
}

////////////////////////////////////////Aluno 4
template<class N4>
void Nt4 (N4 Nota4[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Nota4[all] <<" ";
    }
}
template<class T4>
void Nm4 (T4 Nome4[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Nome4[all] <<" ";
    }
}
template<class P4>
void Pss4 (P4 Passou4[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Passou4[all] <<" ";
    }
}
template<class M4>
void Md4 (M4 Media4[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Media4[all] <<" ";
    }
}

//////////////////////////////////////////////Aluno 5
template<class N5>
void Nt5 (N5 Nota5[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Nota5[all] <<" ";
    }
}
template<class T5>
void Nm5 (T5 Nome5[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Nome5[all] <<" ";
    }
}
template<class P5>
void Pss5 (P5 Passou5[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Passou5[all] <<" ";
    }
}
template<class M5>
void Md5 (M5 Media5[], int nvar)
{
    
    for(int all = 0; all < nvar; ++all){
        cout<< Media5[all] <<" ";
    }
}



int main(){

    setlocale(LC_ALL, "portuguese");

    int sair;
    string nome[5], passou1, passou2, passou3, passou4, passou5, melhor1;
    float nota1[3], nota2[3], nota3[3], nota4[3], nota5[3];
    float media1, media2, media3, media4, media5;
    

    
    /////// Entrada dos nomes dos Alunos:
    for (int i=0 ; i<5 ; i++){
         cout<<"Digite o nome do(a) "<<i+1 <<"° aluno: ";
        cin>>nome[i]; 

    }cout<<endl;

    /////// Entrada das notas do primeiro aluno:
    for(int i=0 ; i<3 ; i++){
        cout<<"Digite a nota "<<i+1 <<" do(a)  "<<nome[0]<<": ";
        cin>>nota1[i]; 

        ////Cálculo da média:
        media1=(nota1[0]+nota1[1]+nota1[2])/3;

    }cout<<endl;

    ///////Entrada das notas do segundo aluno:
    for(int i=0 ; i<3 ; i++){

        cout<<"Digite a nota "<<i+1 <<" do(a)  "<<nome[1]<<": ";
        cin>>nota2[i];

        media2=(nota2[0]+nota2[1]+nota2[2])/3;

    }cout<<endl;

    ///////Entrada das notas do terceiro aluno:
    for(int i=0 ; i<3 ; i++){

        cout<<"Digite a nota "<<i+1 <<" do(a)  "<<nome[2]<<": ";
        cin>>nota3[i];

        media3=(nota3[0]+nota3[1]+nota3[2])/3;

    }cout<<endl;

    ///////Entrada das notas do quarto aluno:
    for(int i=0 ; i<3 ; i++){

        cout<<"Digite a nota "<<i+1 <<" do(a)  "<<nome[3]<<": ";
        cin>>nota4[i];

        media4=(nota4[0]+nota4[1]+nota4[2])/3;

    }cout<<endl;

    ///////Entrada das notas do quinto aluno:
    for(int i=0 ; i<3 ; i++){

        cout<<"Digite a nota "<<i+1 <<" do(a)  "<<nome[4]<<": ";
        cin>>nota5[i];

        media5=(nota5[0]+nota5[1]+nota5[2])/3;

    }cout<<endl;

    //Usei o "system("cls");" para limpar o terminal após a entrada de todos os dados do aluno.
    system("cls");
    
    
    
    for(int i=0 ; i<4 ; i++){
        if(media1>=7){
           passou1= "Aprovado. ";
        }else{
            passou1= "Reprovado. ";
        }

        if(media2>=7){
           passou2= "Aprovado. ";
        }else{
            passou2= "Reprovado. ";
        }

        if(media3>=7){
           passou3= "Aprovado. ";
        }else{
            passou3= "Reprovado. ";
        }

        if(media4>=7){
           passou4= "Aprovado. ";
        }else{
            passou4= "Reprovado. ";
        }

        if(media5>=7){
           passou5= "Aprovado. ";
        }else{
            passou5= "Reprovado. ";
        }

        }
        /// As novas classes sendo usadas para fazer a tabela:
        //Aluno 1: Nome, Média, Situação:

        cout<<"Aluno:";

        string Nome1[] = {nome[0]};
        Nm1<string>(Nome1, sizeof(Nome1) / sizeof(Nome1[0]));
    
        cout<<"  "<<"Notas: ";

        float Nota1[] = {nota1[0], nota1[1], nota1[2]};
        Nt1<float>(Nota1, sizeof(Nota1) / sizeof(Nota1[0]));

        cout<<"  "<<"média: ";

        float Media1[] = {media1};
        Md1<float>(Media1, sizeof(Media1) / sizeof(Media1[0]));

        cout<<"  ";

        string Passou1[] = {passou1};
        Pss1<string>(Passou1, sizeof(Passou1) / sizeof(Passou1[0]));
        cout<<endl;
        
        //Aluno 2: Nome, Média, Situação:

        cout<<"Aluno:";

        string Nome2[] = {nome[1]};
        Nm2<string>(Nome2, sizeof(Nome2) / sizeof(Nome2[0]));
    
        cout<<"  "<<"Notas: ";

        float Nota2[] = {nota2[0], nota2[1], nota2[2]};
        Nt2<float>(Nota2, sizeof(Nota2) / sizeof(Nota2[0]));

        cout<<"  "<<"média: ";

        float Media2[] = {media2};
        Md2<float>(Media2, sizeof(Media2) / sizeof(Media2[0]));

        cout<<"  ";

        string Passou2[] = {passou2};
        Pss2<string>(Passou2, sizeof(Passou2) / sizeof(Passou2[0]));
        cout<<endl;

        //Aluno 3: Nome, Notas, Média, situação: 

        cout<<"Aluno:";

        string Nome3[] = {nome[2]};
        Nm3<string>(Nome3, sizeof(Nome3) / sizeof(Nome3[0]));
    
        cout<<"  "<<"Notas: ";

        float Nota3[] = {nota3[0], nota3[1], nota3[2]};
        Nt3<float>(Nota3, sizeof(Nota3) / sizeof(Nota3[0]));

        cout<<"  "<<"média: ";

        float Media3[] = {media3};
        Md3<float>(Media3, sizeof(Media3) / sizeof(Media3[0]));

        cout<<"  ";

        string Passou3[] = {passou3};
        Pss3<string>(Passou3, sizeof(Passou3) / sizeof(Passou3[0]));
        cout<<endl;

        //Aluno 4: Nome, Média, Situação:

        cout<<"Aluno:";

        string Nome4[] = {nome[3]};
        Nm4<string>(Nome4, sizeof(Nome4) / sizeof(Nome4[0]));
    
        cout<<"  "<<"Notas: ";

        float Nota4[] = {nota4[0], nota4[1], nota4[2]};
        Nt4<float>(Nota4, sizeof(Nota4) / sizeof(Nota4[0]));

        cout<<"  "<<"média: ";

        float Media4[] = {media4};
        Md4<float>(Media4, sizeof(Media4) / sizeof(Media4[0]));

        cout<<"  ";

        string Passou4[] = {passou4};
        Pss4<string>(Passou4, sizeof(Passou4) / sizeof(Passou4[0]));
        cout<<endl;

        //Aluno 5: Nome, Média, Situação:

        cout<<"Aluno:";

        string Nome5[] = {nome[4]};
        Nm5<string>(Nome5, sizeof(Nome5) / sizeof(Nome5[0]));
    
        cout<<"  "<<"Notas: ";

        float Nota5[] = {nota5[0], nota5[1], nota5[2]};
        Nt5<float>(Nota5, sizeof(Nota5) / sizeof(Nota5[0]));

        cout<<"  "<<"média: ";

        float Media5[] = {media5};
        Md5<float>(Media5, sizeof(Media5) / sizeof(Media5[0]));

        cout<<"  ";

        string Passou5[] = {passou5};
        Pss5<string>(Passou5, sizeof(Passou5) / sizeof(Passou5[0]));
        cout<<endl;

        for(int i=0 ; i<4 ; i++){
            if(media1>media2 && media1>media3 && media1>media4 && media1> media5){
            melhor1= "\nA maior média foi a do aluno(a): ";
            cout<<melhor1<<nome[0]<<"("<<media1<<")\n";

            cout<<"\nEscreva um caracter e clique enter para sair: ";
            cin>>sair;

            getchar();
            return 0;
            }
            else if(media2>media1 && media2>media3 && media2>media4 && media2>media5){
                melhor1= "\nA maior média foi a do aluno(a): ";
                cout<<melhor1<<nome[1]<<"("<<media2<<")\n";

                 cout<<"\nEscreva um caracter e clique enter para sair: ";
                cin>>sair;

                getchar();
                return 0;

            } else if(media3>media1 && media3>media2 && media3>media4 && media3>media5){
                melhor1= "\nA maior média foi a do aluno(a): ";
                cout<<melhor1<<nome[2]<<"("<<media3<<")\n";

                 cout<<"\nEscreva um caracter e clique enter para sair: ";
                cin>>sair;

                getchar();
                return 0;

            }else if(media4>media1 && media4>media2 && media4>media3 && media4>media5){
                melhor1= "\nA maior média foi a do aluno(a): ";
                cout<<melhor1<<nome[3]<<"("<<media4<<")\n";

                 cout<<"\nEscreva um caracter e clique enter para sair: ";
                cin>>sair;

                getchar();
                return 0;

            }else if(media5>media1 && media5>media2 && media5>media3 && media5>media4){
                melhor1= "\nA maior média foi a do aluno(a): ";
                cout<<melhor1<<nome[4]<<"("<<media5<<")\n";

                 cout<<"\nEscreva um caracter e clique enter para sair: ";
                cin>>sair;
                
                getchar();
                return 0;
            }  
        }  

        cout<<"\nEscreva um caracter e clique enter para sair: ";
        cin>>sair;

        
    

getchar();
return 0;
}
