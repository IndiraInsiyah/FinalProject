#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int n;
int menu;
void menu_awal(), gambarNada(), Pop(), Jazz(), Indie(), RnB(), New_Release(), Back_Pop(), Back_Jazz(), Back_Indie(), Back_RnB(), Back_New_Release();
void Best_Part(), I_Have_Nothing(), My_Heart_Will_Go_On(), Perfect(), Gods_Plan(), Aku_Cinta_Dia(), Dan(), Kali_Kedua(), Hip_Hip_Hura(), Orang_Ke3();
void Could_It_Be(), Everybody_Knew(), Pilihanku(), Menghujam_Jantungku(), Im_Yours(), I_Will_Fly(), Sedari_Dulu(), Sama_Sama_Tahu(), LOVE(), I_Want_You_Love();
void Sampai_Jadi_Debu(), Akad(), Zona_Nyaman(), Desember(), Teralih(), Resah(), Sendu_Melagu(), Filosofi_dan_Logika(), Yang_Patah_Tumbuh_Yang_Hilang_Berganti(), Dialog_Hujan();
void Bloom(), The_Way_Iam(), You_Can_Cry(), Rockstar(), IDGAF(), One_Kiss(), Stir_Fly(), Tukar_Jiwa(), Dive(), Paris_In_The_Rain(), Tired(), Coming_Home();
void Young_Dumb_and_Broke(), Get_You(), Fake_Love(), Psycho(), Love_Lies(), Finesse(), Bebas(), Shot_Down(), DNA();
void help(), about();

//*Genre POP*//
void Best_Part()   //*Modular Lagu*//
{
	play_1:
			printf("\t\t\t================\n");
			printf("\t\t\t                \n");
			printf("\t\t\tB E S T  P A R T\n"); //*Judul Lagu*//
			printf("\t\t\t                \n");
			printf("\t\t\t================\n");      
        {   
                char print[] = "\nOh, ey \nYou don't know babe \nWhen you hold me\nAnd kiss me slowly\nIt's the sweetest thing\nAnd it don't change\nIf I had it my way\nYou would know that you are\nYou're the coffee that I need in the morning\nYou're my sunshine in the rain when it's pouring\nWon't you give yourself to me\nGive it all, oh\nI just wanna see\nI just wanna see how beautiful you are\nYou know that I see it\nI know you're a star\nWhere you go I follow\nNo matter how far\nIf life is a movie\nOh you're the best part, oh oh oh\nYou're the best part, oh oh oh\nBest part\nIt's the sunrise\nAnd those brown eyes yes\nYou're the one that I desire\nWhen we wake up\nAnd then we make love\nIt makes me feel so nice\nYou're my water when I'm stuck in the desert\nYou're the Tylenol I take when my head hurts\nYou're the sunshine on my life\nI just wanna see how beautiful you are\nYou know that I see it\nI know you're a star\nWhere you go I follow\nNo matter how far\nIf life is a movie\nThen you're the best part, oh oh oh\nYou're the best part, oh oh oh\nBest part\nIf you love me won't you say something\nIf you love me won't you\nWon't you\nIf you love me won't you say something\nIf you love me won't you\nLove me, won't you";
                int sleep =100,i;                 
                for(i=0;i<=strlen(print);i++) //*Waktu delay berjalannya lirik lagu*//
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya"); //*Tampilan menu setelah lagu berakhir*//
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_1;           //*Menjalankan lirik lagu*//
			break;
		case 2:
			system("cls");
			return menu_awal();   //*Kembali ke menu pilihan genre*//
		case 3:
			system("cls");
			return Pop();        //*Perintah kembali ke menu judul lagu*//
		default:
			getchar();
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");  //*Keterangan error*//
           	system("pause");
           	getchar();
           	system("cls");
			return Pop();
	}
}

void I_Have_Nothing()   //*Modular Lagu*//
{
	play_2: 
            printf("\t\t\t=========================\n");
			printf("\t\t\t                         \n");
			printf("\t\t\tI  H A V E  N O T H I N G\n");
			printf("\t\t\t                         \n");
			printf("\t\t\t=========================\n");
        {
				char print[] = "\nShare my life\nTake me for what I am\nCause I'll never change\nAll my colors for you\nTake my love\nI'll never ask for too much\nJust all that you are\nAnd everything that you do\nI don't really need to look\nVery much further\nI don't want to have to go\nWhere you don't follow\nI will hold it back again\nThis passion inside\nCan't run from myself\nThere's nowhere to hide\nDon't make me close one more door\nI don't want to hurt anymore\nStay in my arms if you dare\nOr must I imagine you there\nDon't walk away from me\nI have nothing, nothing, nothing\nIf I don't have you, you, you, you, you\nYou see through\nRight to the heart of me\nYou break down my walls\nWith the strength of your love\nI never knew\nLove like I've known it with you\nWill a memory survive\nOne I can hold on to?\nI don't really need to look\nVery much further\nI don't want to have to go\nWhere you don't follow\nI will hold it back again\nThis passion inside\nI can't run from myself\nThere's nowhere to hide\nYour love I'll remember forever\nDon't make me close one more door\nI don't want to hurt anymore\nStay in my arms if you dare\nOr must I imagine you there\nDon't walk away from me\nI have nothing, nothing, nothing\nDon't make me close one more door\nI don't want to hurt anymore\nStay in my arms if you dare\nOr must I imagine you there\nDon't walk away from me\nNo, don't walk away from me\nDon't you dare walk away from me\nI have nothing, nothing, nothing\nIf I don't have you, you\nIf I don't have you, oh, oh";
        		int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
		}
		system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_2;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Pop();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Pop();
	}
}

void My_Heart_Will_Go_On()   //*Modular Lagu*//
{
	system("color 2F");
	play_3: 
            printf("\t\t\t=================================\n");
			printf("\t\t\t                                 \n");
			printf("\t\t\tM Y  H E A R T  W I L L  G O  O N\n");
			printf("\t\t\t                                 \n");
			printf("\t\t\t=================================\n");
        {
			char print[] = "\nEvery night in my dreams\nI see you, I feel you\nThat is how I know you, go on\nFar across the distance\nAnd spaces between us\nYou have come to show you, go on\nNear, far, wherever you are\nI believe that the heart does go on\nOnce more you open the door\nAnd you're here in my heart and my heart will go on and on\nLove can touch us one time\nAnd last for a lifetime\nAnd never let go till we're gone\nLove was when I loved you\nOne true time I hold you\nIn my life we'll always go on\nNear, far, wherever you are\nI believe that the heart does go on\nOnce more you open the door\nAnd you're here in my heart\nAnd my heart will go on and on\nYou're here, there's nothing I fear\nAnd I know that my heart will go on\nWe'll stay forever this way\nYou are safe in my heart and my heart will go on and on";
			int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
		}
		system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_3;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Pop();
		default:
                printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           		system("pause");
           		getchar();
           		system("cls");
				return Pop();
	}
}

void Perfect()   //*Modular Lagu*//
{
	play_4:
			printf("\t\t\t=============\n");
			printf("\t\t\t             \n");
			printf("\t\t\tP E R F E C T\n");
			printf("\t\t\t             \n");
			printf("\t\t\t=============\n");
		{
			char print[] = "\nI found a love for me\nDarling just dive right in\nAnd follow my lead\nWell I found a girl beautiful and sweet \nI never knew you were the someone waiting for me\nCause we were just kids when we fell in love\nNot knowing what it was\nI will not give you up this time\nBut darling, just kiss me slow, your heart is all I own\nAnd in your eyes you're holding mine\nBaby, I'm dancing in the dark with you between my arms\nBarefoot on the grass, listening to our favorite song\nWhen you said you looked a mess, I whispered underneath my breath\nBut you heard it, darling, you look perfect tonight\nWell I found a woman, stronger than anyone I know\nShe shares my dreams, I hope that someday I'll share her home\nI found a love, to carry more than just my secrets\nTo carry love, to carry children of our own\nWe are still kids, but we're so in love\nFighting against all odds\nI know we'll be alright this time\nDarling, just hold my hand\nBe my girl, I'll be your man\nI see my future in your eyes\nBaby, I'm dancing in the dark, with you between my arms\nBarefoot on the grass, listening to our favorite song\nWhen I saw you in that dress, looking so beautiful\nI don't deserve this, darling, you look perfect tonight\nBaby, I'm dancing in the dark, with you between my arms\nBarefoot on the grass, listening to our favorite song\nI have faith in what I see\nNow I know I have met an angel in person\nAnd she looks perfect\nI don't deserve this\nYou look perfect tonight";
			int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
		}
		system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_4;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Pop();
        default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Pop();
           		
        }
}

void Gods_Plan()   //*Modular Lagu*//
{
	play_5:
			printf("\t\t\t================\n");
			printf("\t\t\t                \n");
			printf("\t\t\tG O D S  P L A N\n");
			printf("\t\t\t                \n");
			printf("\t\t\t================\n");      
        {   
                char print[] = "\nYeah they wishin' and wishin' and wishin' and wishin'\nThey wishin' on me, yuh\nI been movin' calm, don't start no trouble with me\nTryna keep it peaceful is a struggle for me\nDon’t pull up at 6 AM to cuddle with me\nYou know how I like it when you lovin' on me\nI don’t wanna die for them to miss me\nYes I see the things that they wishin' on me\nHope I got some brothers that outlive me\nThey gon' tell the story, shit was different with me\nGod's plan, God's plan\nI hold back, sometimes I won't, yuh\nI feel good, sometimes I don't, ay, don't\nI finessed down Weston Road, ay, 'nessed\nMight go down a G.O.D., yeah, wait\nI go hard on Southside G, yuh, wait\nI make sure that north-side eat\nAnd still\nBad things\nIt's a lot of bad things\n\nThat they…";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_5;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Pop();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Pop();
	}
}

void Aku_Cinta_Dia()   //*Modular Lagu*//
{
	play_6:
			printf("\t\t\t========================\n");
			printf("\t\t\t                        \n");
			printf("\t\t\tTA K U  C I N T A  D I A\n");
			printf("\t\t\t                        \n");
			printf("\t\t\t========================\n");     
        {   
                char print[] = "\nDi saat kau berjalan\nDi depan rumahku\nPenuh gaya\nTersita pandanganku hingga ku terpesona\nSiapakah dirimu hatiku ingin tau, segera\nSiapakah namamu, dimana rumahmu\nSebutkanlah\nKuingin berkenalan, Terimalah salamku\nGayamu dan wajahmu Terbawa dalam mimpi\nDiriku, dimabuk asmara\n\nHati yang berbunga,\nKala pandangan pertama\nOh Tuhan tolonglah,\nAku cinta, aku cinta dia";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_6;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Pop();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Pop();
	}
}

