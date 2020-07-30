select substr(natural_person.cpf, 1, 3) || '.' ||       
       substr(natural_person.cpf, 4, 3) || '.' ||       
       substr(natural_person.cpf, 7, 3) || '-' ||       
       substr(natural_person.cpf, 10) 
from customers 
inner join natural_person 
on natural_person.id_customers=customers.id;
