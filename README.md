# *`GNL`* Get Next Line 

> Quand on veux lire des données depuis un fd et qu'on ne connait pas (à l'avance) la taille de ces données, c'est compliqué. 
> * Quelle taille de buffer choisir ? 
> * Combien de fois lire sur le file descriptor pour retrouver la donnée ?  
> * Comment gérer la lecture d'un texte excessivement long comme la bible ? ou mieux encore 
> d'un fichier potentiellement sans fin comme /dev/random ?
#

En programmation, qu'il s'agisse d'un **fichier**, ou des commandes que vous tapez dans votre shell **(stdin)**
il est indispensable de pouvoir `lire une “ligne”` terminée par un retour à la ligne, `depuis un file descriptor.`
**Get_next_line** est une fonction, qui répond *(une bonne fois pour toute)* à ce besoin.


## Skills :
* Variables statiques en C.
* Allocations mémoires sur la **`Heap`** et la **`Stack`**.
* Manipulation et cycle de vie d’un buffer.
* **`Gestion des fuites mémoires.`**


![alt text](https://github.com/mayer-overflow/get_next_line/blob/master/no_memory_leak.png "Pas de leak mémoire en sortie.")

## TLDR : 
> Un appel **`en boucle`** à cette fonction permettra donc de lire, le texte sur un descripteur de fichier,  
> une ligne à la fois, jusqu’à la fin du texte.
> **`Quelque soit la taille du texte en question, ou d’une de ses lignes.`**  
> Le tout sans aucunes fuites mémoires.





