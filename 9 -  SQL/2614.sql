select customers.name, rentals.rentals_date from rentals
inner join customers
on customers.id=rentals.id_customers
where TO_CHAR(rentals.rentals_date, 'YYYY')='2016' 
and TO_CHAR(rentals.rentals_date, 'MM')='09';