void Dan()   //*Modular Lagu*//
{
	play_7:
			printf("\t\t\t=====\n");
			printf("\t\t\t     \n");
			printf("\t\t\tD A N\n");
			printf("\t\t\t     \n");
			printf("\t\t\t=====\n");      
        {   
                char print[] ="\nDan....bila esok...datang kembali\nSeperti sedia kala dimana kau bisa bercanda\nDan...perlahan kaupun lupakan aku\nMimpi burukmu...dimana t'lah ku tancapkan duri tajam\nKaupun menangis...menangis sedih\nMaafkan aku\n\nDan...bukan maksudku...bukan inginku\nMelukaimu sadarkan kau di sini kupun terluka\nMelupakanmu...menepikanmu\nMaafkan aku....\n\nReff :\nLupakan saja diriku\nBila itu bisa membuatmu\nKembali bersinar dan berpijar\nSeperti dulu kala\n\nCaci maki saja diriku\nBila itu bisa membuatmu\nKembali bersinar dan berpijar\nSeperti dulu kala";			
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_7;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Pop();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Pop();
	}
}

void Kali_Kedua()   //*Modular Lagu*//
{
	play_8:
			printf("\t\t\t==================\n");
			printf("\t\t\t                  \n");
			printf("\t\t\tK A L I  K E D U A\n");
			printf("\t\t\t                  \n");
			printf("\t\t\t==================\n");      
        {   
                char print[] ="\nJika wanginmu saja bisa\nMemindahkan duniaku\nMaka cintamu pasti bisa\nMengubah jalan hidupku\n\nCukup sekali saja aku pernah merasa\nBetapa menyiksa kehilanganmu\nKau tak terganti kau yang slalu kunanti\nTakkan kulepas lagi\n\nPegang tanganku bersama jatuh cinta\nKali kedua pada yang sama\n\nJika senyummu saja bisa\nMencuri detak jantungku\nMaka pelukkan mu yang bisa\nMenyapu seluruh hatiku\n\nCukup sekali saja aku pernah merasa\nBetapa menyiksa kehilanganmu\nKau tak terganti kau yang slalu kunanti\nTakkan kulepas lagi\n\nPegang tanganku bersama jatuh cinta\n\nKali kedua pada yang sama";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_8;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Pop();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Pop();
	}
}

void Hip_Hip_Hura()   //*Modular Lagu*//
{
	play_9:
			printf("\t\t\t=====================\n");
			printf("\t\t\t                   \n");
			printf("\t\t\tH I P  H I P  H U R A\n");
			printf("\t\t\t                     \n");
			printf("\t\t\t=====================\n");             
        {   
                char print[] ="\nDimalam minggu\nKupergi ke pesta\nPesta meriah\nUlang tahun kawanku\nSemua yang datang\nBergaya ceria\nBerdansa dan gembira\n\nDitengah pesta kulihat si dia, lincah gayanya\nDandan masa kini\nIngin hatiku mencium pipinya\nTapi malu rasanya\n\nReff;\nOh hip hip hura hura…\nAku suka dia…\nAku jatuh cinta…\nSungguh suka dia …\nSungguh cinta dia…\n\nHip hip hura hura";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_9;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Pop();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Pop();
	}
}

void Orang_Ke3()   //*Modular Lagu*//
{
	play_10:
			printf("\t\t\t=================\n");
			printf("\t\t\t                 \n");
			printf("\t\t\tO R A N G  K E  3\n");
			printf("\t\t\t                 \n");
			printf("\t\t\t=================\n");      
        {   
                char print[] ="\nSaat berjumpa dan kau menyapa\nIndah parasmu hangatkan suasana\nBuatku tak percaya, mimpi indahku jadi nyata\n\nSaat sendiri jalani hari\nBayang-bayangmu selalu menghampiri\nDan aku pun mengerti apa maunya hati ini\n\nNamun tiba-tiba kau ada yang punya\nHati ini terluka\nSungguh ku kecewa, ingin ku berkata\n\nKasih maaf bila aku jatuh cinta\nMaaf bila saja ku suka\nSaat kau ada yang punya\n\nHaruskah ku pendam rasa ini saja\nAtaukah ku teruskan saja\nHingga kau meninggalkannya dan kita bersama\n\nNamun tiba-tiba kau ada yang punya\nHati ini terluka (terluka)\nSungguh ku kecewa (sungguh ku kecewa) ingin ku berkata\n\nKasih maaf bila aku jatuh cinta\nMaaf bila saja ku suka\nSaat kau ada yang punya\nHaruskah ku pendam rasa ini saja\nAtaukah ku teruskan saja\nHingga kau meninggalkannya dan kita bersama";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_10;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Pop();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Pop();
	}
}

void Back_Pop()   //*Menu Sebelum Memulai Lagu*//
{
	printf("1. Mulai lagu\n2. Kembali kemenu sebelumnya\n");
	printf("\nPilihan anda: ");
	n=0;
	scanf("%d",&n);
		
			switch(n)
			{
				case 1:
					system("cls");
					break;
				case 2:
					system("cls");
					return Pop();
				default:
            		printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           			system("pause");
           			getchar();
           			system ("cls");
           			Back_Pop();
			}
}

void Pop()  //*Menu Judul Lagu POP*//
{
	system("color 5B");                                   //*Perintah Warna Background Program*//
	printf("=========The Joy of Music========== \n\n");   //*Nama Program*//
    printf("Pilih Lagu POP \n");                              //*Menu Pilihan Judul Lagu POP*//
    printf("=============\n");
    printf("1. Best Part \n");
    printf("2. I Have Nothing \n");
    printf("3. My Heart Will Go On \n");
    printf("4. Perfect \n");
    printf("5. God's Plan' \n");
    printf("6. Aku Cinta Dia \n");
    printf("7. Dan\n");
    printf("8. Kali Kedua\n");
    printf("9. Hip Hip Hura\n");
    printf("10. Orang Ketiga\n");
    printf("11. Kembali kemenu sebelumnya\n");             //*Perintah Kembali kemenu pilihan Genre*//
    printf("Silakan pilih lagu yang disukai :");           //*User menginput pilihan*//
    menu=0;                                                //*Return*//
    scanf("%d",&menu);
    printf("\n");
    system("cls");                                        //*Perintah Menghapus Tampilan sebelumnya pada layar*//
    
   
    switch (menu)
	{
           case 1 :
           			Back_Pop();                          //*Tampilan Menu sebelum memulai program*//
            		Best_Part();	                     //*Memulai Lagu*//
		break;
			
			case 2 :
					Back_Pop();
					I_Have_Nothing();
		break;
			
			case 3 :
					Back_Pop();
					My_Heart_Will_Go_On();
		break;
		
			case 4 :
					Back_Pop();
					Perfect();
		break;
		
			case 5 :
					Back_Pop();
					Gods_Plan();
		break;
		
			case 6 :
					Back_Pop();
					Aku_Cinta_Dia();
		break;
			case 7 :
					Back_Pop();
					Dan();
		break;
			case 8 :
					Back_Pop();
					Kali_Kedua();
		break;
			case 9 :
					Back_Pop();
					Hip_Hip_Hura();
		break;
			case 10 :
					Back_Pop();
					Orang_Ke3();
		break;
			case 11 :
					menu_awal();                            //*Tampilan kemenu Genre*//                                             
		break;
			default:                                                                                      //*Tampilan ketika input yang dimasukan user tidak sesuai*//
            	printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");  //*Warning Text*//
           		system("pause");
           		getchar();                                                                                //*Masukkan data yang berupa karakter*//
           		system ("cls");
           		Pop();
	}
}


//*Genre JAZZ*//
void Could_It_Be()   //*Modular Lagu*//
{
	play_1:
			printf("\t\t\t===================\n");
			printf("\t\t\t                   \n");
			printf("\t\t\tC O U L D  I T  B E\n");
			printf("\t\t\t                   \n");
			printf("\t\t\t===================\n");      
        {   
                char print[] = "\nKau datang dan jantungku berdegup kencang\nKau buatku terbang melayang\nTiada ku sangka getaran ini ada\nSaat jumpa yang pertama\n\nMataku tak dapat terlepas darimu\nPerhatikan setiap tingkahmu\nTertawa pada setiap candamu\nSaat jumpa yang pertama\n\nCould it be love, could it be love\nCould it be, could it be, could it be love\nCould it be love, could it be love\nCould this be something that i never had\n\nCould it be love\n\nMataku tak dapat terlepas darimu\nPerhatikan setiap tingkahmu\nTertawa pada setiap candamu\nSaat jumpa yang pertama\n\nCould it be love, could it be love\nCould it be, could it be, could it be love\nCould it be love, could it be love\nCould this be something that i never had\n\nCould it be love, could it be love\nCould it be, could it be, could it be love\nCould it be love, could it be love\nCould this be something that i never had\n\nOh mungkinkah ini cinta\n\nCould it be love, could it be love\nCould it be, could it be, could it be love\nCould it be love, could it be love\nCould this be something that i never had\n\nCould it be love, could it be love\nCould it be, could it be, could it be love\nCould it be love, could it be love\nCould this be something that i never had";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_1;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Jazz();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Jazz();
	}
}

void Everybody_Knew()   //*Modular Lagu*//
{
	play_2:
			printf("\t\t\t==========================\n");
			printf("\t\t\t                          \n");
			printf("\t\t\tE V E R Y B O D Y  K N E W\n");
			printf("\t\t\t                          \n");
			printf("\t\t\t==========================\n");      
        {   
                char print[] = "\n*Ketika ku lihat kau bersama dia\nTak ada penyesalan dalam hidupku\nDan apa yang ku rasakan saat ini\nSeperti dahulu ku tak mengenalmu\n\nKetika ku lihat kau bersama dia\nTak ada lagi hasrat dalam hidupku\nKepada dirimu yang dulu tercinta\nTak ada lagi kenangan, takkan lagi harapan\n\nReff:\nEverybody knew you're a liar\nEverybody knew you're a player\nEverybody knew you're never serious\nRisk your love at me\nAnd i tell you once again baby\n\nKembali *\nKembali ke Reff [3x]\n\nSerious risk your love at me\nAnd i tell you once again oh baby";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_2;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Jazz();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Jazz();
	}
}

