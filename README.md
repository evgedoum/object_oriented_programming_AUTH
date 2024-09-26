
# Tichu Card Game

**Course:** Object-Oriented Programming  
**University:** Aristotle University of Thessaloniki (AUTH)  
**Semester:** 2nd Semester (2020-21)

## Overview

This project is a console-based card game inspired by the Tichu card game, where players create card combinations and compete strategically. It is developed using Object-Oriented Programming principles, with detailed implementation of classes for cards, players, combinations, and the game logic.

The project is implemented in C++ and consists of multiple classes for handling different components of the game, including:

- **Card**: Handles card creation, suits, and values.
- **Combination**: Implements various card combinations such as pairs, straights, and bombs.
- **Player**: Manages players’ hands, playable combinations, and decisions (human, computer, and smart strategies).
- **Deck**: Shuffles and deals cards to players.
- **Game**: Manages the game flow, including rounds, player actions, and score calculation.
- **Table**: Stores and updates the state of the game table during the rounds.

## Gameplay

In this version of the game, players take turns playing combinations of cards in an attempt to outplay their opponents. The game logic supports various strategies for both human and computer players, with the goal of completing all rounds and determining a winning team based on points.

- Players can play combinations like singles, pairs, full houses, straights, and more.
- The game is played in multiple rounds, where cards are dealt to players and combinations are played on the table.
- Special cards, such as the Phoenix and Dragon, have unique effects on gameplay.

## How to Run

Ensure you have a C++ compiler installed.

### Compile the project:

```bash
g++ -o Tichu *.cpp
```

### Run the game:

```bash
./Tichu
```

## Authors

- Autzidou S.
- Aggelidou I.
- Simitsaki E.
- Doumou E.

This project was developed for the Object-Oriented Programming course at AUTH during the 2nd semester (2020-21).
