class PascalCase:
    
    def __init__(self,name):
        print(id(self))
        if type(name)==str:
            self.__name=name
        else:
            self.__name=""
            print("The name should be in string!")
        
        
    
    def returnName(self):#_PascalCase__returnname
        print(f"The name is {self.__name}")
        
    def changeName(self,name):
        print(self)
        self.__name=name
        
    
    @staticmethod
    def camaleCase(num_1,num_2):
        sum=num_1+num_2
        print(sum)
    
    
person=PascalCase(7)
print(id(person))
person.returnName()
person.changeName(5)
person.returnName()
# PascalCase.changeName("h","o") #It will throug an error