void Pilihanku()   //*Modular Lagu*//
{
	play_3:
			printf("\t\t\t=================\n");
			printf("\t\t\t                 \n");
			printf("\t\t\tP I L I H A N K U\n");
			printf("\t\t\t                 \n");
			printf("\t\t\t=================\n");      
        {   
                char print[] = "\nBerjuta rasa rasa yang tak mampu diungkapkan kata-kata\nDengan beribu cara-cara kau selalu membuat ku bahagia\nKau adalah alasan dan jawaban atas semua pertanyaan\nYang benar-benar kuinginkan hanyalah kau untuk selalu di sini ada untukku\nMaukah kau tuk menjadi pilihanku\nMenjadi yang terakhir dalam hidupku\nMaukah kau tuk menjadi yang pertama\nYang selalu ada di saat pagi ku membuka mata\n\nOh..\nIjinkan aku memilikimu, mengasihimu, menjagamu, menyayangimu,\nmemberi cinta\nmemberi semua yang engkau inginkan\nselama aku mampu aku akan berusaha\nmewujudkan semua impian dan harapan\ntuk menjadi kenyataan\n\nMaukah kau tuk menjadi pilihanku\nMenjadi yang terakhir dalam hidupku\nMaukah kau tuk menjadi yang pertama\nYang slalu ada di saat pagi ku membuka mata\n\nJadilah yang terakhir\nTuk jadi yang pertama\nTuk jadi selamanya...\n\nMaukah kau tuk menjadi pilihanku\nMenjadi yang terakhir dalam hidupku\nMaukah kau tuk menjadi yang pertama\nYang selalu ada di saat pagi ku\n\nMaukah kau tuk menjadi pilihanku\nMenjadi yang terakhir dalam hidupku\nMaukah kau tuk menjadi yang pertama\nYang selalu ada di saat pagi ku membuka mata\n\nJadilah yang terakhir\nTuk jadi yang pertama\nTuk jadi selamanya....";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_3;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Jazz();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Jazz();
	}
}

void Menghujam_Jantungku()   //*Modular Lagu*//
{
	play_4:
			printf("\t\t\t====================================\n");
			printf("\t\t\t                                    \n");
			printf("\t\t\tM E N G H U J A M  J A N T U N G K U\n");
			printf("\t\t\t                                    \n");
			printf("\t\t\t====================================\n");      
        {   
                char print[] = "\nSegenap hatiku selalu memujamu\nSeluruh jiwa kupersembahkan untukmu\nSepenuh cintaku merindukan dirimu\nSeutuh gejolak membakar hatiku\n\nBridge:\nSeperti cahaya hadirmu di duniaku\nSeperti ribuan bintang yang menghujam jantungku\n\nO..ow..o..ow..\n\nReff:\nKau membuatku merasakan\nIndahnya jatuh cinta\nIndahnya dicintai\nSaat kau jadi milikku\n\nOh, takkan kulepaskan\nDirimu oh, cintaku\nTeruslah kau bersemi\nDi dalam lubuk hatiku\n\nBack to Bridge:";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_4;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Jazz();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Jazz();
	}
}

void Im_Yours()   //*Modular Lagu*//
{
	play_5:
			printf("\t\t\t================\n");
			printf("\t\t\t                \n");
			printf("\t\t\tI ' M  Y O U R S\n");
			printf("\t\t\t                \n");
			printf("\t\t\t================\n");      
        {   
                char print[] = "\nWell you done done me and you bet I felt it\nI tried to be chill but you're so hot that I melted\nI felt right trough the cracks,now I'm trying to get back\n\nBefore the cool done run out I'll be giving it my bestest\nAnd nothing's going to stop me but divine intervention\nI reckon it's again my turn to win some or learn some\n\nBut I won't hesitate no more,no more\nIt cannot wait,I'm yours\n\nWell up your mind and see like me\nOpen up your plans and damn you're free\nLook into your heart and you'll find love love love love\n\nListen to the music of the moment people, dance and sing\nWe're just one big family\nAnd it's our God-forsaken right to be loved loved loved loved\n\nSo I won't hesitate no more,no more\nIt cannot wait,I'm sure\nThere's no need to complicate,our time is short\nThis is our fate I'm yours\n\nD-d-do do you,but do you,d-d-do\nBut do you want to come on\nScooch on over closer dear\nAnd I will nibble your ear\n\nI've been spending way too long checking my tongue in the mirror\nAnd bending over backwards just to try to see it clearer\nBut my breath fogged up the glass\nAnd so I drew a new face and laughed\n\nI guess what I be saying is there ain't no better reason\nTo rid yourself of vanaties and just go with the seasons\nIt's what we aim to do,our name is our virtue\n\nBut I won't hesitate no more,no more\nIt cannot wait,I'm yours\n\n(I won't hesitate)\nOpen up your mind and see like me\n(no more,no more)Open up your plans and damn you're free\nLook into your heart and you'll find that the sky is yours\n(It cannot wait,I'm sure)\n\nso please don't,please don't,please don't\n(There's no need to complicate)\nThere's no need to complicate\n(Our time is short)\n'Cause our time is short\n(This is our fate)\nThis is,this is,this is our fate\nI'm yours";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_5;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Jazz();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Jazz();
	}
}

void I_Will_Fly()   //*Modular Lagu*//
{
	play_6:
			printf("\t\t\t=================\n");
			printf("\t\t\t                 \n");
			printf("\t\t\tI  W I L L  F L Y\n");
			printf("\t\t\t                 \n");
			printf("\t\t\t=================\n");      
        {   
                char print[] = "\nYou know all the things I've said\nYou know all the things that we have done\nAnd things I gave to you\nThere's a chance for me to say\nHow precious you are in my life\nAnd you know that it's true\n\nTo be with you is all that I need\nCause with you, my life seems brighter and these are all the things\nI wanna say...\n\nI will fly into your arms\nAnd be with you\nTill the end of time\nWhy are you so far away\nYou know it's very hard for me\nTo get myself close to you\n\nYou're the reason why I stay\nYou're the one who cannot believe\nOur Love will never end\nIs it only in my dream?\nYou're the one who cannot see this\nHow could you be so blind?\n\nTo be with you is all that I need\nCause with you, my life seems brighter and these are all the things\nI wanna say...\n\nI will fly into your arms\nAnd be with you\nTill the end of time\nWhy are you so far away\nYou know it's very hard for me\nTo get myself close to you\n\nI wanna get\nI wanna get\nI wanna get myself close to you";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_6;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Jazz();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Jazz();
	}
}

void Sedari_Dulu()   //*Modular Lagu*//
{
	play_7:
			printf("\t\t\t====================\n");
			printf("\t\t\t                    \n");
			printf("\t\t\tS E D A R I  D U L U\n");
			printf("\t\t\t                    \n");
			printf("\t\t\t====================\n");      
        {   
                char print[] = "\nhatiku berharap\nmungkin engkau kan berubah\nbisa mencintai aku\nseperti hatiku pada mu\n\nhujan badai kan ku tempuh\nbintang di langit kan ku raih\nbila harus ku kan merayu\nuntuk cintamu bagi ku\n\nreff:\ncintamu tlah menjadi candu\ncintamu tlah membuat ku membisu\ncintamu oh seindah lagu\nmembuat ku tak bisa berpaling darimu\n\nreff:\nkau adalah belahan jiwa\nku tau itu sayang sedari dulu\nkau cinta yang hembuskan aku\nsurga dunia di sepanjang nafasku\n\nreff:\nkau adalah belahan jiwa\naku cinta kamu sedari dulu\ndan aku tak kan berpaling darimu\nsa...yang....ku...\nhanya kamu....huu...u...uu..\n\ncintaku tlah berlabu\nberhenti selamanya di hati mu\nakan ku kayuh menjauh\nbiar ku rapatkan cintaku pada mu\n\ncintamu tlah menjadi jenuh\ncintamu tlah membuat ku membisu\ncintamu oh seindah lagu\nhanya dirimu satu oh cintaku\n\nkau adalah belahan jiwa\nku tau itu sayang sedari dulu\nkau cinta yang hembuskan aku\nsurga dunia di sepanjang nafasku\n\nkau adalah belahan jiwa\nkau adalah belahan jiwa\nkau adalah belahan jiwa\n\nkembali ke reff:\n....... hanya kamu.....";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_7;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Jazz();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Jazz();
	}
}

void Sama_Sama_Tahu()   //*Modular Lagu*//
{
	play_8:
			printf("\t\t\t==========================\n");
			printf("\t\t\t                          \n");
			printf("\t\t\tS A M A - S A M A  T A H U\n");
			printf("\t\t\t                          \n");
			printf("\t\t\t==========================\n");      
        {   
                char print[] = "\n[Intro]\nSama sama\nSama sama tahu\nAda ada\nAda ada saja\n\n[Verse 1]\nKata orang\nYang baik belum tentu terbaik\nBerulang kali kucoba pergi\nNamun aku berbalik\n\n[Pre-Chorus]\nMungkin berarti ini pertanda\nKau juara di hati\n\n[Chorus]\nKita sama-sama tahu\nBahwa kita sama-sama ragu\nTapi ada, ada saja yang membuatku yakin lagi padamu\nKita sama-sama mau\nKau dan aku mencari jalan\n'tuk bersatu lagi\nMemulai yang baru dengan masa lalu\n\n[Verse 2]\nKadang ku sendiri kadang kumencari\nNamun selalu padamu kukembali\nMungkin berarti ini pertanda\nKau juara di hati\n\n[Back to Chorus]\n\n[Bridge]\nKadang masa depan\nAda di belakang\nMemanggil namamu\nKejarlah\nKadang masa depan\nAda di belakang\nMemanggil namamu\nKejar\n\n[Back to Chorus 2x]\n\n[Outro]\nDengan masa lalu\nDengan masa lalu";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_8;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Jazz();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Jazz();
	}
}

void LOVE()   //*Modular Lagu*//
{
	play_9:
			printf("\t\t\t=============\n");
			printf("\t\t\t             \n");
			printf("\t\t\tL . O . V . E\n");
			printf("\t\t\t             \n");
			printf("\t\t\t=============\n");      
        {   
                char print[] = "\nL is for the way you look at me\nO is for the only one I see\nV is very, very extraordinary\nE is even more than anyone that you adore\n\nAnd love is all that I can give to you\nLove is more than just a game for two\nTwo in love can make it\nTake my heart but please don't break it\nLove was made for me and you\n\nL is for the way you look at me\nO is for the only one I see\nV is very, very extraordinary\nE is even more than anyone that you adore\n\nAnd love is all that I can give to you\nLove, love, love is more than just a game for twovTwo in love can make it\nTake my heart but please don't break it\n'Cause love was made for me and you\nI said love was made for me and you\nYou know that love was made for me and you";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_9;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Jazz();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Jazz();
	}
}

