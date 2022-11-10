#include <iostream>
#include <windows.h>
using namespace std;
int nota;
void grila(int nr,char r);
void e1(int nr)
{
	cout<<nr<<".Se considera graful orientat reprezentat prin listele de adiacenta de mai jos. Cate noduri au gradul extern mai mare decat gradul intern"<<endl;
	cout<<"1: 2, 6 ,5"<<endl;
	cout<<"2: 3"<<endl;
	cout<<"3: 1"<<endl;
	cout<<"4: 6"<<endl;
	cout<<"5: 6"<<endl;
	cout<<"6: 2"<<endl;
	cout<<"a.2"<<endl<<"b.3"<<endl<<"c.1"<<endl<<"d.4"<<endl;
	grila(1,'a');
}
void e2(int nr)
{
	cout<<nr<<".Se considera graful orientat reprezentat prin matricea de adiacenta de mai jos. Care este lungimea maxima a unui drum, de la varful 4 pana la varful 6, ";
	cout<<"format din varfuri distincte doua cate doua (lungimea unui drum este egala cu numarul de arce care compun acel drum)?"<<endl;
	cout<<"0 1 1 0 0 0"<<endl;
	cout<<"0 0 0 0 1 1"<<endl;
	cout<<"0 0 0 0 0 0"<<endl;
	cout<<"0 0 1 0 1 0"<<endl;
	cout<<"1 1 0 0 0 1"<<endl;
	cout<<"1 0 1 0 0 0"<<endl;
	cout<<"a.5"<<endl<<"b.2"<<endl<<"c.4"<<endl<<"d.3"<<endl;
	grila(2,'c');
}
void e3(int nr)
{
	cout<<nr<<".Un graf orientat cu 6 varfuri, numerotate de la 1 la 6, este reprezentat prin matricea de adiacenta de mai jos. Care dintre varfurile grafului ";
	cout<<"au gradul exterior un numar impar?"<<endl;
	cout<<"0 1 1 0 0 0"<<endl;
	cout<<"0 0 1 1 0 1"<<endl;
	cout<<"1 1 0 1 0 0"<<endl;
	cout<<"0 0 0 0 1 0"<<endl;
	cout<<"0 1 0 0 0 0"<<endl;
	cout<<"0 1 0 0 1 0"<<endl;
	cout<<"a.1,2,3,4"<<endl<<"b.1,3,5"<<endl<<"c.1,4,5,6"<<endl<<"d.2,3,4,5"<<endl;
	grila(3,'d');
}
void e4(int nr)
{
	cout<<nr<<".intr-un graf orientat cu 7 noduri suma gradelor interioare ale tuturor nodurilor este egala cu 10. ";
	cout<<"Care este valoarea sumei gradelor exterioare ale tuturor nodurilor?"<<endl;
	cout<<"a.20"<<endl<<"b.10"<<endl<<"c.3"<<endl<<"d.5"<<endl;
	grila(4,'b');
}
void e5(int nr)
{
	cout<<nr<<".Care dintre urmatoarele arce trebuie adaugat unui graf orientat cu 5 noduri si cu matricea de adiacenta de mai jos astfel incat ";
	cout<<"in acest graf sa existe cel putin un drum intre oricare doua varfuri?"<<endl;
	cout<<"0 1 0 1 0"<<endl;
	cout<<"0 0 1 0 0"<<endl;
	cout<<"0 0 0 0 0"<<endl;
	cout<<"0 0 0 0 1"<<endl;
	cout<<"1 0 0 0 0"<<endl;
	cout<<"a.(5,3)"<<endl<<"b.(3,5)"<<endl<<"c.(4,1)"<<endl<<"d.(3,2)"<<endl;
	grila(5,'b');
}
void e6(int nr)
{
	cout<<nr<<".Care din urmatoarele proprietati este adevarata pentru un graf orientat cu n varfuri si n arce (n>3) care are un circuit de lungime n"<<endl;
	cout<<"a.exista un varf cu gradul intern n-1"<<endl<<"b.pentru orice varf gradul intern si gradul extern sunt egale"<<endl<<"c.graful nu are ";
	cout<<"drumuri de lungime strict mai mare decat 2"<<endl<<"d.gradul intern al oricarui varf este egal cu 2"<<endl;
	grila(6,'b');
}
void e7(int nr)
{
	cout<<nr<<".Un graf orientat este reprezentat cu ajutorul listelor de adiacenta scrise mai jos."<<endl;
	cout<<"1: (5,6)"<<endl;
	cout<<"2: (1,5,4)"<<endl;
	cout<<"3: (1,5)"<<endl;
	cout<<"4: (1,2)"<<endl;
	cout<<"5: (2)"<<endl;
	cout<<"6: (2,4,5)"<<endl;
	cout<<"Nodurile grafului care au gradul exterior egal cu 2 sunt:"<<endl;
	cout<<"a.2,5,4"<<endl<<"b.1,3,6"<<endl<<"c.4"<<endl<<"d.1,3,4"<<endl;
	grila(7,'d');
}
void e8(int nr)
{
	cout<<nr<<".Care dintre urmatoarele propozitii este falsa pentru graful orientat G, dat prin matricea de adiacenta urmatoare?"<<endl;
	cout<<"0 1 1 0 0"<<endl;
	cout<<"0 0 1 1 0"<<endl;
	cout<<"0 0 0 1 1"<<endl;
	cout<<"1 1 0 0 0"<<endl;
	cout<<"0 0 0 1 0"<<endl;
	cout<<"a.graful G nu are circuite"<<endl<<"b.exista cel putin un nod in graful G care are gradul intern egal cu cel extern"<<endl; 
	cout<<"c.exista cel putin un drum intre oricare doua noduri ale grafului G"<<endl<<"d.graful G are 9 arce"<<endl;
	grila(8,'a');
}
void e9(int nr)
{
	cout<<nr<<".Care dintre urmatoarele propozitii NU este adevarata pentru graful orientat cu 6 varfuri, numerotate ";
	cout<<"de la 1 la 6 si ale carui arce sunt: (2,1), (3,6), (4,1), (4,3), (4,5), (5,2), (6,4)?"<<endl;
	cout<<"a.graful nu are circuite"<<endl<<"b.varful numerotat cu 6 apartine unui circuit"<<endl;
	cout<<"c.varful numerotat cu 1 are gradul extern 0"<<endl<<"d.gradul intern al varfului numerotat cu 4 este 1"<<endl;
	grila(9,'a');}
void e10(int nr)
{
	cout<<nr<<".Se considera un graf orientat cu 5 varfuri si 8 arce. Care dintre urmatoarele siruri de numere poate fi sirul gradelor exterioare ale varfurilor acestui graf?"<<endl;
	cout<<"a.2, 2, 6, 5, 1"<<endl<<"b.1, 0, 1, 1, 1, 1"<<endl<<"c.2, 3, 1, 1, 1"<<endl<<"d.1, 1, 0, 2, 1"<<endl;
	grila(10,'c');
}
void grila(int nr,char r)
	{
		cout<<"Introduceti varianta"<<" ";
		char o;
		do
		{
			cin>>o;
		}
		while(!(o=='a' || o=='b' || o=='c' || o=='d' ));
		if(o==r)
			{
				nota++;
				cout<<"Corect!"<<endl;
			}
		else	
		cout<<"Gresit, raspunsul corect este ";
		if(o!=r)
		{
			if(nr==1)
			cout<<"a"<<endl;
			else
			if(nr==2)
			cout<<"c"<<endl;
			else
			if(nr==3)
			cout<<"d"<<endl;
			else
			if(nr==4)
			cout<<"b"<<endl;
			else
			if(nr==5)
			cout<<"b"<<endl;
			else
			if(nr==6)
			cout<<"b"<<endl;
			else
			if(nr==7)
			cout<<"d"<<endl;
			else
			if(nr==8)
			cout<<"a"<<endl;
			else
			if(nr==9)
			cout<<"a"<<endl;
			else
			if(nr==10)
			cout<<"c"<<endl;
		}
	
	}	

