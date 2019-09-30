/*
 *Honor Pledge:
 *I pledge that I have neither given nor 
 * received any help on this assignment.
 * YOUNGJON
*/

#include <iostream>
#include <stdlib.h> 
#include <ctime>

#define GAME_LENGTH 50

void advancePlayerA(int* ptrPlayerA);
void advancePlayerB(int* ptrPlayerB);
void printPosition(int* ptrPlayerA, int* ptrPlayerB);

int main()
{
	int posPlayerA = 0;
	int posPlayerB = 0;
	int a = 0;
	std::cout << "Welcome to CSCI 240's Candy Land Game!" << std::endl;
	while( a == 0) {
		//std::cout << "start" << std::endl;
		advancePlayerA(&posPlayerA);
		advancePlayerB(&posPlayerB);
		if( posPlayerB >= GAME_LENGTH && posPlayerA != GAME_LENGTH) {
			std::cout << "Your friend reached Candy Castle 1st! Better luck next time." << std::endl;
			posPlayerB=50;
			a=1;
			break;
		} else if( posPlayerA >= GAME_LENGTH && posPlayerB != GAME_LENGTH) {
			std::cout << "You reached Candy Castle 1st!" << std::endl;
			posPlayerA=50;
			a=1;
			break;
		} else if ( posPlayerA >= GAME_LENGTH && posPlayerB >= GAME_LENGTH) {
			std::cout << "You tied!" << std::endl;
		} else {
			printPosition(&posPlayerA, &posPlayerB);
			continue;
		}
	
	}
	
	return 0;	
}

void advancePlayerA(int* ptrPlayerA)
{
srand(time(NULL));
int b = 0;
while( b==0){
	int roll = (rand()%101) + 1;
	//std::cout << roll << std::endl;
	//move 1 foward you
	if( roll > 0 && roll <= 40){
		*ptrPlayerA +=1;
		b=1;
		break;
	//move 2 foward you
	}else if( roll > 40 && roll <= 60){
		if ( *ptrPlayerA == 49){
			*ptrPlayerA +=1;
			b=1;
			break;
		} else {
			*ptrPlayerA +=2;
			b=1;
			break;
		}
		
	//move 3 foward you
	}else if( roll > 60 && roll <= 70){
		if( *ptrPlayerA == 49){
			*ptrPlayerA +=1;
			b=1;
			break;
		} else if( *ptrPlayerA == 48){
			*ptrPlayerA +=2;
			b=1;
			break;
		} else{
			*ptrPlayerA +=3;
			b=1;
			break;
		}
		
	//move 5 forwards you
	}else if( roll > 70 && roll <= 80){
		if( *ptrPlayerA == 49){
			*ptrPlayerA +=1;
			b=1;
			break;
		} else if( *ptrPlayerA == 48){
			*ptrPlayerA +=2;
			b=1;
			break;
		} else if( *ptrPlayerA == 47){
			*ptrPlayerA +=3;
			b=1;
			break;
		} else if( *ptrPlayerA == 46){
			*ptrPlayerA +=4;
			b=1;
			break;
		} else{
			*ptrPlayerA +=5;
			b=1;
			break;
		}
		
	//move 3 backwards you
	}else if( roll > 80 && roll <= 90 && *ptrPlayerA > 0){
		if( *ptrPlayerA == 1){
			*ptrPlayerA -=1;
			b=1;
			break;
		} else if( *ptrPlayerA == 2){
			*ptrPlayerA -=2;
			b=1;
			break;
		} else{
			*ptrPlayerA -=3;
			b=1;
			break;
		}
		
	//move 5 backwards you
	}else if( roll > 90 && roll <= 100 && *ptrPlayerA > 0){
		if( *ptrPlayerA == 1){
			*ptrPlayerA -=1;
			b=1;
			break;
		} else if( *ptrPlayerA == 2){
			*ptrPlayerA -=2;
			b=1;
			break;
		} else if( *ptrPlayerA == 3){
			*ptrPlayerA -=3;
			b=1;
			break;
		} else if( *ptrPlayerA == 4){
			*ptrPlayerA -=4;
			b=1;
			break;
		} else{
			*ptrPlayerA -=5;
			b=1;
			break;
		}
		
	}else{
		continue;
	}
}
}

void advancePlayerB(int* ptrPlayerB)
{
srand(time(NULL));
int b = 0;
while( b==0){
	int roll = (rand()%101) + 1;
	//std::cout << roll << std::endl;
	// move forwards 1 opp
	if( roll > 0 && roll <= 30){
		*ptrPlayerB +=1;
		b=1;
		break;
	// move forwards 2 opp
	}else if( roll > 30 && roll <= 40){
		if ( *ptrPlayerB == 49){
			*ptrPlayerB +=1;
			b=1;
			break;
		}else{
			*ptrPlayerB +=2;
			b=1;
			break;
		}
	// move forwards 3 opp
	}else if( roll > 40 && roll <= 60){
		if( *ptrPlayerB == 49){
			*ptrPlayerB +=1;
			b=1;
			break;
		}else if( *ptrPlayerB == 48){
			*ptrPlayerB +=2;
			b=1;
			break;
		}else{
			*ptrPlayerB +=3;
			b=1;
			break;
		}
	// move forwards 5 opp
	}else if( roll > 60 && roll <= 70){
		if( *ptrPlayerB == 49){
			*ptrPlayerB +=1;
			b=1;
			break;
		}else if( *ptrPlayerB == 48){
			*ptrPlayerB +=2;
			b=1;
			break;
		}else if( *ptrPlayerB == 47){
			*ptrPlayerB +=3;
			b=1;
			break;
		}else if( *ptrPlayerB == 46){
			*ptrPlayerB +=4;
			b=1;
			break;
		}else{
			*ptrPlayerB +=5;
			b=1;
			break;
		}
	// move backwards 3 opp
	}else if( roll > 70 && roll <= 90 && *ptrPlayerB > 0){
		if( *ptrPlayerB == 1){
			*ptrPlayerB -=1;
			b=1;
			break;
		}else if( *ptrPlayerB == 2){
			*ptrPlayerB -=2;
			b=1;
			break;
		}else{
			*ptrPlayerB -=3;
			b=1;
			break;
		}
	// move backwards 5 opp
	}else if( roll > 90 && roll <= 100 && *ptrPlayerB > 0){
		if( *ptrPlayerB == 1){
			*ptrPlayerB -=1;
			b=1;
			break;
		}else if( *ptrPlayerB == 2){
			*ptrPlayerB -=2;
			b=1;
			break;
		}else if( *ptrPlayerB == 3){
			*ptrPlayerB -=3;
			b=1;
			break;
		}else if( *ptrPlayerB == 4){
			*ptrPlayerB -=4;
			b=1;
			break;
		}else{
			*ptrPlayerB -=5;
			b=1;
			break;
		}
	}else{
		continue;
	}
}
}

void printPosition(int* ptrPlayerA, int* ptrPlayerB)
{
char line[52] = "                                                   ";
//std::cout << *ptrPlayerA << std::endl;
//std::cout << *ptrPlayerB << std::endl;
if ( *ptrPlayerA == *ptrPlayerB){
	line[*ptrPlayerA] = 'A';
	line[*ptrPlayerB + 1] = 'B';
}else{
	line[*ptrPlayerA] = 'A';
	line[*ptrPlayerB] = 'B';
}
for(int i = 0;i<52;i++){
	std::cout << line[i];
}
std::cout << "|" << std::endl;
}