void I_Want_You_Love()   //*Modular Lagu*//
{
	play_10:
			printf("\t\t\t==========================\n");
			printf("\t\t\t                          \n");
			printf("\t\t\tI  W A N T  Y O U  L O V E\n");
			printf("\t\t\t                          \n");
			printf("\t\t\t==========================\n");      
        {   
                char print[] = "\nFor the first time I saw you\nYou make me feel like 2x damn\nI wanna take you 2x to my castle\n\nOr maybe we can chill\nOr maybe we could make love right now (yeah)\nBut I gotta say thatvI want you love\nBaby I'd been looking at you\nI want to touch you love\nBaby I'd been thinking 'bout you\nWe can make some love\nAnd take that closer for you\nYou can take it love (take it love)\nDo whatever you wanna do\n\nBaby I'm ready to take all of you\nI want you to lead me and put me inside you\nAnd baby 'till I lay down and enjoy the ride\nI will kiss you from the neck and push you hard\nYou can chill down\nBut you call down when you take it all\nAnd you screamin' loud and you call my name\nAnd I beg u all\nThere you got me good and it feels so good\nAnd I keep you in my arms\n\nOh but I gotta say\nI want you love\nBaby I'd been looking at you\nI want to touch you love\nBaby I'd been thinking 'bout you\nWe can make some love (alright)\nAnd take that closer for you\nYou can take it love (baby)\nDo whatever you wanna do\nI want you love\nOh baby I'd been looking at you\nI want to touch you love\nBaby I'd been thinking 'bout you\nWe can make some love (make some love)\nAnd take that closer for you\nYou can take it love (now)\nDo whatever you wanna do\nI want you love, baby\nOh baby I'd been looking at you\nI want to touch you love, baby\nOh baby I'd been thinking 'bout you\nWe can make some love, baby\nAnd take that closer for you\nYou can take it love, baby\nDo whatever you wanna do\n\nI want you love\nBaby I'd been looking at you\nI want to touch you love\nBaby I'd been thinking 'bout you\nWe can make some love, baby\nAnd take that closer for you\nYou can take it love (take it love)\nDo whatever you wanna do\n\nI want your love, baby\nBaby I'd been looking at you\nI want to touch ur love baby\nBaby id been thinking bout you\nWe can make some love\nAnd take that closer for you\nYou can take it love 3x now\nDo whatever you wanna do";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_10;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Jazz();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Jazz();
	}
}

void Back_Jazz()   //*Menu Sebelum Memulai Lagu*//
{
	printf("1. Mulai lagu\n2. Kembali kemenu sebelumnya\n");
	printf("\nPilihan anda: ");
	n=0;
	scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					system("cls");
					break;
				case 2:
					system("cls");
					return Jazz();
				default:
            		printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           			system("pause");
           			getchar();
           			system ("cls");
           			Back_Jazz();
			}
}

void Jazz()   //*Menu Judul Lagu JAZZ*//
{
	system("color 4E");
	printf("=========The Joy of Music========== \n\n");
    printf("Pilih Lagu JAZZ \n");
    printf("=============\n");
    printf("1. Could It Be \n");
    printf("2. Everybody Knew \n");
    printf("3. Pilihanku \n");
    printf("4. Menghujam Jantungku\n");
    printf("5. I'm Yours\n");
    printf("6. I Will Fly\n");
    printf("7. Sedari Dulu\n");
    printf("8. Sama-sama Tahu\n");
    printf("9. L.O.V.E\n");
    printf("10. I Want You Love\n");
    printf("11. Kembali kemenu sebelumnya\n");
    printf("Silakan pilih lagu yang disukai:");
    n=0;
    scanf("%d",&menu);
    printf("\n");
    system("cls");
    
    switch (menu)
	{
           case 1 :
           			Back_Jazz();
           			Could_It_Be();
		break;
	
			case 2 :
           			Back_Jazz();
           			Everybody_Knew();
		break;
		
			case 3 :
          			Back_Jazz();
           			Pilihanku();
		break;
		
			case 4 :
					Back_Jazz();
					Menghujam_Jantungku();
		break;
		
			case 5 :
					Back_Jazz();
					Im_Yours();
		break;
		
			case 6 :
					Back_Jazz();
					I_Will_Fly();
		break;
		
			case 7 :
					Back_Jazz();
					Sedari_Dulu();
		break;
		
			case 8 :
					Back_Jazz();
					Sama_Sama_Tahu();
		break;
		
			case 9 :
					Back_Jazz();
					LOVE();
		break;
		
			case 10 :
					Back_Jazz();
					I_Want_You_Love();
		break;
			case 11 :
					menu_awal();
		break;
			default:
            		printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           			system("pause");
           			getchar();
           			system("cls");
           			Jazz();
	}
}


//*Genre INDIE*//
void Sampai_Jadi_Debu()   //*Modular Lagu*//
{
	play_1:
			printf("\t\t\t=============================\n");
			printf("\t\t\t                             \n");
			printf("\t\t\tS A M P A I  J A D I  D E B U\n");
			printf("\t\t\t                             \n");
			printf("\t\t\t=============================\n");      
        {   
                char print[] = "\nBadai Tuan telah berlalu\nSalahkah ku menuntut mesra?\nTiap pagi menjelang\nKau di sampingku\nKu aman ada bersama mu\n\nSelamanya\nSampai kita tua\nSampai jadi debu\nKu di liang yang satu\nKu di sebelahmu\n\nBadai Puan telah berlalu\nSalahkah ku menuntut mesra?\nTiap taufan menyerang\nKau di sampingku\nKau aman ada bersama ku";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_1;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Indie();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Indie();
	}
}

void Akad()   //*Modular Lagu*//
{
	play_2:
			printf("\t\t\t=======\n");
			printf("\t\t\t       \n");
			printf("\t\t\tA K A D\n");
			printf("\t\t\t       \n");
			printf("\t\t\t=======\n");      
        {   
                char print[] = "\nBetapa bahagianya hatiku saat\nKu duduk berdua denganmu\nBerjalan bersamamu\nMenarilah denganku\n\nNamun bila hari ini adalah yang terakhir\nNamun ku tetap bahagia\nSelalu kusyukuri\nBegitulah adanya\n\nNamun bila kau ingin sendiri\nCepat cepatlah sampaikan kepadaku\nAgar ku tak berharap\ndan buat kau bersedih\n\nBila nanti saatnya t'lah tiba\nKuingin kau menjadi istriku\nBerjalan bersamamu dalam terik dan hujan\nBerlarian kesana-kemari dan tertawa\n\nNamun bila saat berpisah t'lah tiba\nIzinkanku menjaga dirimu\nBerdua menikmati pelukan diujung waktu\nSudilah kau temani diriku\n\nNamun bila kau ingin sendiri\nCepat cepatlah sampaikan kepadaku\nAgar ku tak berharap\ndan buat kau bersedih\n\nBila nanti saatnya t'lah tiba\nKuingin kau menjadi istriku\nBerjalan bersamamu dalam terik dan hujan\nBerlarian kesana-kemari dan tertawa\n\nNamun bila saat berpisah t'lah tiba\nIzinkanku menjaga dirimu\nBerdua menikmati pelukan diujung waktu\nSudilah kau temani diriku\n\nSudilah kau menjadi temanku\nSudilah kau menjadi\nistriku";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_2;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Indie();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Indie();
	}
}

void Zona_Nyaman()   //*Modular Lagu*//
{
	play_3:
			printf("\t\t\t====================\n");
			printf("\t\t\t                    \n");
			printf("\t\t\tZ O N A  N Y A M A N\n");
			printf("\t\t\t                    \n");
			printf("\t\t\t====================\n");      
        {   
                char print[] = "\n[Verse 1]\nPagi ke pagi ku terjebak di dalam ambisi\nSeperti orang-orang berdasi yang gila materi\nRasa bosan membukakan jalan mencari peran\nKeluarlah dari zona nyaman\n\n[Chorus]\nSembilu yang dulu\nBiarlah berlalu\nBekerja bersama hati\nKita ini insan bukan seekor sapi\n\nSembilu yang dulu\nBiarlah membiru\nBerkarya bersama hati\n\n[Verse 2]\nWaktu ke waktu perlahan kurakit egoku\nMerangkul orang-orang yang mulai sejiwa denganku\nKe-BM-an membukakan jalan mencari teman\nBergeraklah dari zona nyaman\n\n[Back to Chorus]\n\n[Interlude]\nDiam dan mati\nMilik dia yang tak bisa berdiri, berdiri\nDiam dan mati\nMilik dia yang tak bisa berdiri\nBerdiri di kakinya sendiri\n\n[Back to Chorus]\n\n[Outro]\nTanamkan pesanku\nAgar tak keliru\nBekerja bersama hati";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_3;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Indie();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Indie();
	}
}

void Desember()   //*Modular Lagu*//
{
	play_4:
			printf("\t\t\t===============\n");
			printf("\t\t\t               \n");
			printf("\t\t\tD E S E M B E R\n");
			printf("\t\t\t               \n");
			printf("\t\t\t===============\n");      
        {   
                char print[] = "\nSelalu ada yang bernyanyi dan berelegi\nDibalik awan hitam\nSmoga ada yang menerangi sisi gelap ini,\nMenanti..\nSeperti pelangi setia menunggu hujan reda\n\nAku selalu suka sehabis hujan dibulan desember,\nDi bulan desember\n\nSampai nanti ketika hujan tak lagi\nMeneteskan duka meretas luka\nSampai hujan memulihkan luka";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_4;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Indie();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Indie();
	}
}

void Teralih()   //*Modular Lagu*//
{
	play_5:
			printf("\t\t\t=============\n");
			printf("\t\t\t             \n");
			printf("\t\t\tT E R A L I H\n");
			printf("\t\t\t             \n");
			printf("\t\t\t=============\n");      
        {   
                char print[] = "\nKita teralih terlalu tinggi\nTerbuai kan mentari, tak mau kembali\n\nKita melayang terlalu lama\nMenghangatkan segala dingin dunia\n\nKita teralih\nKita teralih\nKita teralih\n\nTibalah malam, herannya lelah\nTak kunjung datang jua\n\nKita teralih (kita teralih)\nKita teralih\nKita teralih\nKita teralih";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_5;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Indie();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Indie();
	}
}

void Resah()   //*Modular Lagu*//
{
	play_6:
			printf("\t\t\t=========\n");
			printf("\t\t\t         \n");
			printf("\t\t\tR E S A H\n");
			printf("\t\t\t         \n");
			printf("\t\t\t=========\n");      
        {   
                char print[] = "\nAku ingin berjalan bersamamu\nDalam hujan dan malam gelap\nTapi aku tak bisa melihat matamu\n\nAku ingin berdua denganmu\nDi antara daun gugur\nAku ingin berdua denganmu\nTapi aku hanya melihat keresahanmu\n\nAku menunggu dengan sabar\nDi atas sini, melayang-layang\nTergoyang angin, menantikan tubuh itu\n\nAku ingin berdua denganmu\nDi antara daun gugur\nAku ingin berdua denganmu\nTapi aku hanya melihat keresahanmu\n\nIngin berdua denganmu\nDi antara daun gugur\nAku ingin berdua denganmu\nTapi aku hanya melihat keresahanmu";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_6;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Indie();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Indie();
	}
}

