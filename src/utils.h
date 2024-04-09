#pragma once

char getch();
char *scanEnv(char **env, char *key);
void sort(char **arr);
void makeFork(char *path, char **argv, char **envp);
