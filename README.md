# Guia d'Organització i Correcció Automàtica - Pràctica 1

Benvingut/da a la Pràctica 1! Aquesta guia t'explicarà com organitzar les carpetes del teu repositori, com funciona l'estructura de 3 arxius per exercici i usar l'utilitat make per executar els tests dels exercicis 

---

## 1. L'Estructura de Carpetes (La Regla dels 3 Arxius: main, funcio, tests de la funcio)

A la Pràctica 1 (P1), organitzarem els exercicis carpetes: **`src`** i **`test`**. Dintre d'aquestes carpetes hi han subcarpetes segons tipus d'exercicis **`seqüencials i alternatives`** **`enums`** **`iteratives`**. L'estructura del teu repositori ha de ser exactament aquesta:

```text
📁 El-Teu-Repositori/
├── 📄 Makefile                   <-- L'arxiu que sap com compilar-ho tot
├── 📁 src/
│   ├── 📁 seqüencials i alternatives/
│   │   └── 📁 ex1/
│   │       ├── 📄 main.c         <-- 1. Inicialment buit, on possarem asserts per testejar, i després interacció amb l'usuari (printf / scanf)
│   │       └── 📄 ultim_digit.c  <-- 2. Lògica pura (Només la **funció**)
│   └── 📁 enums/
│       └── 📁 ex14/              <--- IDEM EN LA RESTA D'EXERCICIS 
│           ├── 📄 main.c
│           └── 📄 pedra_paper_tisores.c
└── 📁 test/
    ├── 📁 seqüencials i alternatives/
    │   └── 📁 ex1/
    │       └── 📄 ultim_digit_test.c <-- 3. Els **tests** amb "asserts" per comprovar la lògica
    └── ...
```

### Per què 3 arxius? veure a dalt 1. 2. 3.
1. **`main.c`**: Dintre d'un subdirectori de src, és el teu arxiu de proves manuals. Conté el `main()` amb asserts que tu has d'escriure per testejar les teves funcions, més endavant, quan ja estiguin testejades les funcions, es pot incloure E/S amb els `printf` i els `scanf`.
2. **`nom_funcio.c`**: Dintre d'un subdirectori de src, conté NOMÉS la funció a implementar (ex: `int suma(int a, int b)`). **MAI** ha de contenir un `scanf` ni un `main()`.
3. **`nom_funcio_test.c`**: Dintre d'un subdirectori de test, conté un `main()` propi amb proves automàtiques (`asserts`) que criden a la teva lògica i comproven si el resultat és l'esperat.

---

## El Makefile (El cor de l'automatització)

El `Makefile` s'encarrega de compilar l'arxiu de Lògica juntament amb l'arxiu de Test, creant un programa que comprova si l'exercici està bé. 

Ja està creat el `Makefile` (sense cap extensió) a l'arrel del teu repositori amb aquest contingut adaptat a la P1. Pots consultar-lo fent
cat Makefile. 

---

## Com pujar provar el codi

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
