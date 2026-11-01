# C Game of Life

Conway’s Game of Life i terminalen med C17, pekare, dubbelbuffring och kontrollerad minneshantering.

**Status:** Planering och projektstruktur skapade. Implementation, byggkonfiguration och tester återstår; ingen fungerande applikation eller grön testkörning påstås ännu.

## Börja här

1. Läs [projektplanen](docs/PROJECT_PLAN.md).
2. Öppna [första uppgiften](https://github.com/leoforsell/c-game-of-life/issues/1).
3. Följ [branch- och PR-arbetsflödet](CONTRIBUTING.md).
4. Anteckna vad du lär dig i [lärandeloggen](docs/LEARNING_LOG.md).

## Grundversion

Ett litet rektangulärt rutnät med döda celler utanför kanten och ett bestämt antal generationer. Ingen grafik, hårdvara eller egen minnesallokerare i v1.

## Verktyg

C17, Clang eller GCC och assertionsbaserade tester. Bygg med -Wall -Wextra -Wpedantic. Använd AddressSanitizer och UndefinedBehaviorSanitizer på stödd verktygskedja.

Exakta versioner och fungerande bygg-, kör- och testkommandon dokumenteras när miljön sätts upp. Kopiera inte framtida kommandon som om projektet redan vore körbart.

## Planerad struktur

- `src/`: C-källkod; börja med ett litet exempel och separera ansvar när det behövs.
- `tests/`: assertionsbaserade C-tester.
- `docs/`: projektplan och lärandelogg.
- `.github/`: mallar för issues och pull requests.

## Arbetsordning

Maj–juni 2027; buffert och repetition juli–augusti. Ett projekt i taget; tidsfönstret är preliminärt. Se [planens sex uppgifter](docs/PROJECT_PLAN.md#uppgifter-i-ordning).

## Utbildningssyfte

Ett självständigt lärandeprojekt inför möjliga fortsatta IT-studier. Ingen officiell kurslösning och ingen garanti om framtida kursinnehåll.