void Sendu_Melagu()   //*Modular Lagu*//
{
	play_7:
			printf("\t\t\t======================\n");
			printf("\t\t\t                      \n");
			printf("\t\t\tS E N D U  M E L A G U\n");
			printf("\t\t\t                      \n");
			printf("\t\t\t======================\n");      
        {   
                char print[] = "\n[Verse 1]\nSemua yang kau rindu\nSemua menjadi abu\nLangkah mu tak berkawan\nKau telah sia-siakan\n\n[Verse 2]\nWaktu yang kau tau\nWaktu yang berlalu\nIngatmu kau merayu\nIngatnya kau berlalu\n\n[Hook]\nSendu melagu\nSendu melagu\nSendu melagu\n\n[Verse 3]\nSemua yang kau rindu\nSemua menjadi abu\nLangkah mu tak berkawan\nKau telah sia-siakan\n\n[Bridge]\nWaktu yang kau tau\nWaktu yang berlalu\nIngat mu kau merayu\nIngatnya kau berlalu\nIngatnya kau berlalu\nIngatnya kau berlalu\n\n[Back to Hook]\n\n[Outro]\nSemua yang kau rindu\nIngatnya kau berlalu\nSendu melagu\n\nSemua yang kau rindu\nIngatnya kau berlalu\nSendu melagu\nSemua yang kau rindu\nIngatnya kau berlalu\nSendu melagu\nSemua yang kau rindu\nIngatnya kau berlalu";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_7;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Indie();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Indie();
	}
}

void Filosofi_dan_Logika()   //*Modular Lagu*//
{	
	play_8:
			printf("\t\t\t===================================\n");
			printf("\t\t\t                                   \n");
			printf("\t\t\tF I L O S O F I  D A N  L O G I K A\n");
			printf("\t\t\t                                   \n");
			printf("\t\t\t===================================\n");      
        {   
                char print[] = "\nMenempuh jalan yang panjang dan penuh dengan likunya\nEgo ku ego mu mengajar kita tuk berhenti sejenak\n\nFatamorgana jalan kehidupan\nSelami arti makna yang tersimpan di relung jiwa\n\nAku, kamu dan logika kita, mungkin memang berbeda\nAku, kamu dan cerita kita, ditemukan dalam kasih sayang semesta, kurnia kita\n\nKatakan padaku filosofi apa yang akan kau selami\namarah dan dendam tak bisa lagi untuk kita warisi";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_8;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Indie();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Indie();
	}
}

void Yang_Patah_Tumbuh_Yang_Hilang_Berganti()    //*Modular Lagu*//
{
	play_9:
			printf("\t\t\t======================================================================\n");
			printf("\t\t\t                                                                      \n");
			printf("\t\t\tY A N G  P A T A H  T U M B U H  Y A N G  H I L A N G  B E R G A N T I\n");
			printf("\t\t\t                                                                      \n");
			printf("\t\t\t======================================================================\n");      
        {   
                char print[] = "\n[Verse 1]\nJatuh dan tersungkur di tanah aku\nBerselimut debu sekujur tubuhku\nPanas dan menyengat\nRebah dan berkarat\n\n[Chorus]\nYang, yang patah tumbuh, yang hilang berganti\nYang hancur lebur akan terobati\nYang sia-sia akan jadi makna\nYang terus berulang suatu saat henti\nYang pernah jatuh ‘kan berdiri lagi\nYang patah tumbuh, yang hilang berganti\n\n[Verse 2]\nDi mana ada musim yang menunggu?\nMeranggas merapuh, berganti dan luruh\nBayang yang berserah\nT’rang di ujung sana\n\n[Back to Chorus 3x]";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_9;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Indie();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Indie();
	}
}

void Dialog_Hujan()   //*Modular Lagu*//
{
	play_10:
			printf("\t\t\t======================\n");
			printf("\t\t\t                      \n");
			printf("\t\t\tD I A L O G  H U J A N\n");
			printf("\t\t\t                      \n");
			printf("\t\t\t======================\n");      
        {   
                char print[] = "\nBicara rindu\nBicara haru\nLuangkan ruang imajimu\n\nBernyanyi merdu\nBernyanyi sendu\nBebaskan birunya hatimu\n\nTanpa kata tanpa nada\nRintik hujan pun menafsirkan kedamaian\nHanya rasa hanya prasangka\nyang terdengar di dalam Dialog Hujan\n\nTanpa kata tanpa nada\nRintik hujan pun menafsirkan kedamaian\nHanya rasa hanya prasangka\nyang terdengar di dalam\n\nTanpa kata tanpa nada\nRintik hujan pun menafsirkan kedamaian\nHanya rasa hanya prasangka\nyang terdengar di dalam Dialog Hujan";
				int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_10;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return Indie();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return Indie();
	}
}

void Back_Indie()   //*Menu Sebelum Memulai Lagu*//
{
	printf("1. Mulai lagu\n2. Kembali kemenu sebelumnya\n");
	printf("\nPilihan anda: ");
	n=0;
	scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					system("cls");
					break;
				case 2:
					system("cls");
					return Indie();
				default:
            		printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           			system("pause");
           			getchar();
           			system ("cls");
           			Back_Indie();
			}
}

void Indie()   //*Menu Judul Lagu INDIE*//
{
	system("color 7C");
	printf("=========The Joy of Music========== \n\n");
    printf("Pilih Lagu INDIE\n");
    printf("=============\n");
    printf("1. Sampai Jadi Debu\n");
    printf("2. Akad\n");
    printf("3. Zona Nyaman\n");
    printf("4. Desember\n");
    printf("5. Teralih\n");
    printf("6. Resah\n");
    printf("7. Sendu Melagu\n");
    printf("8. Filosofi dan Logika\n");
    printf("9. Yang Patah Tumbuh, Yang Hilang Berganti\n");
    printf("10. Dialog Hujan\n");
    printf("11. Kembali kemenu sebelumnya\n");
    printf("Silakan pilih lagu yang disukai :");
    menu=0;
    scanf("%d",&menu);
    printf("\n");
    system("cls");
    
     switch (menu)
	{
           case 1 :
           			Back_Indie();
           			Sampai_Jadi_Debu();
		break;
		
			case 2 :
					Back_Indie();
					Akad();
		break;
		
			case 3 :
					Back_Indie();
					Zona_Nyaman();
		break;
		
			case 4 :
					Back_Indie();
					Desember();
		break;
		
			case 5 :
					Back_Indie();
					Teralih();
		break;
		
			case 6 :
					Back_Indie();
					Resah();
		break;
		
			case 7 :
					Back_Indie();
					Sendu_Melagu();
		break;
		
			case 8 :
					Back_Indie();
					Filosofi_dan_Logika();
		break;
		
			case 9 :
					Back_Indie();
					Yang_Patah_Tumbuh_Yang_Hilang_Berganti();
		break;
		
			case 10 :
					Back_Indie();
					Dialog_Hujan();
		break;
			case 11 :
					menu_awal();
		break;
		
			default:
            		printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           			system("pause");
           			getchar();
           			system("cls");
           			Indie();
}
}


//*Genre NEW RELEASE*//
void Bloom()   //*Modular Lagu*//
{
	play_1:
			printf("\t\t\t=========\n");
			printf("\t\t\t         \n");
			printf("\t\t\tB L O O M\n");
			printf("\t\t\t         \n");
			printf("\t\t\t=========\n");      
        {   
                char print[] = "\n[Verse 1]\nTake a trip into my garden\nI've got so much to show ya\nThe fountains and the waters\nAre begging just to know ya\n\n[Refrain]\nAnd it's true, baby\nI've been saving this for you, baby\n\n[Verse 2]\nI guess it's something like a fun fair\nPut gas into the motor\nAnd boy I'll meet you right there\nWe'll ride the rollercoaster\n\n[Refrain]\n'Cause it's true, baby\nI've been saving this for you, baby\n\n[Pre-Chorus]\nI need to\nTell me right before it goes down\nPromise me you'll\nHold my hand if I get scared now\nMight tell you to\nTake a second, baby, slow it down\nYou should know I, you should know I\n\n[Chorus]\n(Yeah I bloom) I bloom just for you\n(I bloom) just for you\n(Yeah I bloom) I bloom just for you\n(I bloom) just for you\nCome on, baby, play me like a love song\nEvery time it comes on\nI get this sweet desire\n(Yeah I bloom) I bloom just for you\n(I bloom) just for you\n\n[Verse 3]\nNow it's the perfect season\nYeah, let's go for it this time\nWe're dancing with the trees and\nI've waited my whole life\n\n[Refrain]\nIt's true, baby\nI've been saving this for you, baby\n\n[Pre-Chorus]\nI need you to\nTell me right before it goes down\nPromise me you'll\nHold my hand if I get scared now\nMight tell you to\nTake a second, baby, slow it down\nYou should know I, you should know I\n\n[Back to Chorus]\n\n[Bridge]\nJust for you\nI bloom just for you\nI bloom just for you\nBaby, baby, I've been saving this for you, baby\nBaby, baby, I've been saving this for you, baby\n\n[Back to Chorus]\n\n[Outro]\nJust for you\nI bloom just for you\nI bloom just for you\nJust for you\nI bloom just for you\nI bloom just for you";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_1;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return New_Release();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return New_Release();
	}
}

void The_Way_Iam()   //*Modular Lagu*//
{
	play_2:
			printf("\t\t\t====================\n");
			printf("\t\t\t                    \n");
			printf("\t\t\tT H E  W A Y  I  A M\n");
			printf("\t\t\t                    \n");
			printf("\t\t\t====================\n");      
        {   
                char print[] = "\n[Intro]\nYeah\n\n[Verse 1]\nMaybe I'ma get a little anxious\nMaybe I'ma get a little shy\n'Cause everybody's trying to be famous\nAnd I'm just trying to find a place to hide (oh)\nAll I wanna do is just hold somebody\nBut no one ever wants to get to know somebody\nI don't even know how to explain this\nI don't even think I'm gonna try\n\n[Pre-Chorus]\nAnd that's ok\nI promise myself one day\nHey!\n\n[Chorus]\nI'ma tell 'em all\nI'ma tell 'em all that you could either hate me or love me\nBut that's just the way I am\nI'ma tell 'em all\nI'ma tell 'em all that you could either hate me or love me\nBut that's just the way I am\nThat's just the way I am, that's just the way I am\nThat's just the way I am, that's just the way I am\n\n[Verse 2]\nMaybe I'ma get a little nervous\nMaybe I don't go out anymore (oh)\nFeelin' like I really don't deserve this (-serve this)\nLife ain't nothing like it was before (ain't nothing like before)\n'Cause all I wanna do is just hold somebody\nBut no one ever wants to get to know somebody\nIf you go and look under the surface (surface)\nBaby, I'm a little insecure\n\n[Back to Pre-Chorus]\n\n[Back to Chorus]\n\n[Post-Chorus]\nI'ma tell 'em all (that's just the way I am)\nI'ma tell 'em all that you could either hate me or love me\n(that's just the way I am, that's just the way I am)\nBut that's just the way I am\n\n[Bridge]\nAm, am\nYeah, this is what you wanted\nOh, this is what you wanted\nI am, am, am\nYeah, this is what you wanted\nOh, this is what you wanted all along\nEverybody's trying to be famous\nAnd I'm just trying to find a place to hide\nHey!\n\n[Back to Chorus]\n\n[Back to Post-Chorus]";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_2;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return New_Release();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return New_Release();
	}
}

