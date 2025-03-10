data = {
    'asdfjkl;': 'stairs',
    ';lkjfdsa': 'reverse',
    'asdf;lkj': 'out-in',
    ';lkjasdf': 'out-in',
    'fdsajkl;': 'in-out',
    'jkl;fdsa': 'in-out'}
s=input()
print(data[s] if s in data else 'molu')
