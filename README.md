# Guia d'Organització - Pràctica 1

Benvingut/da a la Pràctica 1! Aquesta guia t'explicarà com organitzar les carpetes del teu repositori, com funciona l'estructura de 3 arxius per exercici i usar l'utilitat make per executar els tests proporcionats pels professors.

---

## 1. L'Estructura de Carpetes (La Regla dels 4 Arxius: main, funcio, capçalera, tests de la funcio)

A la Pràctica 1 (P1), organitzarem els exercicis carpetes: **`src`** i **`test`**.

**NOMES HEU DE TREBALLAR AL DIRECTORI src!**

Dintre d'aquestes carpetes hi han subcarpetes segons tipus d'exercicis **`seqüencials i alternatives`** **`enums`** **`iteratives`**. L'estructura del teu repositori ha de ser exactament aquesta:

```text
📁 El-Teu-Repositori/
├── 📄 Makefile                   <-- L'arxiu que sap com compilar el teu codi amb el tests del professorat
├── 📁 src/
│   ├── 📁 seqüencials i alternatives/
│   │   └── 📁 ex1/

│   │       ├── 📄 main.c         <-- 1. Inicialment buit, on afegiras els teus tests (asserts) per testejar, i quan ja passin els teus tests i els tests del professorat, afegiràs interacció amb l'usuari (printf / scanf)

│   │       └── 📄 ultim_digit.c  <-- 2. Lògica pura (Només la **funció**)
|   |       └── 📄 ultim_digit.h      3. Fitxer amb la capçalera de la funció
│   └── 📁 enums/
│       └── 📁 ex14/              <--- IDEM EN LA RESTA D'EXERCICIS 
│           ├── 📄 main.c
│           └── 📄 pedra_paper_tisores.c
└── 📁 test/
    ├── 📁 seqüencials i alternatives/
    │   └── 📁 ex1/
    │       └── 📄 ultim_digit_test.c <-- 4. Els **tests del professorat** amb "asserts" per comprovar la lògica. NO TOQUEU AQUEST DIRECTORI
    └── ...
```

### Per què 4 arxius? veure a dalt 1. 2. 3. 4.
1. **`main.c`**: Dintre d'un subdirectori de **src**, és el teu arxiu de proves manuals. Conté el `main()` amb asserts que tu has d'escriure per testejar les teves funcions, més endavant, quan ja estiguin testejades les funcions, es pot incloure E/S amb els `printf` i els `scanf`.
2. **`nom_funcio.c`**: Dintre d'un subdirectori de **src**, conté NOMÉS la funció a implementar (ex: `int suma(int a, int b){....}`). **MAI** ha de contenir un `scanf` ni un `main()`.

3. **`nom_funcio.h`**: Dintre d'un subdirectori de **src**, conté NOMÉS la capçalera de la funció a implementar (ex: `int suma(int a, int b);`)

4. **`nom_funcio_test.c`**: Dintre del subdirectori  **test**, conté un `main()` propi amb proves automàtiques del professorat (`asserts`) que criden a la teva lògica i comproven si el resultat és l'esperat. NO TOQUEU AQUEST DIRECTORI. ÉS MÉS, NO MIREU EL SEU CONTINGUT PER A PENSAR PER VOSALTRES MATEIXOS ELS TESTS (ASSERTS)

---

## PROCEDIMENT RECOMANAT PER REALITZAR ELS EXERCICIS 

1. Accedir al directori corresponent del exercici a resoldre dintre de **src**. Escriure els tests (asserts) al main.c, compilar i veure que els tests fallen perque el codi de la funció està buit. A continuació, implementar la funció i compilar de nou per a veure si els tests passen. Si no passen, repetir el procès fins que tots passin. Més tard, si s'escau, pots afegir més asserts al teu main.c. (Més informació a les primeres 4 seccions del document P1-Curs26-27.pdf).

2. Una vegada tots els teus asserts passin, pots provar si passen els tests definits pel professorat (veure secció següent).

3. Quan tots els tests del professorat passin, pots comentar els asserts al teu main.c i afegir E/S amb printf i scanf.

4. Durant el procés de desenvolupament, és recomanable anar actualitzant el repositori local amb commits que recullin els canvis i, periòdicament, actualitzar també el repositori remot amb git push. D’aquesta manera, es disposa de còpies intermèdies del treball i es redueix el risc de perdre els canvis.

5. Una vegada finalitzat l’exercici, comprova que el repositori local conté la versió final i actualitza el repositori remot amb aquesta versió final (git push).
---

## El Makefile (per testejar el teu codi amb els tests del professorat) 

El `Makefile` s'encarrega de compilar l'arxiu de Lògica teu juntament amb l'arxiu de Test del professorat, creant un programa que comprova si l'exercici està bé. 

Ja està creat el `Makefile` (sense cap extensió) a l'arrel del teu repositori amb aquest contingut adaptat a la P1. Pots consultar-lo fent
cat Makefile, però NO el modifiquis.

---

## Com provar el teu codi amb els tests del professorat

Una vegada hagis testejat les teves funcions amb asserts al teu main.c, ja estàs preparat per passar els tests del professorat:

1. Obre una terminal al directori raiz del repositori

2. Executa el comando "make test\_all" per executar els tests. Si tens curiositat per saber que fa aquest make, obre el fitxer Makefile, però no el modifiquis.

3. Com al executar el comando anterior es generen fitxers executables, si vols esborrarlos executa: "make clean". 

---

## Com pujar el codi

Un cop tinguis el teu codi testejat, obre la terminal i executa les següents comandes per pujar el teu treball a GitHub:

1. Afegeix tots els canvis (carpetes noves incloses):
   ```bash
   git add .
   ```
2. Crea el paquet de canvis:
   ```bash
   git commit -m "Solucio exercicis P1 afegida"
   ```
3. Puja-ho al repositori a la web:
   ```bash
   git push
   ```