void You_Can_Cry()   //*Modular Lagu*//
{
	play_3:
			printf("\t\t\t===================\n");
			printf("\t\t\t                   \n");
			printf("\t\t\tY O U  C A N  C R Y\n");
			printf("\t\t\t                   \n");
			printf("\t\t\t===================\n");      
        {   
                char print[] = "\n[Chorus: James Arthur]\nOh, you can cry on my shoulder\nEverything's alright\nAll the pain is finally over\nYou can close your eyes\n\n[Verse 1: Juicy J]\nListen to me, close your eyes baby, picture this:\nSunset, on the ocean, that's Pacific\nNew whips, new tiffs, now your wrist lit\nYou can get anything off your wish list\nEvery day is Christmas (I got you)\nLook, I promise you won’t wanna miss this (I got you)\nAll I got is bread like a biscuit (biscuit)\nGot a secret location, unlisted\nWe can get twisted (woo)\nI don’t wanna wait (hey)\nI don’t need a break (hey)\nYou just bring the gift (hey)\nI’ma bring the cake (uh-huh)\nGo for two rounds\nLight a spliff (uh-huh)\nYou laying next to a star, make a wish (a wish)\nI got somethin’ you can ride if you need a lift (yessir)\nWhenever you with me, the problems don’t exist\nAnywhere you wanna go, scratch it off your list\nYou wouldn’t even wanna cry if you imagine this\n\n[Back to Chorus: James Arthur & (Juicy J)]\n\n[Verse 2: Juicy J]\nYou was up late night callin' (woo)\nI was up late night ballin' (woo)\nAlmost made you wanna throw the towel in (hey)\nAlmost made you wanna trade the style in (uh-oh)\nCountin' up hundreds by the thousands (uh-oh)\n100 stacks, run it back, hestervDouble up, one more time, no pressure (no pressure)\nI believe in you, so you next up\nI put diamonds in your cross, God bless ya\nYou put the work in (woo), you deserve that\nHard work pays off, I know you heard of that (heard of that)\nSlow it down, lemme show you how to work that (oh)\nThat coupe you was dreamin' 'bout, you can swerve that (it's yours)\nYou just gotta take a chance, take control of that\nYou just gotta chase the dream, get a hold of that (uh-huh)\nThen you put in overtime, nothing over that\nThen you do it one more time, gotta run it back\n\n[Back to Chorus: James Arthur]\n\n[Interlude: Juicy J]\nYou can get anythin' you want\nYou what I'm sayin'?\nYou want that over there? You want that over there?\nI got you\n\n[Back to Chorus: James Arthur]";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			goto play_3;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return New_Release();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return New_Release();
	}
}

void Rockstar()   //*Modular Lagu*//
{
	play_4:
			printf("\t\t\t================\n");
			printf("\t\t\t                \n");
			printf("\t\t\tR O C K  S T A R\n");
			printf("\t\t\t                \n");
			printf("\t\t\t================\n");      
        {   
                char print[] = "\nAyy, I've been fuckin' hoes and poppin' pillies\nMan, I feel just like a rockstar (star)\nAyy, ayy, all my brothers got that gas\nAnd they always be smokin' like a Rasta\nFuckin' with me, call up on a Uzi\n\nAnd show up, man them the shottas\nWhen my homies pull up on your block\nThey make that thing go grrra-ta-ta-ta (pow, pow, pow)\nAyy, ayy, switch my whip, came back in black\nI'm startin' sayin', Rest in peace to Bon Scott\nAyy, close that door, we blowin' smoke\nShe ask me light a fire like I'm Morrison\nAyy, act a fool on stage\nProlly leave my fuckin' show in a cop car\nAyy, shit was legendary\n\nThrew a TV out the window of the Montage\nCocaine on the table, liquor pourin', don't give a damn\nDude, your girlfriend is a groupie, she just tryna get in\nSayin'I'm with the band\nAyy, ayy, now she actin' outta pocket\nTryna grab up from my pants";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_4;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return New_Release();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return New_Release();
	}
}

void IDGAF()   //*Modular Lagu*//
{
	play_5:
			printf("\t\t\t=========\n");
			printf("\t\t\t         \n");
			printf("\t\t\tI D G A F\n");
			printf("\t\t\t         \n");
			printf("\t\t\t=========\n");      
        {   
                char print[] = "\nYou call me all friendly\nTellin' me how much you miss me\nThat's funny, I guess you've heard my songs\nWell, I'm too busy for your business\nGo find a girl who wants to listen\n\n'Cause if you think I was born yesterday\nYou have got me wrong\nSo I cut you off\nI don't need your love\n'Cause I already cried enough\nI've been done\nI've been movin' on since we said goodbye\nI cut you off\nI don't need your love, so you can try all you want\nYour time is up, I'll tell you why\n\nYou say you're sorry\nBut it's too late now\nSo save it, get gone, shut up\n'Cause if you think I care about you now\nWell, boy, I don't give a fuck";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_5;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return New_Release();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return New_Release();
	}
}

void One_Kiss()   //*Modular Lagu*//
{
	play_6:
			printf("\t\t\t==============\n");
			printf("\t\t\t              \n");
			printf("\t\t\tO N E  K I S S\n");
			printf("\t\t\t              \n");
			printf("\t\t\t==============\n");     
        {   
                char print[] = "\nLet me take the night, I love real easy\nAnd I know that you'll still wanna see me\nOn the Sunday morning, music real loud\nLet me love you while the moon is still out\nSomething in you, lit up heaven in me\n\nThe feeling won't let me sleep\n'Cause I'm lost in the way you move, the way you feel\nOne kiss is all it takes\nFallin' in love with me\nPossibilities\n\nI look like all you need\nOne kiss is all it takes\nFallin' in love with me\nPossibilities\nI look like all you need";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_6;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return New_Release();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return New_Release();
	}
}

void Stir_Fly()   //*Modular Lagu*//
{
	play_7:
	    	printf("\t\t\t==============\n");
			printf("\t\t\t              \n");
			printf("\t\t\tS T I R  F L Y\n");
			printf("\t\t\t              \n");
			printf("\t\t\t==============\n");      
        {   
                char print[] = "\nWoo, woo, woo, woo\nWoo, woo, woo, woo\n\nDance with my dogs in the nighttime (wroof)\nTrap nigga with the chickens like Popeye's (Popeye's)\nMoney changin' colors like tie-dye (tie-dye)\nI'm just tryna get it, I ain't tryna die (whoa)\nShe got a big ol' onion booty, make the world cry (cry)\nIn the kitchen, wrist twistin' like a stir fry (whip it)\nHold them bands down (hey)\nHold your mans down (hey)\nWho told you come around? (who?)\nThis that trap sound (trap)\n\nDesigner clothes (clothes), fashion shows (shows)\nTrap, house (house), made of gold (gold)\nControl the bag now (control it)\nNo need to brag now (no need)\nAyy, put the mask down (mask)\nWe livin' fast now (fast)\nFinest hoes (finest), wrist froze (froze)\nWe can go (we can), coast to coast (coast)";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			system("cls");
			goto play_7;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return New_Release();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return New_Release();
	}
}

