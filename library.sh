# Bulk renaming
for f in $(ls); do
  git mv $f $(echo $f | sed -E 's/^(ITP1_[0-9][0-9]?_[A-D]).+\.(.+)/\1.\2/g')
done

# create file with the same name but a different extension
ls ITP1_1_* | sed s/.py/.cs/ | xargs touch
