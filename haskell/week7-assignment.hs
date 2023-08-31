callSum sum infi = do
  putStrLn("The current sum is: " ++ show sum)
  infi sum

infi :: Int -> IO()
infi sum =
  do
    input <- getLine
    
    if (input == "end") then
      putStrLn("The final sum is: " ++ show sum)
    else if (input == "sum") then
      callSum sum infi
    else
      infi (sum + convertToInt (input))

main =
  do
    infi 0

convertToInt :: String -> Int
convertToInt x
  | (x == "zero") = 0
  | (x == "one") = 1
  | (x == "two") = 2
  | (x == "three") = 3
  | (x == "four") = 4
  | (x == "five") = 5
  | (x == "six") = 6
  | (x == "seven") = 7
  | (x == "eight") = 8
  | (x == "nine") = 9
  | (x == "ten") = 10