void Tukar_Jiwa()   //*Modular Lagu*//
{
	play_8:
	    	printf("\t\t\t==================\n");
			printf("\t\t\t                  \n");
			printf("\t\t\tT U K A R  J I W A\n");
			printf("\t\t\t                  \n");
			printf("\t\t\t==================\n");      
        {   
                char print[] = "\nAku kehabisan cara tuk jelaskan padamu\nMengapa sulit tuk lupakanmu\nAku kehabisan cara tuk gambarkan padamu\nKau di mata dan di pandanganku huu uuu\n\nCoba satu hari saja kau jadi diriku\nKau akan mengerti\nBagaimana ku melihatmu, mengagumimu, menyayangimu\nDari sudut pandangku, dari sudut pandangku\n\nAku kehabisan cara tuk gambarkan padamu\nKau di mata dan di pandanganku\nSeandainya satu hari bertukar jiwa\nKau akan mengerti dan berhenti bertanya-tanya\n\nCoba satu hari saja kau jadi diriku\nKau akan mengerti bagaimana ku melihatmu";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	
	switch(n)
	{
			case 1:
				system("cls");
				goto play_8;
				break;
			case 2:
				system("cls");
				return menu_awal();
			case 3:
				system("cls");
				return New_Release();
			default:
	            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
	           	system("pause");
	           	getchar();
	           	system("cls");
				return New_Release();
	}
}

void Dive()   //*Modular Lagu*//
{
	play_9:
	    	printf("\t\t\t=======\n");
			printf("\t\t\t       \n");
			printf("\t\t\tD I V E\n");
			printf("\t\t\t       \n");
			printf("\t\t\t=======\n");      
        {   
                char print[] = "\nMaybe I came on too strong\nMaybe I waited too long\nMaybe I played my cards wrong\nOh, just a little bit wrong\nBaby I apologize for it\nI could fall, or I could fly\nHere in your aeroplane\n\nAnd I could live, I could die\nHanging on the words you say\nAnd I’ve been known to give my all\nAnd jumping in harder than\nTen thousand rocks on the lake\nSo don’t call me baby\n\nUnless you mean it\nDon’t tell me you need me\nIf you don’t believe it\nSo let me know the truth\nBefore I dive right into you";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	
	switch(n)
	{
			case 1:
				system("cls");
				goto play_9;
				break;
			case 2:
				system("cls");
				return menu_awal();
			case 3:
				system("cls");
				return New_Release();
			default:
	            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
	           	system("pause");
	           	getchar();
	           	system("cls");
				return New_Release();
	}
}

void Paris_In_The_Rain()   //*Modular Lagu*//
{
	play_10:
	    	printf("\t\t\t============================\n");
			printf("\t\t\t                            \n");
			printf("\t\t\tA R I S  I N  T H E  R A I N\n");
			printf("\t\t\t                            \n");
			printf("\t\t\t============================\n");      
        {   
                char print[] = "\nAll I know is (ooh ooh ooh)\nWe could go anywhere, we could do\nAnything, girl, whatever the mood we're in\nYeah all I know is (ooh ooh ooh)\nGetting lost late at night, under stars\n\nFinding love standing right where we are, your lips\nThey pull me in the moment\nYou and I alone and\nPeople may be watching, I don't mind\n'Cause anywhere with you feels right\nAnywhere with you feels like\n\nParis in the rain\nParis in the rain\nWe don't need a fancy town\nOr bottles that we can't pronounce\n'Cause anywhere, babe\nIs like Paris in the rain";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	
	switch(n)
	{
			case 1:
				system("cls");
				goto play_10;
				break;
			case 2:
				system("cls");
				return menu_awal();
			case 3:
				system("cls");
				return New_Release();
			default:
	            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
	           	system("pause");
	           	getchar ();
	           	system("cls");
				return New_Release();
	}
}

void Tired()  //*Modular Lagu*//
{
	play_11:
	    	printf("\t\t\t=========\n");
			printf("\t\t\t         \n");
			printf("\t\t\tT I R E D\n");
			printf("\t\t\t         \n");
			printf("\t\t\t=========\n");      
        {   
                char print[] = "\nI see those tears in your eyes\nI feel so helpless inside\nOh love, there's no need to hide\nJust let me love you when your heart is tired\nCold hands, red eyes\n\nPacked your bags at midnight\nThey've been there for weeks\nYou don't know what goodbye means\nJust roll up a cigarette\nJust forget about this mess\nWaiting on the sidelines\n\nFrom the sidelines\nI see those tears in your eyes\nAnd I feel so helpless inside\nOh love, there's no need to hide\nJust let me love you when your heart is tired";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	
	switch(n)
	{
			case 1:
				system("cls");
				goto play_11;
				break;
			case 2:
				system("cls");
				return menu_awal();
			case 3:
				system("cls");
				return New_Release();
			default:
	            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
	           	system("pause");
	           	getchar();
	           	system("cls");
				return New_Release();
	}
}

void Coming_Home()   //*Modular Lagu*//
{
	play_12:
	    	printf("\t\t\t====================\n");
			printf("\t\t\t                    \n");
			printf("\t\t\tC O M I N G  H O M E\n");
			printf("\t\t\t                    \n");
			printf("\t\t\t====================\n");      
        {   
                char print[] = "\nI've been stuck in motion\nMoving too fast\nTryna catch a moment but it slips through my hands\nAll I see are long days and dark nights\nI'm lost without you, but I'm on my way, so hold tight\nI'm coming home tonight\n\nMeet me in the valley where the kids collide into the morning\nOh my god, my town is coming alive (coming alive)\nI'm coming home tonight, I know you're ready for the sparks to fly\nInto the morning\nOh my god, my town is coming alive\n'Cause I'm coming home tonight\n'Cause I'm coming home tonight\n\nDon't wanna spend my whole life catching my breath\n'Cause I've been running 'round and 'round and 'round\nAnd I've got nothing left\nThere's nothing like a sunset skyline\nTo let you know you're almost home\nSo breathe in, and hold tight";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
	
	switch(n)
	{
			case 1:
				system("cls");
				goto play_12;
				break;
			case 2:
				system("cls");
				return menu_awal();
			case 3:
				system("cls");
				return New_Release();
			default:
	            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
	           	system("pause");
	           	getchar();
	           	system("cls");
				return New_Release();
	}
}

void Back_New_Release()   //*Menu Sebelum Memulai Lagu*//
{
	printf("1. Mulai lagu\n2. Kembali kemenu sebelumnya\n");
	printf("\nPilihan anda: ");
	n=0;
	scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					system("cls");
					break;
				case 2:
					system("cls");
					return New_Release();
				default:
            		printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           			system("pause");
           			getchar();
           			system ("cls");
           			Back_New_Release();
			}
}

void New_Release()   //*Menu Judul Lagu NEW RELEASE*//
{
	system("color 4A");
	printf("=========The Joy of Music========== \n\n");
    printf("Pilih Lagu NEW RELEASE \n");
    printf("=============\n");
    printf("1. Bloom\n");
    printf("2. The Way I'am\n");
    printf("3. You Can Cry\n");
    printf("4. Rockstar\n");
    printf("5. IDGAF\n");
    printf("6. One Kiss\n");
    printf("7. Stir Fly\n");
    printf("8. Tukar jiwa\n");
    printf("9. Dive\n");
    printf("10. Paris In The Rain\n");
    printf("11. Tired\n");
    printf("12. Coming home\n");
    printf("13. Kembali kemenu sebelumnya\n");
    printf("Silakan pilih lagu yang disukai :");
    menu=0;
    scanf("%d",&menu);
    printf("\n");
    system("cls");
    
     switch (menu)
	{
           case 1 :
           			Back_New_Release();
           			Bloom();
		break;
			case 2 :
					Back_New_Release();
					The_Way_Iam();
		break;
			case 3 :
					Back_New_Release();
					You_Can_Cry();
		break;
			case 4:
					Back_New_Release();
					Rockstar();
		break;
			case 5:
					Back_New_Release();
					IDGAF();
		break;
			case 6:
					Back_New_Release();
					One_Kiss();
		break;
			case 7:
					Back_New_Release();
					Stir_Fly();
		break;
			case 8:
					Back_New_Release();
					Tukar_Jiwa();
		break;
			case 9:
					Back_New_Release();
					Dive();
		break;
			case 10:
					Back_New_Release();
					Paris_In_The_Rain();
		break;
			case 11:
					Back_New_Release();
					Tired();
		break;
			case 12:
					Back_New_Release();
					Coming_Home();
		break;
			case 13:
					menu_awal();
		break;
			default:
            		printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           			system("pause");
           			getchar();
           			system("cls");
           			New_Release();

}
}


//*Genre RnB*//
void Young_Dumb_and_Broke()   //*Modular Lagu*//
{
play_1:
			printf("\t\t\t====================================\n");
			printf("\t\t\t                    \n");
			printf("\t\t\tY O U N G  D U M B  A N D  B R O K E\n");
			printf("\t\t\t                    \n");
			printf("\t\t\t====================================\n");
        {   
                char print[] = "\nSo you're still thinking of me\nJust like I know you should\nI can not give you everything, you know I wish I could\nI'm so high at the moment\nI'm so caught up in this\nYeah, we're just young, dumb and broke\nBut we still got love to give\n\nWhile we're young dumb\nYoung, young dumb and broke\nYoung dumb\nYoung, young dumb and broke\nYoung dumb\nYoung, young dumb and broke\nYoung dumb broke high school kids\nYadadadadadadada\nYadadadadadada\nYadadadadadadada\nYoung dumb broke high school kids";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_1;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return RnB();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return RnB();
	}
}

void Get_You()   //*Modular Lagu*//
{
	play_2:
			printf("\t\t\t============\n");
			printf("\t\t\t            \n");
			printf("\t\t\tG E T  Y O U\n");
			printf("\t\t\t            \n");
			printf("\t\t\t============\n");  ;      
        {   
                char print[] = "\nThrough drought and famine, natural disasters\nMy baby has been around for me\nKingdoms have fallen, angels be calling\nNone of that could ever make me leave\nEvery time I look into your eyes I see it\nYou're all I need\nEvery time I get a bit inside I feel it\nOoh, who could've thought I'd get you\nOoh, who would've thought I'd get you\nAnd when we're making love\nYour cries they can be heard from far and wide\nIt's only the two of us\nEverything I need's between those thighs\nEvery time I look into your eyes I see it\nYou're all I need\nEvery time I get a bit inside I feel it";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_2;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return RnB();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return RnB();
	}
}

void Fake_Love()   //*Modular Lagu*//
{
	play_3:
			printf("\t\t\t================\n");
			printf("\t\t\t                \n");
			printf("\t\t\tF A K E  L O V E\n");
			printf("\t\t\t                \n");
			printf("\t\t\t================\n");        
        {   
                char print[] = "\nYeah, yeah\nI've been down so long it look like up to me\nThey look up to me\nI got fake people showin' fake love to me\nStraight up to my face, straight up to my face\nI've been down so long it look like up to me\nThey look up to me\n\nI got fake people showin' fake love to me\nStraight up to my face, straight up to my face\nSomethin' ain't right when we talkin'\nSomethin' ain't right when we talkin'\nLook like you hidin' your problems\nReally you never was solid\nNo you can't son me, you won't never get to run me\nJust when shit look, outta reach, I reach back like one, three\nLike one, three, yeah";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_3;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return RnB();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return RnB();
	}
}

void Psycho()   //*Modular Lagu*//
{
	play_4:
			printf("\t\t\t===========\n");
			printf("\t\t\t           \n");
			printf("\t\t\tP S Y C H O\n");
			printf("\t\t\t           \n");
			printf("\t\t\t===========\n");       
        {   
                char print[] = "\nDamn, my AP goin' psycho, lil' mama bad like Michael\nCan't really trust nobody with all this jewelry on you\nMy roof look like a no-show, got diamonds by the boatload\nCome with the Tony Romo for clowns and all the bozos\nMy AP goin' psycho, lil' mama bad like Michael\nCan't really trust nobody with all this jewelry on you\nMy roof look like a no-show, got diamonds by the boatload\nDon't act like you my friend when I'm rollin' through my ends, though\n\nYou stuck in the friend zone, I tell that four-five the fifth, ay\nHunnid bands inside my shorts, DeChino the shit, ay\nTry to stuff it all in, but it don't even fit, ay\nKnow that I been with the shits ever since a jit, ay\nI made my first million, I'm like, Shit, this is it,  ay\n30 for a walkthrough, man, we had that bitch lit, ay\nHad so many bottles, gave ugly girl a sip\nOut the window of the Benzo, we get seen in the rent'\nAnd I'm like Whoa, man, my neck so goddamn cold”\nDiamonds weigh, my teeths is sore\nI got homies, let it blow, oh";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_4;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return RnB();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return RnB();
	}
}

void Love_Lies()   //*Modular Lagu*//
{
	play_5:
			printf("\t\t\t================\n");
			printf("\t\t\t                \n");
			printf("\t\t\tL O V E  L I E S\n");
			printf("\t\t\t                \n");
			printf("\t\t\t================\n");  ;      
        {   
                char print[] = "\nSorry if it's hard to catch my vibe, mmm\nI need a lover to trust, tell me you're on my side\nAre you down for the ride?\nIt's not easy for someone to catch my eye\nBut I've been waitin' for you for my whole damn life\nFor my whole lifetime\nDon't be afraid to tell me if you ain't with it \nI see you're focused, yeah you're so independent\nIt's hard for me to open up, I'll admit it \nYou've got some shit to say and I'm here to listen\nSo baby, tell me where your love lies\n\nWaste the day and spend the night\nUnderneath the sunrise\n\nShow me where your love lies";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_5;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return RnB();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return RnB();
	}
}

void Finesse()   //*Modular Lagu*//
{
	play_6:
			printf("\t\t\t=============\n");
			printf("\t\t\t            \n");
			printf("\t\t\tF I N E S S E\n");
			printf("\t\t\t             \n");
			printf("\t\t\t=============\n");        
        {   
                char print[] = "\nOoh, don't we look good together?\nThere's a reason why they watch all night long\nYeah, know we'll turn heads forever\nSo tonight I'm gonna show you off\nWhen I'm walkin' with you\nI watch the whole room change\nBaby, that's what you do\nNo, my baby, don't play\nBlame it on my confidence\nOh, blame it on your measurements\nShut that shit down on sight\nThat's right\n\nWe out here drippin' in finesse\nIt don't make no sense\nOut here drippin' in finesse\nYou know it, you know it\nWe out here drippin' in finesse\nIt don't make no sense\nOut here drippin' in finesse\nYou know it, you know it";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_6;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return RnB();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return RnB();
	}
}

void Bebas()   //*Modular Lagu*//
{
	play_7:
		    printf("\t\t\t=========\n");
			printf("\t\t\t         \n");
			printf("\t\t\tB E B A S\n");
			printf("\t\t\t         \n");
			printf("\t\t\t=========\n");      
        {   
                char print[] = "\nSudah tinggalkan\nTinggalkan saja semua persoalan waktu kita sejenak\nTuk membebaskan pikiran\nDan biarkan..\nBiarkan terbang tinggi sampai melayang jauh menembus awan..\n\nSementara tinggalkan semua aturan yang kadang trlalu mengikat dan tak beralasan teman\nMemang, memang benar teman\nKita perlu cooling down dan melonggarkan pakaian\n\nReff:\nBebas lepas kutinggalkan saja semua beban dihatiku\nMelayang kumelayang jauh\nMelayang dan melayang..\n\nBagaikan anak kecil yang berlari bertlanjang bebas\nKeluarkan suara suara canda tawa dan senyum puas\nBerteman siraman hujan di lapang yang luas";
                int sleep = 5, i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_7;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return RnB();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return RnB();
	}
}

void Shot_Down()   //*Modular Lagu*//
{
	play_8:
			printf("\t\t\t================\n");
			printf("\t\t\t                \n");
			printf("\t\t\tS H O T  D O W N\n");
			printf("\t\t\t                \n");
			printf("\t\t\t================\n");      
        {   
                char print[] = "\nYou've been here before, surrounded in the cold\nYou take me to places I've never known\nAnd you push me to places I'll never go\nI would die for you\nTell me the truth\n\nAm I all that you would need?\nIf we're keeping it a hundred, you're all that I need for me\nFrom the jump until forever from now, I would ride for you\nBut you got me shot down by love\nYou got my heart now\nWhy won't you stop now?\nOh I've been knocked down by you\nYou got my heart now\nWhy won't you stop now?\n\nI've been through it whole\nI've been through the worst\nBut I never knew how much our love could hurt\nOver my family I put you first";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:                 //*Program dijalankan berulang*//
			system("cls");
			goto play_8;
			break;
		case 2:                 //*Program kembali kemenu utama untuk selesai*//
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return RnB();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
			system("cls");
			return RnB();
	}
}

void DNA()   //*Modular Lagu*//
{
	play_10:
			printf("\t\t\t=====\n");
			printf("\t\t\t     \n");
			printf("\t\t\tD N A\n");
			printf("\t\t\t     \n");
			printf("\t\t\t=====\n");      
        {   
                char print[] = "\nI got, I got, I got, I got\nLoyalty, got royalty inside my DNA\nCocaine quarter piece, got war and peace inside my DNA\nI got power, poison, pain and joy inside my DNA\nI got hustle though, ambition, flow, inside my DNA\nI was born like this, since one like this\nImmaculate conception\n\nI transform like this, perform like this\nWas Yeshua's new weapon\nI don’t contemplate, I meditate, then off your fucking head\nThis that put-the-kids-to-bed\nThis that I got, I got, I got, I got\n\nRealness, I just kill shit 'cause it's in my DNA\nI got millions, I got riches buildin’ in my DNA\nI got dark, I got evil, that rot inside my DNA\nI got off, I got troublesome, heart inside my DNA";
                int sleep =100,i;
                for(i=0;i<=strlen(print);i++)
                {
                	printf("%c", print[i]);
                	Sleep(sleep);
            	}
    	}
    	system("cls");
    	printf("\n1. Main Lagi\n2. Selesai\n3. Kembali ke menu sebelumnya");
    	printf("\nPilihan anda: ");
    	n=0;
		scanf("%d",&n);
		
		switch(n)
	{
		case 1:
			system("cls");
			goto play_10;
			break;
		case 2:
			system("cls");
			return menu_awal();
		case 3:
			system("cls");
			return RnB();
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           	system("pause");
           	getchar();
           	system("cls");
			return RnB();
	}
}

void Back_RnB()   //*Menu Sebelum Memulai Lagu*//
{
	printf("1. Mulai lagu\n2. Kembali kemenu sebelumnya\n");
	printf("\nPilihan anda: ");
	n=0;
	scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					system("cls");
					break;
				case 2:
					system("cls");
					return RnB();
				default:
            		printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           			system("pause");
           			getchar();
           			system ("cls");
           			Back_RnB();
			}
}

void RnB()   //*Menu Judul Lagu RnB*//
{
	system("color 5A");
	printf("=========The Joy of Music========== \n\n");
    printf("Pilih Lagu RnB \n");
    printf("=============\n");
    printf("1. Young Dumb and Broke\n");
    printf("2. Get You\n");
    printf("3. Fake Love\n");
    printf("4. Psycho\n");
    printf("5. Love Lies\n");
    printf("6. Finesse\n");
    printf("7. Bebas\n");
    printf("8. Shot Down\n");
    printf("9. DNA\n");
    printf("10. Kembali kemenu sebleumnya\n");
    printf("Silakan pilih lagu yang disukai :");
    menu=0;
    scanf("%d",&menu);
    printf("\n");
    system("cls");
    
     switch (menu)
	{
           case 1 :
           			Back_RnB();
           			Young_Dumb_and_Broke();
		break;
			case 2 :
					Back_RnB();
					Get_You();
		break;
			case 3 :
					Back_RnB();
					Fake_Love();
		break;
			case 4 :
					Back_RnB();
					Psycho();
		break;
			case 5 :
					Back_RnB();
					Love_Lies();
		break;
			case 6 :
					Back_RnB();
					Finesse();
		break;
			case 7 :
					Back_RnB();
					Bebas();
		break;
			case 8 :
					Back_RnB();
					Shot_Down();
		break;
			case 9 :
					Back_RnB();
					DNA();
		break;
			case 10 :
					menu_awal();
		break;
			default:
            		printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
           			system("pause");
           			getchar();
           			system("cls");
					RnB();
			
}
}


void menu_awal() //*Tampilan menu genre lagu*//
{	
	system("cls");
	printf("Pilih Genre Lagu\n");
	printf("============\n");
	printf("\nPilih Genre: \n [1] Pop\n [2] Jazz\n [3] Indie\n [4] RnB\n [5] New Release\n [6] About\n [7] Help\n [8] Exit\n");
	printf("\nPilihan Anda: ");
	n=0;                              //*Return, sebagai salah satu error handling apabila input yang dimasukkan salah*//
	scanf("%d",&n);

	switch (n)
	{
		case 1:
			system("cls");
			Pop();
			break;
		case 2:
			system("cls");
			Jazz();
			break;
		case 3:
			system("cls");
			Indie();
			break;
		case 4:
			system("cls");
			RnB();
			break;
		case 5:
			system("cls");
			New_Release();
			break;
		case 6:                        //*Memanggil modular penjelasan mengenai program*//
			system("cls");
			about();
			break;
		case 7:                       //*Memanggil modular petunjuk penggunaan program*//
			system("cls");
    		help();
    		break;
		case 8:                      //*Keluar dari program*//
    		printf("keluar\n");
    		break;
		default:
            printf("Maaf, Lagu yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");       //*Warning input salah*//
         	system("pause");
         	getchar();               //*Mendata input karakter, sebagai salah satu error handling sebab tidak sesuai input yang disediakan*//
         	menu_awal();
		
	}
}
 
void about() //*Penjelasan mengenai program*//
{
	system("color 4C");
	printf("The Joy of Music adalah fitur yang menampilkan  kirik dari berbagai pilihan genre dan judul lagu yang sesuai mood hari kamu! \nThe Joy of Music siap memandumu dalam menyanyikan berbagai lagu dalam mengisi kekosongan rutinitas harimu \nAyo alunkan bersama kami!\n\n");
	printf("The Joy of Music memyediakan beberapa genre lagu paling HITS masa kini \nLet's Go Check It Out!");
	printf("\n Pop :     Merupakan menu pilihan genre yang mempunyai alur mudah untuk dinyanyikan \n");
	printf("\n Jazz :    Merupakan menu pilihan genre yang bernuansa elegan dan santai\n");
	printf("\n Indie :   Merupakan menu pilihan genre yang unik dari segi musik,lirik, dan suasananya\n");
	printf("\n RnB :     Merupakan menu pilihan genre yang mempunyai musik dan ketukan yang cenderung cepat\n");
	printf("\n New Release : Merupakan menu pilihan genre yang baru dirilis\n");
	system("pause");
	menu_awal();
}

void help() //*Petunjuk penggunaan program*//
{
	system("color 3E");
	printf("Berikut merupakan langkah-langkah menggunkan The Joy of Music\n");
	printf("\n[1] User memilih genre lagu yang akan dimainkan");
	printf("\n[2] User memilih judul lagu yang diinginkan");
	printf("\n[3] User mulai memainkan lagu \n   Pilih 'Mulai Lagu' apabila user ingin memulai \n   Pilih 'Kembali kemenu sebelumnya' apabila user ingin mengganti judul lagu");
	printf("\n[4] User menyelesaikan lagu \n   Pilih 'Mulai Kembali' apabila user ingin memainkan lagu kembali \n   Pilih 'Selesai' untuk kembali ke menu pilihan genre \n   Pilih 'Kembali kemenu sebelumnya' untuk memilih juudul lagu dengan genre yang sama");
	printf("\n[5] Warning : User salah menginput angka sesuai pilihan");
	printf("\n[6] About : Penjelasan Tentang Program");
	printf("\n[7] Help : Penjelasan Mekanisme berjalannya program");
	printf("\n[8] Exit : Menu untuk keluar dari program\n");
	system("pause");
	menu_awal();
}

void gambarNada() //*Interface program*//
{
	printf("\t\t==========================================================================\n");
	printf("\t\t||                                                                      ||\n");
	printf("\t\t||\t\t\tT H E  J O Y  O F  M U S I C\t\t\t||\n");
	printf("\t\t||                                                                      ||\n");
	printf("\t\t==========================================================================\n");
	printf("      ,\n");
	printf("\t\t\t\t        |\\        __\n");
	printf("\t\t\t\t        | |      |--|             __\n");
	printf("\t\t\t\t        |/       |  |            |~'\n");
	printf("\t\t\t\t       /|_      () ()            |\n");
	printf("\t\t\t\t      //| \\             |\\      ()\n");
	printf("\t\t\t\t     | \\|_ |            | \\\n");
	printf("\t\t\t\t      \\_|_/            ()  |\n");
	printf("\t\t\t\t        |                  |\n");
	printf("\t\t\t\t       @'                 ()\n");


}

int main() //*Fungsi utama*//
{
	system("color 3F");    //*Pengaturan warna background program*//
	system ("date");      //*Keterangan tanggal program dijalankan*//
	gambarNada();
	printf("\n\nPress ENTER to continue.. ");
	getch();
    menu_awal();         //*Implementasi Modular*//
   
           return 0;
}
