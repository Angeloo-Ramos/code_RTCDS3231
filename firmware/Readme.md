# Smart Air Conditioning Management System for Academic Environments

## Overview

The **Smart Air Conditioning Management System** is an embedded and web-based solution designed to automate, monitor, and securely manage air conditioning units installed in academic facilities such as laboratories, classrooms, and administrative offices.

The project aims to improve **energy efficiency**, **equipment lifespan**, and **operational control** by combining embedded systems, web technologies, and role-based access control.

Unlike traditional timer-based approaches, this system introduces user authentication, activity logging, remote management, and automated scheduling through the institution's intranet.

---

## Motivation

In many educational institutions, air conditioners are frequently misused due to the absence of centralized management. Common issues include:

- Air conditioners remaining powered on unnecessarily;
- Unauthorized changes to temperature settings;
- Lack of accountability regarding configuration modifications;
- Increased energy consumption;
- Reduced equipment lifespan.

This project addresses these challenges by providing a secure and intelligent control infrastructure.

---

## Objectives

### General Objective

Develop a smart embedded system integrated with a web application capable of managing air conditioning units through automated routines and secure remote access.

### Specific Objectives

- Automate air conditioning operation according to predefined schedules;
- Provide a web-based interface accessible through the institutional intranet;
- Implement role-based access control mechanisms;
- Maintain historical logs of user actions;
- Store system configurations in a persistent database;
- Reduce unnecessary electrical energy consumption;
- Improve the maintainability and administration of climate control systems.

---

## Key Features

### Automated Scheduling

- Weekly operation schedules;
- Configurable start and shutdown times;
- Independent routines for different days of the week.

### Remote Management

- Web-based dashboard;
- Real-time system status monitoring;
- Configuration through authorized accounts.

### User Authentication

- Secure login system;
- Password-protected access;
- Session-based authentication.

### Role-Based Access Control

Two access levels are available:

#### Regular User

Can:

- View the current system status;
- Check active schedules;
- View temperature settings;
- Access non-sensitive information.

#### Support User
Can:

- Modify temperature settings;
- Configure automatic schedules;
- Register and manage users;
- Reset passwords;
- Access complete activity logs;
- Perform administrative operations.

---

## System Architecture

```text
                     ┌─────────────────────┐
                     │   Web Interface     │
                     │ HTML • CSS • JS     │
                     └─────────┬───────────┘
                               │
                         HTTP/HTTPS
                               │
                     ┌─────────▼───────────┐
                     │  Backend Server     │
                     │ Business Logic/API  │
                     └─────────┬───────────┘
                               │
                         Database Layer
                               │
                     ┌─────────▼───────────┐
                     │ Embedded Controller │
                     │ Local Decision Unit │
                     └─────────┬───────────┘
                               │
                        IR/Relay Interface
                               │
                     ┌─────────▼───────────┐
                     │   Air Conditioner   │
                     └─────────────────────┘
```

---

## Embedded System Responsibilities

The embedded controller is responsible for:

- Receiving commands from the server;
- Executing scheduled routines;
- Controlling the air conditioner;
- Maintaining local operation during temporary network failures;
- Synchronizing its state when communication is restored.

---

## Web Application Responsibilities

The web platform provides:

- Authentication mechanisms;
- System monitoring;
- Schedule management;
- Administrative tools;
- User-friendly interaction with the embedded system.

---

## Database Design

### Users Table

| Field | Description |
|---------|-------------|
| id | Unique identifier |
| name | User's full name |
| username | Login credential |
| password_hash | Encrypted password |
| role | User access level |

---

### Settings Table

| Field | Description |
|---------|-------------|
| id | Unique identifier |
| default_temperature | Preferred temperature |
| operation_mode | Cooling mode configuration |

---

### Schedules Table

| Field | Description |
|---------|-------------|
| id | Unique identifier |
| weekday | Day of the week |
| start_time | Automatic startup time |
| shutdown_time | Automatic shutdown time |

---

### Logs Table

| Field | Description |
|---------|-------------|
| id | Unique identifier |
| user | Responsible user |
| action | Performed operation |
| timestamp | Date and time |

---

## Security Considerations

The system should implement the following security practices:

- Password hashing;
- Authentication before configuration access;
- Role-based authorization;
- Input validation;
- Event logging;
- Protection against unauthorized modifications.

---

## Fault Tolerance

The system should continue operating even when communication with the server is temporarily unavailable.

Expected behaviors include:

- Execution of locally stored schedules;
- Preservation of critical configurations after reboot;
- Automatic reconnection to the backend infrastructure.

---

## Suggested Technology Stack

### Frontend

- HTML5;
- CSS3;
- JavaScript.

### Backend

Possible implementations include:

- Flask (Python);
- FastAPI (Python);
- Node.js + Express.


Intended for laboratory coordinators and authorized staff.

### Database

Possible choices include:

- PostgreSQL;
- MySQL;
- SQLite (for prototyping).

### Embedded Platform

Possible architectures include:

- ESP32;
- STM32;
- STM32 + ESP32 hybrid architecture.

---

## Future Improvements

Potential extensions of the project include:

- Multi-room support;
- Centralized management of multiple laboratories;
- Energy consumption dashboards;
- Automated reporting tools;
- E-mail notifications;
- Occupancy detection sensors;
- Temperature and humidity monitoring;
- Mobile applications;
- Integration with institutional authentication services.

---

## Potential Applications

This system can be deployed in:

- Academic laboratories;
- Classrooms;
- Administrative offices;
- Libraries;
- Corporate environments;
- Shared workspaces.

---

## Educational Value

This project integrates concepts from multiple engineering and computer science disciplines, including:

- Embedded Systems;
- Software Engineering;
- Web Development;
- Database Systems;
- Computer Networks;
- Information Security;
- Building Automation;
- Internet of Things (IoT).

Beyond its practical application, the project may serve as the foundation for:

- Undergraduate research initiatives;
- Scientific publications;
- Engineering competitions;
- Conference presentations;
- Final-year projects.

---

## Project Status

> **Current Status:** Planning and architectural definition phase.

Core functionalities and system requirements are currently being refined before implementation begins.

---

## Contributors

- **Angelo Ramos** – Project conception, system architecture, embedded development, and software design.

Contributions from faculty members, laboratory staff, and collaborators may be added as the project evolves.

---

## License

This project is currently under development.

The licensing model will be defined in future releases.
- Register new users;
- Perform maintenance actions.

- Modify schedules;
- Change administrative settings;

