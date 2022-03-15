/* Affiche sur un LCD les touches tapées sur un clavier matriciel*/

// --- Fonctionnalités utilisées ---
// Utilise un afficheur LCD alphanumérique4x20 en mode 4 bits 
// Utilise un Clavier matriciel 4x4 (16 touches) 

// --- Circuit à réaliser ---
// Connecter  sur la broche 2 la Colonne 4 du Clavier
// Connecter  sur la broche 3 la Colonne 3 du Clavier
// Connecter  sur la broche 4 la Colonne 2 du Clavier
// Connecter  sur la broche 5 la Colonne 1 du Clavier

// Connecter  sur la broche 8 la broche RS du LCD
// Connecter  sur la broche 9 la broche E du LCD
// Connecter  sur la broche 10 la broche D4 du LCD
// Connecter  sur la broche 11 la broche D5 du LCD
// Connecter  sur la broche 12 la broche D6 du LCD
// Connecter  sur la broche 13 la broche D7 du LCD

// Connecter  sur la broche 16 la Ligne 4 du Clavier
// Connecter  sur la broche 17 la Ligne 3 du Clavier 
// Connecter  sur la broche 18 la Ligne 2 du Clavier
// Connecter  sur la broche 19 la Ligne 1 du Clavier

//**************** Entête déclarative *******
// A ce niveau sont déclarées les librairies, les constantes, les variables...

// --- Inclusion des librairies utilisées ---

#include <LiquidCrystal.h> // Inclusion de la librairie pour afficheur LCD 

#include <Keypad.h> // inclusion de la librairie pour clavier matriciel 

// --- Déclaration des constantes ---

//--- Constantes utilisées avec le clavier 4x4
const byte LIGNES = 4; // 4 lignes
const byte COLONNES = 4; //4 colonnes


// --- constantes des broches ---

const int C4=2; //declaration constante de broche 
const int C3=3; //declaration constante de broche 
const int C2=4; //declaration constante de broche 
const int C1=5; //declaration constante de broche 
const int RS=8; //declaration constante de broche 
const int E=9; //declaration constante de broche 
const int D4=10; //declaration constante de broche 
const int D5=11; //declaration constante de broche 
const int D6=12; //declaration constante de broche 
const int D7=13; //declaration constante de broche 
const int L4=16; //declaration constante de broche 
const int L3=17; //declaration constante de broche 
const int L2=18; //declaration constante de broche 
const int L1=19; //declaration constante de broche 

// --- Déclaration des variables globales ---

//--- Définition des touches 
char touches[LIGNES][COLONNES] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// tableaux de lignes et colonnes
byte BrochesLignes[LIGNES] = {L1, L2, L3, L4}; //connexions utilisées pour les broches de lignes du clavier
byte BrochesColonnes[COLONNES] = {C1, C2, C3, C4}; //connexions utilisées pour les broches de colonnes du clavier

char touche; // variable de stockage valeur touche appuyée


// --- Déclaration des objets utiles pour les fonctionnalités utilisées ---

LiquidCrystal lcd(RS, E, D4, D5, D6, D7);// Création d'un objet LiquidCrystal = initialisation LCD en mode 4 bits 


// création d'un objet keypad = initialisation clavier 
Keypad clavier = Keypad( makeKeymap(touches), BrochesLignes, BrochesColonnes, LIGNES, COLONNES );
// les broches de lignes sont automatiquement configurées en ENTREE avec pullup interne activé 
// les broches de colonnes sont automatiquement configurées en SORTIE


//**************** FONCTION SETUP = Code d'initialisation *****
// La fonction setup() est exécutée en premier et 1 seule fois, au démarrage du programme

void setup()   { // debut de la fonction setup()

// --- ici instructions à exécuter au démarrage --- 

lcd.begin(20,4); // Initialise le LCD avec 20 colonnes x 4 lignes 

delay(10); // pause rapide pour laisser temps initialisation

// Test du LCD

lcd.print("Connexion") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion.") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion..") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion...") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion.") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion..") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion...") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion.") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion..") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion...") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print("Connexion.") ; // affiche la chaîne texte - message de test
delay(0500); // pause de 1/2 secondes
lcd.clear();
lcd.print(" Saisir Code :");
lcd.setCursor(6,1);
lcd.blink();


// les broches de lignes et d'entrée sont configurées automatiquement lors de l'initialisation du clavier 

// ------- Broches en sortie -------  


// ------- Broches en entrée -------  


// ------- Activation du rappel au + interne des broches en entrée si nécessaire -------  


} // fin de la fonction setup()
// ********************************************************************************

//*************** FONCTION LOOP = Boucle sans fin = coeur du programme *************
// la fonction loop() s'exécute sans fin en boucle aussi longtemps que l'Arduino est sous tension

void loop(){ // debut de la fonction loop()

// --- ici instructions à exécuter par le programme principal --- 

touche = clavier.getKey(); // lecture de la touche appuyée

if (touche != NO_KEY){ // si une touche a été frappée -- gestion de la touche appuyée 

  if (touche=='#') 
  {
    lcd.clear(); lcd.print(" Saisir Code :"); lcd.setCursor(6,1); lcd.blink();
  }
  else lcd.print(touche); // efface écran si appui # sinon  affiche touche
  delay(300); // pause entre 2 appuis

} // fin gestion de la touche appuyée 

}
