-- Jeu d'essai de la base Atlantik
-- Créé le 17/10/2019 par J. Mainard et Y. Salamone

insert into Secteur values
(1, 'Belle-Île-en-Mer'),
(2, 'Houat'),
(3, 'Île de Groix');

insert into Port values
(1,'Quiberon'),
(2,'Le Palais'),
(3,'Sauzon'),
(4,'Vannes'),
(5,'Port St Gildas'),
(6,'Lorient'),
(7,'Port-Tudy');

insert into Categorie values
('A', 'Passager'),
('B', 'Véhicule inférieur à 2m'),
('C', 'Véhicule supérieur à 2m');

insert into Type values
('A1', 'Adulte', 'A'),
('A2', 'Junior (8 à 18 ans)', 'A'),
('A3', 'Enfant (0 à 7 ans)', 'A'),
('B1', 'Voiture long. inf. 4m', 'B'),
('B2','Voiture long. inf. 5m', 'B'),
('C1','Fourgon', 'C'),
('C2','Camping-car', 'C'),
('C3','Camion', 'C');

insert into Bateau values 
(1,'Kor\'Ant',35,10.5,34,'',0,'v'),
(2,'Ar Solen',15,5.2,20,'',150,'f'),
(3,'Al\'xi',25,7,16,'',0,'v'),
(4,'Luce Isle',37.2,8.6,26,'',0,'v'),
(5,'Maëllys',10,4,12,'',450,'f');

insert into Capacite values
(250,'A',1),
(20,'B',1),
(5,'C',1),
(300,'A',2),
(10,'B',2),
(3,'C',2),
(250,'A',3),
(3,'B',3),
(0,'C',3),
(160,'A',4),
(0,'B',4),
(0,'C',4),
(150,'A',5),
(2,'B',5),
(1,'C',5);


insert into Liaison values
(15,8.3,1,1,2),
(24,9,2,1,1),
(16,8,1,1,3),
(17,7.9,1,3,1),
(19,23.7,1,4,2),
(11,25.1,1,2,4),
(25,8.8,2,1,5),
(30,8.8,2,5,1),
(21,7.7,3,6,7),
(22,7.4,3,7,6);

insert into Tarif values
(1,18,'2010-09-01','2011-06-15','A','A1',15),
(2,20,'2011-06-16','2011-06-15','A','A1',15),
(3,19,'2011-09-16','2012-05-31','A','A1',15),
(4,11.10,'2010-09-01','2011-06-15','A','A2',15),
(5,13.10,'2011-06-16','2011-06-15','A','A2',15),
(6,12.10,'2011-09-16','2012-05-31','A','A2',15),
(7,5.60,'2010-09-01','2011-06-15','A','A3',15),
(8,7,'2011-06-16','2011-06-15','A','A3',15),
(9,6.40,'2011-09-16','2012-05-31','A','A3',15),
(10,86,'2010-09-01','2011-06-15','B','B1',15),
(11,95,'2011-06-16','2011-06-15','B','B1',15),
(12,91,'2011-09-16','2012-05-31','B','B1',15),
(13,129,'2010-09-01','2011-06-15','B','B2',15),
(14,142,'2011-06-16','2011-06-15','B','B2',15),
(15,136,'2011-09-16','2012-05-31','B','B2',15),
(16,189,'2010-09-01','2011-06-15','C','C1',15),
(17,208,'2011-06-16','2011-06-15','C','C1',15),
(18,199,'2011-09-16','2012-05-31','C','C1',15),
(19,205,'2010-09-01','2011-06-15','C','C2',15),
(20,226,'2011-06-16','2011-06-15','C','C2',15),
(21,216,'2011-09-16','2012-05-31','C','C2',15),
(22,268,'2010-09-01','2011-06-15','C','C3',15),
(23,295,'2011-06-16','2011-06-15','C','C3',15),
(24,282,'2011-09-16','2012-05-31','C','C3',15),
(25,27.2,'2010-09-01','2011-06-15','A','A1',19),
(26,29.3,'2011-06-16','2011-06-15','A','A1',19),
(27,28.5,'2011-09-16','2012-05-31','A','A1',19),
(28,17.3,'2010-09-01','2011-06-15','A','A2',19),
(29,18.6,'2011-06-16','2011-06-15','A','A2',19),
(30,18.1,'2011-09-16','2012-05-31','A','A2',19),
(31,9.8,'2010-09-01','2011-06-15','A','A3',19),
(32,10.6,'2011-06-16','2011-06-15','A','A3',19),
(33,10.2,'2011-09-16','2012-05-31','A','A3',19),
(34,129,'2010-09-01','2011-06-15','B','B1',19),
(35,139,'2011-06-16','2011-06-15','B','B1',19),
(36,135,'2011-09-16','2012-05-31','B','B1',19),
(37,194,'2010-09-01','2011-06-15','B','B2',19),
(38,209,'2011-06-16','2011-06-15','B','B2',19),
(39,203,'2011-09-16','2012-05-31','B','B2',19),
(40,284,'2010-09-01','2011-06-15','C','C1',19),
(41,306,'2011-06-16','2011-06-15','C','C1',19),
(42,298,'2011-09-16','2012-05-31','C','C1',19),
(43,308,'2010-09-01','2011-06-15','C','C2',19),
(44,332,'2011-06-16','2011-06-15','C','C2',19),
(45,323,'2011-09-16','2012-05-31','C','C2',19),
(46,402,'2010-09-01','2011-06-15','C','C3',19),
(47,434,'2011-06-16','2011-06-15','C','C3',19),
(48,422,'2011-09-16','2012-05-31','C','C3',19);

insert into Traversee values
(541197, '2011-07-10', '07:45', 15, 1),
(541198, '2011-07-10', '09:15', 15, 2),
(541199, '2011-07-10', '10:50', 15, 3),
(541200, '2011-07-10', '12:15', 15, 4),
(541201, '2011-07-10', '14:30', 15, 1),
(541202, '2011-07-10', '16:45', 15, 2),
(541203, '2011-07-10', '18:15', 15, 3),
(541204, '2011-07-10', '19:45', 15, 5);

insert into Reservation values
(9181458911,209.10,'TIPREZ','15 rue de l\'industrie','19290','PEYRELEVADE',541201);

insert into Contenu values
(2,'A','A1',9181458911),
(1,'A','A2',9181458911),
(2,'A','A3',9181458911),
(1,'B','B2',9181458911);

insert into Equipement values
(1,'Bar'),
(2,'Pont Promenade'),
(3,'Salon Vidéo'),
(4,'Accès Handicapé');

insert into Posseder values
(4,1),
(4,2),
(4,3),
(4,4),
(3,2),
(3,4);

