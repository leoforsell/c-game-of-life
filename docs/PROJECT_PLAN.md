# Projektplan: C Game of Life

**Planerad period:** Maj–juni 2027; buffert och repetition juli–augusti. Tidsfönstret är ett förslag; flytta det efter faktisk progression.

## Milstolpar

| Etapp | Resultat |
| --- | --- |
| M0 | Grunder och körbar utvecklingsmiljö |
| M1 | Första fungerande flödet |
| M2 | Struktur, robusthet och tester |
| M3 | Dokumenterad och demonstrerbar v1 |

## Uppgifter i ordning

| Issue | Etapp | Uppgift | Branch |
| --- | --- | --- | --- |
| [#1](https://github.com/leoforsell/c-game-of-life/issues/1) | M0 | Lär C-grunder med statiskt rutnät | `chore/c-basics` |
| [#2](https://github.com/leoforsell/c-game-of-life/issues/2) | M1 | Implementera regler och dubbelbuffring | `feat/life-rules` |
| [#3](https://github.com/leoforsell/c-game-of-life/issues/3) | M2 | Inför dynamiskt minne och tydligt ägarskap | `refactor/dynamic-grid` |
| [#4](https://github.com/leoforsell/c-game-of-life/issues/4) | M2 | Bygg CLI och kontrollera minnesfel | `test/sanitizers-cli` |
| [#5](https://github.com/leoforsell/c-game-of-life/issues/5) | M3 | Öva bitoperationer separat | `feat/bit-operations` |
| [#6](https://github.com/leoforsell/c-game-of-life/issues/6) | M3 | Dokumentera minnesmodell och demo | `docs/life-demo` |

Varje issue innehåller ledtråd, beroende och acceptanskriterier. Etappkoderna är planeringsrubriker, inte separata GitHub Milestones. Välj högst 2–3 uppgifter eller deluppgifter per vecka och arbeta främst med ett projekt åt gången.

## Omfattning

Ett litet rektangulärt rutnät med döda celler utanför kanten och ett bestämt antal generationer. Ingen grafik, hårdvara eller egen minnesallokerare i v1.

## Design som växer med projektet

Separera grid (allokering/indexering), simulation (regler/generationsbyte) och terminal-I/O. Börja med statiska arrayer. Inför därefter två dynamiska buffertar med tydligt ägarskap. Uppdatera aldrig den aktuella generationen på plats. Bitoperationer övas separat innan eventuell bitpackning.

## Tester och leverans

Börja med små deterministiska exempel. Testa både normalfall, tomma fall och felvägar enligt issues. Lägg till CI när en verklig bygg- och testkedja finns. En v1 ska gå att bygga, testa och demonstrera från ren klon.

## Övergripande ordning inför 2027

1. November 2026–februari 2027: Java Checkout System.
2. Mars–april 2027: Metro Route Planner.
3. Maj–juni 2027: C Game of Life.
4. Juli–augusti 2027: buffert, repetition, matematik och portfoliovård.

Anpassa tempot med handledare. IT Ticket Tracker kan avslutas till en avgränsad version eller pausas efter en statusnotering; det projektet ändras inte här.

## Koppling till fortsatta studier

Fristående övningsprojekt i objektorientering, algoritmer och minneshantering. De är inte officiella KTH-laborationer. Exakt kursinnehåll och språk för CINTE HT2027 har inte verifierats i denna projektstart. C-simulering tränar inte alla moment inom elektronik, digitalteknik och processorarkitektur. Java använder referenser; C-pekare hör till C-projektet.
