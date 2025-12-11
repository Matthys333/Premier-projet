# Premier-projet-universitaire
Projet de Number Guessr

1. Présentation générale du projet
    Le projet consiste à développer un jeu en mode texte dans lequel l’utilisateur doit
    deviner un nombre généré aléatoirement par l’ordinateur.
    Le programme doit proposer différents modes de jeu simples et offrir un déroulement
    interactif clair.
    Le projet doit être réalisé individuellement.
    Langage imposé : C (compilation sous Linux).

2. Objectifs pédagogiques
    
    ● Concevoir un programme découpé en petites fonctions cohérentes.
    
    ● Utiliser les boucles, conditions, et les entrées utilisateur.
    
    ● Utiliser un générateur de nombres aléatoires (rand() / srand()).
    
    ● Gérer des interactions utilisateur répétées (boucle principale).
    
    ● Produire une structure de code propre et lisible.

3. Fonctionnalités obligatoires
    3.1 Menu principal
    
    Le programme doit afficher au minimum :
    
    ● un mode “Devine le nombre”
    
    ● une option pour quitter

    3.2 Mode standard
    L’ordinateur génère un nombre aléatoire entre 1 et 100.
    L’utilisateur propose une valeur.
    Le programme indique par exemple :
    
    ● “plus grand”,
    
    ● “plus petit”,
    
    ● ou un message du type : “bravo, trouvé !”
    Le programme compte le nombre d’essais.
    À la fin, il affiche un message avec le nombre total d’essais.

    3.3 Redémarrage
    Après une partie, le joueur peut choisir :
    
    ● rejouer
    
    ● revenir au menu
    
    ● ou quitter
    3.3 Structure minimale
    Le programme doit contenir au minimum :
    
    ● une fonction d’affichage du menu
    
    ● une fonction qui gère une partie
    
    ● une fonction qui compare la proposition
    
    ● une boucle principale dans le main

4. Fonctionnalités optionnelles / bonus

    La prise d’initiative est fortement encouragée et sera valorisée.
    Voici quelques propositions :
    
    - Modes de difficulté :
    facile (1–50)
    normal (1–100)
    difficile (1–500)
    
    - Limite d’essais (permet de perdre la partie)
    
    - IA inversée où c’est l’utilisateur qui choisit un nombre et le programme essaie
    de le deviner
    
    - Scores : meilleur nombre d’essais lors de la session
    
    - Affichage amélioré (mise en forme, ASCII)
    
5. Contraintes techniques
    Minimum 4 fonctions (hors main).
    Le main doit se limiter à la coordination générale.
    L’utilisation d’un code produit par une IA n’est pas autorisé et sera considéré comme
    de la triche.
    Cependant vous pouvez utiliser une IA pour vous expliquer ou accompagner.
    Interdiction de tout code très long dans le main() (max ~20 lignes).
    Interdiction d’utiliser :
    
    - des pointeurs complexes
    
    - bibliothèques autres que stdio.h, string.h, time.h
    Le programme doit compiler avec gcc sous Linux.
    
6. Organisation interne du programme
    Structure recommandée :
    
    ● void print_menu();
    
    ● void play_game(int min, int max);
    
    ● int compare(int proposition, int secret);
    
    ● int ask_number();
    Logique générale :
    
    1. afficher le menu
    
    2. choisir un mode
    
    3. lancer une partie
    
    4. afficher le résultat
    
    5. proposer de rejouer
    
    6. revenir au menu lors d’un retour
    
7. Jeux de tests attendus
    Tests simples
    
    ● L’utilisateur trouve le nombre en quelques essais
    
    ● Le programme indique correctement “plus” / “moins”
    
    ● Fin de partie correcte
    Tests limites
    
    ● Entrée invalide (lettres, symboles)
    
    ● Proposition en dehors de la plage
    
    ● Plusieurs parties consécutives
    Tests aléatoires
    
    ● Vérifier que le nombre secret change à chaque partie
    (usage de srand(time(NULL)))
    
8. Livrables
    
    ● Code source complet (.c)
    
    ● Un court rapport (1–2 pages) contenant :
    
    ○ l’explication du fonctionnement
    
    ○ les principales fonctions créées
    
    ○ les limites du programme
    
    ○ les difficultées rencontrées
    
    ○ les améliorations possibles
    
    ● Un exemple d’exécution (copie terminal ou screenshot)