# ---------Global Variables -----

#   Game Board
# board
# display board 
# play game
# handle turn
# check Win
  # check diagonals
  # check rows
  # check columns
# check tie  
# flip player


board = ["-", "-", "-",
         "-", "-", "-",
         "-", "-", "-"]

# If game is still going
game_still_going = True
# Who Won or Tie
winner = None
# who's turn it is
current_player = "X"
def display_board():
  print(" | " + board[0] + " | " + board[1] + " | " + board[2] + " | ")
  print(" | " + board[3] + " | " + board[4] + " | " + board[5] + " | ")
  print(" | " + board[6] + " | " + board[7] + " | " + board[8] + " | ")


# Play a Game of TicTacToe
def play_game():
  # Display Board
  display_board() 

  # While game is going
  while game_still_going:
    # handle a single turn of arbitary player
    handle_turn(current_player)
    # check if game has ended
    check_if_game_over()
    # Flip to other player
    flip_player()

# The Game Has Ended
  if winner == "X" or winner == "O":
    print(winner + " Won.")
  elif winner == None:
    print("It's A Tie")

# handle a single turn of arbitary player
def handle_turn(player):
  print(player + "'s Turn.")
  position = input("Choose a Position from 1-9 : ")
  value = False
  while not value:
    while position not in ["1","2","3","4","5","6","7","8","9"]:
      print()
      position = input(" **Invalid Input** Choose Valid Position from 1-9 : ")
    position = int(position) - 1
    if board[position] == "-":
      value = True
    else:
      print("Already Occupied you can't Choose this")
  board[position] = player
  display_board()


def check_if_game_over():
  
  check_if_win()
  check_if_tie()
  

def check_if_win():
  # set up global variable
  global winner

  # check rows
  row_winner = check_rows()
  # check columns
  column_winner = check_columns()
  # check diagonals
  diagonal_winner = check_diagonals()
  if row_winner:
      # There was a Winner
      winner = row_winner
  elif column_winner:
      # There was a Winner
      winner = column_winner
  elif diagonal_winner:
      # There was a Winner
      winner = diagonal_winner
  


  return

def check_rows():
  global game_still_going
  # check if it's row win 
  row_1 = board[0] == board[1] == board[2] != "-"
  row_2 = board[3] == board[4] == board[5] != "-"
  row_3 = board[6] == board[7] == board[7] != "-"
  if row_1 or row_2 or row_3:
    game_still_going = False
  # Return the winner (X or O)
  if row_1:
    return board[0]
  elif row_2:
    return board[3]
  elif row_3:
    return board[6]
  return
  

def check_columns():
  global game_still_going
  # check if it's column win 
  column_1 = board[0] == board[3] == board[6] != "-"
  column_2 = board[1] == board[4] == board[7] != "-"
  column_3 = board[2] == board[5] == board[8] != "-"
  if column_1 or column_2 or column_3:
    game_still_going = False
  if column_1:
    return board[0]
  elif column_2:
    return board[1]
  elif column_3:
    return board[2]
  return
  


def check_diagonals():
  global game_still_going
  # check if it's diagonal win 
  diagonals_1 = board[0] == board[4] == board[8] != "-"
  diagonals_2 = board[2] == board[4] == board[6] != "-"
  
  if diagonals_1 or diagonals_2 :
    game_still_going = False
  if diagonals_1:
    return board[0]
  elif diagonals_2:
    return board[2]
  
  return

def check_if_tie():
  global game_still_going
  if "-" not in board:
    game_still_going = False
  
  return
# flipping the playesrs
def flip_player():
  global current_player
  if current_player == "X":
    current_player = "O"
  elif current_player == "O":
    current_player = "X"
  return  


play_game()



