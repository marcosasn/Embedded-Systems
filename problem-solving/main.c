/*
 * Revisão de Contrato
 *
 * The program refers to a solution written in answering to the "Revisão de Contrato" programming problem specification. 
 * More information about this description can be found at "https://www.urionlinejudge.com.br/judge/pt/problems/view/1120".
 *  Created on: Mar 4, 2020
 *      Author: Win7
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool equals(char *first_token, char *latter_token){
  if (strcmp(first_token, latter_token) == 0) {
    return true;
  } else {
    return false;
  }
}

int get_result_size(char *first_token, char *latter_token){
  int size = 0;
    for(int i = 0; i < strlen(latter_token); i++){
      if(latter_token[i] != first_token[0]) {
        size += 1;
      }
    }
  return size;
}

//go thorght the characters of the latter token, by ignoring those refering to the character of the first one and adding the reamining characters to the "result" string.
void update_result(char *first_token, char *latter_token, char result[get_result_size(first_token, latter_token)]){
  for(int i = 0; i < strlen(latter_token); i++){
      if(latter_token[i] != first_token[0]) {
        strncat(result, &latter_token[i], 1);
      }
  }
}

int main(void) {
  // test-cases
  //"9 99999999991999999"
  //"9 23454324543423"
  //"3 123456"
  //"7 777"
  //"5 5000000"
  //"0 0"
  
  while(true){
    char test_case [200];
    char *first_token;
    char *latter_token;

    //read the std input
    fgets(test_case, sizeof(test_case), stdin);

    //extract the first and latter tokens
    first_token = strtok(test_case, " ");  
    latter_token = first_token+2;
    printf("The digit entered was: %s\n", first_token);
    printf("The number entered was: %s\n", latter_token);

    //compare the first and latter tokens 
    if (equals(first_token, latter_token)) {
      printf("The entered digit and number are equals\n");
      break;
    } else if (get_result_size(first_token, latter_token) > 0){
      char result[get_result_size(first_token, latter_token)];
      update_result(first_token, latter_token, result);
      printf("The number written in the contract was: %s\n", result);
    }
  }
  return 0;
}


