#include<stdio.h>
#include <stdlib.h>
#include<string.h>
char name[100];float age,height,weight,bmi;int gender,choice1,choice2,choice3;
main()
{
	int i;
	printf("\t\t\t\t   ****Welcome to Kids Nutrition Calculator****\n");
	for(i=0;i>=0;i++)
	{	
    printf("press 1 for boy, 2 for girl\n");
    scanf("%d",&gender);
    switch(gender)
    {
    case 1:
    printf("Press 1 to know how healthy is your son, 2 to know a healthy diet plan for him\n");    
    scanf("%d",&choice1);
    switch(choice1)
    {
    	case 1:
        son();
		break;
		case 2:
		printf("press 1 if you are a vegetarian and press 2 if you are non vegetarian\n");
		scanf("%d",&choice2);
		switch(choice2)
		{
			case 1:
			printf("enter your sons age\n");
			scanf("%d",&choice3);
			switch(choice3)
			{
			case 1:
			veg1();
			break;
			case 2:
			veg2();
			break;
			case 3:
			veg3();
			break;
			case 4:
			veg4();
			break;
			case 5:
			veg4();
			break;
			default:
			printf("invalid input");
			break;
			}	
				case 2:
			printf("enter your sons age\n");
			scanf("%d",&choice3);
			switch(choice3)
			{
				case 1:
			nonveg1();
			break;
			case 2:
			nonveg2();
			break;
			case 3:
			nonveg3();
			break;
			case 4:
			nonveg3();
			break;
			case 5:
			nonveg3();
			break;
			default:
			printf("invalid input");
			break;
			}
			default:
				printf("wrong input");
				break;
			}
		}
    break;
    case 2:
    printf("Press 1 to know how healthy is your daughter, 2 to know a healthy diet plan for her\n");    
    scanf("%d",&choice1);
    switch(choice1)
    {
    	case 1:
        daughter();
		break;
		case 2:
		printf("press 1 if you are a vegetarian and press 2 if you are non vegetarian\n");
		scanf("%d",&choice2);
		switch(choice2)
		{
			case 1:
			printf("enter your daughter's age\n");
			scanf("%d",&choice3);
			switch(choice3)
			{
			case 1:
			veg1();
			break;
			case 2:
			veg2();
			break;
			case 3:
			veg3();
			break;
			case 4:
			veg4();
			break;
			case 5:
			veg4();
			break;
			default:
			printf("invalid input");
			break;
			}	
				case 2:
			printf("enter your daughter's age\n");
			scanf("%d",&choice3);
			switch(choice3)
			{
				case 1:
			nonveg1();
			break;
			case 2:
			nonveg2();
			break;
			case 3:
			nonveg3();
			break;
			case 4:
			nonveg3();
			break;
			case 5:
			nonveg3();
			break;
			default:
			printf("invalid input");
			break;
			}
			default:
				printf("wrong input");
				break;
			}
		}
    break;
    default:
    printf("Wrong input\n");
    }
    if(gender==1||gender==2)
    break;
    }
    return 0;
    }
    son()
    {
    	printf("enter your sons name\n");
    scanf("%s",&name);
    printf("enter your sons age\n");
    scanf("%f",&age);
    printf("enter your sons weight\n");
    scanf("%f",&weight);
    printf("enter your sons height in cm\n");
    scanf("%f",&height);
    bmi=((weight*10000)/height)/height;
    FILE *fptr;

    fptr = fopen("hello.txt", "w");
    if(fptr == NULL)
    {
      printf("Error!");
      exit(1);
    }
   fprintf(fptr,"Name- %s\nGender- Boy\nage- %f\nHeight- %f\nWeight- %f\n",name,age,height,weight);
   if(bmi>=14.5f&&bmi<=18.0f)
   {
   fprintf(fptr,"your son is healthy\n");
    int choice;
    printf("enter 1 to know a veg diet plan, 2 to know a non veg diet plan, 3 to exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		if(age==1)
    			veg1();
			else if(age==2)
			veg2();
			else if(age==3)
			veg3();
			else if(age==4)
			veg4();
			else
			veg4();
			break;
			case 2:
			if(age==1)
    			nonveg1();
			else if(age==2)
			nonveg2();
			else if(age==3)
			nonveg3();
			else if(age==4)
			nonveg4();
			else
			nonveg4();
			break;
			default:
			exit(0);
		}
   }
   else if(bmi<14.5f)
   {
   fprintf(fptr,"your son is underweight\n");
   fprintf(fptr,"At least five portions of a variety of fruit and vegetables every day.\nMeals based on potatoes, bread, rice, pasta or other starchy carbohydrates.\nSome dairy or dairy alternatives (such as soya drinks and yoghurts). Choose lower-fat and lower-sugar options.\nSome beans and pulses, fish, eggs, meat and other protein. Aim for two portions of fish every week – one of which should be oily, such as salmon or mackerel.\nUnsaturated oils and spreads – eat in small amounts.\nPlenty of fluids – the government recommends 6-8 cups/glasses a day.\nadd one of these things to his/her daily meals\n1 lady finger banana\n1 small bread roll\n1 snack sized tub of yoghurt\n4-5 macadamia nuts\n1 mandarin or 4 lychees\nAvocado, peanut butter or cheese on toast\nMashed orange sweet potato\n2 tbs muesli (toasted or untoasted)\n2 pikelets with jam");
   }
   else
   {
   fprintf(fptr,"your son is overweight\n");
   fprintf(fptr,"Cut back on processed and fast foods.\nDon’t serve sugary drinks.\nEncourage good eating habits.\nBreakfast\nApple and Pear French toast\nCoco-Banana Overnight Oats\nBreakfast Tacos\nBlueberry Banana Pancakes\nLunch\nHummus Sandwiches\nMac and Cheese Muffins\nPB Fruit Roll-Up\nDinner\nAsian Noodle Soup\nthe Beany Cheese-tadas\nCheesy Veggie Stuffed Shells\nSnacks\nCheesy Potato Bites\nGuacamole Tomato Boats\nPeanut Butter-Drizzled Popcorn");
   }
	}
	daughter()
	{
		 printf("enter your daughters name\n");
    scanf("%s",&name);
   	printf("enter your daughters age\n");
    scanf("%f",&age);
    printf("enter your daughters weight\n");
    scanf("%f",&weight);
    printf("enter your daughters height in cm\n");
    scanf("%f",&height);
    bmi=((weight*10000)/height)/height;
    FILE *fptr;
    
    fptr = fopen("hello.txt", "w");
    if(fptr == NULL)
    {
      printf("Error!");
      exit(1);
    }
    fprintf(fptr,"Name- %s\n",name);
    fprintf(fptr,"Gender- Girl\n");
    fprintf(fptr,"Age- %f\n",age);
    fprintf(fptr,"Height- %f\n",height);
    fprintf(fptr,"Weight- %f\n",weight);
    if(bmi>=14.5f&&bmi<=18.0f)
    {
    fprintf(fptr,"your daughter is healthy\n");
    int choice;
    printf("enter 1 to know a veg diet plan, 2 to know a non veg diet plan, 3 to exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		if(age==1)
    			veg1();
			else if(age==2)
			veg2();
			else if(age==3)
			veg3();
			else if(age==4)
			veg4();
			else
			veg4();
			break;
			case 2:
			if(age==1)
    			nonveg1();
			else if(age==2)
			nonveg2();
			else if(age==3)
			nonveg3();
			else if(age==4)
			nonveg4();
			else
			nonveg4();
			break;
			default:
			exit(0);	
	}
    
    }
    else if(bmi<14.5f)
    {
    fprintf(fptr,"your daughter is underweight\n");
    fprintf(fptr,"At least five portions of a variety of fruit and vegetables every day.\nMeals based on potatoes, bread, rice, pasta or other starchy carbohydrates.\nSome dairy or dairy alternatives (such as soya drinks and yoghurts). Choose lower-fat and lower-sugar options.\nSome beans and pulses, fish, eggs, meat and other protein. Aim for two portions of fish every week – one of which should be oily, such as salmon or mackerel.\nUnsaturated oils and spreads – eat in small amounts.\nPlenty of fluids – the government recommends 6-8 cups/glasses a day.\nadd one of these things to his/her daily meals\n1 lady finger banana\n1 small bread roll\n1 snack sized tub of yoghurt\n4-5 macadamia nuts\n1 mandarin or 4 lychees\nAvocado, peanut butter or cheese on toast\nMashed orange sweet potato\n2 tbs muesli (toasted or untoasted)\n2 pikelets with jam");
    }
    else
    {
    fprintf(fptr,"your daughter is overweight\n");
    fprintf(fptr,"Cut back on processed and fast foods.\nDon’t serve sugary drinks.\nEncourage good eating habits.\nBreakfast\nApple and Pear French toast\nCoco-Banana Overnight Oats\nBreakfast Tacos\nBlueberry Banana Pancakes\nLunch\nHummus Sandwiches\nMac and Cheese Muffins\nPB Fruit Roll-Up\nDinner\nAsian Noodle Soup\nthe Beany Cheese-tadas\nCheesy Veggie Stuffed Shells\nSnacks\nCheesy Potato Bites\nGuacamole Tomato Boats\nPeanut Butter-Drizzled Popcorn");
    }
	}
	veg1()
	{
		FILE *fptr;
    fptr = fopen("hello.txt", "w");
    fprintf(fptr,"Monday\nBreakfast:\nWheat porridge (daliya) with raisins (kishmish) and milk\nLunch:\n	Black-eyed peas (lobhia)\nRice\nEvening snack:\nBanana (kela) milkshake\nDinner:\nVegetable khichdi\nRaita\nTuesday\nBreakfast:\nDal parantha\nGlass of milk\nLunch:\nKidney beans (rajma)\nRice\nCucumber (kheera) raita\nEvening snack:\nOrange (santara)\nDinner:\nBottle gourd (lauki/doodhi) kofta curry\nChapati\nWednesday\nBreakfast:\nIdli with sambhar\nGlass of buttermilk\nLunch:\nSpinach (paalak) and paneer\nChapati\nEvening snack:\nApple (seb)\nDinner:\nPink lentil (dhuli masoor) dal\nCabbage (patta gobhi) sabzi\nRice/chapati\nCurd\nThursday\nBreakfast:\nRagi (nachni) porridge with dates (khajoor) and milk\nLunch:\nBengal gram (chana) dal\nOkra (bhindi)\nRice\nEvening snack:\nSapodilla (chikoo)\nDinner:\nCauliflower (gobhi) stuffed parantha\nCurd\nFriday\nBreakfast:\nMoong dal cheela\nGlass of milk\nLunch:\nVegetable pulao\nPineapple (annanas) raita\nEvening snack:\nWatermelon (tarbooj)\nDinner:\nSoya granules curry\nCarrot (gajar) rice\nSaturday\nBreakfast:\nSemolina (suji) upma with beans and carrots (gajar)\nGlass of buttermilk\nLunch:\nKadhi\nRice\nEvening snack:\nPapaya (papita)\nDinner:\nPeas (matar) and mushroom (kumbh) gravy\nFenugreek (methi) chapati\nSunday\nBreakfast:\nSteamed corn (makkai) with bread\nGlass of milk\nLunch:\nChickpea (chhole) curry\nRice\nEvening snack:\nGrapes (angoor)\nDinner:\nVegetable stew\nAppam");
    fclose(fptr);
	}
	veg2()
	{
		FILE *fptr;
	fptr=fopen("hello.txt","w");
		fprintf(fptr,"Monday\nBreakfast:\nFenugreek (methi) parantha with butter\nGlass of milk\nLunch:\nBlack chickpea (kala chana) curry\nBeans sabzi\nChapati\nCurd\nEvening snack:\nApple (seb)\nSoya\nDinner:\nSoya granules and capsicum (shimla mirch) curry\nRice\nTuesday\nBreakfast:\nOat (jai) porridge with banana (kela) and milk\nLunch:\nKidney beans (rajma)\nCumin (jeera) rice\nCucumber (kheera) raita\nEvening snack:\nPear (nashpati)\nDinner:\nPotato (aloo) and pea (matar) curry\nMissi roti\nWednesday\nBreakfast:\nUttapam\nCoconut (nariyal) chutney\nGlass of buttermilk\nLunch:\nPaneer pulao\nBeetroot (chukandar) sabzi\nBottle gourd (lauki/doodhi) raita\nEvening snack:\nPineapple (annanas)\nDinner:\nVegetable khichdi\nCarrot (gajar) raita\nThursday\nBreakfast:\nMoong dal cheela with chopped vegetables\nGlass of milk\nLunch:\nWhite lentil (dhuli urad) dal\nColocasia (arbi) cutlets\nRice\nCurd\nEvening snack:\nGrapes (angoor)\nDinner:\nPotato (aloo) and onion (pyaaz) parantha\nCurd\nFriday\nBreakfast:\nDosa\nSambhar\nGlass of buttermilk\nLunch:\nChickpea (chhole) curry\nPointed gourd (parwal) sabzi\nRice\nCurd\nEvening snack:\nOrange (santara)\nDinner:\nVegetable pulao\nCucumber (kheera) raita\nSaturday\nBreakfast:\nSemolina (suji) upma with beans, carrots (gajar) and coconut (nariyal)\nGlass of buttermilk\nLunch:\nKadhi\nCumin (jeera) potato (aloo) sabzi\nRice\nEvening snack:\nBanana (kela)\nDinner:\nMushroom (kumbh), peas (matar) and corn (makkai) curry\nChapati\nSunday\nBreakfast:\nPaneer bhurji\nToast\nGlass of milk\nLunch:\nSarson ka saag\nMakki ki roti\nEvening snack:\nSapodilla (chikoo)\nDinner:\nSambhar\nRice");
		fclose(fptr);
	}
	veg3()
	{
	FILE *fptr;
		fptr=fopen("hello.txt","w");
		fprintf(fptr,"Monday\nBreakfast:\nCucumber (kheera) sandwich\nGlass of milk\nLunch:\nTomato (tamatar) rice\nCauliflower (gobhi)\nRasam\nCurd\nEvening snack:\nBanana (kela)\nDinner:\nLamb's quarters (bathua) dal\nBeans\nChapati\nTuesday\nBreakfast:\nWheat porridge (daliya) with raisins (kishmish) and walnuts (akhrot)\nGlass of milk\nLunch:\nChickpea (chhola) curry\nCarrot (gajar) and pea (matar) sabzi\nRice\nCurd\nEvening snack:\nMango (aam)\nDinner:\nMushroom (kumbh) and paneer curry\nRice\nCurd\nWednesday\nBreakfast:\nIdli with sambhar\nGlass of buttermilk\nLunch:\nLemon (nimbu) rice\nCoconut (nariyal) and bean sabzi\nCurd\nEvening snack:\nOrange (santara)\nDinner:\nBrown lentil (masoor) dal\nPointed gourd (parwal) sabzi\nChapati\nPomegranate (anaar) raita\nThursday\nBreakfast:\nFenugreek (methi) parantha with curd\nGlass of milk\nLunch:\nVegetable pulao\nPineapple (annanas) raita\nEvening snack:\nApple (seb)\nDinner:\nGreen banana (kachcha kela) kofta curry\nPaneer and capsicum (shimla mirch) sabzi\nRice\nFriday\nBreakfast:\nSemolina (suji) upma with beans, carrots (gajar) and coconut (nariyal)\nGlass of buttermilk\nLunch:\nKidney beans (rajma)\nOkra (bhindi)\nCumin (jeera) rice\nCurd\nEvening snack:\nGuava (amrood)\nDinner:\nVegetable stew\nAppam\nSaturday\nBreakfast:\nMoong dal cheela with curd\nGlass of milk\nLunch:\nBesan (gatta) curry\nRound gourd (tinda) sabzi\nRice\nCurd\nEvening snack:\nPear (nashpati)\nDinner:\nPotato (aloo) and pea (matar) curry\nPumpkin (sitaphal/kaddu) sabzi\nMissi roti\nSunday\nBreakfast:\nPoha\nGlass of milk\nLunch:\nSoya granules and potato (aloo) curry\nCarrot (gajar) rice\nEvening snack:\nGrapes (angoor)\nDinner:\nVegetable khichdi\nCucumber (kheera) raita");	
		fclose(fptr);
	}
	veg4()
	{
		FILE *fptr;
		fptr=fopen("hello.txt","w");
		fprintf(fptr,"Monday:\nBreakfast:\nGive your child cheese and tomato sandwich of whole wheat or multi grain bread.\nLunch:Lunch should be nutritional and thus should include\n½ bowl of daal.\n½ bowl any paneer based sabzi.\n1-2 chapatti and a small cup of rice.\nSnacks:\n1 cup of fruit chat.\nChocolate milkshake.\nDinner:Dinner can include:\n½ bowl baked vegetables.\n1-2 chapatti with moong daal.\nTuesday:\nBreakfast:\n1 cup dalia with a serving of nuts on it.\nLunch:For lunch you can give your child:\n½ bowl of kadhi.\n½ bowl mix vegetables ki sabzi.\n1-2 chapatti and a small cup of rice.\nSnacks:\n1-2 aaloo tikki served with tomato chuttney.\nBanana milkshake.\nDinner:For dinner you can give:\n1 bowl moong daal khichri cooked with vegetables to give it a colorful look.\nWednesday:\nBreakfast:\nFor breakfast your child can have:\nPoha.\nLunch:\n½ cup aaloo matar sabzi.\n1-2 chapatti..\nA small cup of rice with moong or mug.\nSnacks:\n1 glass of milk.\nVegetable upma.\nDinner:\nPaav bhaji.\nThursday:\nBreakfast:\nStuffed aloo, paneer or gobhi parantha.\nLunch:\n1 bowl of vegetable pulao.\n1 cup of curd.\n1-2 chapatti with palak paneer subzi.\nSnacks:\n1 bowl of salad(vegetable or fruit)\nStrawberry milkshake.\nDinner:\nTacos.\nBurger.\nFriday:\nBreakfast:\n1 bowl of suji vegetable upma. Add all the multi colored vegetables to give it a fun look.\nLunch:\n1 bowl of choley or rajma or lobia\n1 cup of rice.\n1-2 bhature.\nSnacks:\n1 cup of milk shake of your child’s favorite fruit.\nVegetable frankie, you can also add cheese and paneer in it.\nDinner:\n1 stuffed parantha. Stuffing can be of paneer, aaloo etc.\nSaturday:\nBreakfast:\n1 cheela made up of moong daal. Stuff the cheela with vegetables to make it colorful as well as nutritious.\nLunch:\n½ bowl of daal.\n½ bowl veg ksdhai sabzi.\n1-2 chapatti and a small cup of rice.\n1 bowl of vegetable salad.\nSnacks:\nBoiled corns or chaat made of corn.\nSamosa\nDinner:\nSmall vegetable pizza.\nNachos with cheese and salsa sauce.\nSunday:\nBreakfast:\nIdli with coconut chutney and sambhar.\nLunch:\n½ bowl of kadhi.\n½ bowl mix veg sabzi.\n1-2 chapatti and a small cup of rice.\nSnacks:\n1 vegetable sandwich.\nChoco strawberry shake\nDinner:\n1 bowl of vegetable pasta or macaroni.\nSpinach cheese balls");	
		fclose(fptr);
		}
		nonveg1()
		{
		FILE *fptr;
		fptr=fopen("hello.txt","w");
		fprintf(fptr,"Monday\nBreakfast:\nCornflakes with raisins (kishmish), dates (khajoor) and milk\nLunch:\nPeas (matar) and egg curry\nRice/chapati\nEvening snack:\nSapodilla (chikoo) milkshake\nDinner:\nSpinach (paalak) and paneer curry\nChapati\nTuesday\nBreakfast:\nPorridge (daliya) with banana (kela) and milk\nLunch:\nMoong dal khichdi\nFish cutlet\nEvening snack:\nApple (seb) stew\nDinner:\nFenugreek (methi) parantha\nCurd\nWednesday\nBreakfast:\nMoong dal cheela\nGlass of milk\nLunch:\nChicken curry (boneless)\nChapati\nEvening snack:\nPapaya (papita)\nDinner:\nVegetable pulao\nFresh tomato (tamatar) chutney\nThursday\nBreakfast:\nParantha stuffed with peas (matar)\nGlass of milk\nLunch:\nSoya granules curry\nCarrot (gajar) rice\nEvening snack:\nBanana (kela)\nDinner:\nChicken (boneless) and vegetable stew\nAppam\nFriday\nBreakfast:\nSemolina (suji) upma with beans and carrots (gajar)\nGlass of buttermilk\nLunch:\nCauliflower (gobhi) parantha\nCurd\nEvening snack:\nGrapes (angoor)\nDinner:\nPeas (matar) and mushroom (kumbh) curry\nCumin (jeera) rice\nSaturday\nBreakfast:\nToast with scrambled egg (bhurji)\nGlass of milk\nLunch:\nKidney beans (rajma) curry\nRice\nCurd\nEvening snack:\nPoha with peanuts\nDinner:\nTomato (tamatar) fish curry (boneless)\nChapati\nSunday\nBreakfast:\nIdli with sambhar\nGlass of buttermilk\nLunch:\nDal parantha\nBeetroot (chukandar) sabzi\nEvening snack:\nOrange (santara)\nDinner:\nMutton biryani\nCucumber (kheera) raita");	
		fclose(fptr);
		}
		nonveg2()
		{
		FILE *fptr;
		fptr=fopen("hello.txt","w");
		fprintf(fptr,"Monday\nBreakfast:\nHard-boiled egg with toast\nGlass of milk\nLunch:\nBottle gourd (lauki/doodhi) kofta curry\nRice/chapati\nEvening snack:\nBanana (kela)\nDinner:\nChicken with dried fenugreek leaves (kasoori methi)\nChapati\nTuesday\nBreakfast:\nRagi (nachni) porridge with milk and chopped nuts\nLunch:\nPink lentil (dhuli masoor) dal\nMushroom (kumbh), peas (matar) and corn (makkai) sabzi\nRice/chapati\nEvening snack:\nApple (seb) stew\nDinner:\nMixed vegetable khichdi\nCurd\nWednesday\nBreakfast:\nIdli and sambhar\nGlass of buttermilk\nLunch:\nChickpea (chhole) curry\nRice\nPomegranate (anaar) raita\nEvening snack:\nGrapes (angoor)\nDinner:\nMutton and vegetable stew\nAppam\nThursday\nBreakfast:\nUttapam\nCoconut (nariyal) chutney\nGlass of buttermilk\nLunch:\nMustard (rai/sarson) fish (boneless) curry\nEggplant (baingan) sabzi\nRice/chapati\nEvening snack:\nWatermelon (tarbooj)\nDinner:\nBlack-eyed pea (lobhia) curry\nColocasia (arbi) cutlets\nChapati\nFriday\nBreakfast:\nMoong dal cheela with chopped vegetables\nGlass of milk\nLunch:\nVegetable pulao\nCarrot (gajar) raita\nEvening snack:\nPear (nashpati)\nDinner:\nChicken biryani\nPineapple (annanas) raita\nSaturday\nBreakfast:\nWheat porridge (daliya) with dates (khajoor) and milk\nLunch:\nKadhi\nCumin (jeera) potato (aloo) sabzi\nRice\nEvening snack:\nOrange (santara)\nDinner:\nSoya and mushroom (kumbh) curry\nChapati\nSunday\nBreakfast:\nMixed vegetable poha\nGlass of milk\nLunch:\nMung bean (moong) dal\nOkra (bhindi) sabzi\nChapati\nEvening snack:\nMango (aam)\nDinner:\nMutton mince meat (keema) with peas (matar)\nRice");
		fclose(fptr);	
		}
		nonveg3()
		{
		FILE *fptr;
		fptr=fopen("hello.txt","w");
		fprintf(fptr,"Monday\nBreakfast:\nCheese with toast\nGlass of milk\nLunch:\nBengal gram (chana) dal\nOkra (bhindi) sabzi\nRice/chapati\nCurd\nEvening snack:\nPapaya (papita)\nDinner:\nEgg curr\nPotato (aloo) and runner bean (sem) sabzi\nRice\nTuesday\nBreakfast:\nCornflakes with chopped almonds (badaam) and milk\nLunch:\nMutton curry\nBeans and carrot (gajar) sabzi\nRice/chapati\nBottle gourd (lauki/doodhi) raita\nEvening snack:\nBanana (kela)\nDinner:\nDal stuffed parantha\nRound gourd (tinda) sabzi\nCurd\nWednesday\nBreakfast:\nSemolina (suji) upma with beans, peas (matar), carrot (gajar) and coconut (nariyal)\nGlass of buttermilk\nLunch:\nKidney bean (rajma) curry\nCumin (jeera) rice\nOnion (pyaaz) raita\nEvening snack:\nApple (seb)\nDinner:\nChicken and vegetable stew\nAppam\nThursday\nBreakfast:\nVegetable omelette\nToast\nGlass of milk\nLunch:\nSoya granules and capsicum (shimla mirch) curry\nRice/chapati\nPineapple (annanas) raita\nEvening snack:\nMuskmelon (kharbooja)\nDinner:\nPan seared fish\nVegetable pulao\nMint (pudina) chutney\nFriday\nBreakfast:\nOat (jai) porridge with walnuts (akhrot), raisins (kishmish) and milk\nLunch:\nCauliflower (gobhi) parantha\nPomegranate (anaar) raita\nEvening snack:\nPear (nashpati)\nDinner:\nMinced meat (keema) kofta\nPointed gourd (parwal) sabzi\nTomato (tamatar) and onion (pyaaz) raita\nRice/chapati\nSaturday\nBreakfast:\nScrambled egg (bhurji)\nParantha\nGlass of milk\nLunch:\nBlack chickpea (kala chana) curry\nEggplant (baingan) sabzi\nRice\nCurd\nEvening snack:\nOrange (santara)\nDinner:\nChicken curry\nMushroom (kumbh) and capsicum (shimla mirch) vegetable\nRice/chapati\nSunday\nBreakfast:\nBoiled corn (makkai) with toast\nGlass of milk\nLunch:\nHaryali chicken cooked in spinach (paalak)\nChapati\nEvening snack:\nGrapes (angoor)\nDinner:\nPaneer and pea (matar) curry\nParantha\nCurd");	
		fclose(fptr);
		}
		nonveg4()
		{
			FILE *fptr;
			fptr=fopen("hello.txt","w");
			fprintf(fptr,"Breakfast\nMid-Morning\nLunch\nAfternoon/ Evening\nDinner\nMon\n1/2 cup milk + 1 brown bread with 1/2 scrambled egg\n1/2 bowl of Strawberrie\n1/2 cup rice+ 1/4 cup chicken curry + cucumber slices\n1 cup milk\n1/2 cup rice with dal + fried rohu fish + tomato slices\nTue\n1 small parantha + 1/4 cup curd\n1/2 cup watermelon pieces\n1 roti with egg curry + cucumber salad\n1/2 cup milk + 1 oats honey  cookie\n1 cup chicken pulao\nWed\nOatmeal made with full cream milk\nGrape halves\n1 cup vegetable red rice pulao with 1/2 egg omelet\n1 cup Fruit yogurt\n1 cup chicken  pasta in white sauce\nThur\n(Omelet pizza\nBanana smoothie\n1/2 cup vegetable Khichdi + omelet with 1/4 cup curd\n1/2 cup  milk+1 slice banana bread\n1 cup chicken veg noodle soup\nFri\n1 Egg sandwich + 1/2 cup milk\n1 cup Sweetlime juice with 2 crackers/ wholewheat  biscuits\n1/2 cup rice + 1/4 cup fish curry + salad\nCornflakes with 1/2 milk\n1 spanish omelette\nSat\nToast with omellette\n1/2 cup papaya pieces\n1 cup mild Chicken biryani + 1/4 cup curd\nBanana, strawberry smoothie\n1 roti + minced chicken and peas curry (keema  matar)\nSun\n2 french toast\n1/2 apple\n1/2 cup veg noodles+ 1 baked chicken lollipop\nStrawberry milkshake\n1 cup chicken khichdi");
		    fclose(fptr);
		}
