-- Base de données Atlantik
-- Créée avec GapMEA le 17/10/2019 par J. Mainard et Y. Salamone

CREATE TABLE `Secteur`(`secteurNum` INTEGER,`secteurLib` VARCHAR(25),primary key(`secteurNum`));

CREATE TABLE `Port`(`portNum` INTEGER,`portLib` VARCHAR(25),primary key(`portNum`));

CREATE TABLE `Categorie`(`catId` VARCHAR(2),`catLib` VARCHAR(25),primary key(`catId`));

CREATE TABLE `Type`(`typeId` VARCHAR(3),`typeLib` VARCHAR(25),`catId` VARCHAR(2) NOT NULL, foreign key (`catId`) references Categorie(`catId`),primary key(`catId`,typeId));

CREATE TABLE `Bateau`(`bateauNum` INTEGER,`bateauNom` VARCHAR(25), longueur float, largeur float, vitesse float, image varchar(150), poidsMax float, type varchar(1), primary key(`bateauNum`));

CREATE TABLE `Capacite`(`nbPlaces` INTEGER,`catId` VARCHAR(2) NOT NULL,`bateauNum` INTEGER NOT NULL, foreign key (`catId`) references Categorie(`catId`), foreign key (`bateauNum`) references Bateau(`bateauNum`),primary key(`catId`,`bateauNum`));

CREATE TABLE `Liaison`(`liaisonCode` INTEGER,`liaisonDistance` INTEGER,`secteurNum` INTEGER NOT NULL,portDepart INTEGER NOT NULL,portArrivee INTEGER NOT NULL, foreign key (`secteurNum`) references Secteur(`secteurNum`), foreign key (portDepart) references Port(`portNum`), foreign key (portArrivee) references Port(`portNum`),primary key(`liaisonCode`));

CREATE TABLE `Tarif`(`tarifNum` INTEGER,`tarifPrix` FLOAT,`tarifDateDebut` DATE,`tarifDateFin` DATE,`catId` VARCHAR(2) NOT NULL,`typeId` VARCHAR(3) NOT NULL,`liaisonCode` INTEGER NOT NULL, foreign key (`catId`,typeId) references Type(`catId`,typeId), foreign key (`liaisonCode`) references Liaison(`liaisonCode`),primary key(`tarifNum`));

CREATE TABLE `Traversee`(`travNum` INTEGER,`travDate` DATE,`travHeure` TIME,`liaisonCode` INTEGER NOT NULL,`bateauNum` INTEGER NOT NULL, foreign key (`liaisonCode`) references Liaison(`liaisonCode`), foreign key (`bateauNum`) references Bateau(`bateauNum`),primary key(`travNum`));

CREATE TABLE `Reservation`(`resaNum` bigint,`resaMontant` FLOAT,`cliNom` VARCHAR(30),`cliRue` VARCHAR(100),`cliCP` VARCHAR(5),`cliVille` VARCHAR(40),`travNum` INTEGER NOT NULL, foreign key (`travNum`) references Traversee(`travNum`),primary key(`resaNum`));

CREATE TABLE `Contenu`(`nbPlaces` INTEGER,`catId` VARCHAR(2) NOT NULL,`typeId` VARCHAR(3) NOT NULL,`resaNum` bigint NOT NULL, foreign key (`catId`,typeId) references Type(`catId`,typeId), foreign key (`resaNum`) references Reservation(`resaNum`),primary key(`catId`,typeId,`resaNum`));

CREATE TABLE Equipement (id integer, lib varchar (150), primary key(id));

CREATE TABLE Posseder (idBat integer, idEquip integer, foreign key (idBat) references Bateau (bateauNum), foreign key (idEquip) references Equipement (id), primary key(idBat,idEquip));
