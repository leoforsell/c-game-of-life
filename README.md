# C Game of Life

Självständigt arbetsmaterial för repetition inför fortsatta IT-studier.

**Status:** Startkod och uppgiftstester finns. Kärnfunktionerna är TODO-övningar, inte en färdig applikation.

## Börja här

1. Följ [startguiden med små arbetspass](docs/START_HERE.md).
2. Läs [projektplanen och uppgifter #1–#6](docs/PROJECT_PLAN.md).
3. Arbeta med branch och PR enligt [CONTRIBUTING](CONTRIBUTING.md).
4. Använd [lärandeloggen](docs/LEARNING_LOG.md).

## Verktyg och kommandon

Använd C17-kompilator (Clang eller GCC) och Make. På macOS ingår de i Xcode Command Line Tools.

```sh
git clone https://github.com/leoforsell/c-game-of-life.git
cd c-game-of-life
make run
make test
make exercise-test
make sanitize
```

`make exercise-test` ska misslyckas tills reglerna implementerats.

## Vad du arbetar i

`src/` innehåller fast rutnät, utskrift och TODO-funktioner för reglerna.
`tests/` innehåller aktivt grundtest och separata övningstester.

CI bygger och testar startstrukturen. **Grön CI betyder inte att övningarna är färdiga.**
Se [teststrategin](tests/README.md) för vad som ska aktiveras senare.

## Arbetsordning

Java-kassa → ruttplanerare → C-simulering. Ett huvudprojekt i taget.
Perioderna i projektplanen är preliminära; anpassa dem med handledare efter vad du kan förklara och göra själv.

Materialet tränar programmering, algoritmer och minneshantering. Det är inte en officiell KTH-kurslösning.
CINTE:s exakta upplägg HT2027 och eventuella tillgodoräknanden är inte verifierade här.