void definitii();
void gradul_unui_varf();
void metode_de_reprezentare();
void parcurgeri();
void conexitate();
void conexitate_definitie_graf();
void conexitate_definitie_componenta();
void tareconex();
void tareconex_definitie();
void tareconex_verificare();
void aplicatii();
void test();
void gradul_unui_varf_definitii();
void varf_izolat();
void varf_izolat_aplicatie();
void varf_izolat_definitie();
void liste_adiacenta();
void vectorul_arcelor();
void matrice_adiacenta();
void matrice_adiacenta_caracteristici();
void matrice_adiacenta_verificare();
void matrice_incidenta();
void matrice_incidenta_caracteristici();
void matrice_incidenta_aplicatie();
void matrice_drumurilor();
void matrice_drumurilor_caracteristici();
void matrice_drumurilor_aplicatie();
void multimea_succesorilor_predecesorilor();
void multimea_succesorilor_predecesorilor_definitii();
void multimea_succesorilor_predecesorilor_aplicatie();
void multimea_arcelor();
void multimea_arcelor_definitii();
void multimea_arcelor_aplicatie();
void aplicatie_1();
void aplicatie_2();
void aplicatie_3();
void stergere()
{
 system("PaUSE");
 system("CLS");
}
	void meniu()
	   	{
	 		int ok=1;
	 		
	 		do{
			 
			   	unsigned comanda;
	            cout<<"1.Definitii"<<endl;
				cout<<"2.Gradul unui varf"<<endl;
				cout<<"3.Metode de reprezentare"<<endl;
				cout<<"4.Conexitate"<<endl;
				cout<<"5.Tare conex"<<endl;
				cout<<"6.aplicatii"<<endl;
				cout<<"7.Test"<<endl;
				cout<<"8.Iesire"<<endl;

				do
				{
					cin >> comanda;
				}
	            while(!(comanda>=1 && comanda<=10));
	            system ("CLS");
	            if(comanda == 1)
	                {
	                    definitii();
	                }
	            else if(comanda == 2)
	                {
	                    gradul_unui_varf();
	                }
				else if(comanda == 3)
	                {
	                   metode_de_reprezentare();
	                }
				else if(comanda == 4)
	                {
	                    conexitate();
	                }
	            else if(comanda == 5)
	                {
	                    tareconex();
	                }   
				else if(comanda == 6)
	                {
	                    aplicatii();
	                }          
				else if(comanda == 7)
	                {
	                    test();
	                }
	            else if(comanda==8)
	            	ok=0;

		   }
		while(ok==1);
            
		}
	void definitii()
		{
			cout<<"GRAF ORIENTAT"<<endl;
			cout<<"Se numeste graf orientat o pereche ordonata de multimi notata G=(V, U), unde:"<<endl;
			cout<<"V : este o multime, finita si nevida, ale carei elemente se numesc noduri sau varfuri;"<<endl;
			cout<<"U : este o multime, de perechi ordonate de elemente distincte din V, ale carei elemente se numesc arce."<<endl;
			cout<<"ARCE"<<endl;
			cout<<"U: este o multime de perechi ordonate de elemente distincte din V ale carei elemente se numesc arce";
			cout<<"extremitati ale unui arc: pentru arcul u=(x,y), se numesc extremitati ale sale nodurile x si y; "<<endl;
			cout<<"x se numeste extremitate initiala;"<<endl;
			cout<<"y se numeste extremitate finala; "<<endl;
			cout<<"y se numeste succesor al lui x; "<<endl;
			cout<<"x se numeste predecesor al lui y. "<<endl;
			cout<<"LANTURI"<<endl;
			cout<<"Se numeste lant intr-un graf neorientat, o secventa de varfuri , cu proprietatea ca oricare doua varfuri consecutive din secventa sunt ";
			cout<<"adiacente."<<endl;
			cout<<"Un lant este elementar daca el nu contine de mai multe ori acelasi varf."<<endl;
			cout<<"Un lant este simplu daca el nu contine de mai multe ori aceeasi muchie."<<endl;
			cout<<"Se numeste lungime a unui lant numarul de muchii continute."<<endl;
			cout<<"DRUM"<<endl;
			cout<<"Definitie. Fie G=(V, U) un graf orientat. Se numeste drum in graful G o succesiune de noduri, notata ";
			cout<<"D = (x1 , x2 ,..., xk), cu proprietatea ca pentru orice 1=i<k, (xi,xi+1) este arc in G."<<endl;
			cout<<"GRAF PARTIAL"<<endl;
			cout<<"Definitie. Fie G=(V, U) un graf orientat. Se numeste graf partial al grafului G, graful orientat G1=(V, U1), unde U1 inclus U."<<endl;
			cout<<"Din definitie rezulta: "<<endl;
			cout<<"Un graf partial al unui graf orientat G=(V,U), are aceeasi multime de varfuri ca si G, iar multimea arcelor este o submultime a";
			cout<<" lui U sau chiar U."<<endl;
			cout<<"Fie G=(V, U) un graf orientat. Un graf partial al grafului G, se obtine pastrand varfurile si";
			cout<<" eliminand eventual niste arce (se pot elimina si toate arcele sau chiar nici unul)."<<endl;
			cout<<"SUBGRAF"<<endl;
			cout<<"	Definitie. Fie G=(V, U) un graf orientat. Se numeste subgraf al grafului G graful orientat G1=(V1,U1) unde V1 inclus V iar U1 contine ";
			cout<<"	toate arcele din U care au extremitatile in V1."<<endl;
			cout<<"Din definitie rezulta: "<<endl;
			cout<<"Fie G=(V,U) un graf orientat. Un subgraf al grafului G, se obtine stergand eventual anumite varfuri si odata cu acestea si arcele";
			cout<<" care le admit ca extremitate (nu se pot sterge toate varfurile deoarece s-ar obtine un graf cu multimea varfurilor vida)."<<endl;
			stergere();
			meniu();
		}
	void gradul_unui_varf()
	   	{
	
			   	unsigned comanda;
	             cout<<"1.Definitii"<<endl;
				cout<<"2.Varf izolat"<<endl;
				cout<<"3.Revenire la meniul anterior"<<endl;
				do
				{
					cin >> comanda;
				}
	            while(!(comanda>=1 && comanda<=3));
	            system ("CLS");
	            if(comanda == 1)
	                {
	                    gradul_unui_varf_definitii();
	                }
	            else if(comanda == 2)
	                {
	                    varf_izolat();
	                }
				else if(comanda == 3)
	                {
	                   meniu();
	                }
            
            
		}
	void gradul_unui_varf_definitii()
		{
			cout<<"Grad exterior"<<endl;
			cout<<"Definitie. Fie G=(V, U) un graf orientat si x un nod al sau. Se numeste grad exterior al nodului x, numarul arcelor de forma (x,y) ";
			cout<<"(adica numarul arcelor care ies din x), notat d+(x). "<<endl;
			cout<<"Graf interior"<<endl;
			cout<<"Definitie. Fie G=(V, U) un graf orientat si x un nod al sau. Se numeste grad interior al nodului x, numarul arcelor de forma (y,x) ";
			cout<<"( adica numarul arcelor care intra in x), notat d-(x)."<<endl;
			stergere();
			gradul_unui_varf();
		}
	void varf_izolat()
	   	{
	
			   	unsigned comanda;
	             cout<<"1.Definitii"<<endl;
				cout<<"2.Varf izolat"<<endl;
				cout<<"3.Revenire la meniul anterior"<<endl;
				do
				{
					cin >> comanda;
				}
	            while(!(comanda>=1 && comanda<=3));
	            system ("CLS");
	            if(comanda == 1)
	                {
	                    varf_izolat_definitie();
	                }
	            else if(comanda == 2)
	                {
	                    varf_izolat_aplicatie();
	                }
				else if(comanda == 3)
	                {
	                   gradul_unui_varf();
	                }
            
		}
	void varf_izolat_definitie()
	{
		cout<<"Un nod x se numeste izolat daca d+(x)=d-(x)=0 (are gradul interior si gradul exterior egal cu 0)."<<endl;
		stergere();
		varf_izolat();
		
	}
	void varf_izolat_aplicatie()
		{		
		cout<<"Introduceti numarul de muchii m si numarul de noduri n pentru a afisa varfurile izolate. "<<endl;
		cout<<"	struct arce"<<endl;
		cout<<"{"<<endl;
		cout<<"	int x,y;"<<endl;
		cout<<"};"<<endl;
		cout<<"muchii v[100];"<<endl;
		cout<<"unsigned n,m,i,j,l,c=0;"<<endl;
		cout<<"cin>>n;"<<endl;
		cout<<"cin>>m;"<<endl;
		cout<<"int a[n][n];"<<endl;
		cout<<"for(j=1;j<=n;j++)"<<endl;
		cout<<"	for(l=1;l<=n;l++)"<<endl;
		cout<<"		a[j][l]=0;"<<endl;
		cout<<"for(i=1;i<=m;i++)"<<endl;
		cout<<"	{"<<endl;
		cout<<"		cin>>v[i].x;"<<endl;
		cout<<"		cin>>v[i].y;"<<endl;
		cout<<"		a[v[i].x][v[i].y]=1;"<<endl;
		cout<<"	}"<<endl;
		cout<<"for(j=1;j<=n;j++)"<<endl;
		cout<<"{"<<endl;
		cout<<"	for(l=1;l<=n;l++)"<<endl;
		cout<<"		{"<<endl;
		cout<<"			c=c+a[j][l]+a[l][j];"<<endl;
		cout<<"		}"<<endl;
		cout<<"	if(c==0)"<<endl;
		cout<<"		{"<<endl;
		cout<<"			cout<<Varful j este izolat<<endl;"<<endl;
		cout<<"		}"<<endl;
		cout<<"	c=0;"<<endl;
		cout<<"}"<<endl;
		
			struct arce
		{
			int x,y;
		};
		arce ve[100];
		unsigned n,m,i,j,l,c=0;
		do
		{
			cout<<"n= ";
			cin>>n;
		}
		while(!(n<=20 && n>=3));
		do
		{
			cout<<"m= ";
			cin>>m;
		}
		while(!(m>=1 && m<=100));
		int a[n][n];
		for(j=1;j<=n;j++)
			for(l=1;l<=n;l++)
				a[j][l]=0;
		for(i=1;i<=m;i++)
			{
				do
				{
					cin>>ve[i].x;
					cin>>ve[i].y;
				}
				while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1 );
				a[ve[i].x][ve[i].y]=1;
			}
		for(j=1;j<=n;j++)
		{
			for(l=1;l<=n;l++)
				{
					c=c+a[j][l]+a[l][j];
				}
			if(c==0)
				{
					cout<<"Varful "<<j<<" este izolat"<<endl;
				}
			c=0;
		}
		cout<<endl;
		stergere();
		varf_izolat();
		}
	
	void metode_de_reprezentare()
	   	{
	
			   	unsigned comanda;
	            cout<<"1.Liste de adiacenta"<<endl;
				cout<<"2.Vectorul muchiilor"<<endl;
				cout<<"3.Matrice de adiacenta"<<endl;
				cout<<"4.Matricea de incidenta"<<endl;
				cout<<"5.Matricea drumurilor"<<endl;
				cout<<"6.Multimea succesorilor si a predecesorilor"<<endl;
				cout<<"7.Multimea arcelor"<<endl;
				cout<<"8.Revenire la meniul anterior"<<endl;
				do
				{
					cin >> comanda;
				}
	            while(!(comanda>=1 && comanda<=8));
	            system ("CLS");
	            if(comanda == 1)
	                {
	                	liste_adiacenta();
	                }
	            else if(comanda == 2)
	                {
	                    vectorul_arcelor();
	                }
				else if(comanda == 3)
	                {
	                   matrice_adiacenta();
	                }
	            else if(comanda == 4)
	                {
	                   matrice_incidenta();
	                }
	           	else if(comanda == 5)
	                {
	                   matrice_drumurilor();
	                }
	            else if(comanda == 6)
	                {
	                   multimea_succesorilor_predecesorilor();
	                }
	           	else if(comanda == 7)
	                {
	                   multimea_arcelor();
	                }
				else if(comanda == 8)
	                {
	                    meniu();
	                }
            
		}
		
	void liste_adiacenta()
	
		{
			cout<<"Pentru un graf orientat cu G=(V,U) se va memora numarul de noduri n si apoi, pentru fiecare nod x, lista succesorilor lui x, adica nodurilor y";  
			cout<<"cu proprietatea ca exista arcul (x,y)."<<endl;
			cout<<"Pentru graful alaturat, listele de adiacenta sunt:"<<endl;
			cout<<"1: 6"<<endl;
			cout<<"2: 1 4"<<endl;
			cout<<"3: 2"<<endl;
			cout<<"4: 2"<<endl;
			cout<<"5: 4"<<endl;
			cout<<"6: 1 2 4"<<endl;
			cout<<"La reprezentarea in memorie trebui avut in vedere ca dimensiunile listelor de succesori sunt variabile. De aceea, este neeficienta utilizarea"; 
			cout<<"unor tablouri alocate static. astfel, putem folosi:"<<endl;
			cout<<"-un sir de n tablouri unidimensionale alocate dinamic;"<<endl;
			cout<<"-un sir de n vectori din STL;"<<endl;
			cout<<"-un sir de n liste simplu (dublu) inlantuite alocate dinamic."<<endl;

			 stergere();
			 metode_de_reprezentare();
		}
		
	void vectorul_arcelor()
		{
			cout<<"Vectorul arcelor are m elemente de tipul definit"<<endl;
			cout<<" struct arce {"<<endl;
			cout<<"					unsigned x,y"<<endl;
			cout<<"				  }"<<endl;
			cout<<"ex: arce v[50]"<<endl;
			cout<<"Datele de tip v[i].x si v[i].y trebuie sa aiba valori cuprinse intre 1 si numarul de varfuri, inclusiv"<<endl;	
			stergere();
			metode_de_reprezentare();
		}
		
		
	void matrice_adiacenta()
	   	{
	
			   	unsigned comanda;
	            cout<<"1.Caracteristici"<<endl;
				cout<<"2.Verificare"<<endl;
				cout<<"3.Revenire la meniul anterior"<<endl;
				do
				{
					cin >> comanda;
				}
	            while(!(comanda>=1 && comanda<=3));
	            system ("CLS");
	            if(comanda == 1)
	                {
	                	matrice_adiacenta_caracteristici();
	                }
	            else if(comanda == 2)
	                {
	                    matrice_adiacenta_verificare();
	                }
				else if(comanda == 3)
	                {
	                  	metode_de_reprezentare();
	                }
            
		}
		void matrice_incidenta()
	   	{
	
			   	unsigned comanda;
	            cout<<"1.Caracteristici"<<endl;
				cout<<"2.aplicatie"<<endl;
				cout<<"3.Revenire la meniul anterior"<<endl;
				do
				{
					cin >> comanda;
				}
	            while(!(comanda>=1 && comanda<=3));
	            system ("CLS");
	            if(comanda == 1)
	                {
	                	matrice_incidenta_caracteristici();
	                }
	            else if(comanda == 2)
	                {
	                    matrice_incidenta_aplicatie();
	                }
				else if(comanda == 3)
	                {
	                  	metode_de_reprezentare();
	                }
            
		}
		void matrice_drumurilor()
	   	{
	
			   	unsigned comanda;
	            cout<<"1.Caracteristici"<<endl;
				cout<<"2.aplicatie"<<endl;
				cout<<"3.Revenire la meniul anterior"<<endl;
				do
				{
					cin >> comanda;
				}
	            while(!(comanda>=1 && comanda<=3));
	            system ("CLS");
	            if(comanda == 1)
	                {
	                	matrice_drumurilor_caracteristici();
	                }
	            else if(comanda == 2)
	                {
	                    matrice_drumurilor_aplicatie();
	                }
				else if(comanda == 3)
	                {
	                  	metode_de_reprezentare();
	                }
            
		}
		void multimea_succesorilor_predecesorilor()
	   	{
	
			   	unsigned comanda;
	            cout<<"1.Caracteristici"<<endl;
				cout<<"2.aplicatie"<<endl;
				cout<<"3.Revenire la meniul anterior"<<endl;
				do
				{
					cin >> comanda;
				}
	            while(!(comanda>=1 && comanda<=3));
	            system ("CLS");
	            if(comanda == 1)
	                {
	                	multimea_succesorilor_predecesorilor_definitii();
	                }
	            else if(comanda == 2)
	                {
	                    multimea_succesorilor_predecesorilor_aplicatie();
	                }
				else if(comanda == 3)
	                {
	                  	metode_de_reprezentare();
	                }
            
		}
		void multimea_arcelor()
	   	{
	
			   	unsigned comanda;
	            cout<<"1.Caracteristici"<<endl;
				cout<<"2.aplicatie"<<endl;
				cout<<"3.Revenire la meniul anterior"<<endl;
				do
				{
					cin >> comanda;
				}
	            while(!(comanda>=1 && comanda<=3));
	            system ("CLS");
	            if(comanda == 1)
	                {
	                	multimea_arcelor_definitii();
	                }
	            else if(comanda == 2)
	                {
	                    multimea_arcelor_aplicatie();
	                }
				else if(comanda == 3)
	                {
	                  	metode_de_reprezentare();
	                }
            
		}
	void matrice_adiacenta_caracteristici()
		{
		cout<<"Fie G=(V,U) un graf orientat cu n noduri, in care nu exista mai multe arce de la un nod la altul. Matricea de adiaceta a grafului este o matrice"; 
		cout<<"cu n linii si n coloane si elemente 0 sau 1, astfel:"<<endl;
		cout<<"-ai,j=1 daca exista arcul (i,j)"<<endl;
		cout<<"-ai,j=0 daca exista nu arcul (i,j)"<<endl;

 		cout<<"Pentru graful alaturat, matricea de adiacenta este:"<<endl;
		cout<<"0 0 0 0 0 1"<<endl;
		cout<<"1 0 0 1 0 0"<<endl;
		cout<<"0 1 0 0 0 0"<<endl;
		cout<<"0 1 0 0 0 0"<<endl;
		cout<<"0 0 0 1 0 0"<<endl;
		cout<<"1 1 0 1 0 0"<<endl;
		
		cout<<"Observam ca matricea de adiacenta:"<<endl;
		
		cout<<"** are zero pe diagonala (daca in graf nu avem bucle)"<<endl;
		cout<<"** nu este simetrica fata de diagonala principala"<<endl;
		
		cout<<"Pentru reprezentarea in memorie vom folosi un tablou bidimensional ale carui dimensiuni sunt in concordanta cu numarul de noduri din graf."<<endl;
		

			stergere();
			matrice_adiacenta();
		}
	
	void matrice_adiacenta_verificare()
		{
			cout<<"Verificati daca matricea pe care o introduceti este o matrice de adiacenta."<<endl;
			cout<<"#include <iostream>"<<endl;
			cout<<"using namespace std;"<<endl;
			cout<<"int main()"<<endl;
			cout<<"{"<<endl;
			cout<<"	unsigned n,i,j,ok;"<<endl;
			cout<<"	ok=1;"<<endl;
			cout<<"	cin>>n;"<<endl;
			cout<<"	unsigned a[n][n];"<<endl;
			cout<<"	for(i=1;i<=n;i++)"<<endl;
			cout<<"		{"<<endl;
			cout<<"			for(j=1;j<=n;j++)"<<endl;
			cout<<"				do"<<endl;
			cout<<"				{"<<endl;
			cout<<"					cout<<a[<<i<<]<<[<<j<<]= ;"<<endl;
			cout<<"					cin>>a[i][j];"<<endl;
			cout<<"				}"<<endl;
			cout<<"				while (a[i][j]!=1 && a[i][j]!=0);"<<endl;
			cout<<"			"<<endl;
			cout<<"		}"<<endl;
			cout<<"	while (ok!=0 && i<=n)"<<endl;
			cout<<"	{	"<<endl;
			cout<<"		for(i=1;i<=n;i++)"<<endl;
			cout<<"		{"<<endl;
			cout<<"			for(j=1;j<=n;j++)"<<endl;
			cout<<"			{"<<endl;
			cout<<"				if(j==i)"<<endl;
			cout<<"					if(a[i][j]==1)"<<endl;
			cout<<"						ok=0;"<<endl;
			cout<<"			}"<<endl;
			cout<<"		}"<<endl;
			cout<<"	}"<<endl;
			cout<<"cout<<ok;"<<endl;
			cout<<"return 0;"<<endl;
			cout<<"}"<<endl;
			{
				unsigned n,i,j,ok=1;
				ok=1;
				do
				{
					cout<<"n= ";
					cin>>n;
				}
				while(!(n>=3 && n<=20));
				unsigned a[100][100];
				for(i=1;i<=n;i++)
					{
						for(j=1;j<=n;j++)
							do
							{
								cout<<"a["<<i<<"]"<<"["<<j<<"]= ";
								cin>>a[i][j];
							}
							while (a[i][j]!=1 && a[i][j]!=0);
						
					}
				while (ok!=0 && i<=n)
				{	
					for(i=1;i<=n;i++)
					{
						for(j=1;j<=n;j++)
						{
							if(j==i)
								if(a[i][j]==1)
									ok=0;
						}
					}
				}
			if(ok==0)
				cout<<"Nu este matrice de adiaceneta"<<endl;
			if(ok==1)
				cout<<"Este matrice de adiacenta"<<endl;
			}
			stergere();
			matrice_adiacenta();
		}
		
		
