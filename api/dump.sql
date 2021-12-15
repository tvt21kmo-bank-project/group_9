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
INSERT INTO `asiakas` VALUES (1,'Matti','Mallikas','Mallikkaantie 4',345326236,'T1'),(2,'Sanna','Penttila','Kissakatu 1',400321,'T2'),(3,'Mikko','Malinen','Malisenkatu 6',123456,'T3'),(4,'Kaisa','Kaveri','Kaverinkatu 7',457486558,'T4');
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
INSERT INTO `kayttaja` VALUES ('2222','$2a$10$CdnGuuqE7NvU3fejLjxJDu0/QZrxjZqMxRTiMyvKl.c9Wq9UgLIm2',1,1),('5656','$2a$10$xVDh/9L/rSiL01tsY.9hcO2XOKNmRd8xJe5fzTRJ4ZwPRooF0qFfy',2,2),('1234','$2a$10$ck9wVCncmXDCeZVNqEuAUOS9gHAF9H6vttaybchbVK92vMajNmpTG',3,3),('5555','$2a$10$aK1o82PTdl2YJSQGSXQpK.dv9O.cev.aBMPRhpS0qn7AUcTm/kfzy',4,4);
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
) ENGINE=InnoDB AUTO_INCREMENT=5 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilit`
--

LOCK TABLES `tilit` WRITE;
/*!40000 ALTER TABLE `tilit` DISABLE KEYS */;
INSERT INTO `tilit` VALUES (1,'FI1111',457548),(2,'FI2222',54),(3,'FI3333',4575),(4,'FI4444',77776);
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
  `tili` varchar(45) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `PVM` datetime NOT NULL,
  `Tapahtuma` varchar(45) CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci NOT NULL,
  `Summa` decimal(10,0) NOT NULL,
  PRIMARY KEY (`idTapahtumanumero`)
) ENGINE=InnoDB AUTO_INCREMENT=383 DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `tilitapahtumat`
--

LOCK TABLES `tilitapahtumat` WRITE;
/*!40000 ALTER TABLE `tilitapahtumat` DISABLE KEYS */;
INSERT INTO `tilitapahtumat` VALUES (1,'FI1111','2021-11-29 19:19:22','tilisiirto_nosto_credit',11),(2,'FI2222','2021-11-29 19:19:22','tilisiirto_talletus_credit',11),(3,'FI3333','2021-11-29 19:26:37','tilisiirto_nosto_debit',12),(4,'FI3333','2021-11-29 19:26:37','tilisiirto_talletus_debit',12),(5,'FI3333','2021-11-29 19:28:12','tilisiirto_nosto_debit',13),(6,'FI4444','2021-11-29 19:28:12','tilisiirto_talletus_debit',13),(7,'FI1111','2021-11-29 19:38:45','tilisiirto_nosto_debit',14),(8,'FI1111','2021-11-29 19:38:45','tilisiirto_talletus_debit',14),(9,'FI1111','2021-11-29 19:55:21','tilisiirto_nosto_credit',1),(10,'FI3333','2021-11-29 19:55:21','tilisiirto_talletus_credit',1),(11,'FI3333','2021-11-29 19:56:23','tilisiirto_nosto_debit',2),(12,'FI2222','2021-11-29 19:56:23','tilisiirto_talletus_debit',2),(13,'FI1111','2021-11-29 20:02:49','nosto_debit',7),(14,'FI1111','2021-11-29 20:03:26','tilisiirto_nosto_debit',14),(15,'FI1111','2021-11-29 20:03:26','tilisiirto_talletus_debit',14),(16,'FI3333','2021-11-29 20:03:49','tilisiirto_nosto_credit',50),(17,'FI4444','2021-11-29 20:03:49','tilisiirto_talletus_credit',50),(18,'FI2222','2021-11-29 20:03:59','nosto_debit',23),(19,'FI1111','2021-11-29 21:14:40','nosto_debit',6),(20,'FI1111','2021-11-29 21:42:55','nosto_debit',17),(21,'FI1111','2021-11-29 21:44:21','nosto_debit',17),(22,'FI1111','2021-11-29 22:16:31','tilisiirto_nosto_debit',11),(23,'FI2222','2021-11-29 22:16:31','tilisiirto_talletus_debit',11),(24,'FI1111','2021-11-29 22:18:18','tilisiirto_nosto_debit',11),(25,'FI2222','2021-11-29 22:18:18','tilisiirto_talletus_debit',11),(26,'FI3333','2021-11-29 22:18:33','tilisiirto_nosto_credit',100),(27,'FI4444','2021-11-29 22:18:33','tilisiirto_talletus_credit',100),(28,'FI1111','2021-11-29 22:19:22','nosto_debit',1),(29,'FI1111','2021-11-29 22:21:16','tilisiirto_nosto_debit',11),(30,'FI2222','2021-11-29 22:21:16','tilisiirto_talletus_debit',11),(31,'FI3333','2021-11-29 22:21:24','tilisiirto_nosto_debit',11),(32,'FI2222','2021-11-29 22:21:24','tilisiirto_talletus_debit',11),(33,'FI3333','2021-11-29 22:23:01','tilisiirto_nosto_debit',9),(34,'FI2222','2021-11-29 22:23:01','tilisiirto_talletus_debit',9),(35,'FI1111','2021-11-29 22:26:53','nosto_debit',3),(36,'FI1111','2021-12-07 20:38:40','nosto_debit',11),(37,'FI2222','2021-12-07 20:40:28','nosto_debit',1),(38,'FI1111','2021-12-07 20:42:22','tilisiirto_nosto_debit',13),(39,'FI2222','2021-12-07 20:42:22','tilisiirto_talletus_debit',13),(40,'FI2222','2021-12-07 20:43:05','tilisiirto_nosto_credit',15),(41,'FI1111','2021-12-07 20:43:05','tilisiirto_talletus_credit',15),(42,'FI1111','2021-12-07 21:00:23','nosto_debit',3),(43,'FI1111','2021-12-07 21:03:57','tilisiirto_nosto_credit',17),(44,'FI2222','2021-12-07 21:03:57','tilisiirto_talletus_credit',17),(45,'FI2222','2021-12-07 21:04:07','tilisiirto_nosto_debit',9),(46,'FI1111','2021-12-07 21:04:07','tilisiirto_talletus_debit',9),(47,'FI1111','2021-12-09 01:02:11','nosto_debit',20),(48,'FI1111','2021-12-09 01:02:44','nosto_debit',40),(49,'FI1111','2021-12-09 01:02:46','nosto_debit',60),(50,'FI1111','2021-12-09 01:02:47','nosto_debit',100),(51,'FI1111','2021-12-09 01:02:47','nosto_debit',250),(52,'FI1111','2021-12-09 01:02:48','nosto_debit',500),(53,'FI1111','2021-12-09 01:33:42','nosto_debit',20),(54,'FI1111','2021-12-09 02:31:43','nosto_debit',20),(55,'FI1111','2021-12-09 02:40:25','nosto_debit',20),(56,'FI2222','2021-12-09 02:40:34','nosto_debit',0),(57,'FI2222','2021-12-09 02:41:19','nosto_debit',0),(58,'FI2222','2021-12-09 02:41:40','nosto_debit',10),(59,'FI2222','2021-12-09 02:41:52','nosto_debit',500),(60,'FI2222','2021-12-09 02:42:01','nosto_debit',20),(61,'FI2222','2021-12-09 02:44:09','nosto_debit',10),(62,'FI1111','2021-12-09 03:11:37','nosto_debit',20),(63,'FI1111','2021-12-09 03:11:49','nosto_debit',20),(64,'FI1111','2021-12-09 03:13:35','nosto_debit',20),(65,'FI2222','2021-12-09 03:14:01','nosto_debit',10),(66,'FI2222','2021-12-09 03:14:04','nosto_debit',0),(67,'FI2222','2021-12-09 03:14:06','nosto_debit',0),(68,'FI1111','2021-12-09 03:15:38','nosto_debit',100),(69,'FI1111','2021-12-09 10:32:54','nosto_debit',20),(70,'FI2222','2021-12-09 10:33:18','nosto_debit',100),(71,'FI1111','2021-12-09 10:33:37','nosto_debit',20),(72,'FI1111','2021-12-09 10:33:38','nosto_debit',40),(73,'FI2222','2021-12-09 10:33:58','nosto_debit',100),(74,'FI2222','2021-12-09 10:34:02','nosto_debit',10),(75,'FI1111','2021-12-09 21:57:52','nosto_debit',20),(76,'FI1111','2021-12-11 18:55:09','nosto_debit',1),(77,'FI2222','2021-12-11 18:55:15','tilisiirto_nosto_debit',9),(78,'FI1111','2021-12-11 18:55:15','tilisiirto_talletus_debit',9),(79,'FI1111','2021-12-11 18:55:19','tilisiirto_nosto_credit',17),(80,'FI2222','2021-12-11 18:55:19','tilisiirto_talletus_credit',17),(81,'FI1111','2021-12-11 18:57:00','nosto_debit',20),(82,'FI1111','2021-12-11 19:49:51','nosto_debit',20),(83,'FI1111','2021-12-11 21:03:36','nosto_debit',20),(84,'FI1111','2021-12-11 21:14:17','nosto_debit',20),(85,'FI1111','2021-12-11 21:17:35','nosto_debit',20),(86,'FI1111','2021-12-11 21:17:41','nosto_debit',20),(87,'FI1111','2021-12-11 21:18:07','nosto_debit',20),(88,'FI1111','2021-12-11 21:19:15','nosto_debit',20),(89,'FI1111','2021-12-11 21:19:55','nosto_debit',20),(90,'FI1111','2021-12-11 21:21:56','nosto_debit',20),(91,'FI1111','2021-12-11 21:27:28','nosto_debit',20),(92,'FI1111','2021-12-11 21:31:34','nosto_debit',20),(93,'FI1111','2021-12-11 21:31:42','nosto_debit',20),(94,'FI1111','2021-12-11 21:33:58','nosto_debit',20),(95,'FI1111','2021-12-11 21:34:19','nosto_debit',20),(96,'FI1111','2021-12-11 22:00:28','nosto_debit',20),(97,'FI1111','2021-12-11 22:08:28','nosto_debit',20),(98,'FI1111','2021-12-11 22:08:35','nosto_debit',20),(99,'FI1111','2021-12-11 22:08:39','nosto_debit',20),(100,'FI1111','2021-12-11 22:08:40','nosto_debit',20),(101,'FI1111','2021-12-11 22:12:04','nosto_debit',20),(102,'FI1111','2021-12-11 22:54:33','nosto_debit',20),(103,'FI1111','2021-12-11 22:55:11','nosto_debit',20),(104,'FI1111','2021-12-11 22:56:32','nosto_debit',20),(105,'FI1111','2021-12-11 22:57:31','nosto_debit',20),(106,'FI1111','2021-12-11 22:57:39','nosto_debit',20),(107,'FI1111','2021-12-11 22:58:03','nosto_debit',20),(108,'FI1111','2021-12-11 22:58:51','nosto_debit',20),(109,'FI1111','2021-12-11 22:59:31','nosto_debit',20),(110,'FI1111','2021-12-11 23:00:06','nosto_debit',20),(111,'FI1111','2021-12-11 23:01:07','nosto_debit',20),(112,'FI1111','2021-12-11 23:01:44','nosto_debit',20),(113,'FI1111','2021-12-11 23:06:14','nosto_debit',20),(114,'FI1111','2021-12-11 23:06:32','nosto_debit',20),(115,'FI1111','2021-12-11 23:10:55','nosto_debit',20),(116,'FI1111','2021-12-11 23:11:14','nosto_debit',20),(117,'FI1111','2021-12-11 23:11:23','nosto_debit',20),(118,'FI1111','2021-12-11 23:11:45','nosto_debit',20),(119,'FI1111','2021-12-11 23:14:14','nosto_debit',20),(120,'FI1111','2021-12-11 23:14:57','nosto_debit',20),(121,'FI1111','2021-12-11 23:16:57','nosto_debit',20),(122,'FI1111','2021-12-11 23:52:17','nosto_debit',20),(123,'FI1111','2021-12-11 23:52:22','nosto_debit',20),(124,'FI1111','2021-12-12 13:45:19','nosto_debit',20),(125,'FI1111','2021-12-12 13:45:22','nosto_debit',20),(126,'FI1111','2021-12-12 13:45:24','nosto_debit',20),(127,'FI1111','2021-12-12 13:45:24','nosto_debit',40),(128,'FI1111','2021-12-12 13:45:24','nosto_debit',20),(129,'FI1111','2021-12-12 13:45:31','nosto_debit',20),(130,'FI2222','2021-12-12 13:45:42','nosto_debit',10),(131,'FI1111','2021-12-12 13:45:43','nosto_debit',20),(132,'FI1111','2021-12-12 13:45:44','nosto_debit',20),(133,'FI1111','2021-12-12 13:47:15','nosto_debit',20),(134,'FI1111','2021-12-12 13:47:57','nosto_debit',20),(135,'FI1111','2021-12-12 13:49:05','nosto_debit',20),(136,'FI1111','2021-12-12 13:51:13','nosto_debit',20),(137,'FI1111','2021-12-12 13:52:01','nosto_debit',20),(138,'FI1111','2021-12-12 21:29:09','nosto_debit',20),(139,'FI1111','2021-12-12 21:29:14','nosto_debit',40),(140,'FI1111','2021-12-13 10:41:31','nosto_debit',40),(141,'FI1111','2021-12-13 11:05:36','nosto_debit',20),(142,'FI1111','2021-12-13 11:11:00','nosto_debit',20),(143,'FI1111','2021-12-13 11:11:09','nosto_debit',60),(144,'FI1111','2021-12-13 11:11:16','nosto_debit',500),(145,'FI1111','2021-12-13 11:11:23','nosto_debit',10),(146,'FI1111','2021-12-13 11:11:41','nosto_debit',20),(147,'FI1111','2021-12-13 11:17:59','nosto_debit',20),(148,'FI1111','2021-12-13 11:18:21','nosto_debit',10),(149,'FI1111','2021-12-13 11:47:59','nosto_debit',20),(150,'FI1111','2021-12-13 11:48:11','nosto_debit',40),(151,'FI1111','2021-12-13 11:49:36','nosto_debit',20),(152,'FI1111','2021-12-13 11:49:47','nosto_debit',40),(153,'FI1111','2021-12-13 11:52:18','nosto_debit',20),(154,'FI1111','2021-12-13 11:52:28','nosto_debit',60),(155,'FI1111','2021-12-13 11:52:33','nosto_debit',40),(156,'FI1111','2021-12-13 11:52:37','nosto_debit',20),(157,'FI1111','2021-12-13 12:26:35','nosto_debit',20),(158,'FI1111','2021-12-13 12:26:39','nosto_debit',40),(159,'FI1111','2021-12-13 12:26:45','nosto_debit',40),(160,'FI1111','2021-12-13 12:26:49','nosto_debit',60),(161,'FI1111','2021-12-13 12:26:54','nosto_debit',100),(162,'FI1111','2021-12-13 12:27:04','nosto_debit',250),(163,'FI1111','2021-12-13 12:27:12','nosto_debit',500),(164,'FI1111','2021-12-13 12:35:21','nosto_debit',40),(165,'FI1111','2021-12-13 12:35:27','nosto_debit',20),(166,'FI1111','2021-12-13 12:35:31','nosto_debit',20),(167,'FI1111','2021-12-13 12:35:37','nosto_debit',60),(168,'FI1111','2021-12-13 12:35:49','nosto_debit',250),(169,'FI1111','2021-12-13 12:36:02','nosto_debit',60),(170,'FI1111','2021-12-13 12:36:11','nosto_debit',250),(171,'FI1111','2021-12-13 12:38:43','nosto_debit',60),(172,'FI1111','2021-12-13 14:07:51','nosto_debit',20),(173,'FI1111','2021-12-13 14:07:58','nosto_debit',200),(174,'FI1111','2021-12-13 14:08:04','nosto_debit',60),(175,'FI1111','2021-12-13 14:50:52','nosto_debit',20),(176,'FI1111','2021-12-13 14:50:53','nosto_debit',40),(177,'FI1111','2021-12-13 14:50:56','nosto_debit',60),(178,'FI1111','2021-12-13 14:51:40','nosto_debit',40),(179,'FI1111','2021-12-13 14:51:47','nosto_debit',60),(180,'FI1111','2021-12-13 15:35:05','nosto_debit',40),(181,'FI1111','2021-12-13 16:44:17','nosto_debit',20),(182,'FI1111','2021-12-13 17:53:55','nosto_debit',40),(183,'FI1111','2021-12-13 17:54:50','nosto_debit',20),(184,'FI1111','2021-12-13 17:55:15','nosto_debit',20),(185,'FI1111','2021-12-13 17:55:19','nosto_debit',40),(186,'FI1111','2021-12-13 17:56:14','nosto_debit',40),(187,'FI1111','2021-12-13 17:57:27','nosto_debit',500),(188,'FI1111','2021-12-13 17:57:35','nosto_debit',100),(189,'FI1111','2021-12-13 17:57:39','nosto_debit',60),(190,'FI1111','2021-12-13 18:14:51','nosto_debit',20),(191,'FI1111','2021-12-13 18:23:48','nosto_debit',20),(192,'FI1111','2021-12-13 18:25:22','nosto_debit',40),(193,'FI1111','2021-12-13 18:25:48','nosto_debit',40),(194,'FI1111','2021-12-13 18:26:03','nosto_debit',40),(195,'FI1111','2021-12-13 18:26:18','nosto_debit',40),(196,'FI1111','2021-12-13 19:00:55','nosto_debit',60),(197,'FI1111','2021-12-13 20:36:28','nosto_debit',20),(198,'FI1111','2021-12-13 20:36:34','nosto_debit',100),(199,'FI1111','2021-12-13 20:40:02','nosto_debit',20),(200,'FI1111','2021-12-13 20:40:05','nosto_debit',40),(201,'FI1111','2021-12-13 20:40:06','nosto_debit',60),(202,'FI1111','2021-12-13 20:40:11','nosto_debit',100),(203,'FI1111','2021-12-13 20:40:12','nosto_debit',200),(204,'FI1111','2021-12-13 20:40:14','nosto_debit',500),(205,'FI1111','2021-12-13 20:40:15','nosto_debit',60),(206,'FI1111','2021-12-13 20:48:36','nosto_debit',500),(207,'FI1111','2021-12-13 20:54:08','nosto_debit',60),(208,'FI1111','2021-12-13 20:54:12','nosto_debit',40),(209,'FI1111','2021-12-13 20:54:18','nosto_debit',500),(210,'FI1111','2021-12-13 20:57:02','nosto_debit',60),(211,'FI1111','2021-12-13 21:10:42','nosto_debit',60),(212,'FI1111','2021-12-13 21:10:45','nosto_debit',40),(213,'FI1111','2021-12-13 21:10:51','nosto_debit',20),(214,'FI1111','2021-12-13 21:10:57','nosto_debit',500),(215,'FI1111','2021-12-13 21:11:00','nosto_debit',200),(216,'FI1111','2021-12-13 21:11:03','nosto_debit',100),(217,'FI1111','2021-12-13 21:23:48','nosto_debit',20),(218,'FI1111','2021-12-13 21:23:54','nosto_debit',40),(219,'FI1111','2021-12-13 21:23:59','nosto_debit',60),(220,'FI1111','2021-12-13 21:24:08','nosto_debit',500),(221,'FI1111','2021-12-13 21:29:33','nosto_debit',500),(222,'FI1111','2021-12-13 21:29:56','nosto_debit',60),(223,'FI1111','2021-12-13 21:30:00','nosto_debit',40),(224,'FI1111','2021-12-14 10:04:21','nosto_debit',20),(225,'FI1111','2021-12-14 10:05:14','nosto_debit',40),(226,'FI1111','2021-12-14 11:37:17','nosto_debit',40),(227,'FI1111','2021-12-14 11:50:17','nosto_debit',20),(228,'FI1111','2021-12-14 13:35:33','nosto_debit',60),(229,'FI1111','2021-12-14 13:57:39','nosto_debit',20),(230,'FI1111','2021-12-14 13:58:19','nosto_debit',20),(231,'FI1111','2021-12-14 14:07:37','nosto_debit',40),(232,'FI1111','2021-12-14 14:14:17','nosto_debit',60),(233,'FI1111','2021-12-14 14:14:22','nosto_debit',60),(234,'FI1111','2021-12-14 14:14:42','nosto_debit',60),(235,'FI1111','2021-12-14 14:15:06','nosto_debit',200),(236,'FI1111','2021-12-14 14:16:28','nosto_debit',500),(237,'FI1111','2021-12-14 14:16:31','nosto_debit',200),(238,'FI1111','2021-12-14 14:16:33','nosto_debit',100),(239,'FI1111','2021-12-14 14:16:36','nosto_debit',60),(240,'FI1111','2021-12-14 14:16:37','nosto_debit',60),(241,'FI1111','2021-12-14 14:16:40','nosto_debit',60),(242,'FI1111','2021-12-14 14:16:42','nosto_debit',60),(243,'FI1111','2021-12-14 14:16:44','nosto_debit',40),(244,'FI1111','2021-12-14 14:16:47','nosto_debit',20),(245,'FI1111','2021-12-14 14:17:41','nosto_debit',40),(246,'FI1111','2021-12-14 14:17:46','nosto_debit',60),(247,'FI1111','2021-12-14 14:40:43','nosto_debit',40),(248,'FI1111','2021-12-14 14:40:50','nosto_debit',60),(249,'FI1111','2021-12-14 14:40:56','nosto_debit',100),(250,'FI1111','2021-12-14 14:41:00','nosto_debit',200),(251,'FI1111','2021-12-14 14:41:02','nosto_debit',200),(252,'FI1111','2021-12-14 14:41:06','nosto_debit',500),(253,'FI1111','2021-12-14 14:41:09','nosto_debit',500),(254,'FI1111','2021-12-14 14:42:03','nosto_debit',60),(255,'FI1111','2021-12-14 14:44:37','nosto_debit',60),(256,'FI1111','2021-12-14 14:44:40','nosto_debit',500),(257,'FI1111','2021-12-14 14:44:43','nosto_debit',200),(258,'FI1111','2021-12-14 14:45:32','nosto_debit',100),(259,'FI1111','2021-12-14 14:45:34','nosto_debit',200),(260,'FI1111','2021-12-14 14:47:01','nosto_debit',100),(261,'FI1111','2021-12-14 14:51:07','nosto_debit',500),(262,'FI1111','2021-12-14 15:06:55','nosto_debit',20),(263,'FI1111','2021-12-14 15:07:52','nosto_debit',40),(264,'FI1111','2021-12-14 15:07:58','nosto_debit',100),(265,'FI1111','2021-12-14 15:13:09','nosto_debit',20),(266,'FI1111','2021-12-14 15:14:44','nosto_debit',20),(267,'FI1111','2021-12-14 15:20:32','nosto_debit',500),(268,'FI1111','2021-12-14 15:20:38','nosto_debit',500),(269,'FI1111','2021-12-14 15:20:39','nosto_debit',500),(270,'FI1111','2021-12-14 15:20:59','nosto_debit',500),(271,'FI1111','2021-12-14 15:22:08','nosto_debit',500),(272,'FI1111','2021-12-14 15:26:54','nosto_debit',500),(273,'FI1111','2021-12-14 15:26:56','nosto_debit',20),(274,'FI1111','2021-12-14 15:28:21','nosto_debit',60),(275,'FI1111','2021-12-14 15:28:26','nosto_debit',500),(276,'FI1111','2021-12-14 15:30:21','nosto_debit',500),(277,'FI1111','2021-12-14 15:30:25','nosto_debit',500),(278,'FI1111','2021-12-14 15:30:30','nosto_debit',500),(279,'FI1111','2021-12-14 15:30:32','nosto_debit',200),(280,'FI1111','2021-12-14 15:30:58','nosto_debit',500),(281,'FI1111','2021-12-14 15:31:04','nosto_debit',20),(282,'FI1111','2021-12-14 15:31:13','nosto_debit',60),(283,'FI1111','2021-12-14 15:31:20','nosto_debit',500),(284,'FI1111','2021-12-14 15:31:25','nosto_debit',200),(285,'FI1111','2021-12-14 15:31:26','nosto_debit',500),(286,'FI1111','2021-12-14 15:31:27','nosto_debit',200),(287,'FI1111','2021-12-14 15:31:52','nosto_debit',500),(288,'FI1111','2021-12-14 15:31:59','nosto_debit',200),(289,'FI1111','2021-12-14 15:32:05','nosto_debit',100),(290,'FI1111','2021-12-14 15:56:05','nosto_debit',200),(291,'FI1111','2021-12-14 15:57:48','nosto_debit',100),(292,'FI1111','2021-12-14 15:58:09','nosto_debit',200),(293,'FI1111','2021-12-14 15:59:42','nosto_debit',100),(294,'FI1111','2021-12-14 16:02:19','nosto_debit',100),(295,'FI1111','2021-12-14 16:02:21','nosto_debit',100),(296,'FI1111','2021-12-14 16:02:35','nosto_debit',40),(297,'FI1111','2021-12-14 16:02:41','nosto_debit',60),(298,'FI1111','2021-12-14 16:02:49','nosto_debit',100),(299,'FI1111','2021-12-14 16:02:55','nosto_debit',200),(300,'FI1111','2021-12-14 16:03:02','nosto_debit',500),(301,'FI1111','2021-12-14 16:07:06','nosto_debit',100),(302,'FI1111','2021-12-14 16:07:20','nosto_debit',30),(303,'FI1111','2021-12-14 16:07:30','nosto_debit',930),(304,'FI1111','2021-12-14 16:14:12','nosto_debit',20),(305,'FI1111','2021-12-14 16:14:19','nosto_debit',100),(306,'FI1111','2021-12-14 16:24:00','nosto_debit',20),(307,'FI1111','2021-12-14 16:24:26','nosto_debit',100),(308,'FI1111','2021-12-14 16:49:03','nosto_debit',20),(309,'FI1111','2021-12-14 16:49:11','nosto_debit',40),(310,'FI1111','2021-12-14 16:49:18','nosto_debit',60),(311,'FI1111','2021-12-14 16:49:26','nosto_debit',100),(312,'FI1111','2021-12-14 16:49:33','nosto_debit',200),(313,'FI1111','2021-12-14 16:49:39','nosto_debit',500),(314,'FI1111','2021-12-14 16:49:47','nosto_debit',30),(315,'FI1111','2021-12-14 16:49:59','nosto_debit',1360),(316,'FI1111','2021-12-14 16:50:16','nosto_debit',3460),(317,'FI1111','2021-12-14 16:50:26','nosto_debit',70),(318,'FI1111','2021-12-14 17:55:47','nosto_debit',20),(319,'FI1111','2021-12-14 17:56:12','nosto_debit',200),(320,'FI1111','2021-12-14 17:56:21','nosto_debit',60),(321,'FI1111','2021-12-14 17:58:11','nosto_debit',20),(322,'FI1111','2021-12-14 18:01:33','nosto_debit',20),(323,'FI1111','2021-12-14 18:03:27','nosto_debit',20),(324,'FI1111','2021-12-14 18:03:35','nosto_debit',30),(325,'FI1111','2021-12-14 18:24:13','nosto_debit',20),(326,'FI1111','2021-12-14 18:54:38','nosto_debit',20),(327,'FI1111','2021-12-14 18:57:19','nosto_debit',60),(328,'FI1111','2021-12-14 19:03:11','nosto_debit',10),(329,'FI1111','2021-12-14 19:03:40','nosto_debit',20),(330,'FI1111','2021-12-14 19:34:22','nosto_debit',500),(331,'FI1111','2021-12-14 19:42:20','nosto_debit',500),(332,'FI1111','2021-12-14 19:57:47','nosto_debit',500),(333,'FI1111','2021-12-14 20:17:15','nosto_debit',20),(334,'FI1111','2021-12-14 20:17:26','nosto_debit',20),(335,'FI1111','2021-12-14 20:17:36','nosto_debit',90),(336,'FI1111','2021-12-15 01:08:34','nosto_debit',20),(337,'FI1111','2021-12-15 02:52:23','nosto_debit',20),(338,'FI1111','2021-12-15 02:52:40','nosto_debit',30),(339,'FI1111','2021-12-15 02:53:23','nosto_debit',20),(340,'FI1111','2021-12-15 02:54:34','nosto_debit',20),(341,'FI1111','2021-12-15 02:58:14','nosto_debit',20),(342,'FI1111','2021-12-15 03:18:04','nosto_debit',500),(343,'FI1111','2021-12-15 03:19:44','nosto_debit',6630),(344,'FI1111','2021-12-15 03:20:27','nosto_debit',930),(345,'FI1111','2021-12-15 03:22:34','nosto_debit',200),(346,'FI1111','2021-12-15 03:23:55','nosto_debit',40),(347,'FI1111','2021-12-15 05:58:29','nosto_debit',20),(348,'FI1111','2021-12-15 06:01:47','nosto_debit',20),(349,'FI1111','2021-12-15 06:06:35','nosto_debit',20),(350,'FI1111','2021-12-15 06:28:03','nosto_debit',60),(351,'FI1111','2021-12-15 06:29:20','nosto_debit',20),(352,'FI1111','2021-12-15 06:29:57','nosto_debit',60),(353,'FI2222','2021-12-15 06:42:12','nosto_debit',20),(354,'FI2222','2021-12-15 06:42:33','nosto_debit',200),(355,'FI1111','2021-12-15 06:43:03','nosto_debit',60),(356,'FI2222','2021-12-15 06:45:34','nosto_debit',20),(357,'FI1111','2021-12-15 06:46:01','nosto_debit',100),(358,'FI2222','2021-12-15 17:19:36','nosto_debit',20),(359,'FI2222','2021-12-15 18:14:23','nosto_debit',40),(360,'FI1111','2021-12-15 18:53:59','nosto_debit',70),(361,'FI2222','2021-12-15 18:55:18','nosto_debit',40),(362,'FI2222','2021-12-15 18:57:14','nosto_debit',40),(363,'FI2222','2021-12-15 18:58:58','nosto_debit',100),(364,'FI1111','2021-12-15 18:59:38','nosto_debit',40),(365,'FI2222','2021-12-15 20:08:10','nosto_debit',20),(366,'FI1111','2021-12-15 21:00:53','nosto_debit',1),(367,'FI2222','2021-12-15 21:01:37','nosto_debit',2),(368,'FI3333','2021-12-15 21:01:42','nosto_debit',2),(369,'FI2222','2021-12-15 21:02:15','nosto_debit',20),(370,'FI2222','2021-12-15 21:02:19','nosto_debit',40),(371,'FI2222','2021-12-15 21:02:23','nosto_debit',60),(372,'FI2222','2021-12-15 21:02:28','nosto_debit',100),(373,'FI2222','2021-12-15 21:02:31','nosto_debit',100),(374,'FI2222','2021-12-15 21:02:36','nosto_debit',60),(375,'FI2222','2021-12-15 21:02:40','nosto_debit',500),(376,'FI1111','2021-12-15 21:03:03','nosto_debit',20),(377,'FI1111','2021-12-15 21:03:18','nosto_debit',40),(378,'FI1111','2021-12-15 21:03:31','nosto_debit',500),(379,'FI2222','2021-12-15 21:14:12','nosto_debit',20),(380,'FI2222','2021-12-15 21:14:25','nosto_debit',500),(381,'fi1111','2021-12-15 21:14:57','tilisiirto_nosto_debit',11),(382,'fi2222','2021-12-15 21:14:57','tilisiirto_talletus_debit',11);
/*!40000 ALTER TABLE `tilitapahtumat` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping routines for database 'bank_db'
--
/*!50003 DROP PROCEDURE IF EXISTS `credit_tilisiirto` */;
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
      INSERT INTO tilitapahtumat(tili,PVM,Tapahtuma,Summa) VALUES(Maksajan_tilinro,NOW(),'tilisiirto_nosto_credit',Summa);
      INSERT INTO tilitapahtumat(tili,PVM,Tapahtuma,Summa) VALUES(Saajan_tilinro,NOW(),'tilisiirto_talletus_credit',Summa);
    ELSE
      ROLLBACK;
  END IF;
  END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `debit_nosto` */;
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
      INSERT INTO tilitapahtumat(tili,PVM,Tapahtuma,Summa) VALUES(Tilinro,NOW(),'nosto_debit',Summa);
    ELSE
      ROLLBACK;
  END IF;
  END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `debit_tilisiirto` */;
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
      INSERT INTO tilitapahtumat(tili,PVM,Tapahtuma,Summa) VALUES(Maksajan_tilinro,NOW(),'tilisiirto_nosto_debit',Summa);
      INSERT INTO tilitapahtumat(tili,PVM,Tapahtuma,Summa) VALUES(Saajan_tilinro,NOW(),'tilisiirto_talletus_debit',Summa);
    ELSE
      ROLLBACK;
  END IF;
  END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-12-15 21:27:22
