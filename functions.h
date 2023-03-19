#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QString>
#include <QByteArray>
#include <QMap>
#include <QStringList>
/// \brief log_in отвечавет за вход в систему
/// \param QString username, QString password
/// \return QByteArray response
///
QByteArray log_in(QString username, QString password);

/// \brief log_out отвечавет за выход из систему
/// \param void
/// \return QByteArray response
///
QByteArray log_out();

/// \brief give_a_role отвечавет за выдачу роли
/// \param QString username, QString new_role
/// \return QByteArray response
///
QByteArray give_a_role(QString username, QString new_role);

/// \brief change_role отвечавет за изменение роли
/// \param QString username, QString new_role
/// \return QByteArray response
///
QByteArray change_role(QString username, QString new_role);

/// \brief change_pass отвечавет за изменение пароля
/// \param QString old_pass, QString new_pass1,  QString new_pass2
/// \return QByteArray response
///
QByteArray change_pass(QString old_pass, QString new_pass1,  QString new_pass2);

/// \brief add_user отвечавет за добавление пользователя
/// \param QString username, QString new_role
/// \return QByteArray response
///
QByteArray add_user(QString username, QString new_role);

/// \brief show_pass отвечавет за показ пароля
/// \param QString account
/// \return QByteArray response
///
QByteArray show_pass(QString account);

///
/// \brief wrong_param возвращает предупреждение, если введено неверное количество параметров
/// \param QString account
/// \return QByteArray response
///
QByteArray wrong_param();
///
/// \brief parse получает сообщение пользователя и вызывает соответствующую функцию
/// \param void
/// \return QByteArray response
///
QByteArray parse(QString message);
#endif // FUNCTIONS_H

