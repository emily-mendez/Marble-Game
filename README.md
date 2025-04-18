# Marble-Game

This program simulates a game that involves marbles dropped down a chute labeled A, navigating through a series of gates (X1–X4) that toggle their directions each time they're touched. Gate X1 has three positions (left, center, right) and toggles differently based on whether the marble is represented by a 0 or a 1, while gates X2 through X4 toggle between left and right. The marble follows the direction the gate was set to before it toggles. The program takes as input a string of binary digits (each representing a marble drop) and simulates how each marble moves through the gates, updating gate states accordingly. It outputs the sequence of gate configurations after each drop and determines whether the final marble exits through a winning chute (B or D) or a losing chute (C or E).

![image](https://github.com/user-attachments/assets/8e4eb6a8-e67f-42ca-adfd-790534271e86)
