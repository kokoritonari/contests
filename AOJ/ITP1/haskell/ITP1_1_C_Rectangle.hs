main :: IO ()
main = do
  line <- getLine
  let edges = map read $ words line :: [Int]
  putStrLn . unwords . map show $ [product edges, 2 * sum edges]
