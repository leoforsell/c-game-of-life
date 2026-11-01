# Börja här: C Game of Life

## Innan du börjar
Repetera kompilering, funktioner, arrayer, värde kontra adress och pekaroperatorerna & och *.
Starten använder ett fast 5×5-rutnät. Dynamiskt minne kommer först i issue #3.

## Första fyra passen (60–90 min per pass)
1. Kör make run och make test. Rita vilket cellindex som motsvarar rad 2, kolumn 1.
2. Ändra startmönstret i main.c. Skriv ut en egen 2×2-kloss. Förklara rad- och kolumnloopen.
3. Implementera life_next_cell i life.c med reglerna nedan. Kör make exercise-test: det stannar vid nästa oimplementerade funktion.
4. Implementera life_neighbors. Räkna grannar vid ett hörn för hand före kod.

## Regler
En levande cell överlever med 2 eller 3 levande grannar.
En död cell föds med exakt 3. Övriga fall ger död cell.
Det finns åtta grannpositioner; cellen själv räknas inte.
Utanför rutnätet är allt dött, ingen wrap-around.

## Nästa etapper
#2: implementera life_step genom att läsa current och skriva next. Buffertarna ska vara olika.
#3: ersätt fasta arrayer med allokerade buffertar och kontrollera storleksprodukt, allokeringsfel och städning.
#4: inför CLI och kör även övningstester med sanitizers.
#5: skapa en separat bits.c för bitövningarna. Rör inte rutnätets representation innan bitövningen fungerar.
#6: skriv minnesskiss och demonstrera block/blinker.

## Testpolicy
make test testar bara den färdiga nollställningen. make exercise-test testar regler, hörn, ensam cell, block, blinker, tom värld och att indata inte ändras.
Övningstesterna misslyckas avsiktligt tills #2 är löst. De ingår ännu inte i CI.
När #2 är klar: lägg till exercise-test i workflow och sanitizer-körning.
make sanitize testar för närvarande bara startkoden, inte den framtida minneshanteringen.

Branch: chore/c-basics. Skriv din första PR med ett eget startmönster och en förklaring av indexeringen.
