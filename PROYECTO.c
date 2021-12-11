//Libreria utilizada
#include <stdio.h>

int main () {
	//Variables char que sirven para poner letras con tildes y diéresis
	char aa=160, ae=130, ai=161, ao=162, au=163; 
	char nn=164;
	char ii=168; 
	char aam=181, aem=144, aim=214, aom=224, aum=233;
	char aadm=142, aedm=211, aidm=216, aodm=153, audm=233; 
	char aad=132, aed=137, aid=139, aod=148, aud=129;
    //Variables enteras
	int con, pa, op;
//Estructura de repetición do-while
    do
    {
    	//Damos la bienvenida
    	system("cls");
        printf("\t\tConozcamos el mundo\n\n");
        printf("Aclaraci%cn: La informaci%cn est%c actualizada hasta el d%ca 09 de diciembre de 2021\n\n",ao,ao,aa,ai);
        printf("%cQu%c continente exploraremos?\n",ii,ae);
        //Presentamos las opciones y damos la posibilidad de escoger
        printf("1) %cfrica \n2) Am%crica \n3) Asia \n4) Europa \n5) Ocean%ca\n",aam,ae,ai);
        printf("El continente que quiero visitar es:");
        scanf("%i",&con);
        //Estructura de selección switch
        switch (con)
        {
        	case 1:
        		system("cls");
        		printf("\n%cfrica",aam);
	            printf("\nEscoja el pa%cs que desea conocer\n",ai);
	            printf("\n1) Angola");
	            printf("\n2) Argelia");
	            printf("\n3) Ben%cn",ai);
	            printf("\n4) Botsuana");
				printf("\n5) Burkina Faso");
				printf("\n6) Burundi");
				printf("\n7) Cabo Verde");
				printf("\n8) Camer%cn",au);
				printf("\n9) Chad");
				printf("\n10) Comoras");
				printf("\n11) Costa de Marfil");
				printf("\n12) Egipto");
				printf("\n13) Eritrea");
				printf("\n14) Etiop%ca",ai);
				printf("\n15) Gab%cn",ao);
				printf("\n16) Gambia");
				printf("\n17) Ghana");
				printf("\n18) Guinea");
				printf("\n19) Guinea-Bissau");
				printf("\n20) Guinea Ecuatorial");
				printf("\n21) Kenia");
				printf("\n22) Lesoto");
				printf("\n23) Liberia");
				printf("\n24) Libia");
				printf("\n25) Madagascar");
				printf("\n26) Malaui");
				printf("\n27) Mali o Mal%c",ai);
				printf("\n28) Marruecos");
				printf("\n29) Mauricio");
				printf("\n30) Mauritania");
				printf("\n31) Mozambique");
				printf("\n32) Namibia");
				printf("\n33) N%cger",ai);
				printf("\n34) Niger%ca",ai);
				printf("\n35) Rep%cblica Centroafricana",au);
				printf("\n36) Rep%cblica del Congo",au);
				printf("\n37) Rep%cblica Democr%ctica del Congo",au,aa);
				printf("\n38) Ruanda");
				printf("\n39) S%chara Occidental (No es un pa%cs)",aa,ai);
				printf("\n40) Santo Tom%c y Pr%cncipe",ae,ai);
				printf("\n41) Senegal");
				printf("\n42) Seychelles");
				printf("\n43) Sierra Leona");
				printf("\n44) Somalia");
				printf("\n45) Suazilandia");
				printf("\n46) Sud%cfrica",aa);
				printf("\n47) Sud%cn",aa);
				printf("\n48) Sud%cn del Sur",aa);
				printf("\n49) Tanzania");
				printf("\n50) Togo");
				printf("\n51) T%cnez",au);
				printf("\n52) Uganda");
				printf("\n53) Yibuti");
				printf("\n54) Zambia");
				printf("\n55) Zimbabue\n");
				printf("El pa%cs que deseo visitar es:",ai);
				scanf("%i",&pa);
                //Estructura de selección switch
				switch (pa)
				{
					case 1:
					system("cls");
	                printf("\nAngola");
	                printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Luanda");
	                printf("\nNombre oficial: Rep%cblica de Angola",au);
	                printf("\nLa moneda oficial es el Kwanza ");
	                printf("\nPoblaci%cn en 2020: 32,866,268",ao);
	                printf("\nIdioma oficial: Portugu%cs",ae);
	                printf("\nGentilicio: angole%co y angole%ca o angolano y angolana",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 2:
	                system("cls");
					printf("\nArgelia");
					printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Argel");
	                printf("\nNombre oficial: Rep%cblica Argelina Democr%ctica Y Popular",au,aa);
	                printf("\nLa moneda oficial es el Dinar");
	                printf("\nPoblaci%cn en 2020: 43,851,043",ao);
	                printf("\nIdioma oficial: %crabe cl%csico(%crabe culto)",aam,aa,aa);
	                printf("\nGentilicio: argelino y argelina");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 3:
	                system("cls");
	                printf("\nBen%cn",ai);
	                printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Porto Novo y Coton%c",au);
	                printf("\nNombre oficial: Rep%cblica de Ben%cn",au,ai);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Occidental",aam);
	                printf("\nPoblaci%cn en 2020: 12,123,198",ao);
	                printf("\nIdioma oficial: Franc%cs",ae);
	                printf("\nGentilicio: benin%cs y beninesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 4:
	                system("cls");
					printf("\nBotsuana");
	                printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Gaborone");
	                printf("\nNombre oficial: Rep%cblica de Botsuana",au);
	                printf("\nLa moneda oficial es el Pula");
	                printf("\nPoblaci%cn en 2020: 2,351,625",ao);
	                printf("\nIdioma oficial: Ingl%cs y setsuana",ae);
	                printf("\nGentilicio: botsuano y botsuana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 5:
	                system("cls");
				    printf("\nBurkina Faso");
	                printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Uagadug%c",au);
	                printf("\nNombre oficial: Burkina Faso");
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Occidental",aam);
	                printf("\nPoblaci%cn en 2020: 20,903,278",ao);
	                printf("\nIdioma oficial: Franc%cs",ae);
	                printf("\nGentilicio: burkin%cs",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 6:
				    system("cls");
			   	    printf("\nBurundi");
			   	    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Guitega");
	                printf("\nNombre oficial: Rep%cblica de Burundi",au);
	                printf("\nLa moneda oficial es el Franco de Burundi");
	                printf("\nPoblaci%cn en 2020: 11,890,781",ao);
	                printf("\nIdioma oficial: Franc%cs y Kirundi",ae);
	                printf("\nGentilicio: burund%cs y burundesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
			   	    break;
	                
			   	    case 7:
			   	    system("cls");
				    printf("\nCabo Verde");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Praia");
	                printf("\nNombre oficial: Rep%cblica de Cabo Verde",au);
	                printf("\nLa moneda oficial es el Escudo caboverdiano");
	                printf("\nPoblaci%cn en 2020: 555,988",ao);
	                printf("\nIdioma oficial: Portugu%cs",ae);
	                printf("\nGentilicio: caboverdiano y caboverdiana",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 8:
				    system("cls");
				    printf("\nCamer%cn",au);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Yaund%c",ae);
	                printf("\nNombre oficial: Rep%cblica de Camer%cn",au,au);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Central",aam);
	                printf("\nPoblaci%cn en 2020: 26,545,864",ao);
	                printf("\nIdioma oficial: Franc%cs e ingl%cs",ae,ae);
	                printf("\nGentilicio: camerun%cs y camerunesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 9:
				    system("cls");
				    printf("\nChad");
	                printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Yamena");
	                printf("\nNombre oficial: Rep%cblica de Chad",au);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Central",aam);
	                printf("\nPoblaci%cn en 2020: 16,425,859",ao);
	                printf("\nIdioma oficial: Franc%cs y %crabe",ae,aa);
	                printf("\nGentilicio: chadiano y chadiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 10:
				    system("cls");
				    printf("\nComoras");
	                printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Moroni");
	                printf("\nNombre oficial: Uni%cn de las Comoras",ao);
	                printf("\nLa moneda oficial es el Franco comorano");
	                printf("\nPoblaci%cn en 2020: 869,595",ao);
	                printf("\nIdioma oficial: %crabe, suajili y franc%cs",aam,ae);
	                printf("\nGentilicio: comorense",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 11:
				    system("cls");
				    printf("\nCosta de Marfil");
	                printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Yamusukro");
	                printf("\nNombre oficial: Rep%cblica de Costa de Marfil",au);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Occidental",aam);
	                printf("\nPoblaci%cn en 2020: 26,378,275",ao);
	                printf("\nIdioma oficial: Franc%cs",ae);
	                printf("\nGentilicio: marfile%co y marfile%ca",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 12:
				    system("cls");
				    printf("\nEgipto");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: El Cairo");
	                printf("\nNombre oficial: Rep%cblica %crabe de Egipto",aam);
	                printf("\nLa moneda oficial es la Libra egipcia");
	                printf("\nPoblaci%cn en 2020: 102,334,403",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: egipcio y egipcia");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 13:
				    system("cls");
				    printf("\nEritrea");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Asmara");
	                printf("\nNombre oficial: Estado de Eritrea");
	                printf("\nLa moneda oficial es el Nakfa");
	                printf("\nPoblaci%cn en 2020: 3,546,427",ao);
	                printf("\nIdioma oficial: Ninguno a nivel oficial. El %crabe y el tigri%ca son los idiomas m%cs hablados",aa,nn,aa);
	                printf("\nGentilicio: eritreo y eritrea",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 14:
				    system("cls");
				    printf("\nEtiop%ca",ai);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Ad%cs Abebe",ai);
	                printf("\nNombre oficial: Rep%cblica Democr%ctica Federal de Etiop%ca",au,aa,ai);
	                printf("\nLa moneda oficial es el Birr et%cope",ai);
	                printf("\nPoblaci%cn en 2020: 114,963,583",ao);
	                printf("\nIdioma oficial: Am%crico",aa);
	                printf("\nGentilicio: et%cope",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 15:
	                system("cls");
				    printf("\nGab%cn",ao);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Libreville");
	                printf("\nNombre oficial: Rep%cblica Gabonesa",au);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Central",aam);
	                printf("\nPoblaci%cn en 2020: 2,225,728",ao);
	                printf("\nIdioma oficial: Franc%cs",ae);
	                printf("\nGentilicio: gabon%cs y gabonesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 16:
				    system("cls");
				    printf("\nGambia");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Banjul");
	                printf("\nNombre oficial: Rep%cblica del Gambia",au);
	                printf("\nLa moneda oficial es el Dalasi");
	                printf("\nPoblaci%cn en 2020: 2,416,664",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: gambiano y gambiana",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 17:
	                system("cls");
				    printf("\nGhana");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Acra");
	                printf("\nNombre oficial: Rep%cblica de Ghana",au);
	                printf("\nLa moneda oficial es el Cedi");
	                printf("\nPoblaci%cn en 2020: 31,072,945",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: ghan%cs y ghanesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 18:
	                system("cls");
				    printf("\nGuinea");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Conakri");
	                printf("\nNombre oficial: Rep%cblica de Guinea",au);
	                printf("\nLa moneda oficial es el Franco guineano");
	                printf("\nPoblaci%cn en 2020: 13,132,792",ao);
	                printf("\nIdioma oficial: Franc%cs",ae);
	                printf("\nGentilicio: guineano y guineana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 19:
				    system("cls");
				    printf("\nGuinea-Bissau");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Bissau");
	                printf("\nNombre oficial: Rep%cblica de Guinea-Bissau",au);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Occidental",aam);
	                printf("\nPoblaci%cn en 2020: 1,967,998",ao);
	                printf("\nIdioma oficial: Portugu%cs",ae);
	                printf("\nGentilicio: guineano y guineana",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 20:
	                system("cls");
				    printf("\nGuinea Ecuatorial");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Malabo");
	                printf("\nNombre oficial: Rep%cblica de Guinea Ecuatorial",au);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Central",aam);
	                printf("\nPoblaci%cn en 2020: 1,402,985",ao);
	                printf("\nIdioma oficial: Espa%col, franc%cs y portugu%cs",nn,ae,ae);
	                printf("\nGentilicio: ecuatoguineano y ecuatoguineana",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
				    case 21:
				    system("cls");
				    printf("\nKenia");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Nairobi");
	                printf("\nNombre oficial: Rep%cblica de Kenia",au);
	                printf("\nLa moneda oficial es el Chel%cn keniano",ai);
	                printf("\nPoblaci%cn en 2020: 53,771,300",ao);
	                printf("\nIdioma oficial: Suajili e ingl%cs",ae);
	                printf("\nGentilicio: keniano y keniana o keniata");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 22:
	                system("cls");
				    printf("\nLesoto");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Maseru");
	                printf("\nNombre oficial: Reino de Lesoto");
	                printf("\nLa moneda oficial es el Loti");
	                printf("\nPoblaci%cn en 2020: 2,142,252",ao);
	                printf("\nIdioma oficial: Sesotho e ingl%cs",ae);
	                printf("\nGentilicio: lesotense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 23:
				    system("cls");
				    printf("\nLiberia");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Monrovia");
	                printf("\nNombre oficial: Rep%cblica de Liberia",au);
	                printf("\nLa moneda oficial es el D%clar liberiano",ao);
	                printf("\nPoblaci%cn en 2020: 5,057,677",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: liberiano y liberiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 24:
				    system("cls");
				    printf("\nLibia");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Tr%cpoli",ai);
	                printf("\nNombre oficial: Estado de Libia");
	                printf("\nLa moneda oficial es el Dinar libio");
	                printf("\nPoblaci%cn en 2020: 6,871,287",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: libio y libia");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 25:
				    system("cls");
				    printf("\nMadagascar");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Antananarivo");
	                printf("\nNombre oficial: Rep%cblica de Madagascar",au);
	                printf("\nLa moneda oficial es el Ariary malgache");
	                printf("\nPoblaci%cn en 2020: 27,691,019",ao);
	                printf("\nIdioma oficial: Franc%cs y malgache",ae);
	                printf("\nGentilicio: malgache");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 26:
	                system("cls");
				    printf("\nMalaui");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Lilong%ce",aud);
	                printf("\nNombre oficial: Rep%cblica de Malaui",au);
	                printf("\nLa moneda oficial es el Kwacha malau%c",ai);
	                printf("\nPoblaci%cn en 2020: 19,129,955",ao);
	                printf("\nIdioma oficial: Ingl%cs y chichewa",ae);
	                printf("\nGentilicio: malau%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 27:
				    system("cls");
				    printf("\nMali o Mal%c",ai);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Bamako");
	                printf("\nNombre oficial: Rep%cblica de Mal%c",au,ai);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Occidental",aam);
	                printf("\nPoblaci%cn en 2020: 20,250,834",ao);
	                printf("\nIdioma oficial: Franc%cs",ae);
	                printf("\nGentilicio: maliense o mal%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 28:
				    system("cls");
				    printf("\nMarruecos");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Rabat");
	                printf("\nNombre oficial: Reino de Marruecos");
	                printf("\nLa moneda oficial es el Dirham marroqu%c",ai);
	                printf("\nPoblaci%cn en 2020: 36,910,558",ao);
	                printf("\nIdioma oficial: %crabe cl%csico y bereber",aam,aa);
	                printf("\nGentilicio: marroqu%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 29:
	                system("cls");
				    printf("\nMauricio");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Port-Louis");
	                printf("\nNombre oficial: Rep%cblica de Mauricio",au);
	                printf("\nLa moneda oficial es el Rupia de Mauricio",aam);
	                printf("\nPoblaci%cn en 2020: 1,271,767",ao);
	                printf("\nIdioma oficial: Ingl%cs, franc%cs y criollo mauriciano",ae,ae);
	                printf("\nGentilicio: mauriciano y mauriciana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 30:
	                system("cls");
				    printf("\nMauritania");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Nuakchot");
	                printf("\nNombre oficial: Rep%cblica Isl%cmica de Mauritania",au,aa);
	                printf("\nLa moneda oficial es el Uguiya");
	                printf("\nPoblaci%cn en 2020: 4,649,660",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: mauritano y mauritana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
	                case 31:
	                system("cls");
				    printf("\nMozambique");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Maputo");
	                printf("\nNombre oficial: Rep%cblica de Mozambique",au);
	                printf("\nLa moneda oficial es el Metical mozambique%co",nn);
	                printf("\nPoblaci%cn en 2020: 31,255,435",ao);
	                printf("\nIdioma oficial: Portugu%cs",ae);
	                printf("\nGentilicio: mozambique%co y mozambique%ca",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 32:
	                system("cls");
				    printf("\nNamibia");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Windhoek");
	                printf("\nNombre oficial: Rep%cblica de Namibia",au);
	                printf("\nLa moneda oficial es el D%clar namibio",ao);
	                printf("\nPoblaci%cn en 2020: 2,540,916",ao);
	                printf("\nIdioma oficial: Afrik%cans y alem%cn",aa,aa);
	                printf("\nGentilicio: namibio y namibia");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 33:
	                system("cls");
				    printf("\nN%cger",ai);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Niamey");
	                printf("\nNombre oficial: Rep%cblica del N%cger ",au,ai);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Occidental",aam);
	                printf("\nPoblaci%cn en 2020: 24,206,636",ao);
	                printf("\nIdioma oficial: Franc%cs",ae);
	                printf("\nGentilicio: nigerino y nigerina");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 34:
	                system("cls");
				    printf("\nNiger%ca",ai);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Abuya");
	                printf("\nNombre oficial: Rep%cblica Federal de Niger%ca",au,ai);
	                printf("\nLa moneda oficial es el Naira");
	                printf("\nPoblaci%cn en 2020: 206,139,587",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: nigeriano y nigeriana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 35:
	                system("cls");
				    printf("\nRep%cblica Centroafricana",au);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Bangui");
	                printf("\nNombre oficial: Rep%cblica Centroafricana",au);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Central",aam);
	                printf("\nPoblaci%cn en 2020: 4,829,764",ao);
	                printf("\nIdioma oficial: Franc%cs y sango",ae);
	                printf("\nGentilicio: centroafricano y centroafricana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
					break;
	                
					case 36:
					system("cls");
					printf("\nRep%cblica del Congo",au);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Brazzaville");
	                printf("\nNombre oficial: Rep%cblica del Congo",au);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Central",aam);
	                printf("\nPoblaci%cn en 2020: 5,518,092",ao);
	                printf("\nIdioma oficial: Franc%cs, lingala y kituba",ae);
	                printf("\nGentilicio: congole%co y congole%ca",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
					break;
	                
					case 37:
					system("cls");
					printf("\nRep%cblica Democr%ctica del Congo",au,aa);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Kinsasa");
	                printf("\nNombre oficial: Rep%cblica Democr%ctica del Congo",au,aa);
	                printf("\nLa moneda oficial es el Franco congole%co",nn);
	                printf("\nPoblaci%cn en 2020: 89,561,404",ao);
	                printf("\nIdioma oficial: Franc%cs",ae);
	                printf("\nGentilicio: congole%co y congole%ca",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
					break;
	                
					case 38:
					system("cls");
					printf("\nRuanda");
					printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Kigali");
	                printf("\nNombre oficial: Rep%cblica de Ruanda",au);
	                printf("\nLa moneda oficial es el Franco ruand%cs",ae);
	                printf("\nPoblaci%cn en 2020: 12,952,209",ao);
	                printf("\nIdioma oficial: Kinyanwarda, ingl%cs y franc%cs",ae,ae);
	                printf("\nGentilicio: ruand%cs y ruandesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
					break;
	                
					case 39:
					system("cls");
				    printf("\nS%chara Occidental (No es un pa%cs)",aa,ai);
				    printf("\nTerritorio en disputa");
				    printf("\nNombre que se pretende poner: Rep%cblica %crabe Saharaui Democr%ctica",au,aam,aa);
	                printf("\nPoblaci%cn en 2020: 597,330",ao);
	                printf("\nGentilicio: saharaui");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 40:
				    system("cls");
				    printf("\nSanto Tom%c y Pr%cncipe",ae,ai);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Santo Tom%c",ae);
	                printf("\nNombre oficial: Rep%cblica Democr%ctica de Santo Tom%c y Pr%cncipe",au,aa,ae,ai);
	                printf("\nLa moneda oficial es el Dobra");
	                printf("\nPoblaci%cn en 2020: 219,161",ao);
	                printf("\nIdioma oficial: Portugu%cs",ae);
	                printf("\nGentilicio: santotomense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 41:
	                system("cls");
				    printf("\nSenegal");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Dakar");
	                printf("\nNombre oficial: Rep%cblica de Senegal",au);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Occidental",aam);
	                printf("\nPoblaci%cn en 2020: 16,743,930",ao);
	                printf("\nIdioma oficial: Franc%cs",ae);
	                printf("\nGentilicio: senegal%cs y senegalesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 42:
	                system("cls");
				    printf("\nSeychelles");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Victoria");
	                printf("\nNombre oficial: Rep%cblica de las Seychelles",au);
	                printf("\nLa moneda oficial es el Rupia de Seychelles");
	                printf("\nPoblaci%cn en 2020: 98,340",ao);
	                printf("\nIdioma oficial: Ingl%cs, franc%cs y criollo seychelense",ae,ae);
	                printf("\nGentilicio: seychellense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 43:
	                system("cls");
				    printf("\nSierra Leona");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Freetown");
	                printf("\nNombre oficial: Rep%cblica de Sierra Leona",au);
	                printf("\nLa moneda oficial es el Leone");
	                printf("\nPoblaci%cn en 2020: 7,976,985",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: sierraleon%cs y sierraleonesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 44:
				    system("cls");
				    printf("\nSomalia");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Mogadiscio");
	                printf("\nNombre oficial: Rep%cblica Federal de Somalia",au);
	                printf("\nLa moneda oficial es el Chel%cn somal%c",ai,ai);
	                printf("\nPoblaci%cn en 2020: 15,893,219",ao);
	                printf("\nIdioma oficial: Somal%c",ai);
	                printf("\nGentilicio: somal%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 45:
				    system("cls");
				    printf("\nSuazilandia");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Babane y Lobamba");
	                printf("\nNombre oficial: Reino de Suazilandia");
	                printf("\nLa moneda oficial es el Lilangeni");
	                printf("\nPoblaci%cn en 2020: 1,160,164",ao);
	                printf("\nIdioma oficial: Suazi e ingl%cs",ae);
	                printf("\nGentilicio: suazi");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 46:
	                system("cls");
				    printf("\nSud%cfrica",aa);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapitales: \nPretoria: capital administrativa \nBloemfontein: capital judicial \nCiudad del Cabo: capital legislativa");
	                printf("\nNombre oficial: Rep%cblica de Sud%cfrica",au,aa);
	                printf("\nLa moneda oficial es el Rand sudafricano");
	                printf("\nPoblaci%cn en 2020: 59,308,690",ao);
	                printf("\nIdioma oficial: Ingl%cs y afrik%cans",ae,aa);
	                printf("\nGentilicio: sudafricano y sudafricana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 47:
	                system("cls");
				    printf("\nSud%cn",aa);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Jartum");
	                printf("\nNombre oficial: Rep%cblica del Sud%cn",au,aa);
	                printf("\nLa moneda oficial es la Libra sudanesa");
	                printf("\nPoblaci%cn en 2020: 43,849,269",ao);
	                printf("\nIdioma oficial: Ingl%cs y %crabe",ae,aa);
	                printf("\nGentilicio: sudan%cs y sudanesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 48:
				    system("cls");
				    printf("\nSud%cn del Sur",aa);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Yuba");
	                printf("\nNombre oficial: Rep%cblica de Sud%cn del Sur",au,aa);
	                printf("\nLa moneda oficial es la Libra sursudanesa");
	                printf("\nPoblaci%cn en 2020: 11,193,729",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: sursudan%cs y sursudanesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 49:
	                system("cls");
				    printf("\nTanzania");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Dodoma");
	                printf("\nNombre oficial: Rep%cblica Unida de Tanzania",au);
	                printf("\nLa moneda oficial es el Chel%cn tanzano",ai);
	                printf("\nPoblaci%cn en 2020: 59,734,213",ao);
	                printf("\nIdioma oficial: Suajili e ingl%cs",ae);
	                printf("\nGentilicio: tanzano y tanzana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 50:
				    system("cls");
				    printf("\nTogo");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Lom%c",ae);
	                printf("\nNombre oficial: Rep%cblica Togolesa",au);
	                printf("\nLa moneda oficial es el Franco CFA de %cfrica Occidental",aam);
	                printf("\nPoblaci%cn en 2020: 8,278,737",ao);
	                printf("\nIdioma oficial: Franc%cs",ae);
	                printf("\nGentilicio: togol%cs y togolesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
				    break;
	                
				    case 51:
				    system("cls");
				    printf("\nT%cnez",au);
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: T%cnez",au);
	                printf("\nNombre oficial: Rep%cblica Tunecina",au);
	                printf("\nLa moneda oficial es el Dinar Tunecino");
	                printf("\nPoblaci%cn en 2020: 11,818,618",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: tunecino y tunecina");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 52:
	                system("cls");
				    printf("\nUganda");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Kampala");
	                printf("\nNombre oficial: Rep%cblica de Uganda",au);
	                printf("\nLa moneda oficial es el Chel%cn ugand%cs",ai,ae);
	                printf("\nPoblaci%cn en 2020: 45,741,000",ao);
	                printf("\nIdioma oficial: Ingl%cs y suajili",ae);
	                printf("\nGentilicio: ugand%cs y ugandesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 53:
	                system("cls");
				    printf("\nYibuti");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Yibuti");
	                printf("\nNombre oficial: Rep%cblica de Yibuti",au);
	                printf("\nLa moneda oficial es el Franco yibutiano");
	                printf("\nPoblaci%cn en 2020: 988,002",ao);
	                printf("\nIdioma oficial: %crabe y franc%cs",aam,ae);
	                printf("\nGentilicio: yibutiano y yibutiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 54:
	                system("cls");
				    printf("\nZambia");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Lusaka");
	                printf("\nNombre oficial: Rep%cblica de Zambia",au);
	                printf("\nLa moneda oficial es el Kwacha zambiano");
	                printf("\nPoblaci%cn en 2020: 18,383,956",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: zambiano y zambiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 55:
	                system("cls");
				    printf("\nZimbabue");
				    printf("\nPa%cs en %cfrica",ai,aam);
	                printf("\nCapital: Harare");
	                printf("\nNombre oficial: Rep%cblica de Zimbabue",au);
	                printf("\nLa moneda oficial es el D%clar estadounidense",ao);
	                printf("\nPoblaci%cn en 2020: 14,862,927",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: zimbabuense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                //Lo que se debe hacer en caso de que se ingrese un número que no esté en la lista
	                default:
	                 system("cls");
				     printf("\tOpci%cn inv%clida.\n",ao,aa);
				     printf("%cDesea elegir otra opci%cn?\n",ii,ao);
				     printf("1) S%c \n2) No\n",ai);
				     scanf("%i",&op);
				}
				break;

	        case 2:
	        	system("cls");
	        	printf("\nAm%crica",ae);
	            printf("\nEscoja el pa%cs que desea conocer\n",ai);
	            printf("\n1) Antigua y Barbuda");
	            printf("\n2) Argentina");
	            printf("\n3) Bahamas");
	            printf("\n4) Barbados");
	            printf("\n5) Belice");
	            printf("\n6) Bolivia");
	            printf("\n7) Brasil");
	            printf("\n8) Canad%c",aa);
	            printf("\n9) Chile");
	            printf("\n10) Colombia");
	            printf("\n11) Costa Rica");
	            printf("\n12) Cuba");
	            printf("\n13) Dominica");
	            printf("\n14) Ecuador");
	            printf("\n15) El Salvador");
	            printf("\n16) Estados Unidos");
	            printf("\n17) Granada");
	            printf("\n18) Guatemala");
	            printf("\n19) Guyana");
	            printf("\n20) Hait%c",ai);
	            printf("\n21) Honduras");
	            printf("\n22) Jamaica");
	            printf("\n23) M%cxico",ae);
	            printf("\n24) Nicaragua");
	            printf("\n25) Panam%c",aa);
	            printf("\n26) Paraguay");
	            printf("\n27) Per%c",au);
	            printf("\n28) Rep%cblica Dominicana",au);
	            printf("\n29) San Crist%cbal y Nieves",ao);
	            printf("\n30) San Vicente y las Granadinas");
	            printf("\n31) Santa Luc%ca",ai);
	            printf("\n32) Surinam");
	            printf("\n33) Trinidad y Tobago");
	            printf("\n34) Uruguay");
	            printf("\n35) Venezuela\n");
	            printf("El pa%cs que deseo visitar es:",ai);
				scanf("%i",&pa);
				//Estructura de selección switch
				switch (pa)
				{   
                    case 1:
                    system("cls");
	                printf("\nAntigua y Barbuda");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Saint John's");
	                printf("\nNombre oficial: Antigua y Barbuda");
	                printf("\nLa moneda oficial es el D%clar del Caribe Oriental",ao);
	                printf("\nPoblaci%cn en 2020: 97,928",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: antiguano y antiguana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
					case 2:
					system("cls");
	                printf("\nArgentina");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Buenos Aires");
	                printf("\nNombre oficial: Rep%cblica Argentina",au);
	                printf("\nLa moneda oficial es el Peso ");
	                printf("\nPoblaci%cn en 2020: 45,195,777",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: argentino y argentina");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 3:
	                system("cls");
	                printf("\nBahamas");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Nas%cu",aa);
	                printf("\nNombre oficial: Mancomunidad de las Bahamas");
	                printf("\nLa moneda oficial es el D%clar bahame%co",ao,nn);
	                printf("\nPoblaci%cn en 2020: 393,248",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: bahame%co y bahame%ca",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 4:
	                system("cls");
	                printf("\nBarbados");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Bridgetown");
	                printf("\nNombre oficial: Barbados");
	                printf("\nLa moneda oficial es el D%clar de Barbados",ao);
	                printf("\nPoblaci%cn en 2020: 287,371",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: barbadense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 5:
	                system("cls");
	                printf("\nBelice");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Belmop%cn",aa);
	                printf("\nNombre oficial: Belice");
	                printf("\nLa moneda oficial es el D%clar belice%co",ao,nn);
	                printf("\nPoblaci%cn en 2020: 397,621",ao);
	                printf("\nIdioma oficial: Ingl%cs (oficial). Tambi%cn se habla espa%col",ae,ae,nn);
	                printf("\nGentilicio: belice%co y belice%ca",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
					case 6:
					system("cls");
					printf("\nBolivia");
					printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Sucre. La Paz es la sede del gobierno.");
	                printf("\nNombre oficial: Estado Plurinacional de Bolivia");
	                printf("\nLa moneda oficial es el Boliviano ");
	                printf("\nPoblaci%cn en 2020: 11,673,029",ao);
	                printf("\nIdioma oficial: Espa%col (idioma m%cs hablado), quechua, aimara y guaran%c. M%cs otras 34 lenguas ind%cgenas oficiales)",nn,aa,ai,aa,ai);
	                printf("\nGentilicio: boliviano y boliviana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;

	                case 7:
	                system("cls");
	                printf("\nBrasil");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Brasilia");
	                printf("\nNombre oficial: Rep%cblica Federativa de Brasil",au);
	                printf("\nLa moneda oficial es el Real brasile%co",nn);
	                printf("\nPoblaci%cn en 2020: 212,559,409",ao);
	                printf("\nIdioma oficial: Portugu%cs",ae);
	                printf("\nGentilicio: brasile%co y brasile%ca o brasilero y brasilera",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 8:
	                system("cls");
	                printf("\nCanad%c",aa);
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Ottawa");
	                printf("\nNombre oficial: Canad%c",aa);
	                printf("\nLa moneda oficial es el D%clar canadiense",ao);
	                printf("\nPoblaci%cn en 2020: 37,742,157",ao);
	                printf("\nIdioma oficial: Ingl%cs y franc%cs",ae,ae);
	                printf("\nGentilicio: canadiense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 9:
	                system("cls");
	                printf("\nChile");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Santiago de Chile");
	                printf("\nNombre oficial: Rep%cblica de Chile",au);
	                printf("\nLa moneda oficial es el Peso chileno");
	                printf("\nPoblaci%cn en 2020: 19,116,209",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: chileno y chilena");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 10:
	                system("cls");
	                printf("\nColombia");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Bogot%c",aa);
	                printf("\nNombre oficial: Rep%cblica de Colombia",au);
	                printf("\nLa moneda oficial es el Peso colombiano");
	                printf("\nPoblaci%cn en 2020: 50,882,884",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: colombiano y colombiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 11:
	                system("cls");
	                printf("\nCosta Rica");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: San Jos%c",ae);
	                printf("\nNombre oficial: Rep%cblica de Costa Rica",au);
	                printf("\nLa moneda oficial es el Col%cn costarricense",ao);
	                printf("\nPoblaci%cn en 2020: 5,094,114",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: costarricense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 12:
	                system("cls");
	                printf("\nCuba");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: La Habana");
	                printf("\nNombre oficial: Rep%cblica de Cuba",au);
	                printf("\nLa moneda oficial es el Peso cubano");
	                printf("\nPoblaci%cn en 2020: 11,326,616",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: argentino y argentina");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;

	                case 13:
	                system("cls");
	                printf("\nDominica");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Roseau");
	                printf("\nNombre oficial: Mancomunidad de Dominica");
	                printf("\nLa moneda oficial es el D%clar del Caribe Oriental",ao);
	                printf("\nPoblaci%cn en 2020: 71,991",ao);
	                printf("\nIdioma oficial: Ingl%cs (oficial). Tambi%cn se habla franc%cs.)",ae,ae,ae);
	                printf("\nGentilicio: dominiqu%cs y dominiquesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 14:
	                system("cls");
	                printf("\nEcuador");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Quito");
	                printf("\nNombre oficial: Rep%cblica del Ecuador",au);
	                printf("\nLa moneda oficial es el D%clar estadounidense",ao);
	                printf("\nPoblaci%cn en 2020: 17,643,060",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: ecuatoriano y ecuatoriana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 15:
	                system("cls");
	                printf("\nEl Salvador");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: San Salvador");
	                printf("\nNombre oficial: Rep%cblica de El Salvador",au);
	                printf("\nLa moneda oficial es el D%clar estadounidense",ao);
	                printf("\nPoblaci%cn en 2020: 6,486,201",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: salvadore%co y salvadore%ca",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 16:
	                system("cls");
	                printf("\nEstados Unidos");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Washington D.C.");
	                printf("\nNombre oficial: Estados Unidos de Am%crica",ae);
	                printf("\nLa moneda oficial es el D%clar estadounidense",ao);
	                printf("\nPoblaci%cn en 2020: 331,002,647",ao);
	                printf("\nIdioma oficial: Ninguno a nivel federal");
	                printf("\nGentilicio: estadounidense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 17:
	                system("cls");
	                printf("\nGranada");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Saint George");
	                printf("\nNombre oficial: Granada");
	                printf("\nLa moneda oficial es el D%clar del Caribe Oriental",ao);
	                printf("\nPoblaci%cn en 2020: 112,519",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: granadino y granadina");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;

	                case 18:
	                system("cls");
	                printf("\nGuatemala");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Ciudad de Guatemala");
	                printf("\nNombre oficial: Rep%cblica de Guatemala",au);
	                printf("\nLa moneda oficial es el Quetzal guatemalteco");
	                printf("\nPoblaci%cn en 2020: 17,915,,567",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: guatemalteco y guatemalteca");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;

	                case 19:
	                system("cls");
	                printf("\nGuyana");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Georgetown");
	                printf("\nNombre oficial: Rep%cblica Cooperativa de Guyana",au);
	                printf("\nLa moneda oficial es el D%clar guyan%cs",ao,ae);
	                printf("\nPoblaci%cn en 2020: 786,559",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: guyan%cs y guyanesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 20:
	                system("cls");
	                printf("\nHait%c",ai);
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Puerto Pr%cncipe",ai);
	                printf("\nNombre oficial: Rep%cblica de Hait%c",au,ai);
	                printf("\nLa moneda oficial es el Gourde haitiano");
	                printf("\nPoblaci%cn en 2020: 11,402,533",ao);
	                printf("\nIdioma oficial: Franc%cs y criollo haitiano",ae);
	                printf("\nGentilicio: haitiano y haitiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 21:
	                system("cls");
	                printf("\nHonduras");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Tegucigalpa y Comayag%cela (A nivel constitucional). Tegucigalpa (A nivel coloquial)",aud);
	                printf("\nNombre oficial: Rep%cblica de Honduras",au);
	                printf("\nLa moneda oficial es el Lempira hondure%co",nn);
	                printf("\nPoblaci%cn en 2020: 9,904,608",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: hondure%co y hondure%ca",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;

					case 22:
					system("cls");
					printf("\nJamaica");
					printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Kingston");
	                printf("\nNombre oficial: Jamaica");
	                printf("\nLa moneda oficial es el D%clar jamaiquino",ao);
	                printf("\nPoblaci%cn en 2020: 2,961,161",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: jamaicano y jamaicana o jamaiquino y jamaiquina");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;

	                case 23:
	                system("cls");
	                printf("\nM%cxico",ae);
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Ciudad de M%cxico",ae);
	                printf("\nNombre oficial: Estados Unidos Mexicanos",au);
	                printf("\nLa moneda oficial es el Peso mexicano");
	                printf("\nPoblaci%cn en 2020: 128,932,753",ao);
	                printf("\nIdioma oficial: Espa%col (y 67 lenguas ind%cgenas)",nn,ai);
	                printf("\nGentilicio: mexicano y mexicana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;

	                case 24:
	                system("cls");
	                printf("\nNicaragua");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Managua");
	                printf("\nNombre oficial: Rep%cblica de Nicaragua",au);
	                printf("\nLa moneda oficial es la C%crdoba nicarag%cense",ao,aud);
	                printf("\nPoblaci%cn en 2020: 6,624,554",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: nicarag%cense",aud);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 25:
	                system("cls");
	                printf("\nPanam%c",aa);
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Panam%c",aa);
	                printf("\nNombre oficial: Rep%cblica de Panam%c",au,aa);
	                printf("\nLa moneda oficial es el Balboa paname%co",nn);
	                printf("\nPoblaci%cn en 2020: 4,314,768",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: paname%co y paname%ca",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 26:
	                system("cls");
	                printf("\nParaguay");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Asunci%cn",ao);
	                printf("\nNombre oficial: Rep%cblica del Paraguay",au);
	                printf("\nLa moneda oficial es el Guaran%c",ai);
	                printf("\nPoblaci%cn en 2020: 7,132,530",ao);
	                printf("\nIdioma oficial: Espa%col y guaran%c",nn,ai);
	                printf("\nGentilicio: paraguayo y paraguaya");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 27:
	                system("cls");
	                printf("\nPer%c",au);
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Lima");
	                printf("\nNombre oficial: Rep%cblica del Per%c",au,au);
	                printf("\nLa moneda oficial es el Nuevo sol");
	                printf("\nPoblaci%cn en 2020: 32,971,846",ao);
	                printf("\nIdioma oficial: Espa%col(m%cs hablado), quechua, aimara y otras lenguas originarias.",nn,aa);
	                printf("\nGentilicio: peruano y peruana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;

	                case 28:
	                system("cls");
	                printf("\nRep%cblica Dominicana",au);
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Santo Domingo");
	                printf("\nNombre oficial: Rep%cblica Dominicana",au);
	                printf("\nLa moneda oficial es el Peso dominicano");
	                printf("\nPoblaci%cn en 2020: 10,847,904",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: dominicano y dominicana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 29:
	                system("cls");
	                printf("\nSan Crist%cbal y Nieves",ao);
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Basseterre");
	                printf("\nNombre oficial: Federaci%cn de San Crist%cbal y Nieves",ao,ao);
	                printf("\nLa moneda oficial es el D%clar del caribe Oriental",ao);
	                printf("\nPoblaci%cn en 2020: 53,192",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: sancristobale%co y sancristobale%ca",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 30:
	                system("cls");
	                printf("\nSan Vicente y las Granadinas");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Kingstown");
	                printf("\nNombre oficial: San Vicente y las Granadinas");
	                printf("\nLa moneda oficial es el D%clar del Caribe Oriental",ao);
	                printf("\nPoblaci%cn en 2020: 110,947",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: sanvicentino y sanvicentina");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 31:
	                system("cls");
	                printf("\nSanta Luc%ca",ai);
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Castries");
	                printf("\nNombre oficial: Santa Luc%ca",ai);
	                printf("\nLa moneda oficial es el D%clar del Caribe Oriental",ao);
	                printf("\nPoblaci%cn en 2020: 183,629",ao);
	                printf("\nIdioma oficial: Ingl%cs(oficial)",ae);
	                printf("\nGentilicio: santalucense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 32:
	                system("cls");
	                printf("\nSurinam");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Paramaribo");
	                printf("\nNombre oficial: Rep%cblica de Surinam",au);
	                printf("\nLa moneda oficial es el D%clar Surinam%cs",ao,ae);
	                printf("\nPoblaci%cn en 2020: 586,634",ao);
	                printf("\nIdioma oficial: Neerland%cs",ae);
	                printf("\nGentilicio: surinam%cs y surinamesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 33:
	                system("cls");
	                printf("\nTrinidad y Tobago");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Puerto España");
	                printf("\nNombre oficial: Rep%cblica de Trinidad y Tobago",au);
	                printf("\nLa moneda oficial es el D%clar trinitense",ao);
	                printf("\nPoblaci%cn en 2020: 1,399,491",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: trinitense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 34:
	                system("cls");
	                printf("\nUruguay");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Montevideo");
	                printf("\nNombre oficial: Rep%cblica Oriental del Uruguay",au);
	                printf("\nLa moneda oficial es el Peso uruguayo");
	                printf("\nPoblaci%cn en 2020: 3,473,727",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: uruguayo y uruguaya");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                
	                case 35:
	                system("cls");
	                printf("\nVenezuela");
	                printf("\nPa%cs en Am%crica",ai,ae);
	                printf("\nCapital: Caracas");
	                printf("\nNombre oficial: Rep%cblica Bolivariana de Venezuela",au);
	                printf("\nLa moneda oficial es el Bol%cvar fuerte",ai);
	                printf("\nPoblaci%cn en 2020: 28,435,943",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: venezolano y venezolana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
	                break;
	                //Lo que se debe hacer en caso de que se ingrese un número que no esté en la lista
	                default:
	                system("cls");
				    printf("\tOpci%cn inv%clida.\n",ao,aa);
				    printf("%cDesea elegir otra opci%cn?\n",ii,ao);
				    printf("1) S%c \n2) No\n",ai);
				    scanf("%i",&op);
				}
				break;
				
			case 3:
				system("cls");
				printf("\nAsia");
			    printf("\nEscoja el pa%cs que desea conocer\n",ai);
			    printf("\n1) Afganist%cn",aa);
			    printf("\n2) Arabia Saudita");
			    printf("\n3) Armenia");
			    printf("\n4) Azerbaiy%cn",aa);
			    printf("\n5) Banglad%cs",ae);
			    printf("\n6) Bahr%cin",ae);
			    printf("\n7) Birmania/Myanmar");
			    printf("\n8) Brun%ci",ae);
			    printf("\n9) But%cn",aa);
			    printf("\n10) Camboya");
			    printf("\n11) China");
			    printf("\n12) Chipre");
			    printf("\n13) Corea del Norte");
			    printf("\n14) Corea del Sur");
			    printf("\n15) Emiratos %crabes Unidos",aam);
			    printf("\n16) Filipinas");
			    printf("\n17) Georgia");
			    printf("\n18) Hong Kong");
			    printf("\n19) India");
			    printf("\n20) Indonesia");
			    printf("\n21) Irak o Iraq");
			    printf("\n22) Ir%cn",aa);
			    printf("\n23) Israel");
			    printf("\n24) Jap%cn",ao);
			    printf("\n25) Jordania");
			    printf("\n26) Kazajist%cn",aa);
			    printf("\n27) Kirguist%cn",aa);
			    printf("\n28) Kuwait");
			    printf("\n29) Laos");
			    printf("\n30) L%cbano",ai);
			    printf("\n31) Macao");
			    printf("\n32) Malasia");
			    printf("\n33) Maldivas");
			    printf("\n34) Mongolia");
			    printf("\n35) Nepal");
			    printf("\n36) Om%cn",aa);
			    printf("\n37) Pakist%cn",aa);
			    printf("\n38) Palestina");
			    printf("\n39) Qatar");
			    printf("\n40) Rusia");
			    printf("\n41) Singapur");
			    printf("\n42) Siria");
			    printf("\n43) Sri Lanka");
			    printf("\n44) Tayikist%cn",aa);
			    printf("\n45) Tailandia");
			    printf("\n46) Taiw%cn",aa);
			    printf("\n47) Timor Oriental");
			    printf("\n48) Turkmenist%cn",aa);
			    printf("\n49) Turqu%ca",ai);
			    printf("\n50) Uzbekist%cn",aa);
			    printf("\n51) Vietnam");
			    printf("\n52) Yemen\n");
			    printf("El pa%cs que deseo visitar es:",ai);
				scanf("%i",&pa);
				//Estructura de selección switch
				switch (pa)
				{
					case 1:
					system("cls");
					printf("\nAfganist%cn",aa);
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Kabul");
	                printf("\nNombre oficial: Rep%cblica Isl%cmica de Afganist%cn",au,aa,aa);
	                printf("\nLa moneda oficial es el Afgani afgano");
	                printf("\nPoblaci%cn en 2020: 38,928,341",ao);
	                printf("\nIdioma oficial: Dar%c y pat%cn",ai,au);
	                printf("\nGentilicio: afgano y afgana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
					
					case 2:
					system("cls");
					printf("\nArabia Saudita");
					printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Riad");
	                printf("\nNombre oficial: Reino de Arabia Saudita");
	                printf("\nLa moneda oficial es el Riyal saud%c",ai);
	                printf("\nPoblaci%cn en 2020: 34,813,867",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: saud%c o saudita",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
					
					case 3:
					system("cls");
			        printf("\nArmenia");
			        printf("\nPa%cs en Asia y Europa (geogr%cficamente es un pa%cs euroasi%cticos)",ai,aa,ai,aa);
	                printf("\nCapital: Erev%cn",aa);
	                printf("\nNombre oficial: Rep%cblica de Armenia",au);
	                printf("\nLa moneda oficial es el Dram armenio");
	                printf("\nPoblaci%cn en 2020: 2,963,234",ao);
	                printf("\nIdioma oficial: Armenio");
	                printf("\nGentilicio: armenio y armenia");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 4:
			        system("cls");
			        printf("\nAzerbaiy%cn",aa);
			        printf("\nPa%cs en Asia y Europa (geogr%cficamente es un pa%cs euroasi%ctico)",ai,aa,ai,aa);
	                printf("\nCapital: Bak%c",au);
	                printf("\nNombre oficial: Rep%cblica de Azerbaiy%cn",au,aa);
	                printf("\nLa moneda oficial es el Manat azer%c",ai);
	                printf("\nPoblaci%cn en 2020: 10,139,175",ao);
	                printf("\nIdioma oficial: Azer%c",ai);
	                printf("\nGentilicio: azerbaiyano y azerbaiyana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 5:
			        system("cls");
			        printf("\nBanglad%cs",ae);
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Daca");
	                printf("\nNombre oficial: Rep%cblica Popular de Banglad%cs",au,ae);
	                printf("\nLa moneda oficial es el Taka bangladesh%c",ai);
	                printf("\nPoblaci%cn en 2020: 164,689,383",ao);
	                printf("\nIdioma oficial: Bengal%c",ai);
	                printf("\nGentilicio: banglades%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 6:
			        system("cls");
			        printf("\nBahr%cin",ae);
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Manama");
	                printf("\nNombre oficial: Reino de Bahr%cin",ae);
	                printf("\nLa moneda oficial es el Dinar bahrein%c",ai);
	                printf("\nPoblaci%cn en 2020: 1,701,583",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: bahrein%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 7:
			        system("cls");
			        printf("\nBirmania/Myanmar");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Naipyid%c",ao);
	                printf("\nNombre oficial: Uni%cn de Myanmar",ao);
	                printf("\nLa moneda oficial es el Kyat birmano");
	                printf("\nPoblaci%cn en 2020: 54,409,794",ao);
	                printf("\nIdioma oficial: Birmano");
	                printf("\nGentilicio: birmano y birmana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 8:
			        system("cls");
			        printf("\nBrun%ci",ae);
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Bandar Seri Begawan");
	                printf("\nNombre oficial: Estado de Brun%ci Darussalam",ae);
	                printf("\nLa moneda oficial es el D%clar de Brun%ci",ao,ae);
	                printf("\nPoblaci%cn en 2020: 437,483",ao);
	                printf("\nIdioma oficial: Malayo");
	                printf("\nGentilicio: bruneano y bruneana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 9:
			        system("cls");
			        printf("\nBut%cn",aa);
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Timbu");
	                printf("\nNombre oficial: Reino de But%cn",aa);
	                printf("\nLa moneda oficial es el Ngultrum butan%cs",ae);
	                printf("\nPoblaci%cn en 2020: 771,612",ao);
	                printf("\nIdioma oficial: Dzongkha");
	                printf("\nGentilicio: butan%cs y butanesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 10:
			        system("cls");
			        printf("\nCamboya");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Nom Pen");
	                printf("\nNombre oficial: Reino de Camboya");
	                printf("\nLa moneda oficial es el Riel camboyano");
	                printf("\nPoblaci%cn en 2020: 16,718,971",ao);
	                printf("\nIdioma oficial: Camboyano (jemer))");
	                printf("\nGentilicio: camboyano y camboyana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 11:
			        system("cls");
			        printf("\nChina");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Pek%cn",ai);
	                printf("\nNombre oficial: Rep%cblica Popular China",au);
	                printf("\nLa moneda oficial es el Yuan chino");
	                printf("\nPoblaci%cn en 2020: 1,439,323,774 (el pa%cs m%cs poblado del mundo)",ao,ai,aa);
	                printf("\nIdioma oficial: Chino Mandar%cn",ai);
	                printf("\nGentilicio: chino y china");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 12:
			        system("cls");
			        printf("\nChipre");
			        printf("\nPa%cs en Asia y Europa (pol%cticamente es un pa%cs europeo pero geogr%cficamente en un pa%cs asi%ctico)",ai,ai,ai,aa,ai,aa);
	                printf("\nCapital: Nicosia");
	                printf("\nNombre oficial: Rep%cblica de Chipre",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 1,207,361",ao);
	                printf("\nIdioma oficial: Griego y turco");
	                printf("\nGentilicio: chipriota");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 13:
			        system("cls");
			        printf("\nCorea del Norte");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Pyongyang");
	                printf("\nNombre oficial: Rep%cblica Popular Democr%ctica de Corea",au,aa);
	                printf("\nLa moneda oficial es el Won norcoreano");
	                printf("\nPoblaci%cn en 2020: 25,778,815",ao);
	                printf("\nIdioma oficial: Coreano");
	                printf("\nGentilicio: norcoreano y norcoreana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 14:
			        system("cls");
			        printf("\nCorea del Sur");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Se%cl",au);
	                printf("\nNombre oficial: Rep%cblica de Corea",au);
	                printf("\nLa moneda oficial es el Won surcoreano");
	                printf("\nPoblaci%cn en 2020: 51,269,183",ao);
	                printf("\nIdioma oficial: Coreano");
	                printf("\nGentilicio: surcoreano y surcoreana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 15:
			        system("cls");
			        printf("\nEmiratos %crabes Unidos",aam);
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Abu Dabi");
	                printf("\nNombre oficial: Emiratos %crabes Unidos",aam);
	                printf("\nLa moneda oficial es el Dirham de los Emiratos %crabes Unidos",aam);
	                printf("\nPoblaci%cn en 2020: 9,890,,400",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: emirat%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 16:
                    system("cls");
			        printf("\nFilipinas");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Manila");
	                printf("\nNombre oficial: Rep%cblica de Filipinas",au);
	                printf("\nLa moneda oficial es el Peso filipino");
	                printf("\nPoblaci%cn en 2020: 109,581,085",ao);
	                printf("\nIdioma oficial: Filipino e ingl%cs",ae);
	                printf("\nGentilicio: filipino y filipina");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 17:
			        system("cls");
			        printf("\nGeorgia");
			        printf("\nPa%cs en Asia y Europa (geogr%cficamente es un pa%cs euroasi%ctico)",ai,aa,ai,aa);
	                printf("\nCapital: Tiflis");
	                printf("\nNombre oficial: Georgia",au);
	                printf("\nLa moneda oficial es el Lari georgiano");
	                printf("\nPoblaci%cn en 2020: 3,989,175",ao);
	                printf("\nIdioma oficial: Georgiano");
	                printf("\nGentilicio: georgiano y georgiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 18:
			        system("cls");
			        printf("\nHong Kong");
			        printf("\nMantiene una pol%ctica con China llamada -Un pa%cs, dos sistemas-, la cual promete la autonom%ca del territorio, en otras palabras, Hong Kong se reconoce como parte de China pero puede tener sus propias reglas",ai,ai,ai);
	                printf("\nNombre oficial: Regi%cn Administrativa Especial de Hong Kong de la Rep%cblica Popular China",ao,au);
	                printf("\nLa moneda oficial es el D%clar de Hong Kong",ao);
	                printf("\nPoblaci%cn en 2020: 7,496,988",ao);
	                printf("\nIdioma oficial: Chino e ingl%cs",ae);
	                printf("\nGentilicio: hongkon%cs y hongkonesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 19:
			        system("cls");
			        printf("\nIndia");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Nueva Delhi");
	                printf("\nNombre oficial: Rep%cblica de la India",au);
	                printf("\nLa moneda oficial es la Rupia india");
	                printf("\nPoblaci%cn en 2020: 1,380,004,385",ao);
	                printf("\nIdioma oficial: Hindi e ingl%cs",ae);
	                printf("\nGentilicio: indio e india");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 20:
			        system("cls");
			        printf("\nIndonesia");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Yakarta");
	                printf("\nNombre oficial: Rep%cblica de Indonesia",au);
	                printf("\nLa moneda oficial es la Rupia indonesia");
	                printf("\nPoblaci%cn en 2020: 273,523,621",ao);
	                printf("\nIdioma oficial: Indonesio");
	                printf("\nGentilicio: indonesio e indonesia");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 21:
			        system("cls");
			        printf("\nIrak o Iraq");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Bagdad");
	                printf("\nNombre oficial: Rep%cblica de Irak",au);
	                printf("\nLa moneda oficial es el Dinar iraqu%c",ai);
	                printf("\nPoblaci%cn en 2020: 40,222,503",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: iraqu%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 22:
			        system("cls");
			        printf("\nIr%cn",aa);
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Teher%cn",aa);
	                printf("\nNombre oficial: Rep%cblica Isl%cmica de Ir%cn",au,aa,aa);
	                printf("\nLa moneda oficial es el Rial iran%c",ai);
	                printf("\nPoblaci%cn en 2020: 83,992,953",ao);
	                printf("\nIdioma oficial: Persa");
	                printf("\nGentilicio: iran%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
					
					case 23:
					system("cls");
					printf("\nIsrael");
					printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Jerusal%cn (no reconocido por la ONU)",ae);
	                printf("\nNombre oficial: Estado de Israel");
	                printf("\nLa moneda oficial es el Nuevo sh%cquel",ae);
	                printf("\nPoblaci%cn en 2020: 8,655,541",ao);
	                printf("\nIdioma oficial: Hebreo, %crabe",aam);
	                printf("\nGentilicio: israel%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
					
					case 24:
					system("cls");
			        printf("\nJap%cn",ao);
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Tokio");
	                printf("\nNombre oficial: Estado de Jap%cn",ao);
	                printf("\nLa moneda oficial es el Yen");
	                printf("\nPoblaci%cn en 2020: 126,476,458",ao);
	                printf("\nIdioma oficial: Japon%cs",ae);
	                printf("\nGentilicio: japon%cs y japonesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 25:
			        system("cls");
			        printf("\nJordania");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Amm%cn",aa);
	                printf("\nNombre oficial: Reino Hachemita de Jordania");
	                printf("\nLa moneda oficial es el Dinar jordano");
	                printf("\nPoblaci%cn en 2020: 10,203,140",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: jordano y jordana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 26:
			        system("cls");
			        printf("\nKazajist%cn",aa);
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Nursult%cn",aa);
	                printf("\nNombre oficial: Rep%cblica de Kazajist%cn",au,aa);
	                printf("\nLa moneda oficial es el Tenge kazajo");
	                printf("\nPoblaci%cn en 2020: 18,776,707",ao);
	                printf("\nIdioma oficial: Kazajo y ruso");
	                printf("\nGentilicio: kazajo y kazaja");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 27:
			        system("cls");
			        printf("\nKirguist%cn",aa);
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Biskek");
	                printf("\nNombre oficial: Rep%cblica Kirguisa",au);
	                printf("\nLa moneda oficial es el Som kirgu%cs",ai);
	                printf("\nPoblaci%cn en 2020: 6,524,191",ao);
	                printf("\nIdioma oficial: Kirgu%cs y ruso",ai);
	                printf("\nGentilicio: kirgu%cs o kirguiso y kirguisa");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 28:
			        system("cls");
			        printf("\nKuwait");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Kuwait");
	                printf("\nNombre oficial: Estado de Kuwait");
	                printf("\nLa moneda oficial es el Dinar kuwait%c",ai);
	                printf("\nPoblaci%cn en 2020: 4,270,563",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: kuwait%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 29:
			        system("cls");
		    	    printf("\nLaos");
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Vienti%cn",aa);
	                printf("\nNombre oficial: Rep%cblica Democr%ctica Popular Lao",au,aa);
	                printf("\nLa moneda oficial es el Kip laosiano");
	                printf("\nPoblaci%cn en 2020: 7,275,556",ao);
	                printf("\nIdioma oficial: Lao (laosiano)");
	                printf("\nGentilicio: laosiano y laosiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 30:
		    	    system("cls");
		    	    printf("\nL%cbano",ai);
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Beirut");
	                printf("\nNombre oficial: Rep%cblica Libanesa",au);
	                printf("\nLa moneda oficial es la Libra libanesa");
	                printf("\nPoblaci%cn en 2020: 6,825,442",ao);
	                printf("\nIdioma oficial: %crabe y franc%cs",aam,ae);
	                printf("\nGentilicio: liban%cs y libanesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 31:
		    	    system("cls");
		    	    printf("\nMacao");
		    	    printf("\nMantiene una pol%ctica con China llamada -Un pa%cs, dos sistemas-, la cual promete la autonom%ca del territorio, en otras palabras, Macao se reconoce como parte de China pero puede tener sus propias reglas",ai,ai,ai);
	                printf("\nNombre oficial: Regi%cn Administrativa Especial Macao",ao);
	                printf("\nLa moneda oficial es la Pataca",ao);
	                printf("\nPoblaci%cn en 2020: 649,342",ao);
	                printf("\nIdioma oficial: Chino canton%cs y portugu%cs",ae,ae);
	                printf("\nGentilicio: macaense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 32:
		    	    system("cls");
		    	    printf("\nMalasia");
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Kuala Lumpur");
	                printf("\nNombre oficial: Malasia");
	                printf("\nLa moneda oficial es el Ringgit malayo");
	                printf("\nPoblaci%cn en 2020: 32,365,998",ao);
	                printf("\nIdioma oficial: Malayo e ingl%cs",ae);
	                printf("\nGentilicio: malasio y malasia");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 33:
		    	    system("cls");
		    	    printf("\nMaldivas");
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Mal%c",ae);
	                printf("\nNombre oficial: Rep%cblica de Maldivas",au);
	                printf("\nLa moneda oficial es la Rupia de Maldivas");
	                printf("\nPoblaci%cn en 2020: 540,542",ao);
	                printf("\nIdioma oficial: Maldivo (Divehi)");
	                printf("\nGentilicio: maldivo y maldiva");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 34:
		    	    system("cls");
		    	    printf("\nMongolia");
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Ul%cn Bator",aa);
	                printf("\nNombre oficial: Mongolia");
	                printf("\nLa moneda oficial es el Tugrik mongol");
	                printf("\nPoblaci%cn en 2020: 3,278,292",ao);
	                printf("\nIdioma oficial: Mongol");
	                printf("\nGentilicio: mongol y mongola");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 35:
		    	    system("cls");
		    	    printf("\nNepal");
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Katmand%c",au);
	                printf("\nNombre oficial: Rep%cblica Federal Democr%ctica de Nepal",au,aa);
	                printf("\nLa moneda oficial es la Rupia nepal%c",ai);
	                printf("\nPoblaci%cn en 2020: 29,136,808",ao);
	                printf("\nIdioma oficial: Nepal%c",ai);
	                printf("\nGentilicio: nepal%cs y nepalesa o nepal%c",ae,ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 36:
		    	    system("cls");
		    	    printf("\nOm%cn",aa);
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Mascate");
	                printf("\nNombre oficial: Sultan%ca de Om%cn",ai,aa);
	                printf("\nLa moneda oficial es el Rial oman%c",ai);
	                printf("\nPoblaci%cn en 2020: 5,106,622",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: oman%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 37:
		    	    system("cls");
		    	    printf("\nPakist%cn",aa);
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Islamabad");
	                printf("\nNombre oficial: Rep%cblica Isl%cmica de Pakist%cn",au,aa,aa);
	                printf("\nLa moneda oficial es la Rupia pakistan%c",ai);
	                printf("\nPoblaci%cn en 2020: 220,892,331",ao);
	                printf("\nIdioma oficial: Urdu e ingl%cs",ae);
	                printf("\nGentilicio: pakistan%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
					
					case 38:
					system("cls");
					printf("\nPalestina");
		    	    printf("\nTerritorio en disputa");
	                printf("\nNombre oficial: Estado de Palestina");
	                printf("\nLa moneda oficial es el Nuevo sh%cquel",ae);
	                printf("\nPoblaci%cn en 2020: 5,101,416",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: palestino");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 39:
		    	    system("cls");
		    	    printf("\nQatar");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Doha");
	                printf("\nNombre oficial: Estado de Catar");
	                printf("\nLa moneda oficial es el Riyal qatar%c",ai);
	                printf("\nPoblaci%cn en 2020: 2,881,060",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: catar%c o qatar%c",ai,ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 40:
                    system("cls");
		    	    printf("\nRusia");
		    	    printf("\nPa%cs en Asia y Europa (geogr%cficamente es un pa%cs euroasi%ctico)",ai,aa,ai,aa);
	                printf("\nCapital: Mosc%c",au);
	                printf("\nNombre oficial: Federaci%cn de Rusia",ao);
	                printf("\nLa moneda oficial es el Rublo ruso");
	                printf("\nPoblaci%cn en 2020: 145,934,460",ao);
	                printf("\nIdioma oficial: Ruso");
	                printf("\nGentilicio: ruso y rusa");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 41:
                    system("cls");
		    	    printf("\nSingapur");
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Singapur");
	                printf("\nNombre oficial: Rep%cblica de Singapur",au);
	                printf("\nLa moneda oficial es el D%clar de Singapur",ao);
	                printf("\nPoblaci%cn en 2020: 5,850,343",ao);
	                printf("\nIdioma oficial: Chino mandar%cn, ingl%cs, malayo y tamil",ai,ae);
	                printf("\nGentilicio: singapurense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 42:
		    	    system("cls");
		    	    printf("\nSiria");
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Damasco");
	                printf("\nNombre oficial: Rep%cblica %crabe Siria",au,aam);
	                printf("\nLa moneda oficial es la Libra siria");
	                printf("\nPoblaci%cn en 2020: 17,500,657",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: sirio y siria");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 43:
		    	    system("cls");
			        printf("\nSri Lanka");
			        printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Sri Jayewardenepura (capital administrativa) y Colombo (capital comercial)");
	                printf("\nNombre oficial: Rep%cblica Democr%ctica Socialista de Sri Lanka",au,aa);
	                printf("\nLa moneda oficial es la Rupia de Sri Lanka");
	                printf("\nPoblaci%cn en 2020: 21,413,250",ao);
	                printf("\nIdioma oficial: Cingal%cs, tamil",ae);
	                printf("\nGentilicio: ceilan%cs y ceilanesa, ceiland%cs y ceilandesa o esrilanqu%cs y esrilanquesa",ae,ae,ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
			        
			        case 44:
			        system("cls");
		    	    printf("\nTayikist%cn",aa);
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Dusamb%c",ae);
	                printf("\nNombre oficial: Rep%cblica de Tayikist%cn",au,aa);
	                printf("\nLa moneda oficial es el Somoni tayiko");
	                printf("\nPoblaci%cn en 2020: 9,537,642",ao);
	                printf("\nIdioma oficial: Tayiko");
	                printf("\nGentilicio: tayiko y tayika");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 45:
		    	    system("cls");
		    	    printf("\nTailandia");
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Bangkok");
	                printf("\nNombre oficial: Reino de Tailandia");
	                printf("\nLa moneda oficial es el Baht tailand%cs",ae);
	                printf("\nPoblaci%cn en 2020: 69,799,978",ao);
	                printf("\nIdioma oficial: Tailand%cs",ae);
	                printf("\nGentilicio: tailand%cs y tailandesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 46:
		    	    system("cls");
		     	    printf("\nTaiw%cn",aa);
		     	    printf("\nTerritorio en disputa");
	                printf("\nNombre oficial: Rep%cblica de China",au);
	                printf("\nLa moneda oficial es el Nuevo d%clar taiwan%cs",ao,ae);
	                printf("\nPoblaci%cn en 2020: 23,561,000",ao);
	                printf("\nIdioma oficial: Chino mandar%cn",ai);
	                printf("\nGentilicio: taiwan%cs y taiwanesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
		     	    case 47:
		     	    system("cls");
		    	    printf("\nTimor Oriental");
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Dili");
	                printf("\nNombre oficial: Rep%cblica Democr%ctica de Timor Oriental",au,aa);
	                printf("\nLa moneda oficial es el D%clar estadounidense",ao);
	                printf("\nPoblaci%cn en 2020: 1,318,442",ao);
	                printf("\nIdioma oficial: Portugu%cs y tetun",ae);
	                printf("\nGentilicio: timorense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 48:
		    	    system("cls");
		    	    printf("\nTurkmenist%cn",aa);
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Asjabad");
	                printf("\nNombre oficial: Turkmenist%cn",aa);
	                printf("\nLa moneda oficial es el Manat turcomano");
	                printf("\nPoblaci%cn en 2020: 6,031,187",ao);
	                printf("\nIdioma oficial: Turcomano");
	                printf("\nGentilicio: turcomano y turcomana o turkmeno y turkmena");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 49:
		    	    system("cls");
		    	    printf("\nTurqu%ca",ai);
		    	    printf("\nPa%cs en Asia y Europa (geogr%cficamente es un pa%cs euroasi%ctico)",ai,aa,ai,aa);
	                printf("\nCapital: Ankara");
	                printf("\nNombre oficial: Rep%cblica de Turqu%ca",au,ai);
	                printf("\nLa moneda oficial es la Lira turca");
	                printf("\nPoblaci%cn en 2020: 84,339,067",ao);
	                printf("\nIdioma oficial: Turco");
	                printf("\nGentilicio: turco y turca");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 50:
		    	    system("cls");
		    	    printf("\nUzbekist%cn",aa);
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Taskent");
	                printf("\nNombre oficial: Rep%cblica de Uzbekist%cn",au,aa);
	                printf("\nLa moneda oficial es el Som uzbeko");
	                printf("\nPoblaci%cn en 2020: 33,469,199",ao);
	                printf("\nIdioma oficial: Uzbeco y ruso");
	                printf("\nGentilicio: uzbeko y uzbeka");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 51:
		    	    system("cls");
		    	    printf("\nVietnam");
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: Han%ci",ao);
	                printf("\nNombre oficial: Rep%cblica Socialista de Vietnam",au);
	                printf("\nLa moneda oficial es el Dong vietnamita");
	                printf("\nPoblaci%cn en 2020: 97,338,583",ao);
	                printf("\nIdioma oficial: Vietnamita");
	                printf("\nGentilicio: vietnamita");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
		    	    
		    	    case 52:
		    	    system("cls");
		    	    printf("\nYemen");
		    	    printf("\nPa%cs en Asia",ai);
	                printf("\nCapital: San%c",aa);
	                printf("\nNombre oficial: Rep%cblica de Yemen",au);
	                printf("\nLa moneda oficial es el Rial yemen%c",ai);
	                printf("\nPoblaci%cn en 2020: 29,825,968",ao);
	                printf("\nIdioma oficial: %crabe",aam);
	                printf("\nGentilicio: yemen%c",ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                //Lo que se debe hacer en caso de que se ingrese un número que no esté en la lista                    
		    	    default:
		    	    system("cls");
				    printf("\tOpci%cn inv%clida.\n",ao,aa);
				    printf("%cDesea elegir otra opci%cn?\n",ii,ao);
				    printf("1) S%c \n2) No\n",ai);
				    scanf("%i",&op);
				}
				break;
				
				
			case 4:
			    system("cls");
        		printf("\nEuropa");
	            printf("\nEscoja el pa%cs que desea conocer\n",ai);
	            printf("\n1) Albania");
	            printf("\n2) Alemania");
	            printf("\n3) Andorra");
	            printf("\n4) Armenia");
	            printf("\n5) Austria");
	            printf("\n6) Azerbaiy%cn",aa);
	            printf("\n7) B%clgica",ae);
	            printf("\n8) Bielorrusia");
	            printf("\n9) Bosnia y Herzegovina");
	            printf("\n10) Bulgaria");
	            printf("\n11) Chipre");
	            printf("\n12) Ciudad del Vaticano");
	            printf("\n13) Croacia");
	            printf("\n14) Dinamarca");
	            printf("\n15) Eslovaquia");
	            printf("\n16) Eslovenia");
	            printf("\n17) Espa%ca",nn);
	            printf("\n18) Estonia");
	            printf("\n19) Finlandia");
	            printf("\n20) Francia");
	            printf("\n21) Georgia");
	            printf("\n22) Grecia");
	            printf("\n23) Hungr%ca",ai);
	            printf("\n24) Irlanda");
	            printf("\n25) Islandia");
	            printf("\n26) Italia");
	            printf("\n27) Kosovo");
	            printf("\n28) Letonia");
	            printf("\n29) Liechtenstein");
	            printf("\n30) Lituania");
	            printf("\n31) Luxemburgo");
	            printf("\n32) Macedonia del Norte");
	            printf("\n33) Malta");
	            printf("\n34) Moldavia");
	            printf("\n35) M%cnaco",ao);
	            printf("\n36) Montenegro");
	            printf("\n37) Noruega");
	            printf("\n38) Pa%cses Bajos",ai);
	            printf("\n39) Polonia");
	            printf("\n40) Portugal");
	            printf("\n41) Reino Unido");
	            printf("\n42) Rep%cblica Checa",au);
	            printf("\n43) Ruman%ca",ai);
	            printf("\n44) Rusia");
	            printf("\n45) San Marino");
	            printf("\n46) Serbia");
	            printf("\n47) Suecia");
	            printf("\n48) Suiza");
	            printf("\n49) Turqu%ca",ai);
	            printf("\n50) Ucrania\n");
				printf("El pa%cs que deseo visitar es:",ai);
				scanf("%i",&pa);
                //Estructura de selección switch
				switch (pa)
				{
					case 1:
        		    system("cls");
	                printf("\nAlbania");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Tirana");
	                printf("\nNombre oficial: Rep%cblica de Albania",au);
	                printf("\nLa moneda oficial es el Lek alban%cs",ae);
	                printf("\nPoblaci%cn en 2020: 2,877,800",ao);
	                printf("\nIdioma oficial: Alban%cs",ae);
	                printf("\nGentilicio: alban%cs y albanesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 2:
	                system("cls");
	                printf("\nAlemania");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Berl%cn",ai);
	                printf("\nNombre oficial: Rep%cblica Federal de Alemania",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 83,783,945",ao);
	                printf("\nIdioma oficial: Alem%cn",aa);
	                printf("\nGentilicio: alem%cn y alemana",aa);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 3:
	                system("cls");
	                printf("\nAndorra");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Andorra La Vieja");
	                printf("\nNombre oficial: Principado de Andorra ");
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 78,015",ao);
	                printf("\nIdioma oficial: Catal%cn",aa);
	                printf("\nGentilicio: andorrano y andorrana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 4:
	                system("cls");
					printf("\nArmenia");
	                printf("\nPa%cs en Asia y Europa (geogr%cficamente es un pa%cs euroasi%cticos)",ai,aa,ai,aa);
	                printf("\nCapital: Erev%cn",aa);
	                printf("\nNombre oficial: Rep%cblica de Armenia",au);
	                printf("\nLa moneda oficial es el Dram armenio");
	                printf("\nPoblaci%cn en 2020: 2,963,234",ao);
	                printf("\nIdioma oficial: Armenio");
	                printf("\nGentilicio: armenio y armenia");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 5:
	                system("cls");
	                printf("\nAustria");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Viena");
	                printf("\nNombre oficial: Rep%cblica de Austria",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 9,006,400",ao);
	                printf("\nIdioma oficial: Alem%cn",aa);
	                printf("\nGentilicio: austriaco y austriaca o austr%caco y austr%caca",ai,ai);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 6:
	                system("cls");
	                printf("\nAzerbaiy%cn",aa);
	                printf("\nPa%cs en Asia y Europa (geogr%cficamente es un pa%cs euroasi%ctico)",ai,aa,ai,aa);
	                printf("\nCapital: Bak%c",au);
	                printf("\nNombre oficial: Rep%cblica de Azerbaiy%cn",au,aa);
	                printf("\nLa moneda oficial es el Manat azer%c",ai);
	                printf("\nPoblaci%cn en 2020: 10,139,175",ao);
	                printf("\nIdioma oficial: Azer%c",ai);
	                printf("\nGentilicio: azerbaiyano y azerbaiyana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 7:
	                system("cls");
	                printf("\nB%clgica",ae);
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Bruselas");
	                printf("\nNombre oficial: Reino de B%clgica",ae);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 11,589,616",ao);
	                printf("\nIdioma oficial: Neerland%cs, franc%cs y alem%cn",ae,ae,aa);
	                printf("\nGentilicio: belga");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 8:
	                system("cls");
	                printf("\nBielorrusia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Minsk");
	                printf("\nNombre oficial: Rep%cblica de Belar%cs",au,au);
	                printf("\nLa moneda oficial es el Rublo bielorruso");
	                printf("\nPoblaci%cn en 2020: 9,449,321",ao);
	                printf("\nIdioma oficial: Bielorruso y ruso");
	                printf("\nGentilicio: bielorruso y bielorrusa");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 9:
	                system("cls");
	                printf("\nBosnia y Herzegovina");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Sarajevo");
	                printf("\nNombre oficial: Bosnia y Herzegovina");
	                printf("\nLa moneda oficial es el Marco convertible");
	                printf("\nPoblaci%cn en 2020: 3,280,815",ao);
	                printf("\nIdioma oficial: Bosnio, croata y serbio");
	                printf("\nGentilicio: bosnio y bosnia o bosnioherzegovino y bosnioherzegovina");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 10:
	                system("cls");
	                printf("\nBulgaria");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Sof%ca",ai);
	                printf("\nNombre oficial: Rep%cblica de Bulgaria",au);
	                printf("\nLa moneda oficial es el Lev b%clgaro",au);
	                printf("\nPoblaci%cn en 2020: 6,948,445",ao);
	                printf("\nIdioma oficial: B%clgaro",au);
	                printf("\nGentilicio: b%clgaro y b%clgara",au,au);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
					
					case 11:
					system("cls");
					printf("\nChipre");
					printf("\nPa%cs en Asia y Europa (pol%cticamente es un pa%cs europeo pero geogr%cficamente en un pa%cs asi%ctico)",ai,ai,ai,aa,ai,aa);
	                printf("\nCapital: Nicosia");
	                printf("\nNombre oficial: Rep%cblica de Chipre",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 1,207,361",ao);
	                printf("\nIdioma oficial: Griego y turco");
	                printf("\nGentilicio: chipriota");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
					
					case 12:
					system("cls");
	                printf("\nCiudad del Vaticano");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Ciudad del Vaticano");
	                printf("\nNombre oficial: Estado de la Ciudad del Vaticano");
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 809",ao);
	                printf("\nIdioma oficial: Lat%cn e italiano",ai);
	                printf("\nGentilicio: vaticano y vaticana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 13:
                    system("cls");
	                printf("\nCroacia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Zagreb");
	                printf("\nNombre oficial: Rep%cblica de Croacia",au);
	                printf("\nLa moneda oficial es la Kuna croata");
	                printf("\nPoblaci%cn en 2020: 4,105,268",ao);
	                printf("\nIdioma oficial: Croata");
	                printf("\nGentilicio: croata");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 14:
	                system("cls");
	                printf("\nDinamarca");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Copenhague");
	                printf("\nNombre oficial: Reino de Dinamarca");
	                printf("\nLa moneda oficial es la Corona danesa");
	                printf("\nPoblaci%cn en 2020: 5,792,203",ao);
	                printf("\nIdioma oficial: Dan%cs",ae);
	                printf("\nGentilicio: dan%cs y danesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 15:
                    system("cls");
	                printf("\nEslovaquia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Bratislava");
	                printf("\nNombre oficial: Rep%cblica Eslovaca",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 5,459,643",ao);
	                printf("\nIdioma oficial: Eslovaco");
	                printf("\nGentilicio: eslovaco y eslovaca");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 16:
	                system("cls");
	                printf("\nEslovenia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Liubliana");
	                printf("\nNombre oficial: Rep%cblica de Eslovenia",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 2,078,932",ao);
	                printf("\nIdioma oficial: Esloveno");
	                printf("\nGentilicio: esloveno y eslovena");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 17:
	                system("cls");
	                printf("\nEspa%ca",nn);
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Madrid");
	                printf("\nNombre oficial: Reino de Espa%ca",nn);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 46,754,783",ao);
	                printf("\nIdioma oficial: Espa%col",nn);
	                printf("\nGentilicio: espa%col y espa%cola",nn,nn);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 18:
	                system("cls");
	                printf("\nEstonia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Tall%cn",ai);
	                printf("\nNombre oficial: Rep%cblica de Estonia",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 1,326,539",ao);
	                printf("\nIdioma oficial: Estonio");
	                printf("\nGentilicio: estonio y estonia");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 19:
	                system("cls");
	                printf("\nFinlandia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Helsinki");
	                printf("\nNombre oficial: Rep%cblica de Finlandia",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 5,540,718",ao);
	                printf("\nIdioma oficial: Fin%cs y sueco",ae);
	                printf("\nGentilicio: finland%cs y filandesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 20:
	                system("cls");
	                printf("\nFrancia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Par%cs",ai);
	                printf("\nNombre oficial: Rep%cblica Francesa",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 65,273,512",ao);
	                printf("\nIdioma oficial: Franc%cs",ae);
	                printf("\nGentilicio: franc%cs y francesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 21:
	                system("cls");
	                printf("\nGeorgia");
	                printf("\nPa%cs en Asia y Europa (geogr%cficamente es un pa%cs euroasi%ctico)",ai,aa,ai,aa);
	                printf("\nCapital: Tiflis");
	                printf("\nNombre oficial: Georgia",au);
	                printf("\nLa moneda oficial es el Lari georgiano");
	                printf("\nPoblaci%cn en 2020: 3,989,175",ao);
	                printf("\nIdioma oficial: Georgiano");
	                printf("\nGentilicio: georgiano y georgiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 22:
                    system("cls");
	                printf("\nGrecia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Atenas");
	                printf("\nNombre oficial: Rep%cblica Hel%cnica",au,ae);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 10,423,056",ao);
	                printf("\nIdioma oficial: Griego");
	                printf("\nGentilicio: griego y griega");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 23:
	                system("cls");
	                printf("\nHungr%ca",ai);
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Budapest");
	                printf("\nNombre oficial: Hungr%ca",ai);
	                printf("\nLa moneda oficial es el Forinto h%cngaro",au);
	                printf("\nPoblaci%cn en 2020: 9,660,350",ao);
	                printf("\nIdioma oficial: H%cngaro",au);
	                printf("\nGentilicio: h%cngaro y h%cngara",au,au);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 24:
	                system("cls");
	                printf("\nIrlanda");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Dubl%cn",ai);
	                printf("\nNombre oficial: Rep%cblica de Irlanda",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 4,937,796",ao);
	                printf("\nIdioma oficial: Irland%cs e ingl%cs",ae,ae);
	                printf("\nGentilicio: irland%cs e irlandesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 25:
                    system("cls");
	                printf("\nIslandia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Reikiavik");
	                printf("\nNombre oficial: Islandia");
	                printf("\nLa moneda oficial es el Corona islandes");
	                printf("\nPoblaci%cn en 2020: 341,250",ao);
	                printf("\nIdioma oficial: Island%cs",ae);
	                printf("\nGentilicio: island%cs e islandesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 26:
	                system("cls");
	                printf("\nItalia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Roma");
	                printf("\nNombre oficial: Rep%cblica Italiana",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 60,461,828",ao);
	                printf("\nIdioma oficial: Italiano");
	                printf("\nGentilicio: italiano e italiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 27:
	                system("cls");
	                printf("\nKosovo");
	                printf("\nTerritorio en disputa");
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 1,768,875",ao);
	                printf("\nIdioma oficial: Alban%cs y serbio",ae);
	                printf("\nGentilicio: kosovar");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
	                case 28:
	                system("cls");
	                printf("\nLetonia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Riga");
	                printf("\nNombre oficial: Rep%cblica de Letonia",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 1,886,202",ao);
	                printf("\nIdioma oficial: Let%cn",ao);
	                printf("\nGentilicio: let%cn y letona",ao);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 29:
	                system("cls");
	                printf("\nLiechtenstein");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Vaduz");
	                printf("\nNombre oficial: Principado de Leichtenstein");
	                printf("\nLa moneda oficial es el Franco suizo");
	                printf("\nPoblaci%cn en 2020: 38,137",ao);
	                printf("\nIdioma oficial: Alem%cn",aa);
	                printf("\nGentilicio: liechtensteiniano y liechtensteiniana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 30:
	                system("cls");
	                printf("\nLituania");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Vilna");
	                printf("\nNombre oficial: Rep%cblica de Lituania",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 2,722,291",ao);
	                printf("\nIdioma oficial: Lituano");
	                printf("\nGentilicio: lituano y lituana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 31:
	                system("cls");
	                printf("\nLuxemburgo");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Luxemburgo");
	                printf("\nNombre oficial: Gran Ducado de Luxemburgo");
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 625,976",ao);
	                printf("\nIdioma oficial: Luxemburgu%cs, franc%cs y alem%cn",ae,ae,aa);
	                printf("\nGentilicio: luxemburgu%cs y luxemburguesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 32:
	                system("cls");
	                printf("\nMacedonia del Norte");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Skopie");
	                printf("\nNombre oficial: Rep%cblica de Macedonia del Norte",au);
	                printf("\nLa moneda oficial es el Denar macedonio");
	                printf("\nPoblaci%cn en 2020: 2,083,380",ao);
	                printf("\nIdioma oficial: Macedonio");
	                printf("\nGentilicio: macedonio y macedonia");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 33:
	                system("cls");
	                printf("\nMalta");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: La Valeta");
	                printf("\nNombre oficial: Rep%cblica de Malta",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 441,539",ao);
	                printf("\nIdioma oficial: Malt%cs e ingl%cs",ae,ae);
	                printf("\nGentilicio: malt%cs y maltesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 34:
	                system("cls");
	                printf("\nMoldavia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Chisinau");
	                printf("\nNombre oficial: Rep%cblica de Moldavia",au);
	                printf("\nLa moneda oficial es el Leu moldavo");
	                printf("\nPoblaci%cn en 2020: 4,033,963",ao);
	                printf("\nIdioma oficial: Rumano");
	                printf("\nGentilicio: moldavo y moldava");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 35:
	                system("cls");
					printf("\nM%cnaco",ao);
					printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: M%cnaco",ao);
	                printf("\nNombre oficial: Principado de M%cnaco",ao);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 39,244",ao);
	                printf("\nIdioma oficial: Franc%cs",ae);
	                printf("\nGentilicio: monegasco y monegasca");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 36:
	                system("cls");
					printf("\nMontenegro");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Podgorica");
	                printf("\nNombre oficial: Montenegro");
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 628,062",ao);
	                printf("\nIdioma oficial: Montenegrino");
	                printf("\nGentilicio: montenegrino y montenegrina");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 37:
                    system("cls");
	                printf("\nNoruega");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Oslo");
	                printf("\nNombre oficial: Reino de Noruega");
	                printf("\nLa moneda oficial es la Corona noruega");
	                printf("\nPoblaci%cn en 2020: 5,421,242",ao);
	                printf("\nIdioma oficial: Noruego");
	                printf("\nGentilicio: noruego y noruega");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 38:
	                system("cls");
	                printf("\nPa%cses Bajos",ai);
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: %cmsterdam",aam);
	                printf("\nNombre oficial: Reino de los Pa%cses Bajos",ai);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 17,134,873",ao);
	                printf("\nIdioma oficial: Neerland%cs",ae);
	                printf("\nGentilicio: neerland%cs y neerlandesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 39:
	                system("cls");
	                printf("\nPolonia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Varsovia");
	                printf("\nNombre oficial: Rep%cblica de Polonia",au);
	                printf("\nLa moneda oficial es el Zloty");
	                printf("\nPoblaci%cn en 2020: 37,846,605",ao);
	                printf("\nIdioma oficial: Polaco");
	                printf("\nGentilicio: polaco y polaca");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 40:
                    system("cls");
	                printf("\nPortugal");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Lisboa");
	                printf("\nNombre oficial: Rep%cblica Portuguesa",au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 10,196,707",ao);
	                printf("\nIdioma oficial: Portugu%cs",ae);
	                printf("\nGentilicio: portugu%cs y portuguesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 41:
	                system("cls");
	                printf("\nReino Unido");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Londres");
	                printf("\nNombre oficial: Reino Unido de Gran Bretaña e Irlanda del Norte");
	                printf("\nLa moneda oficial es la Libra brit%cnica",aa);
	                printf("\nPoblaci%cn en 2020: 67,886,004",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: brit%cnico y brit%cnica",aa,aa);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 42:
	                system("cls");
	                printf("\nRep%cblica Checa",au);
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Praga");
	                printf("\nNombre oficial: Rep%cblica Checa",au);
	                printf("\nLa moneda oficial es la Corona checa");
	                printf("\nPoblaci%cn en 2020: 10,708,982",ao);
	                printf("\nIdioma oficial: Checo");
	                printf("\nGentilicio: checo y checa");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 43:
	                system("cls");
	                printf("\nRuman%ca",ai);
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Bucarest");
	                printf("\nNombre oficial: Ruman%ca",ai);
	                printf("\nLa moneda oficial es el Leu rumano");
	                printf("\nPoblaci%cn en 2020: 19,237,682",ao);
	                printf("\nIdioma oficial: Rumano");
	                printf("\nGentilicio: rumano y rumana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 44:
	                system("cls");
	                printf("\nRusia");
	                printf("\nPa%cs en Asia y Europa (geogr%cficamente es un pa%cs euroasi%ctico)",ai,aa,ai,aa);
	                printf("\nCapital: Mosc%c",au);
	                printf("\nNombre oficial: Federaci%cn de Rusia",ao);
	                printf("\nLa moneda oficial es el Rublo ruso");
	                printf("\nPoblaci%cn en 2020: 145,934,460",ao);
	                printf("\nIdioma oficial: Ruso");
	                printf("\nGentilicio: ruso y rusa");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 45:
                    system("cls");
	                printf("\nSan Marino");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: San Marino");
	                printf("\nNombre oficial: Seren%csima Rep%cblica de San Marino",ai,au);
	                printf("\nLa moneda oficial es el Euro");
	                printf("\nPoblaci%cn en 2020: 33,938",ao);
	                printf("\nIdioma oficial: Italiano");
	                printf("\nGentilicio: sanmarinense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 46:
	                system("cls");
	                printf("\nSerbia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Belgrado");
	                printf("\nNombre oficial: Rep%cblica de Serbia",au);
	                printf("\nLa moneda oficial es el Dinar serbio");
	                printf("\nPoblaci%cn en 2020: 8,737,370",ao);
	                printf("\nIdioma oficial: Serbio");
	                printf("\nGentilicio: serbio y serbia");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 47:
	                system("cls");
	                printf("\nSuecia");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Estocolmo");
	                printf("\nNombre oficial: Reino de Suecia");
	                printf("\nLa moneda oficial es la Corona sueca");
	                printf("\nPoblaci%cn en 2020: 10,099,270",ao);
	                printf("\nIdioma oficial: Sueco");
	                printf("\nGentilicio: sueco y sueca");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 48:
	                system("cls");
	                printf("\nSuiza");
	                printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Berna");
	                printf("\nNombre oficial: Confederaci%cn Suiza",ao);
	                printf("\nLa moneda oficial es el Franco suizo");
	                printf("\nPoblaci%cn en 2020: 8,654,618",ao);
	                printf("\nIdioma oficial: Alem%cn, franc%cs, italiano y romance",aa,ae);
	                printf("\nGentilicio: suizo y suiza");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
	                case 49:
	                system("cls");
	                printf("\nTurqu%ca",ai);
	                printf("\nPa%cs en Asia y Europa (geogr%cficamente es un pa%cs euroasi%ctico)",ai,aa,ai,aa);
	                printf("\nCapital: Ankara");
	                printf("\nNombre oficial: Rep%cblica de Turqu%ca",au,ai);
	                printf("\nLa moneda oficial es la Lira turca");
	                printf("\nPoblaci%cn en 2020: 84,339,067",ao);
	                printf("\nIdioma oficial: Turco");
	                printf("\nGentilicio: turco y turca");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                
	                case 50:
	                system("cls");
	                printf("\nUcrania\n");
					printf("\nPa%cs en Europa",ai);
	                printf("\nCapital: Kiev");
	                printf("\nNombre oficial: Ucrania",au);
	                printf("\nLa moneda oficial es la Grivna");
	                printf("\nPoblaci%cn en 2020: 43,733,759",ao);
	                printf("\nIdioma oficial: Ucraniano");
	                printf("\nGentilicio: ucraniano y ucraniana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
	                //Lo que se debe hacer en caso de que se ingrese un número que no esté en la lista					
					default:
		    	    system("cls");
				    printf("\tOpci%cn inv%clida.\n",ao,aa);
				    printf("%cDesea elegir otra opci%cn?\n",ii,ao);
				    printf("1) S%c \n2) No\n",ai);
				    scanf("%i",&op);
				}
			    break;
			    
			    
			case 5:
				system("cls");
        		printf("\nOcean%ca",ai);
	            printf("\nEscoja el pa%cs que desea conocer\n",ai);
	            printf("\n1) Australia");
                printf("\n2) Fiyi");
                printf("\n3) Islas Marshall");
                printf("\n4) Islas Salom%cn",ao);
                printf("\n5) Kiribati");
                printf("\n6) Micronesia");
                printf("\n7) Nauru");
                printf("\n8) Nueva Zelanda");
                printf("\n9) Palaos");
                printf("\n10) Pap%ca Nueva Guinea",au);
                printf("\n11) Samoa");
                printf("\n12) Tonga");
                printf("\n13) Tuvalu");
                printf("\n14) Vanuatu\n");
				printf("El pa%cs que deseo visitar es:",ai);
				scanf("%i",&pa);
                //Estructura de selección switch
				switch (pa)
				{
					case 1:
					system("cls");
	                printf("\nAustralia");
					printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Camberra");
	                printf("\nNombre oficial: Mancomunidad de Australia");
	                printf("\nLa moneda oficial es el D%clar australiano",ao);
	                printf("\nPoblaci%cn en 2020: 25,499,881",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: australiano y australiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 2:
                    system("cls");
                    printf("\nFiyi");
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Suva");
	                printf("\nNombre oficial: Rep%cblica de Fiyi",au);
	                printf("\nLa moneda oficial es el D%clar fiyiano",ao);
	                printf("\nPoblaci%cn en 2020: 896,444",ao);
	                printf("\nIdioma oficial: Ingl%cs, fiyiano e indost%cnico",ae,aa);
	                printf("\nGentilicio: fiyiano y fiyiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 3:
                    system("cls");
                    printf("\nIslas Marshall");
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Majuro");
	                printf("\nNombre oficial: Rep%cblica de las Islas Marshall",au);
	                printf("\nLa moneda oficial es el D%clar estadounidense",ao);
	                printf("\nPoblaci%cn en 2020: 59,194",ao);
	                printf("\nIdioma oficial: Ingl%cs y marshal%cs",ae,ae);
	                printf("\nGentilicio: marshal%cs y marshalesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 4:
                    system("cls");
                    printf("\nIslas Salom%cn",ao);
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Honiara");
	                printf("\nNombre oficial: Islas Salom%cn",ao);
	                printf("\nLa moneda oficial es el D%clar de las Islas Salom%cn",ao,ao);
	                printf("\nPoblaci%cn en 2020: 686,878",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: salomonense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 5:
                    system("cls");
                    printf("\nKiribati");
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Tarawa");
	                printf("\nNombre oficial: Rep%cblica de Kiribati",au);
	                printf("\nLa moneda oficial es el D%clar australiano",ao);
	                printf("\nPoblaci%cn en 2020: 119,446",ao);
	                printf("\nIdioma oficial: Ingl%cs y gilbert%cs",ae,ae);
	                printf("\nGentilicio: kiribatiano y kiribatiana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 6:
                    system("cls");
                    printf("\nMicronesia");
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Palikir");
	                printf("\nNombre oficial: Estados Federativos de Micronesia");
	                printf("\nLa moneda oficial es el D%clar estadounidense",ao);
	                printf("\nPoblaci%cn en 2020: 115,021",ao);
	                printf("\nIdioma oficial: Ingl%cs",ae);
	                printf("\nGentilicio: micronesio y micronesia");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 7:
                    system("cls");
                    printf("\nNauru");
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Yaren");
	                printf("\nNombre oficial: Rep%cblica de Nauru",au);
	                printf("\nLa moneda oficial es el D%clar australiano",ao);
	                printf("\nPoblaci%cn en 2020: 10,834",ao);
	                printf("\nIdioma oficial: Ingl%cs y nauruano");
	                printf("\nGentilicio: nauruano y nauruana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 8:
                    system("cls");
                    printf("\nNueva Zelanda");
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Wellington");
	                printf("\nNombre oficial: Nueva Zelanda");
	                printf("\nLa moneda oficial es el D%clar neozeland%cs",ao,ae);
	                printf("\nPoblaci%cn en 2020: 4,822,233",ao);
	                printf("\nIdioma oficial: Ingl%cs y mor%c",ae,ai);
	                printf("\nGentilicio: neozeland%cs y neozelandesa",ae);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 9:
                    system("cls");
                    printf("\nPalaos");
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Melekeok(Seg%cn el Ministerio de Asuntos Exteriores espa%col) o Ngerulmud(Seg%cn la CIA)",au,nn,au);
	                printf("\nNombre oficial: Rep%cblica de Palaos",au);
	                printf("\nLa moneda oficial es el D%clar estadounidense",ao);
	                printf("\nPoblaci%cn en 2020: 18,092",ao);
	                printf("\nIdioma oficial: Ingl%cs, palauano, angaur, tobiano, japon%cs y sonsorol",ae,ae);
	                printf("\nGentilicio: palauano y palauana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 10:
                    system("cls");
                    printf("\nPap%ca Nueva Guinea",au);
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Port Moresby");
	                printf("\nNombre oficial: Estado Independiente de Pap%ca Nueva Guinea",au);
	                printf("\nLa moneda oficial es el Kina");
	                printf("\nPoblaci%cn en 2020: 8,947,027",ao);
	                printf("\nIdioma oficial: Ingl%cs, tok pisin e hit%c motu",ae,ai);
	                printf("\nGentilicio: pap%c",au);
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 11:
                    system("cls");
                    printf("\nSamoa");
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Apia");
	                printf("\nNombre oficial: Estado Independiente de Samoa");
	                printf("\nLa moneda oficial es la Tala");
	                printf("\nPoblaci%cn en 2020: 198,410",ao);
	                printf("\nIdioma oficial: Ingl%cs y samoano");
	                printf("\nGentilicio: samoano y samoana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 12:
                    system("cls");
                    printf("\nTonga");
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Nukualofa");
	                printf("\nNombre oficial: Reino de Tonga");
	                printf("\nLa moneda oficial es el Pa'anga");
	                printf("\nPoblaci%cn en 2020: 105,697",ao);
	                printf("\nIdioma oficial: Ingl%cs y tongano",ae);
	                printf("\nGentilicio: tongano y tongana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 13:
                    system("cls");
                    printf("\nTuvalu");
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Funafuti (Seg%cn World Factbook de la CIA), Fongafale (Seg%cn la RAE) y Vaiaku (Seg%cn la CIA estadounidense)",au,au,au);
	                printf("\nNombre oficial: Tuvalu",au);
	                printf("\nLa moneda oficial es el D%clar australiano",ao);
	                printf("\nPoblaci%cn en 2020: 11,792",ao);
	                printf("\nIdioma oficial: Ingl%cs y tuvaluano",ae);
	                printf("\nGentilicio: tuvaluano y tuvaluana");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    case 14:
                    system("cls");
                    printf("\nVanuatu\n");
                    printf("\nPa%cs en Ocean%ca",ai,ai);
	                printf("\nCapital: Port Vila");
	                printf("\nNombre oficial: Rep%cblica de Vanuatu",au);
	                printf("\nLa moneda oficial es Vatu");
	                printf("\nPoblaci%cn en 2020: 307,150",ao);
	                printf("\nIdioma oficial: Ingl%cs, franc%cs y bislama",ae,ae);
	                printf("\nGentilicio: vanuatuense");
	                printf("\n%cQuieres la informaci%cn de otro pa%cs o deseas terminar ya?\n",ii,ao,ai);
	                printf("1) Quiero saber sobre otro pa%cs \n2) Quiero terminar ya\n",ai);
	                scanf("%i",&op);
                    break;
                    
                    default:
		    	    system("cls");
				    printf("\tOpci%cn inv%clida.\n",ao,aa);
				    printf("%cDesea elegir otra opci%cn?\n",ii,ao);
				    printf("1) S%c \n2) No\n",ai);
				    scanf("%i",&op);
				}
				break;
	                //Lo que se debe hacer en caso de que se ingrese un número que no esté en la lista				
			default:
				system("cls");
				printf("\tOpci%cn inv%clida.\n",ao,aa);
				printf("%cDesea elegir otra opci%cn?\n",ii,ao);
				printf("1) S%c \n2) No\n",ai);
				scanf("%i",&op);
		}
    }
    while (op == 1);
    //Estructura de repetición do-while
    //Instrucción para terminar el programa
    do
    {
    printf("\t\tPrograma terminado\n\n");
    return 0;
    }
    while(op == 2);
}