void matrice_incidenta_caracteristici()
{
	cout<<"Matricea de incidenta este o matrice cu n linii si m coloane. Pe fiecare coloana vom avea o valoare de 1 care corespunde extremitatii initiale";
	cout<<"a unui arc, o valoare de -1 care corespunde extremitatii finale a unui arc, toate celelalte fiind 0."<<endl;
	stergere();
	matrice_incidenta();
}
void matrice_incidenta_aplicatie()
{
		cout<<" struct arce"<<endl;
 	cout<<"{"<<endl;
 	cout<<"	int x,y;"<<endl;
	cout<<"};"<<endl;

	cout<<"arce ve[100];"<<endl;
	cout<<"int n,m,i,j,l,k=0;"<<endl;
	cout<<"do"<<endl;
	cout<<"	{"<<endl;
	cout<<"		cin>>n;"<<endl;
	cout<<"	}"<<endl;
	cout<<"	while(!(n<=20 && n>=3));"<<endl;
	cout<<"	do"<<endl;
	cout<<"	{"<<endl;
	cout<<"		cin>>m"<<endl;
	cout<<"	}"<<endl;
	cout<<"	while(!(m>=1 && m<=100));"<<endl;
	cout<<"	int a[100][100];"<<endl;
	cout<<"	for(j=1;j<=n;j++)"<<endl;
	cout<<"		for(l=1;l<=n;l++)"<<endl;
	cout<<"			a[j][l]=0;"<<endl;
	cout<<"	for(i=1;i<=m;i++)"<<endl;
	cout<<"		{"<<endl;
	cout<<"			do"<<endl;
	cout<<"			{"<<endl;
	cout<<"				cin>>ve[i].x;"<<endl;
	cout<<"				cin>>ve[i].y;"<<endl;
	cout<<"		}"<<endl;
	cout<<"			while( ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);"<<endl;
	cout<<"			k++;"<<endl;
	cout<<"			a[ve[i].x][k]=1;"<<endl;
	cout<<"			a[ve[i].y][k]=-1;"<<endl;
	cout<<"		}"<<endl;
	cout<<"	for(i=1;i<=n;i++)"<<endl;
	cout<<"		{"<<endl;
	cout<<"			for(j=1;j<=m;j++)"<<endl;
	cout<<"				cout<<a[i][j]<<" ";"<<endl;
	cout<<"			cout<<endl;"<<endl;
	cout<<"		}"<<endl;
	 struct arce
 	{
 		int x,y;
	};

	arce ve[100];
	int n,m,i,j,l,k=0;
	do
		{
			cout<<"n= ";
			cin>>n;
		}
		while(!(n<=20 && n>=3));
		do
		{
			cout<<"m= ";
			cin>>m;
		}
		while(!(m>=1 && m<=100));
		int a[100][100];
		for(j=1;j<=n;j++)
			for(l=1;l<=n;l++)
				a[j][l]=0;
		for(i=1;i<=m;i++)
			{
				do
				{
					cin>>ve[i].x;
					cin>>ve[i].y;
				}
				while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);
				k++;
				a[ve[i].x][k]=1;
				a[ve[i].y][k]=-1;
			}
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=m;j++)
					cout<<a[i][j]<<" ";
				cout<<endl;
			}
		stergere();
		matrice_incidenta();
}
void matrice_drumurilor_caracteristici()
{
	cout<<"	Este o matrice d cu n linii si n coloane, in care fiecare element d[i,j] este :	"<<endl;
	cout<<"	-         1, daca exista drum de la nodul i la nodul j in graf;"<<endl;
		
	cout<<"	-         0, in caz contrar."<<endl;
		
	cout<<"	algoritmul Roy-Warshall de determinare a matricei drumurilor"<<endl;
		
	cout<<"	Matricea drumurilor se obtine aplicand matricei de adiacenta transformari succesive. Vom spune ca exista drum de la nodul i la nodul j, daca gasim";
	cout<<"	un nod k (diferit de i, j) cu proprietatea ca exista drum de la i la k si drum de la j la k. astfel:"<<endl;
	cout<<"	un element a[i, j] care este 0, devine 1, daca exista un nod k astfel incat a[i, k]=1 si a[k, j]=1. "<<endl;
	stergere();
	matrice_drumurilor();
}
void matrice_drumurilor_aplicatie()
{
		cout<<"struct arce"<<endl;
 	cout<<"{"<<endl;
 	cout<<"	int x,y;"<<endl;
	cout<<"};"<<endl;

	cout<<"arce ve[100];"<<endl;
	cout<<"int n,m,i,j,l,k;"<<endl;
	cout<<"do"<<endl;
	cout<<"	{"<<endl;
	cout<<"		cin>>n;"<<endl;
	cout<<"	}"<<endl;
	cout<<"	while(!(n<=20 && n>=3));"<<endl;
	cout<<"	do"<<endl;
	cout<<"	{"<<endl;
	cout<<"		cin>>m;"<<endl;
	cout<<"	}"<<endl;
	cout<<"	while(!(m>=1 && m<=100));"<<endl;
	cout<<"	int a[100][100];"<<endl;
	cout<<"	for(j=1;j<=n;j++)"<<endl;
	cout<<"		for(l=1;l<=n;l++)"<<endl;
	cout<<"			a[j][l]=0;"<<endl;
	cout<<"	for(i=1;i<=m;i++)"<<endl;
	cout<<"		{"<<endl;
	cout<<"			do"<<endl;
	cout<<"			{"<<endl;
	cout<<"				cin>>ve[i].x;"<<endl;
	cout<<"				cin>>ve[i].y;"<<endl;
	cout<<"			}"<<endl;
	cout<<"			while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);"<<endl;
	cout<<"			a[ve[i].x][ve[i].y]=1;"<<endl;
	cout<<"		}"<<endl;
	cout<<"for(int k = 1 ; k <= n ; ++k)"<<endl;
    cout<<"	for(int i = 1 ; i <= n ; ++i)"<<endl;
	cout<<"        for(int j = 1 ; j <= n ; ++j)"<<endl;
	cout<<"          if(a[i][j] == 0)"<<endl;
	cout<<"              a[i][j] = a[i][k] * a[k][j];"<<endl;
	cout<<"	for(i=1;i<=n;i++)"<<endl;
	cout<<"		{"<<endl;
	cout<<"			for(j=1;j<=n;j++)"<<endl;
	cout<<"				cout<<a[i][j]<<" ";"<<endl;
	cout<<"			cout<<endl;"<<endl;
	cout<<"		}"<<endl;
	struct arce
 	{
 		int x,y;
	};

	arce ve[100];
	int n,m,i,j,l,k;
	do
		{
			cout<<"n= ";
			cin>>n;
		}
		while(!(n<=20 && n>=3));
		do
		{
			cout<<"m= ";
			cin>>m;
		}
		while(!(m>=1 && m<=100));
		int a[100][100];
		for(j=1;j<=n;j++)
			for(l=1;l<=n;l++)
				a[j][l]=0;
		for(i=1;i<=m;i++)
			{
				do
				{
					cin>>ve[i].x;
					cin>>ve[i].y;
				}
				while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);
				a[ve[i].x][ve[i].y]=1;
			}
	for(int k = 1 ; k <= n ; ++k)
    	for(int i = 1 ; i <= n ; ++i)
	        for(int j = 1 ; j <= n ; ++j)
	            if(a[i][j] == 0)
	                a[i][j] = a[i][k] * a[k][j];
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
					cout<<a[i][j]<<" ";
				cout<<endl;
			}
	stergere();
	matrice_drumurilor();
}
void multimea_succesorilor_predecesorilor_definitii()
{
		cout<<"Se numeste succesor al varfului x orice varf la care ajunge un arc care iese din varful x."<<endl;
		cout<<"Multimea succesorilor varfului x este formata din multimea varfurilor la care ajung arce care ies din varful x si se noteaza G+(x). "<<endl;
		cout<<"Multimea muchiilor  ce il pe x ca extremitate initiala se noteaza y+(x)."<<endl;
		cout<<"Se numeste predecesor al varfului x orice varf de la care intra un arc in varful x."<<endl;
		cout<<"Multimea predecesorilor varfului x este formata din multimea varfurilor de la care ajung arce care intra in varful x si se noteaza G-(x)."<<endl;
		cout<<"Multimea muchiilor  ce il pe x ca extremitate finala se noteaza y-(x)."<<endl;
		stergere();
		multimea_succesorilor_predecesorilor();
}
void multimea_succesorilor_predecesorilor_aplicatie()
{
	cout<<" struct arce"<<endl;
 	cout<<"{"<<endl;
 	cout<<"	int x,y;"<<endl;
	cout<<"};"<<endl;

	cout<<"arce ve[100];"<<endl;
	cout<<"int n,m,i,j,l;"<<endl;
	cout<<"do"<<endl;
	cout<<"	{"<<endl;
	cout<<"		cin>>n;"<<endl;
	cout<<"	}"<<endl;
	cout<<"	while(!(n<=20 && n>=3));"<<endl;
	cout<<"	do"<<endl;
	cout<<"	{"<<endl;
	cout<<"		cin>>m;"<<endl;
	cout<<"	}"<<endl;
	cout<<"	while(!(m>=1 && m<=100));"<<endl;
	cout<<"	int a[100][100];"<<endl;
	cout<<"	for(j=1;j<=n;j++)"<<endl;
	cout<<"		for(l=1;l<=n;l++)"<<endl;
	cout<<"			a[j][l]=0;"<<endl;
	
		
	cout<<"	for(i=1;i<=m;i++)"<<endl;
	cout<<"		{"<<endl;
	cout<<"			do"<<endl;
	cout<<"			{"<<endl;
	cout<<"				cin>>ve[i].x;"<<endl;
	cout<<"				cin>>ve[i].y;"<<endl;
	cout<<"			}"<<endl;
	cout<<"			while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);"<<endl;
	cout<<"		a[ve[i].x][ve[i].y]=1;"<<endl;
	cout<<"		}"<<endl;
	cout<<"	for(i=1;i<=n;i++)"<<endl;
	cout<<"		{ cout<<S(<<i<<)={;"<<endl;
	cout<<"			for(j=1;j<=n;j++)"<<endl;
	cout<<"				if(a[i][j]==1)"<<endl;
	cout<<"					cout<<j<<" ";"<<endl;
			  cout<<"}<<endl;"<<endl;
	cout<<"		}"<<endl;
	cout<<"		for(j=1;j<=n;j++)"<<endl;
	cout<<"	{   cout<<P(<<i<<)={;"<<endl;
	cout<<"			for(i=1;i<=n;i++)"<<endl;
	cout<<"				if(a[i][j]==1)"<<endl;
	cout<<"					cout<<i<<" ";"<<endl;
	cout<<"		  cout<<}<<endl;"<<endl;
	 struct arce
 	{
 		int x,y;
	};

	arce ve[100];
	int n,m,i,j,l;
	do
		{
			cout<<"n= ";
			cin>>n;
		}
		while(!(n<=20 && n>=3));
		do
		{
			cout<<"m= ";
			cin>>m;
		}
		while(!(m>=1 && m<=100));
		int a[100][100];
		for(j=1;j<=n;j++)
			for(l=1;l<=n;l++)
				a[j][l]=0;
	
		
		for(i=1;i<=m;i++)
			{
				do
				{
					cin>>ve[i].x;
					cin>>ve[i].y;
				}
				while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);
			a[ve[i].x][ve[i].y]=1;
			}
		for(i=1;i<=n;i++)
			{ cout<<"S("<<i<<")={";
				for(j=1;j<=n;j++)
					if(a[i][j]==1)
						cout<<j<<" ";
			  cout<<"}"<<endl;
			}
			for(j=1;j<=n;j++)
		{   cout<<"P("<<i<<")={";
				for(i=1;i<=n;i++)
					if(a[i][j]==1)
						cout<<i<<" ";
			  cout<<"}"<<endl;

}
stergere();
		multimea_succesorilor_predecesorilor();
}
void multimea_arcelor_definitii()
{
	cout<<"Lista de arce a unui graf orientat reprezinta o multime (familie, daca arcele se pot repeta) ce contine toate arcele din graf."<<endl;

 	cout<<"Pentru graful alaturat, lista de arce este: "<<endl;

	cout<<"U={(1,6),(2,1),(2,4),(3,2),(4,2),(5,4),(6,1),(6,4)}"<<endl;

	cout<<"Pentru reprezentarea ?n memorie putem folosi:"<<endl;
	cout<<"-un tablou unidimensional cu elemente de tip struct {int I,J;}"<<endl;
	cout<<"-doua tablouri unidimensionale cu elemente de tip int"<<endl;
	cout<<"-o lista alocata dinamic"<<endl;
	stergere();
	multimea_arcelor();

}
void multimea_arcelor_aplicatie()
{
	cout<<" struct arce"<<endl;
 	cout<<" {"<<endl;
 	cout<<" 	int x,y;"<<endl;
	cout<<" };"<<endl;
	cout<<"arce ve[100];"<<endl;
	cout<<" int n,m,i,j,l;"<<endl;
	cout<<" do"<<endl;
	cout<<" 	{"<<endl;
	cout<<" 		cin>>n;"<<endl;
	cout<<" 	}"<<endl;
	cout<<" 	while(!(n<=20 && n>=3));"<<endl;
	cout<<" 	do"<<endl;
	cout<<" 	{"<<endl;
	cout<<" 		cin>>m;"<<endl;
	cout<<" 	}"<<endl;
	cout<<" 	while(!(m>=1 && m<=100));"<<endl;
	cout<<" 	int a[100][100];"<<endl;
	cout<<" 	for(j=1;j<=n;j++)"<<endl;
	cout<<" 		for(l=1;l<=n;l++)"<<endl;
	cout<<" 			a[j][l]=0;"<<endl;
	
		
	cout<<" 	for(i=1;i<=m;i++)"<<endl;
	cout<<" 		{"<<endl;
	cout<<" 			do"<<endl;
	cout<<" 			{"<<endl;
	cout<<" 				cin>>ve[i].x;"<<endl;
	cout<<" 				cin>>ve[i].y;"<<endl;
	cout<<" 			}"<<endl;
	cout<<" 			while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);"<<endl;
	cout<<" 		a[ve[i].x][ve[i].y]=1;"<<endl;
	cout<<" 		}"<<endl;
	cout<<" 	cout<<U={;"<<endl;
	cout<<" 	for(i=1;i<=n;i++)"<<endl;
	cout<<" 		{"<<endl;
	cout<<" 			for(j=1;j<=n;j++)"<<endl;
	cout<<" 				if(a[i][j]==1)"<<endl;
	cout<<" 					cout<<(<<i<<,<<j<<)<<;"<<endl;
	cout<<" 		}"<<endl;
	cout<<" 	cout<<};"<<endl;
		 struct arce
 	{
 		int x,y;
	};
	arce ve[100];
	int n,m,i,j,l;
	do
		{
			cout<<"n= ";
			cin>>n;
		}
		while(!(n<=20 && n>=3));
		do
		{
			cout<<"m= ";
			cin>>m;
		}
		while(!(m>=1 && m<=100));
		int a[100][100];
		for(j=1;j<=n;j++)
			for(l=1;l<=n;l++)
				a[j][l]=0;
	
		
		for(i=1;i<=m;i++)
			{
				do
				{
					cin>>ve[i].x;
					cin>>ve[i].y;
				}
				while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);
			a[ve[i].x][ve[i].y]=1;
			}
		cout<<"U={";
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
					if(a[i][j]==1)
						cout<<"("<<i<<","<<j<<")"<<",";
			}
		cout<<"}";
			stergere();
	multimea_arcelor();
}
	void conexitate()
		{
			cout<<"1.Definitia grafului conex."<<endl;
			cout<<"2.Definitia componentei conexe."<<endl;
			cout<<"3.Revenire la meniul anterior."<<endl;
			int comanda;
			do
			{
				cin >> comanda;
			}
			while(!(comanda>=1 && comanda<=3));
	        system ("CLS");
	        if(comanda == 1)
	            {
	               conexitate_definitie_graf();
	            }
	        else if(comanda == 2)
	            {
	                conexitate_definitie_componenta();
	            }
			else if(comanda == 3)
	            {
	            	meniu();
	            }
			
		}
	void conexitate_definitie_graf()
		{
			cout<<"Un graf se numeste conex daca pentru oricare doua varfuri x si y diferite ale sale, exista un lant care le leaga.";
			stergere();
			conexitate();
		}
	void conexitate_definitie_componenta()
		{
			cout<<"Se numeste componenta conexa a grafului G=(X,U), un subgraf C=(X1,U1) conex al lui G care are proprietatea ca nu exista nici un in G";
			cout<<"care sa lege un varf din multimea X1 cu un varf din multimea X-X1.";
			stergere();
			conexitate();
		}
		void tareconex()
		{
			cout<<"1.Definitia grafului tare conex."<<endl;
			cout<<"2.Verificare"<<endl;
			cout<<"3.Revenire la meniul anterior."<<endl;
			int comanda;
			do
			{
				cin >> comanda;
			}
			while(!(comanda>=1 && comanda<=3));
	        system ("CLS");
	        if(comanda == 1)
	            {
	               tareconex_definitie();
	            }
	        else if(comanda == 2)
	            {
	                tareconex_verificare();
	            }
			else if(comanda == 3)
	            {
	            	meniu();
	            }
			
		}
	void tareconex_definitie()
		{
			cout<<"Graful se numeste tare conex daca intre oricare doua noduri distincte exista cel putin un drum."<<endl;
			cout<<"Se numeste componenta tare conexa un subgraf tare conex si maximal cu aceasta calitate ca daca am mai adauga un nod, n-ar mai fi tare";
			cout<<"conex."<<endl;
			stergere();
			tareconex();
		}
	void tareconex_verificare()
	{
		cout<<"struct arce"<<endl;
	 	cout<<"{"<<endl;
	 	cout<<"	int x,y;"<<endl;
		cout<<"};"<<endl;
		cout<<"arce ve[100];"<<endl;
		cout<<"int n,m,i,j,l,k,ok=1;"<<endl;
		cout<<"	do"<<endl;
		cout<<"	{"<<endl;
		cout<<"		cin>>n;"<<endl;
		cout<<"	}"<<endl;
		cout<<"	while(!(n<=20 && n>=3));"<<endl;
		cout<<"	do"<<endl;
		cout<<"	{"<<endl;
		cout<<"		cin>>m;"<<endl;
		cout<<"	}"<<endl;
		cout<<"	while(!(m>=1 && m<=100));"<<endl;
		cout<<"	int a[100][100];"<<endl;
		cout<<"	for(j=1;j<=n;j++)"<<endl;
		cout<<"		for(l=1;l<=n;l++)"<<endl;
		cout<<"			a[j][l]=0;"<<endl;
		cout<<"	for(i=1;i<=m;i++)"<<endl;
		cout<<"		{"<<endl;
		cout<<"			do"<<endl;
		cout<<"			{"<<endl;
		cout<<"				cin>>ve[i].x;"<<endl;
		cout<<"				cin>>ve[i].y;"<<endl;
		cout<<"			}"<<endl;
		cout<<"			while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);"<<endl;
		cout<<"			a[ve[i].x][ve[i].y]=1;"<<endl;
		cout<<"		}"<<endl;
		cout<<"for(int k = 1 ; k <= n ; ++k)"<<endl;
	    cout<<"	for(int i = 1 ; i <= n ; ++i)"<<endl;
		cout<<"        for(int j = 1 ; j <= n ; ++j)"<<endl;
		cout<<"            if(a[i][j] == 0)"<<endl;
		cout<<"                a[i][j] = a[i][k] * a[k][j];"<<endl;
		cout<<"	for(i=1;i<=n;i++)"<<endl;
		cout<<"		{"<<endl;
		cout<<"			for(j=1;j<=n;j++)"<<endl;
		cout<<"				if(a[i][j]==0)"<<endl;
		cout<<"					ok=0;"<<endl;
		cout<<"		}<<endl;"<<endl;
		cout<<"	if(ok==0)"<<endl;
		cout<<"	cout<<Graful nu este tare conex;"<<endl;
		cout<<"	else"<<endl;
		cout<<"	cout<<Graful este tare conex;"<<endl;
			struct arce
		 	{
		 		int x,y;
			};
			arce ve[100];
			int n,m,i,j,l,k,ok=1;
			do
				{
					cout<<"n= ";
					cin>>n;
				}
				while(!(n<=20 && n>=3));
				do
				{
					cout<<"m= ";
					cin>>m;
				}
				while(!(m>=1 && m<=100));
				int a[100][100];
				for(j=1;j<=n;j++)
					for(l=1;l<=n;l++)
						a[j][l]=0;
				for(i=1;i<=m;i++)
					{
						do
						{
							cin>>ve[i].x;
							cin>>ve[i].y;
						}
						while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);
						a[ve[i].x][ve[i].y]=1;
					}
			for(int k = 1 ; k <= n ; ++k)
		    	for(int i = 1 ; i <= n ; ++i)
			        for(int j = 1 ; j <= n ; ++j)
			            if(a[i][j] == 0)
			                a[i][j] = a[i][k] * a[k][j];
				for(i=1;i<=n;i++)
					{
						for(j=1;j<=n;j++)
							if(a[i][j]==0)
								ok=0;
					}
				if(ok==0)
				cout<<"Graful nu este tare conex";
				else
				cout<<"Graful este tare conex";
			stergere();
			tareconex();
		}
	
	void aplicatii()
		{
				unsigned comanda;
	            cout<<"1.aplicatie 1."<<endl;
				cout<<"2.aplicatie 2."<<endl;
				cout<<"3.aplicatie 3."<<endl;
				cout<<"4.Revenire la meniul anterior."<<endl;
	            cin >> comanda;
	            system ("CLS");
	            if(comanda == 1)
	                {
	                	aplicatie_1();
	                }
	            else if(comanda == 2)
	                {
	                	aplicatie_2();
	                }
				else if(comanda == 3)
	                {
	                  	aplicatie_3();
	                }
	            else if(comanda == 4)
	            	{
	            		meniu();
					}
		}
		
	void aplicatie_1()
	{
	cout<<"Se da lista arcelor unui graf orientat. Sa se determine nodurile care au gradul exterior egal cu gradul interior."<<endl;
	cout<<"struct arce"<<endl;
 	cout<<"{"<<endl;
 	cout<<"	int x,y;"<<endl;
	cout<<"};"<<endl;

	cout<<"arce ve[100];"<<endl;
	cout<<"int n,m,i,j,l,in=0,ext=0;"<<endl;
	cout<<"do"<<endl;
	cout<<"	{"<<endl;
	cout<<"		cin>>n;"<<endl;
	cout<<"	}"<<endl;
	cout<<"	while(!(n<=20 && n>=3));"<<endl;
	cout<<"	do"<<endl;
	cout<<"	{"<<endl;
	cout<<"		cin>>m;"<<endl;
	cout<<"	}"<<endl;
	cout<<"	while(!(m>=1 && m<=100));"<<endl;
	cout<<"	int a[100][100];"<<endl;
	cout<<"	for(j=1;j<=n;j++)"<<endl;
	cout<<"		for(l=1;l<=n;l++)"<<endl;
	cout<<"			a[j][l]=0;"<<endl;
	cout<<"	for(i=1;i<=m;i++)"<<endl;
	cout<<"		{"<<endl;
	cout<<"			do"<<endl;
	cout<<"			{"<<endl;
	cout<<"				cin>>ve[i].x;"<<endl;
	cout<<"				cin>>ve[i].y;"<<endl;
	cout<<"			}"<<endl;
	cout<<"			while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);"<<endl;
	cout<<"			a[ve[i].x][ve[i].y]=1;"<<endl;
	cout<<"		}"<<endl;
	cout<<"	cout<<Nodurile cu gradul exterior egal cu cel interior sunt: "<<endl;
	cout<<"	for(i=1;i<=n;i++)"<<endl;
	cout<<"		{"<<endl;
	cout<<"			for(j=1;j<=m;j++)"<<endl;
	cout<<"				{<<endl;"<<endl;
	cout<<"					in=a[i][j]+in;"<<endl;
	cout<<"					ext=a[j][i]+ext;"<<endl;
	cout<<"				}"<<endl;
	cout<<"			if(ext==in)"<<endl;
	cout<<"			cout<<i"<<endl;
	cout<<"			ext=0;"<<endl;
	cout<<"			in=0;"<<endl;
				
	cout<<"		}"<<endl;
			struct arce
 	{
 		int x,y;
	};

	arce ve[100];
	int n,m,i,j,l,in=0,ext=0;
	do
		{
			cout<<"n= ";
			cin>>n;
		}
		while(!(n<=20 && n>=3));
		do
		{
			cout<<"m= ";
			cin>>m;
		}
		while(!(m>=1 && m<=100));
		int a[100][100];
		for(j=1;j<=n;j++)
			for(l=1;l<=n;l++)
				a[j][l]=0;
		for(i=1;i<=m;i++)
			{
				do
				{
					cin>>ve[i].x;
					cin>>ve[i].y;
				}
				while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);
				a[ve[i].x][ve[i].y]=1;
			}
		cout<<"Nodurile cu gradul exterior egal cu cel interior sunt: ";
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=m;j++)
					{
						in=a[i][j]+in;
						ext=a[j][i]+ext;
					}
				if(ext==in)
				cout<<i<<" ";
				ext=0;
				in=0;
				
			}
			stergere();
			aplicatii();
	}
	void aplicatie_2()
	{
		cout<<"O persoana se numeste celebritate daca nu cunoaste nicio persoana, dar este cunoscuta de toate persoanele. sa se determine daca esxista o ";
		cout<<"celebritate si in cazul in care exista sa se afiseze numarul corespunzator."<<endl;
		cout<<"	struct arce"<<endl;
		cout<<"{"<<endl;
    	cout<<"	int x, y;"<<endl;
		cout<<"};"<<endl;

    cout<<"int n, m,i,j,l,s1=0,s2=0,ok=0;"<<endl;
    cout<<"arce ve[100];"<<endl;
    cout<<"do"<<endl;
    cout<<"{"<<endl;
    cout<<"	cin>>n;"<<endl;
	cout<<"}"<<endl;
	cout<<"while(!(n<=20 && n>=3));"<<endl;
    cout<<"do"<<endl;
    cout<<"{"<<endl;
    cout<<"	cin>>m;"<<endl;
	cout<<"}"<<endl;
    cout<<"while(!(m>=1 && m<=100));"<<endl;
    cout<<"int a[20][20];"<<endl;
	cout<<"for(j=1;j<=n;j++)"<<endl;
	cout<<"	for(l=1;l<=n;l++)"<<endl;
	cout<<"		a[j][l]=0;"<<endl;
	cout<<"for(i=1;i<=m;i++)"<<endl;
	cout<<"	{"<<endl;
	cout<<"			do"<<endl;
	cout<<"			{"<<endl;
	cout<<"				cin>>ve[i].x;"<<endl;
	cout<<"				cin>>ve[i].y;"<<endl;
	cout<<"			}"<<endl;
	cout<<"			while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);"<<endl;
	cout<<"			a[ve[i].x][ve[i].y]=1;"<<endl;
	cout<<"	}"<<endl;
	cout<<"for(j=1;j<=n;j++)"<<endl;
	cout<<"	{"<<endl;
	cout<<"		for(l=1;l<=n;l++)"<<endl;
	cout<<"			{"<<endl;
	cout<<"				s1=s1+a[l][j];"<<endl;
	cout<<"				s2=s2+a[j][l];"<<endl;
					
	cout<<"			}"<<endl;
	cout<<"		if(s1==n-1 && s2==0)"<<endl;
	cout<<"		{"<<endl;
	cout<<"			cout<<j<< Este o celebritate;"<<endl;
	cout<<"			ok=1;"<<endl;
	cout<<"			j=n;"<<endl;
	cout<<"		}"<<endl;
				
	cout<<"		s1=0;"<<endl;
	cout<<"		s2=0;"<<endl;
	cout<<"	}"<<endl;
	cout<<"if(ok==0)"<<endl;
	cout<<"	cout<<Nu exista nicio celebritate;"<<endl;	
		struct arce
				{
		    		int x, y;
				};
		
		    int n, m,i,j,l,s1=0,s2=0,ok=0;
		    arce ve[100];
		    do
		    {
				cout<<"n= ";
		    	cin>>n;
			}
			while(!(n<=20 && n>=3));
		    do
		    {
		    	cout<<"m= ";
		    	cin>>m;
			}
		    while(!(m>=1 && m<=100));
		    int a[20][20];
			for(j=1;j<=n;j++)
				for(l=1;l<=n;l++)
					a[j][l]=0;
			for(i=1;i<=m;i++)
				{
						do
						{
							cin>>ve[i].x;
							cin>>ve[i].y;
						}
						while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);
						a[ve[i].x][ve[i].y]=1;
				}
			for(j=1;j<=n;j++)
				{
					for(l=1;l<=n;l++)
						{
							s1=s1+a[l][j];
							s2=s2+a[j][l];
							
						}
					if(s1==n-1 && s2==0)
					{
						cout<<j<<" Este o celebritate";
						ok=1;
						j=n;
					}
						
					s1=0;
					s2=0;
				}
			if(ok==0)
				cout<<"Nu exista nicio celebritate";
			stergere();
			aplicatii();
    }
	
	void aplicatie_3()
	{	 
	cout<<"intr-un mall sunt n centre comerciale, numerotate de la 1 la n, unite intre ele prin coridoare unidirectionale. Sa se determine, daca exista, ";
	cout<<"un centru comercial in care se poate ajunge din oricare altul."<<endl;
	cout<<"struct arce"<<endl;
 	cout<<"{"<<endl;
 	cout<<"	int x,y;"<<endl;
	cout<<"};"<<endl;

	cout<<"arce ve[100];"<<endl;
	cout<<"int n,m,i,j,l,k,ok=1"<<endl;
	cout<<"do"<<endl;
	cout<<"	{"<<endl;
	cout<<"		cin>>n;"<<endl;
	cout<<"	}"<<endl;
	cout<<"	while(!(n<=20 && n>=3));"<<endl;
	cout<<"	do"<<endl;
	cout<<"	{"<<endl;
	cout<<"		cin>>m;"<<endl;
	cout<<"	}"<<endl;
	cout<<"	while(!(m>=1 && m<=100));"<<endl;
	cout<<"	int a[100][100];"<<endl;
	cout<<"	for(j=1;j<=n;j++)"<<endl;
	cout<<"		for(l=1;l<=n;l++)"<<endl;
	cout<<"			a[j][l]=0;"<<endl;
	cout<<"	for(i=1;i<=m;i++)"<<endl;
	cout<<"		{"<<endl;
	cout<<"			do"<<endl;
	cout<<"			{"<<endl;
	cout<<"				cin>>ve[i].x;"<<endl;
	cout<<"				cin>>ve[i].y;"<<endl;
	cout<<"			}"<<endl;
	cout<<"			while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);"<<endl;
	cout<<"			a[ve[i].x][ve[i].y]=1;"<<endl;
	cout<<"		}"<<endl;
	cout<<"for(int k = 1 ; k <= n ; ++k)"<<endl;
    cout<<"	for(int i = 1 ; i <= n ; ++i)"<<endl;
	cout<<"        for(int j = 1 ; j <= n ; ++j)"<<endl;
	cout<<"            if(a[i][j] == 0)"<<endl;
	cout<<"                a[i][j] = a[i][k] * a[k][j];"<<endl;
	cout<<"	for(i=1;i<=n;i++)"<<endl;
	cout<<"		{"<<endl;
	cout<<"			for(j=1;j<=n;j++)"<<endl;
	cout<<"				{"<<endl;
	cout<<"					if(a[j][i]==0)"<<endl;
	cout<<"						ok2=0;"<<endl;
	cout<<"				}"<<endl;
	cout<<"			if(ok==1)"<<endl;
	cout<<"				cout<<i<<"<<endl;
	cout<<"			ok=1;"<<endl;
	cout<<"		}"<<endl;
		
	
		 struct arce
 	{
 		int x,y;
	};

	arce ve[100];
	int n,m,i,j,l,k,ok=1;
	do
		{
			cout<<"n= ";
			cin>>n;
		}
		while(!(n<=20 && n>=3));
		do
		{
			cout<<"m= ";
			cin>>m;
		}
		while(!(m>=1 && m<=100));
		int a[100][100];
		for(j=1;j<=n;j++)
			for(l=1;l<=n;l++)
				a[j][l]=0;
		for(i=1;i<=m;i++)
			{
				do
				{
					cin>>ve[i].x;
					cin>>ve[i].y;
				}
				while(a[ve[i].x][ve[i].y]==1 || ve[i].x==ve[i].y || ve[i].x>n || ve[i].y>n || ve[i].x<1  || ve[i].y<1);
				a[ve[i].x][ve[i].y]=1;
			}
	for(int k = 1 ; k <= n ; ++k)
    	for(int i = 1 ; i <= n ; ++i)
	        for(int j = 1 ; j <= n ; ++j)
	            if(a[i][j] == 0)
	                a[i][j] = a[i][k] * a[k][j];
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
					{
						if(a[j][i]==0)
							ok=0;
					}
				if(ok==1)
					cout<<i<<" ";
				ok=1;
			}
        	stergere();
			aplicatii();
	}
		

	void test()
		{
				e1(1);
				e2(2);
				e3(3);
				e4(4);
				e5(5);
				e6(6);
				e7(7);
				e8(8);
				e9(9);
				e10(10);
				if(nota>=8 && nota<=9)
				cout<<"Felicitari, ai avut "<<nota<<" raspunsuri corecte din 10!"<<endl;
				if(nota==10)
				cout<<"Felicitari, ai raspuns corect la toate cele 10 intrebari! ai fost foarte atent!"<<endl;
				if(nota<8 && nota>=5)
				cout<<"Ai avut "<<nota<<" raspunsuri corecte din 10. Ai putea sa mai incerci o data"<<endl;
				if(nota<5)
				cout<<"Ar fi bine sa acorzi mai multa atentie data viitoare. ai avut doar "<<nota<<" raspunsuri corecte din 10"<<endl;
				stergere();
				meniu();
		}
	void prezentare()
		{
	    cout<<"			Grafuri Orientate"<<endl;
	    cout<<"			COSTEA MARIA CRISTINA"<<endl;
	    cout<<"			Clasa a-XII-a B"<<endl;
	    unsigned comanda,ok=1;
	    stergere();
	    meniu();

		}
int main()
	{
		prezentare();
		return 0;

	}
