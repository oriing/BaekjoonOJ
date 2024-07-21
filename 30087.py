d = eval('''{"Algorithm	204
DataAnalysis	207
ArtificialIntelligence	302
CyberSecurity	B101
Network	303
Startup	501
TestStrategy	105"}'''.replace('\t', '": "').replace('\n', '",\n"'))
for i in range(int(input())):
    print(d[input()])
