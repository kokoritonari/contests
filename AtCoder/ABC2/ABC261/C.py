d={}
for s in[*open(0)][1:]:i=d[s]=d.get(s,-1)+1;print(s[:-1]+f'({i})'*(i>0))
