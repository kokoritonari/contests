join :: Show a => Char -> [a] -> String
join _ [] = ""
join sep (x:xs)
  | null xs = show x
  | otherwise = show x ++ [sep] ++ join sep xs

main :: IO ()
main = do
  s <- readLn
  print s
