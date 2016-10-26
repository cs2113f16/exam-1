#include <stdio.h>
#include <stdlib.h>

// DO NOT MODIFY CODE STARTING HERE....
struct ArrayList {
	int *data; // store data here
	int count; // number of entries added so far
	int size;  // size of data array
};
struct ArrayList* createAL(){
	struct ArrayList* alist = malloc(sizeof(struct ArrayList));
	alist->count = 0;
	alist->size = 10;
	alist->data = malloc(alist->size*sizeof(int));
	return alist;
}
void printAL(struct ArrayList *alist){
	int i;
	for(i=0; i < alist->count; i++){
		printf("%d: %d\n", i, alist->data[i]);
	}
}
// DO NOT MODIFY CODE ABOVE HERE


// Return the value at "index" from the list
int getAL(struct ArrayList *alist, int index) {
  // YOUR CODE HERE
}

// Add "newInt" to the end of the list
void putAL(struct ArrayList *alist, int newInt) {
 // YOUR CODE HERE
}


int main(void) {
  struct ArrayList *list;
  int i;
  
  // This is a simple test case. You can modify this code as you like.
  
  list = createAL();
  for(i = 0; i < 55; i++) {
    putAL(list, i*10);
  }
  printAL(list);
  
  printf("Entry 50 = %d (should be %d)\n", getAL(list, 50), 500);
  return 0;
}