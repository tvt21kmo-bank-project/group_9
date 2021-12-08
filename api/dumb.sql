CREATE DATABASE  IF NOT EXISTS `bank_db` /*!40100 DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci */ /*!80016 DEFAULT ENCRYPTION='N' */;
USE `bank_db`;
-- MySQL dump 10.13  Distrib 8.0.26, for Win64 (x86_64)
--
-- Host: 127.0.0.1    Database: bank_db
-- ------------------------------------------------------
-- Server version	8.0.23

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `asiakas`
--

DROP TABLE IF EXISTS `asiakas`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `asiakas` (
  `idAsiakas` int NOT NULL AUTO_INCREMENT,
  `Etunimi` varchar(45) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT NULL,
  `Sukunimi` varchar(45) DEFAULT NULL,
  `Osoite` varchar(45) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci DEFAULT NULL,
  `Puhelinnumero` int DEFAULT NULL,
  `Asiakastunnus` varchar(45) DEFAULT NULL,
  PRIMARY KEY (`idAsiakas`)
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `asiakas`
--

LOCK TABLES `asiakas` WRITE;
/*!40000 ALTER TABLE `asiakas` DISABLE KEYS */;
INSERT INTO `asiakas` VALUES (1,'Matti','Meikalainen','Koirakatu 1',500321,'T1'),(2,'Sanna','Penttila','Kissakatu 1',400321,'T2'),(3,'Tero','Taipanen','Siilikatu 3',400696,'T3');
/*!40000 ALTER TABLE `asiakas` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `kayttaja`
--

DROP TABLE IF EXISTS `kayttaja`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `kayttaja` (
  `Kayttajatunnus` varchar(20) NOT NULL COMMENT 'Tämä on ikään kuin pankkikortin tunnusluku, jolla kirjaudutaan salasanan lisäksi.',
  `Salasana` varchar(255) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `idTilit` int NOT NULL,
  `idAsiakas` int NOT NULL,
  PRIMARY KEY (`idTilit`,`idAsiakas`),
  UNIQUE KEY `Käyttäjätunnus_UNIQUE` (`Kayttajatunnus`),
  KEY `fk_Käyttäjä_Asiakas1_idx` (`idAsiakas`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `kayttaja`
--

LOCK TABLES `kayttaja` WRITE;
/*!40000 ALTER TABLE `kayttaja` DISABLE KEYS */;
INSERT INTO `kayttaja` VALUES ('1234','$2a$10$KyPcpbQ3WAjCizlXyEeBiua92JJBMPLZLt/tDWwG7OSsaGkEzdWMi',1,1),('5656','$2a$10$tstRYCZRoOo2uZBPyUs3weJpDI/KesELswSZN5GGXFJ73aR.d2Lci',2,2),('7689','$2a$10$lHsXH1n4cT8a5mkYS1OkN.VB4IUpbBVpYGYa0HF3wpgjOQe0jSrmK',3,3);
/*!40000 ALTER TABLE `kayttaja` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tilit`
--

DROP TABLE IF EXISTS `tilit`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tilit` (
  `idTilit` int NOT NULL AUTO_INCREMENT,
  `Tilinumero` varchar(45) CHARACTER SET utf8 NOT NULL,
  `Saldo` decimal(10,0) NOT NULL,
  PRIMARY KEY (`idTilit`)
) ENGINE=InnoDB AUTO_INCREMENT=3 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilit`
--

LOCK TABLES `tilit` WRITE;
/*!40000 ALTER TABLE `tilit` DISABLE KEYS */;
INSERT INTO `tilit` VALUES (1,'FI1111',4980),(2,'FI2222',10005);
/*!40000 ALTER TABLE `tilit` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `tilitapahtumat`
--

DROP TABLE IF EXISTS `tilitapahtumat`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `tilitapahtumat` (
  `idTapahtumanumero` int NOT NULL AUTO_INCREMENT,
  `Tilinumero` varchar(45) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `PVM` datetime NOT NULL,
  `Tapahtuma` varchar(45) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `Summa` decimal(10,0) NOT NULL,
  PRIMARY KEY (`idTapahtumanumero`)
) ENGINE=InnoDB AUTO_INCREMENT=47 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilitapahtumat`
--

LOCK TABLES `tilitapahtumat` WRITE;
/*!40000 ALTER TABLE `tilitapahtumat` DISABLE KEYS */;
INSERT INTO `tilitapahtumat` VALUES (1,'FI1111','2021-11-29 19:19:22','tilisiirto_nosto_credit',11),(2,'FI2222','2021-11-29 19:19:22','tilisiirto_talletus_credit',11),(3,'FI3333','2021-11-29 19:26:37','tilisiirto_nosto_debit',12),(4,'FI3333','2021-11-29 19:26:37','tilisiirto_talletus_debit',12),(5,'FI3333','2021-11-29 19:28:12','tilisiirto_nosto_debit',13),(6,'FI4444','2021-11-29 19:28:12','tilisiirto_talletus_debit',13),(7,'FI1111','2021-11-29 19:38:45','tilisiirto_nosto_debit',14),(8,'FI1111','2021-11-29 19:38:45','tilisiirto_talletus_debit',14),(9,'FI1111','2021-11-29 19:55:21','tilisiirto_nosto_credit',1),(10,'FI3333','2021-11-29 19:55:21','tilisiirto_talletus_credit',1),(11,'FI3333','2021-11-29 19:56:23','tilisiirto_nosto_debit',2),(12,'FI2222','2021-11-29 19:56:23','tilisiirto_talletus_debit',2),(13,'FI1111','2021-11-29 20:02:49','nosto_debit',7),(14,'FI1111','2021-11-29 20:03:26','tilisiirto_nosto_debit',14),(15,'FI1111','2021-11-29 20:03:26','tilisiirto_talletus_debit',14),(16,'FI3333','2021-11-29 20:03:49','tilisiirto_nosto_credit',50),(17,'FI4444','2021-11-29 20:03:49','tilisiirto_talletus_credit',50),(18,'FI2222','2021-11-29 20:03:59','nosto_debit',23),(19,'FI1111','2021-11-29 21:14:40','nosto_debit',6),(20,'FI1111','2021-11-29 21:42:55','nosto_debit',17),(21,'FI1111','2021-11-29 21:44:21','nosto_debit',17),(22,'FI1111','2021-11-29 22:16:31','tilisiirto_nosto_debit',11),(23,'FI2222','2021-11-29 22:16:31','tilisiirto_talletus_debit',11),(24,'FI1111','2021-11-29 22:18:18','tilisiirto_nosto_debit',11),(25,'FI2222','2021-11-29 22:18:18','tilisiirto_talletus_debit',11),(26,'FI3333','2021-11-29 22:18:33','tilisiirto_nosto_credit',100),(27,'FI4444','2021-11-29 22:18:33','tilisiirto_talletus_credit',100),(28,'FI1111','2021-11-29 22:19:22','nosto_debit',1),(29,'FI1111','2021-11-29 22:21:16','tilisiirto_nosto_debit',11),(30,'FI2222','2021-11-29 22:21:16','tilisiirto_talletus_debit',11),(31,'FI3333','2021-11-29 22:21:24','tilisiirto_nosto_debit',11),(32,'FI2222','2021-11-29 22:21:24','tilisiirto_talletus_debit',11),(33,'FI3333','2021-11-29 22:23:01','tilisiirto_nosto_debit',9),(34,'FI2222','2021-11-29 22:23:01','tilisiirto_talletus_debit',9),(35,'FI1111','2021-11-29 22:26:53','nosto_debit',3),(36,'FI1111','2021-12-07 20:38:40','nosto_debit',11),(37,'FI2222','2021-12-07 20:40:28','nosto_debit',1),(38,'FI1111','2021-12-07 20:42:22','tilisiirto_nosto_debit',13),(39,'FI2222','2021-12-07 20:42:22','tilisiirto_talletus_debit',13),(40,'FI2222','2021-12-07 20:43:05','tilisiirto_nosto_credit',15),(41,'FI1111','2021-12-07 20:43:05','tilisiirto_talletus_credit',15),(42,'FI1111','2021-12-07 21:00:23','nosto_debit',3),(43,'FI1111','2021-12-07 21:03:57','tilisiirto_nosto_credit',17),(44,'FI2222','2021-12-07 21:03:57','tilisiirto_talletus_credit',17),(45,'FI2222','2021-12-07 21:04:07','tilisiirto_nosto_debit',9),(46,'FI1111','2021-12-07 21:04:07','tilisiirto_talletus_debit',9);
/*!40000 ALTER TABLE `tilitapahtumat` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping events for database 'bank_db'
--

--
-- Dumping routines for database 'bank_db'
--
/*!50003 DROP PROCEDURE IF EXISTS `credit_tilisiirto` */;
ALTER DATABASE `bank_db` CHARACTER SET utf8mb3 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `credit_tilisiirto`(IN Maksajan_tilinro VARCHAR(45), IN Saajan_tilinro VARCHAR(45), IN Summa DECIMAL )
BEGIN
  DECLARE test1,test2 INT DEFAULT 0;
  START TRANSACTION;
  UPDATE tilit SET Saldo=Saldo-Summa WHERE Tilinumero=Maksajan_tilinro AND idTilit > 0;
  SET test1=ROW_COUNT();
  UPDATE tilit SET Saldo=Saldo+Summa WHERE Tilinumero=Saajan_tilinro AND idTilit > 0;
  SET test2=ROW_COUNT();
    IF (test1 > 0 AND test2 >0) THEN   
      COMMIT;    
      INSERT INTO tilitapahtumat(Tilinumero,PVM,Tapahtuma,Summa) VALUES(Maksajan_tilinro,NOW(),'tilisiirto_nosto_credit',Summa);
      INSERT INTO tilitapahtumat(Tilinumero,PVM,Tapahtuma,Summa) VALUES(Saajan_tilinro,NOW(),'tilisiirto_talletus_credit',Summa);
    ELSE
      ROLLBACK;
  END IF;
  END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `bank_db` CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `debit_nosto` */;
ALTER DATABASE `bank_db` CHARACTER SET utf8mb3 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `debit_nosto`(IN Tilinro VARCHAR(45), IN Summa DECIMAL )
BEGIN
  DECLARE test INT DEFAULT 0;
  START TRANSACTION;
  UPDATE tilit SET Saldo=Saldo-Summa
	WHERE Tilinumero=Tilinro AND Saldo>=Summa AND idTilit > 0;
  SET test=ROW_COUNT();
    IF (test > 0) THEN   
      COMMIT;    
      INSERT INTO tilitapahtumat(Tilinumero,PVM,Tapahtuma,Summa) VALUES(Tilinro,NOW(),'nosto_debit',Summa);
    ELSE
      ROLLBACK;
  END IF;
  END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `bank_db` CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci ;
/*!50003 DROP PROCEDURE IF EXISTS `debit_tilisiirto` */;
ALTER DATABASE `bank_db` CHARACTER SET utf8mb3 COLLATE utf8_general_ci ;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8mb4 */ ;
/*!50003 SET character_set_results = utf8mb4 */ ;
/*!50003 SET collation_connection  = utf8mb4_0900_ai_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`root`@`localhost` PROCEDURE `debit_tilisiirto`(IN Maksajan_tilinro VARCHAR(45), IN Saajan_tilinro VARCHAR(45), IN Summa DECIMAL )
BEGIN
  DECLARE test1,test2 INT DEFAULT 0;
  START TRANSACTION;
  UPDATE tilit SET Saldo=Saldo-Summa WHERE Tilinumero=Maksajan_tilinro AND Saldo>=Summa AND idTilit > 0;
  SET test1=ROW_COUNT();
  UPDATE tilit SET Saldo=Saldo+Summa WHERE Tilinumero=Saajan_tilinro AND idTilit > 0;
  SET test2=ROW_COUNT();
    IF (test1 > 0 AND test2 >0) THEN   
      COMMIT;    
      INSERT INTO tilitapahtumat(Tilinumero,PVM,Tapahtuma,Summa) VALUES(Maksajan_tilinro,NOW(),'tilisiirto_nosto_debit',Summa);
      INSERT INTO tilitapahtumat(Tilinumero,PVM,Tapahtuma,Summa) VALUES(Saajan_tilinro,NOW(),'tilisiirto_talletus_debit',Summa);
    ELSE
      ROLLBACK;
  END IF;
  END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
ALTER DATABASE `bank_db` CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci ;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-12-07 22:20:58
