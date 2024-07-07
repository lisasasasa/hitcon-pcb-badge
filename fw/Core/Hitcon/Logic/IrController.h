#include <game.h>
#include <stddef.h>
#include <stdint.h>

/*Definition of IR content.*/
struct ir_data {
  uint8_t type;
  uint8_t data[GAME_DATA_SIZE];
  score_t score;
};