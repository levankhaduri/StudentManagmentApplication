USE [master]
GO
/****** Object:  Database [StudentsManagmentDB]    Script Date: 16.01.2021 16:26:47 ******/
CREATE DATABASE [StudentsManagmentDB]
 CONTAINMENT = NONE
 ON  PRIMARY 
( NAME = N'StudentsManagmentDB', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL15.MSSQLSERVER\MSSQL\DATA\StudentsManagmentDB.mdf' , SIZE = 8192KB , MAXSIZE = UNLIMITED, FILEGROWTH = 65536KB )
 LOG ON 
( NAME = N'StudentsManagmentDB_log', FILENAME = N'C:\Program Files\Microsoft SQL Server\MSSQL15.MSSQLSERVER\MSSQL\DATA\StudentsManagmentDB_log.ldf' , SIZE = 8192KB , MAXSIZE = 2048GB , FILEGROWTH = 65536KB )
 WITH CATALOG_COLLATION = DATABASE_DEFAULT
GO
ALTER DATABASE [StudentsManagmentDB] SET COMPATIBILITY_LEVEL = 150
GO
IF (1 = FULLTEXTSERVICEPROPERTY('IsFullTextInstalled'))
begin
EXEC [StudentsManagmentDB].[dbo].[sp_fulltext_database] @action = 'enable'
end
GO
ALTER DATABASE [StudentsManagmentDB] SET ANSI_NULL_DEFAULT OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET ANSI_NULLS OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET ANSI_PADDING OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET ANSI_WARNINGS OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET ARITHABORT OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET AUTO_CLOSE OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET AUTO_SHRINK OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET AUTO_UPDATE_STATISTICS ON 
GO
ALTER DATABASE [StudentsManagmentDB] SET CURSOR_CLOSE_ON_COMMIT OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET CURSOR_DEFAULT  GLOBAL 
GO
ALTER DATABASE [StudentsManagmentDB] SET CONCAT_NULL_YIELDS_NULL OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET NUMERIC_ROUNDABORT OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET QUOTED_IDENTIFIER OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET RECURSIVE_TRIGGERS OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET  DISABLE_BROKER 
GO
ALTER DATABASE [StudentsManagmentDB] SET AUTO_UPDATE_STATISTICS_ASYNC OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET DATE_CORRELATION_OPTIMIZATION OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET TRUSTWORTHY OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET ALLOW_SNAPSHOT_ISOLATION OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET PARAMETERIZATION SIMPLE 
GO
ALTER DATABASE [StudentsManagmentDB] SET READ_COMMITTED_SNAPSHOT OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET HONOR_BROKER_PRIORITY OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET RECOVERY FULL 
GO
ALTER DATABASE [StudentsManagmentDB] SET  MULTI_USER 
GO
ALTER DATABASE [StudentsManagmentDB] SET PAGE_VERIFY CHECKSUM  
GO
ALTER DATABASE [StudentsManagmentDB] SET DB_CHAINING OFF 
GO
ALTER DATABASE [StudentsManagmentDB] SET FILESTREAM( NON_TRANSACTED_ACCESS = OFF ) 
GO
ALTER DATABASE [StudentsManagmentDB] SET TARGET_RECOVERY_TIME = 60 SECONDS 
GO
ALTER DATABASE [StudentsManagmentDB] SET DELAYED_DURABILITY = DISABLED 
GO
ALTER DATABASE [StudentsManagmentDB] SET ACCELERATED_DATABASE_RECOVERY = OFF  
GO
EXEC sys.sp_db_vardecimal_storage_format N'StudentsManagmentDB', N'ON'
GO
ALTER DATABASE [StudentsManagmentDB] SET QUERY_STORE = OFF
GO
USE [StudentsManagmentDB]
GO
/****** Object:  Table [dbo].[Course]    Script Date: 16.01.2021 16:26:47 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Course](
	[IdNumber] [nvarchar](50) NULL,
	[Name] [nvarchar](50) NULL,
	[LectorId] [nvarchar](50) NULL
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[CourseScoreMap]    Script Date: 16.01.2021 16:26:47 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[CourseScoreMap](
	[StudentNumber] [nvarchar](50) NULL,
	[CourseNumber] [nvarchar](50) NULL,
	[Score] [nvarchar](50) NULL
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Lector]    Script Date: 16.01.2021 16:26:47 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Lector](
	[IdNumber] [nvarchar](100) NULL,
	[Name] [nvarchar](100) NULL,
	[DegreeStatus] [nvarchar](100) NULL,
	[Mail] [nvarchar](100) NULL,
	[PhoneNum] [nvarchar](100) NULL
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[Student]    Script Date: 16.01.2021 16:26:47 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[Student](
	[IdNumber] [nvarchar](50) NULL,
	[FullName] [nvarchar](50) NULL,
	[Mail] [nvarchar](50) NULL
) ON [PRIMARY]
GO
/****** Object:  Table [dbo].[UserAccounts]    Script Date: 16.01.2021 16:26:47 ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[UserAccounts](
	[Id] [nvarchar](50) NULL,
	[UserName] [nvarchar](50) NULL,
	[PassWord] [nvarchar](50) NULL,
	[UserType] [nvarchar](50) NULL,
	[Mail] [nvarchar](50) NULL,
	[PhoneNumber] [nvarchar](50) NULL,
	[Status] [nvarchar](50) NULL,
	[FullName] [nvarchar](50) NULL
) ON [PRIMARY]
GO
INSERT [dbo].[UserAccounts] ([Id], [UserName], [PassWord], [UserType], [Mail], [PhoneNumber], [Status], [FullName]) VALUES (N'', N'Admin', N'', N'Admin', N'admin@admin.com', N'577241001', N'Approved', N'Adminovichi Admini')
GO
USE [master]
GO
ALTER DATABASE [StudentsManagmentDB] SET  READ_WRITE 
GO
