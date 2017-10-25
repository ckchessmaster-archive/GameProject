# Game Project
This repo is for a game engine that I am building, a game to go along with it, and a server for that game.

<h2>Engine</h2>
The engine is desinged to be as minimal as possible basically only providing a basic framework from which to create games. Documentation can be found in the wiki.

The following depndancies must be downloaded and placed in the main project folder (not the engine folder the root GameProject folder) in order to compile:
<ul>
  <li>SFML 2.4.2</li>
</ul>

<h2>Game</h2>
The game is an arcade style space shooter. You fly around in a ship using the keyboard and shoot with the mouse. Each kill gives you score which you can use to upgrade your ship when you die.

<h2>Server</h2>
The server is independant of the engine and is built to handle a very large number players. The goal is to be able to handle ~100k concurrent players in one battle. This will be done in several stages for first goal is to support 100 players.
